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
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoCrater_Movement_1
# 327 "data/maps/Route101/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 328 "data/maps/Route101/scripts.pory"
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
# 332 "data/maps/Route101/scripts.pory"
	lock
# 333 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 335 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_gt Route101OrphanJoel_3
Route101OrphanJoel_2:
# 454 "data/maps/Route101/scripts.pory"
orphanafterapproach:
# 455 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq Route101OrphanJoel_10
Route101OrphanJoel_9:
# 476 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq Route101OrphanJoel_19
Route101OrphanJoel_18:
# 482 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq Route101OrphanJoel_29
Route101OrphanJoel_28:
# 484 "data/maps/Route101/scripts.pory"
Joelfinish:
# 485 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_1
# 486 "data/maps/Route101/scripts.pory"
	waitmovement 1
# 487 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101OrphanJoel_1:
# 336 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq Route101OrphanJoel_7
Route101OrphanJoel_6:
# 396 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq Route101OrphanJoel_13
Route101OrphanJoel_12:
# 449 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	return

Route101OrphanJoel_3:
# 335 "data/maps/Route101/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 3
	goto_if_eq Route101OrphanJoel_1
	goto Route101OrphanJoel_2

Route101OrphanJoel_7:
# 338 "data/maps/Route101/scripts.pory"
	goto_if_set SamanthaJoelInteraction, Route101OrphanJoel_16
Route101OrphanJoel_15:
# 345 "data/maps/Route101/scripts.pory"
	goto_if_unset SamanthaJoelInteraction, Route101OrphanJoel_26
	goto Route101OrphanJoel_6

Route101OrphanJoel_10:
# 457 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 458 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_19
# 459 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_ORPHAN_MALE_101, Orphan101_Outro
# 460 "data/maps/Route101/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 461 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 462 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoel_Movement_0
# 463 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_20
# 464 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 465 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 466 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_21
# 469 "data/maps/Route101/scripts.pory"
	waitmessage
# 470 "data/maps/Route101/scripts.pory"
	giveitem ITEM_TM43
# 471 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 472 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_22
# 474 "data/maps/Route101/scripts.pory"
	setvar VAR_JOELQUESTS, 1
# 475 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_9

Route101OrphanJoel_13:
# 398 "data/maps/Route101/scripts.pory"
	goto_if_set SamanthaJoelInteraction, Route101OrphanJoel_23
Route101OrphanJoel_21:
# 405 "data/maps/Route101/scripts.pory"
	goto_if_set SamanthaJoelInteraction, Route101OrphanJoel_33
Route101OrphanJoel_31:
# 419 "data/maps/Route101/scripts.pory"
	goto_if_unset SamanthaJoelInteraction, Route101OrphanJoel_39
	goto Route101OrphanJoel_12

Route101OrphanJoel_16:
# 339 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 340 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 341 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 342 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
	goto Route101OrphanJoel_15

Route101OrphanJoel_19:
# 477 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 478 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 479 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_23
	goto Route101OrphanJoel_18

Route101OrphanJoel_22:
# 399 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 400 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 401 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 402 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_21

Route101OrphanJoel_23:
# 398 "data/maps/Route101/scripts.pory"
	goto_if_unset Samanthagotsnacks, Route101OrphanJoel_22
	goto Route101OrphanJoel_21

Route101OrphanJoel_26:
# 346 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 347 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 348 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_1
# 349 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 350 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 351 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 352 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_2
# 353 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101OrphanJoelApproach0_Movement_1
# 354 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_3
# 355 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 356 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101Ziggy_Movement_0
# 357 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_4
# 358 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 360 "data/maps/Route101/scripts.pory"
	checkplayergender
# 361 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101OrphanJoel_37
Route101OrphanJoel_36:
# 370 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101OrphanJoel_42
Route101OrphanJoel_41:
# 379 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 380 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_9
# 381 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 382 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 383 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 385 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101OrphanJoel_45
Route101OrphanJoel_44:
# 389 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101OrphanJoel_48
Route101OrphanJoel_47:
# 392 "data/maps/Route101/scripts.pory"
	setflag SamanthaJoelInteraction
	goto Route101OrphanJoel_6

Route101OrphanJoel_29:
# 483 "data/maps/Route101/scripts.pory"
	goto JoelandAnne101talk
	goto Route101OrphanJoel_28

Route101OrphanJoel_32:
# 406 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 407 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_12
# 408 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 409 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_13
# 410 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoel_Movement_1
# 411 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 412 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 413 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 414 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 415 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_14
# 416 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_31

Route101OrphanJoel_33:
# 405 "data/maps/Route101/scripts.pory"
	goto_if_set Samanthagotsnacks, Route101OrphanJoel_32
	goto Route101OrphanJoel_31

Route101OrphanJoel_37:
# 362 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 363 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_5
# 364 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 365 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 366 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 367 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_6
	goto Route101OrphanJoel_36

Route101OrphanJoel_39:
# 420 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 421 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 422 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_1
# 423 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 424 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 425 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 426 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_2
# 427 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101OrphanJoelApproach0_Movement_1
# 428 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_3
# 429 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 430 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101Ziggy_Movement_0
# 431 "data/maps/Route101/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 432 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_15
# 433 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 434 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_16
# 435 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 436 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_17
# 437 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 438 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_18
# 439 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 440 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_9
# 441 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 442 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 443 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 444 "data/maps/Route101/scripts.pory"
	setflag SamanthaJoelInteraction
# 445 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_12

Route101OrphanJoel_42:
# 371 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 372 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_7
# 374 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 375 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 376 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 377 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_8
	goto Route101OrphanJoel_41

Route101OrphanJoel_45:
# 386 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 387 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_10
	goto Route101OrphanJoel_44

Route101OrphanJoel_48:
# 390 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 391 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_11
	goto Route101OrphanJoel_47


JoelandAnne101meeting::
# 498 "data/maps/Route101/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 3
	goto_if_eq JoelandAnne101meeting_1
# 519 "data/maps/Route101/scripts.pory"
JoelandAnne101talk:
# 520 "data/maps/Route101/scripts.pory"
	lockall
# 521 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 522 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoel_Movement_1
# 523 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 524 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_2
# 525 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101OrphanJoel_Movement_1
# 526 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 527 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_3
# 528 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 529 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 530 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_4
# 532 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_0
# 533 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 534 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_5
# 535 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 536 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_1
# 537 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 538 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_6
# 539 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_0
# 540 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 541 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_7
# 543 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 544 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 545 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_8
# 546 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_0
# 547 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 548 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_9
# 549 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 550 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 551 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_10
# 552 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_2
# 554 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 555 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_11
# 556 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_WEAK
# 557 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_12
# 558 "data/maps/Route101/scripts.pory"
	closemessage
# 559 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_3
# 560 "data/maps/Route101/scripts.pory"
	applymovement 5, JoelandAnne101meeting_Movement_4
# 563 "data/maps/Route101/scripts.pory"
	waitmovement 1
# 564 "data/maps/Route101/scripts.pory"
	waitmovement 4
# 565 "data/maps/Route101/scripts.pory"
	waitmovement 5
# 567 "data/maps/Route101/scripts.pory"
	removeobject 1
# 568 "data/maps/Route101/scripts.pory"
	removeobject 4
# 569 "data/maps/Route101/scripts.pory"
	removeobject 5
# 571 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 572 "data/maps/Route101/scripts.pory"
	setflag joelin101
# 573 "data/maps/Route101/scripts.pory"
	setflag anneinroute101
# 574 "data/maps/Route101/scripts.pory"
	clearflag joelinsidetent
# 575 "data/maps/Route101/scripts.pory"
	clearflag annegoestojoel
# 577 "data/maps/Route101/scripts.pory"
	setvar VAR_JOELQUESTS, 3
# 578 "data/maps/Route101/scripts.pory"
endofjoelandannemeeting:
# 579 "data/maps/Route101/scripts.pory"
	releaseall
	return

JoelandAnne101meeting_1:
# 499 "data/maps/Route101/scripts.pory"
	checkplayergender
# 500 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JoelandAnne101meeting_5
JoelandAnne101meeting_4:
# 508 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq JoelandAnne101meeting_7
	return

JoelandAnne101meeting_5:
# 501 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101Ziggy_Movement_0
# 502 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 503 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_0
# 504 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 505 "data/maps/Route101/scripts.pory"
	waitmovement 4
# 506 "data/maps/Route101/scripts.pory"
	goto endofjoelandannemeeting
	goto JoelandAnne101meeting_4

JoelandAnne101meeting_7:
# 509 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101Ziggy_Movement_0
# 510 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 511 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_1
# 512 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 513 "data/maps/Route101/scripts.pory"
	waitmovement 4
# 514 "data/maps/Route101/scripts.pory"
	goto endofjoelandannemeeting
	return


Route101RebelApproach0::
# 584 "data/maps/Route101/scripts.pory"
	lockall
# 585 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 586 "data/maps/Route101/scripts.pory"
	playbgm MUS_SKULLKERHIDEOUT, TRUE
# 587 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 588 "data/maps/Route101/scripts.pory"
	waitmovement
# 589 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 590 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 591 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 592 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach1::
# 596 "data/maps/Route101/scripts.pory"
	lockall
# 597 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 598 "data/maps/Route101/scripts.pory"
	playbgm MUS_SKULLKERHIDEOUT, TRUE
# 599 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 600 "data/maps/Route101/scripts.pory"
	waitmovement
# 601 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 602 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 603 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach1_Movement_0
# 604 "data/maps/Route101/scripts.pory"
	waitmovement
# 605 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 606 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach2::
# 610 "data/maps/Route101/scripts.pory"
	lockall
# 611 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 612 "data/maps/Route101/scripts.pory"
	playbgm MUS_SKULLKERHIDEOUT, TRUE
# 613 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 614 "data/maps/Route101/scripts.pory"
	waitmovement
# 615 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 616 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 617 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach2_Movement_0
# 618 "data/maps/Route101/scripts.pory"
	waitmovement
# 619 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 620 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach3::
# 624 "data/maps/Route101/scripts.pory"
	lockall
# 625 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 626 "data/maps/Route101/scripts.pory"
	playbgm MUS_SKULLKERHIDEOUT, TRUE
# 627 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 628 "data/maps/Route101/scripts.pory"
	waitmovement
# 629 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 630 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 631 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach3_Movement_0
# 632 "data/maps/Route101/scripts.pory"
	waitmovement
# 633 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 634 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelGruntBattle::
# 639 "data/maps/Route101/scripts.pory"
rebelafterapproach:
# 640 "data/maps/Route101/scripts.pory"
	clearflag rebelin101mustapproachtoswing
# 641 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 642 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_0
# 643 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 644 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_1
# 645 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route101RebelGruntBattle_Text_2, Route101RebelGruntBattle_Text_3
# 646 "data/maps/Route101/scripts.pory"
	waitmessage
# 648 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route101RebelGruntBattle_2
Route101RebelGruntBattle_1:
# 662 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route101RebelGruntBattle_5
Route101RebelGruntBattle_4:
# 667 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_GRUNT_101, Rebel101_Outro
# 668 "data/maps/Route101/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 669 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 670 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_7
# 672 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 673 "data/maps/Route101/scripts.pory"
	goto_if_set rebelin101mustapproachtoswing, Route101RebelGruntBattle_8
Route101RebelGruntBattle_7:
# 675 "data/maps/Route101/scripts.pory"
repeathit:
# 676 "data/maps/Route101/scripts.pory"
	setspeaker [ NULL ]
# 677 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_8
# 678 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route101RebelGruntBattle_Text_9, Route101RebelGruntBattle_Text_10
# 680 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route101RebelGruntBattle_11
Route101RebelGruntBattle_10:
# 696 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route101RebelGruntBattle_14
Route101RebelGruntBattle_13:
# 710 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 711 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 712 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_17
# 713 "data/maps/Route101/scripts.pory"
	playse SE_FLEE
# 714 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelGruntBattle_Movement_4
# 715 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 716 "data/maps/Route101/scripts.pory"
	waitse
# 717 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_18
# 718 "data/maps/Route101/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 719 "data/maps/Route101/scripts.pory"
	closemessage
# 720 "data/maps/Route101/scripts.pory"
	removeobject 3
# 721 "data/maps/Route101/scripts.pory"
	setflag rebel101runsaway
# 722 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ITEM_ROUTE101REBELITEM
# 723 "data/maps/Route101/scripts.pory"
	addobject 6
# 724 "data/maps/Route101/scripts.pory"
	waitmovement 3
# 725 "data/maps/Route101/scripts.pory"
	fadeoutbgm 1
# 726 "data/maps/Route101/scripts.pory"
	fadenewbgm 1
# 727 "data/maps/Route101/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 728 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101REBELFLEES, 1
# 729 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 730 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101RebelGruntBattle_2:
# 649 "data/maps/Route101/scripts.pory"
	setflag rebelin101mustapproachtoswing
# 650 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 651 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_4
# 652 "data/maps/Route101/scripts.pory"
	playfirstmoncry
# 653 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101RebelGruntBattle_Movement_0
# 654 "data/maps/Route101/scripts.pory"
	waitmovement
# 655 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101RebelGruntBattle_Movement_1
# 656 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101RebelGruntBattle_Movement_2
# 657 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 658 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_5
	goto Route101RebelGruntBattle_1

Route101RebelGruntBattle_5:
# 663 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 664 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_6
	goto Route101RebelGruntBattle_4

Route101RebelGruntBattle_8:
# 674 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelGruntBattle_Movement_3
	goto Route101RebelGruntBattle_7

Route101RebelGruntBattle_11:
# 681 "data/maps/Route101/scripts.pory"
	checkplayergender
# 682 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101RebelGruntBattle_17
Route101RebelGruntBattle_16:
# 688 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101RebelGruntBattle_22
	goto Route101RebelGruntBattle_10

Route101RebelGruntBattle_14:
# 697 "data/maps/Route101/scripts.pory"
	checkplayergender
# 698 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101RebelGruntBattle_20
Route101RebelGruntBattle_19:
# 705 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101RebelGruntBattle_24
	goto Route101RebelGruntBattle_13

Route101RebelGruntBattle_17:
# 683 "data/maps/Route101/scripts.pory"
	playse SE_ICE_STAIRS
# 684 "data/maps/Route101/scripts.pory"
	waitse
# 685 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_11
	goto Route101RebelGruntBattle_16

Route101RebelGruntBattle_20:
# 699 "data/maps/Route101/scripts.pory"
	call Route101GruntBatHitShake
# 700 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_14
# 701 "data/maps/Route101/scripts.pory"
	setflag rickhitsplayer
# 702 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 703 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_15
# 704 "data/maps/Route101/scripts.pory"
	goto repeathit
	goto Route101RebelGruntBattle_19

Route101RebelGruntBattle_22:
# 689 "data/maps/Route101/scripts.pory"
	call Route101GruntBatHitShake
# 690 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_12
# 691 "data/maps/Route101/scripts.pory"
	setflag rickhitsplayer
# 692 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 693 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_13
# 694 "data/maps/Route101/scripts.pory"
	goto repeathit
	goto Route101RebelGruntBattle_10

Route101RebelGruntBattle_24:
# 706 "data/maps/Route101/scripts.pory"
	playse SE_BALL_THROW
# 707 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_16
	goto Route101RebelGruntBattle_13


Route101RebelItem::
# 737 "data/maps/Route101/scripts.pory"
	lock
# 738 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelItem_Text_0
# 739 "data/maps/Route101/scripts.pory"
	giveitem ITEM_TM46
# 740 "data/maps/Route101/scripts.pory"
	setflag FLAG_ITEM_ROUTE101REBELITEM
# 741 "data/maps/Route101/scripts.pory"
	removeobject 6
# 742 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101GruntBatHitShake::
# 750 "data/maps/Route101/scripts.pory"
	playse SE_EFFECTIVE
# 751 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, 2
# 752 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8005, 6
# 753 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8006, 4
# 754 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8007, 4
# 755 "data/maps/Route101/scripts.pory"
	special ShakeCamera
	return


Pokemonlickswound::
# 759 "data/maps/Route101/scripts.pory"
	lock
# 760 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 761 "data/maps/Route101/scripts.pory"
	goto_if_set rickhitsplayer, Pokemonlickswound_2
# 774 "data/maps/Route101/scripts.pory"
	release
Pokemonlickswound_1:
# 775 "data/maps/Route101/scripts.pory"
	release
	return

Pokemonlickswound_2:
# 763 "data/maps/Route101/scripts.pory"
	playfirstmoncry
# 764 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JoelandAnne101meeting_Movement_0
# 765 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Pokemonlickswound_Movement_0
# 766 "data/maps/Route101/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 767 "data/maps/Route101/scripts.pory"
	msgbox Pokemonlickswound_Text_0
# 768 "data/maps/Route101/scripts.pory"
	playse SE_M_LICK
# 769 "data/maps/Route101/scripts.pory"
	waitse
# 770 "data/maps/Route101/scripts.pory"
	msgbox Pokemonlickswound_Text_1
# 771 "data/maps/Route101/scripts.pory"
	clearflag rickhitsplayer
	goto Pokemonlickswound_1


Route101JoelsTent::
# 780 "data/maps/Route101/scripts.pory"
	lockall
# 781 "data/maps/Route101/scripts.pory"
	msgbox Route101JoelsTent_Text_0
# 782 "data/maps/Route101/scripts.pory"
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

# 326 "data/maps/Route101/scripts.pory"
SamanthaDontgotoCrater_Movement_1:
# 326 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 358 "data/maps/Route101/scripts.pory"
Route101OrphanJoel_Movement_0:
# 358 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 410 "data/maps/Route101/scripts.pory"
Route101OrphanJoel_Movement_1:
# 410 "data/maps/Route101/scripts.pory"
	walk_in_place_down
	step_end

# 532 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_0:
# 532 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 536 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_1:
# 536 "data/maps/Route101/scripts.pory"
	emote_question_mark
# 536 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 552 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_2:
# 552 "data/maps/Route101/scripts.pory"
	walk_right
# 552 "data/maps/Route101/scripts.pory"
	walk_right
# 552 "data/maps/Route101/scripts.pory"
	walk_up
# 552 "data/maps/Route101/scripts.pory"
	walk_up
# 552 "data/maps/Route101/scripts.pory"
	walk_up
# 552 "data/maps/Route101/scripts.pory"
	walk_right
# 552 "data/maps/Route101/scripts.pory"
	walk_right
# 552 "data/maps/Route101/scripts.pory"
	walk_right
# 552 "data/maps/Route101/scripts.pory"
	walk_right
# 552 "data/maps/Route101/scripts.pory"
	walk_right
# 552 "data/maps/Route101/scripts.pory"
	walk_right
# 552 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 559 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_3:
# 559 "data/maps/Route101/scripts.pory"
	walk_down
# 559 "data/maps/Route101/scripts.pory"
	walk_down
# 559 "data/maps/Route101/scripts.pory"
	walk_left
# 559 "data/maps/Route101/scripts.pory"
	walk_left
# 559 "data/maps/Route101/scripts.pory"
	walk_left
# 559 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 560 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_4:
# 560 "data/maps/Route101/scripts.pory"
	walk_down
# 560 "data/maps/Route101/scripts.pory"
	walk_down
# 560 "data/maps/Route101/scripts.pory"
	walk_down
# 560 "data/maps/Route101/scripts.pory"
	walk_left
# 560 "data/maps/Route101/scripts.pory"
	walk_left
# 560 "data/maps/Route101/scripts.pory"
	walk_left
# 560 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 653 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_0:
# 653 "data/maps/Route101/scripts.pory"
	jump_in_place_up
	step_end

# 655 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_1:
# 655 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 655 "data/maps/Route101/scripts.pory"
	walk_in_place_up
	step_end

# 656 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_2:
# 656 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 656 "data/maps/Route101/scripts.pory"
	walk_in_place_up
	step_end

# 674 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_3:
# 674 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 714 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_4:
# 714 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 714 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 714 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 714 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 714 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 714 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 714 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 714 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 765 "data/maps/Route101/scripts.pory"
Pokemonlickswound_Movement_0:
# 765 "data/maps/Route101/scripts.pory"
	walk_in_place_left
# 765 "data/maps/Route101/scripts.pory"
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
	.string "Great Crater, isn't it?$"

SamanthaDontgotoCrater_Text_1:
# 320 "data/maps/Route101/scripts.pory"
	.string "I know they sell donuts there, but... I\n"
	.string "don't like them much.\p"
	.string "Can we go to Oldale's vending machine\n"
	.string "instead?$"

SamanthaDontgotoCrater_Text_2:
# 323 "data/maps/Route101/scripts.pory"
	.string "W-we can go back to the Mausoleum now...\n"
	.string "I-I don't want to take more of your\l"
	.string "time...!$"

Route101OrphanJoel_Text_0:
# 342 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Nom-nom-nom...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route101OrphanJoel_Text_1:
# 348 "data/maps/Route101/scripts.pory"
	.string "Hey {PLAYER}! And strange lady! Where\n"
	.string "are you two going?$"

Route101OrphanJoel_Text_2:
# 352 "data/maps/Route101/scripts.pory"
	.string "S-... strange lady...?$"

Route101OrphanJoel_Text_3:
# 354 "data/maps/Route101/scripts.pory"
	.string "W-well, we went out to get food at\n"
	.string "Oldale...$"

Route101OrphanJoel_Text_4:
# 357 "data/maps/Route101/scripts.pory"
	.string "Food? I've got some Oran berries here if\n"
	.string "you'd like!$"

Route101OrphanJoel_Text_5:
# 363 "data/maps/Route101/scripts.pory"
	.string "Don't be silly, Joel! They're going on a\n"
	.string "date to a nice place!$"

Route101OrphanJoel_Text_6:
# 367 "data/maps/Route101/scripts.pory"
	.string "D-date!? N-no, it's not like that...!$"

Route101OrphanJoel_Text_7:
# 372 "data/maps/Route101/scripts.pory"
	.string "Don't be silly, Joel! They're on a girls'\n"
	.string "day out!\p"
	.string "So they're going to a nice place to eat\n"
	.string "yummy food!$"

Route101OrphanJoel_Text_8:
# 377 "data/maps/Route101/scripts.pory"
	.string "N-no, it's not like t-...$"

Route101OrphanJoel_Text_9:
# 380 "data/maps/Route101/scripts.pory"
	.string "Really? Well, more for me!$"

Route101OrphanJoel_Text_10:
# 387 "data/maps/Route101/scripts.pory"
	.string "Hehe... well, have fun! I'm rooting for\n"
	.string "you two.$"

Route101OrphanJoel_Text_11:
# 391 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Boys, am I right?$"

Route101OrphanJoel_Text_12:
# 407 "data/maps/Route101/scripts.pory"
	.string "That's a lot of snacks you got! Can I\n"
	.string "have some?$"

Route101OrphanJoel_Text_13:
# 409 "data/maps/Route101/scripts.pory"
	.string "O-of course... here!$"

Route101OrphanJoel_Text_14:
# 415 "data/maps/Route101/scripts.pory"
	.string "Hmm... they're alright! But I still prefer\n"
	.string "berries.$"

Route101OrphanJoel_Text_15:
# 432 "data/maps/Route101/scripts.pory"
	.string "Food? I've got some Oran berries if\n"
	.string "you'd like!$"

Route101OrphanJoel_Text_16:
# 434 "data/maps/Route101/scripts.pory"
	.string "B-berries...? Y-you eat them raw? You\n"
	.string "don't get... s-sick...?$"

Route101OrphanJoel_Text_17:
# 436 "data/maps/Route101/scripts.pory"
	.string "I did at first, but I got used to them.\n"
	.string "Here, try them!$"

Route101OrphanJoel_Text_18:
# 438 "data/maps/Route101/scripts.pory"
	.string "T-thank you, b-but I'll have... some more\n"
	.string "p-processed food...$"

Route101OrphanJoel_Text_19:
# 458 "data/maps/Route101/scripts.pory"
	.string "You can't go into my Secret Shelter!$"

Route101OrphanJoel_Text_20:
# 463 "data/maps/Route101/scripts.pory"
	.string "I'm Joel. See that tent over there? It's\n"
	.string "my Secret Shelter.$"

Route101OrphanJoel_Text_21:
# 466 "data/maps/Route101/scripts.pory"
	.string "Many people lived in weird places during\n"
	.string "the war, to hide from the bad guys.\p"
	.string "Some still do it, if they don't have\n"
	.string "anywhere else to go.\p"
	.string "You look a bit like them, so you can have\n"
	.string "this.$"

Route101OrphanJoel_Text_22:
# 472 "data/maps/Route101/scripts.pory"
	.string "If you teach Secret Power to a Pokémon,\n"
	.string "you can make Secret Shelters in all\l"
	.string "sorts of places.\p"
	.string "Some have unique things about them...\n"
	.string "but I won't tell you about mine!$"

Route101OrphanJoel_Text_23:
# 479 "data/maps/Route101/scripts.pory"
	.string "Have you made a Secret Shelter yet?\p"
	.string "I guess you can visit mine, if you need\n"
	.string "ideas for yours...\p"
	.string "But don't touch anything!$"

JoelandAnne101meeting_Text_0:
# 503 "data/maps/Route101/scripts.pory"
	.string "Hehe... you look good together!$"

JoelandAnne101meeting_Text_1:
# 511 "data/maps/Route101/scripts.pory"
	.string "Please invite me to the girls' day next\n"
	.string "time! Pleeeease!$"

JoelandAnne101meeting_Text_2:
# 524 "data/maps/Route101/scripts.pory"
	.string "So... you are moving?$"

JoelandAnne101meeting_Text_3:
# 527 "data/maps/Route101/scripts.pory"
	.string "Zig-zig?$"

JoelandAnne101meeting_Text_4:
# 530 "data/maps/Route101/scripts.pory"
	.string "Yes... I'm sorry Joel... mom has packed\n"
	.string "everything up.\p"
	.string "I think I'll have to go... but I'll come\n"
	.string "visit soon!\p"
	.string "Then you can teach me all about Secret\n"
	.string "Shelters.$"

JoelandAnne101meeting_Text_5:
# 534 "data/maps/Route101/scripts.pory"
	.string "O-oh, that's okay...! In fact, you don't\n"
	.string "need to come back at all!$"

JoelandAnne101meeting_Text_6:
# 538 "data/maps/Route101/scripts.pory"
	.string "What? Why!?$"

JoelandAnne101meeting_Text_7:
# 541 "data/maps/Route101/scripts.pory"
	.string "Because... I'll go visit you instead!\p"
	.string "I was thinking of making new Secret\n"
	.string "Shelters anyway.\p"
	.string "I'm sure there's tons of cool places for\n"
	.string "them in New Rustboro.$"

JoelandAnne101meeting_Text_8:
# 545 "data/maps/Route101/scripts.pory"
	.string "Really!? You promise to come visit?$"

JoelandAnne101meeting_Text_9:
# 548 "data/maps/Route101/scripts.pory"
	.string "I do! Now get going, before your mom\n"
	.string "gets worried.$"

JoelandAnne101meeting_Text_10:
# 551 "data/maps/Route101/scripts.pory"
	.string "Okay! It's a promise. I'll be waiting!\p"
	.string "See you soon Joel!$"

JoelandAnne101meeting_Text_11:
# 555 "data/maps/Route101/scripts.pory"
	.string "...\p"
	.string "... let's go inside, Ziggy.$"

JoelandAnne101meeting_Text_12:
# 557 "data/maps/Route101/scripts.pory"
	.string "Ziiig...$"

Route101RebelApproach0_Text_0:
# 590 "data/maps/Route101/scripts.pory"
	.string "Hey there, kid!$"

Route101RebelGruntBattle_Text_0:
# 642 "data/maps/Route101/scripts.pory"
	.string "Wowie, that's a cute Safemon you got\n"
	.string "there. Bet it's worth a ton!$"

Route101RebelGruntBattle_Text_1:
# 644 "data/maps/Route101/scripts.pory"
	.string "Hand it over.$"

Route101RebelGruntBattle_Text_2:
# 645 "data/maps/Route101/scripts.pory"
	.string "Obey$"

Route101RebelGruntBattle_Text_3:
# 645 "data/maps/Route101/scripts.pory"
	.string "Refuse$"

Route101RebelGruntBattle_Text_4:
# 651 "data/maps/Route101/scripts.pory"
	.string "Hehe, you're smarter than you loo-...$"

Route101RebelGruntBattle_Text_5:
# 658 "data/maps/Route101/scripts.pory"
	.string "What the-? Looks like your Pokémon has\n"
	.string "more guts than you! Hahaha!\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Route101RebelGruntBattle_Text_6:
# 664 "data/maps/Route101/scripts.pory"
	.string "Playing brave huh? You really don't look\n"
	.string "the type.\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Route101RebelGruntBattle_Text_7:
# 670 "data/maps/Route101/scripts.pory"
	.string "Grr... alright, that thing of yours is\n"
	.string "strong, for a lab rat.\p"
	.string "But you still look weak yourself!\n"
	.string "UOOOGYAA!$"

Route101RebelGruntBattle_Text_8:
# 677 "data/maps/Route101/scripts.pory"
	.string "The rebel swings his bat to hit\n"
	.string "{PLAYER}!$"

Route101RebelGruntBattle_Text_9:
# 678 "data/maps/Route101/scripts.pory"
	.string "Parry$"

Route101RebelGruntBattle_Text_10:
# 678 "data/maps/Route101/scripts.pory"
	.string "Dodge$"

Route101RebelGruntBattle_Text_11:
# 685 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} parries the bat with one of\n"
	.string "his crutches, and the rebel falls on his\l"
	.string "back.$"

Route101RebelGruntBattle_Text_12:
# 690 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} fails to block the bat with\n"
	.string "her arms. That must have hurted...$"

Route101RebelGruntBattle_Text_13:
# 693 "data/maps/Route101/scripts.pory"
	.string "You're a sturdy girl, I'll give you that!$"

Route101RebelGruntBattle_Text_14:
# 700 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} is too slow to dodge the hit.\n"
	.string "That must have hurted...$"

Route101RebelGruntBattle_Text_15:
# 703 "data/maps/Route101/scripts.pory"
	.string "You're a sturdy guy, I'll give you that!$"

Route101RebelGruntBattle_Text_16:
# 707 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} manages to dodge the hit,\n"
	.string "and the rebel's lost momentum makes him\l"
	.string "fall on his back.$"

Route101RebelGruntBattle_Text_17:
# 712 "data/maps/Route101/scripts.pory"
	.string "D-damn it! They told me Littleroot\n"
	.string "hicks were easy prey!$"

Route101RebelGruntBattle_Text_18:
# 717 "data/maps/Route101/scripts.pory"
	.string "Screw this!$"

Route101RebelItem_Text_0:
# 738 "data/maps/Route101/scripts.pory"
	.string "It seems the rebel dropped this while\n"
	.string "fleeing...$"

Pokemonlickswound_Text_0:
# 767 "data/maps/Route101/scripts.pory"
	.string "{STR_VAR_1} approaches you slowly...$"

Pokemonlickswound_Text_1:
# 770 "data/maps/Route101/scripts.pory"
	.string "{STR_VAR_1} licks {PLAYER}'s\n"
	.string "wound from the hit just now.\p"
	.string "... {PLAYER}'s pain is somewhat\n"
	.string "soothed.$"

Route101JoelsTent_Text_0:
# 781 "data/maps/Route101/scripts.pory"
	.string "Despite the young age of its builder,\n"
	.string "the tent seems of sturdy make.$"

Orphan101_Outro::
# 492 "data/maps/Route101/scripts.pory"
	.string "... you still can't go into my Secret\n Shelter.$"

Rebel101_Outro::
# 746 "data/maps/Route101/scripts.pory"
	.string "Shit...$"
