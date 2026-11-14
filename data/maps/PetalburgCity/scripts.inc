# 2 "data/maps/PetalburgCity/scripts.pory"

# 3 "data/maps/PetalburgCity/scripts.pory"

# 4 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 5 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm 1, 5, 11
# 6 "data/maps/PetalburgCity/scripts.pory"
	return
# 7 "data/maps/PetalburgCity/scripts.pory"

# 8 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 9 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 10 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 11 "data/maps/PetalburgCity/scripts.pory"
	return
# 12 "data/maps/PetalburgCity/scripts.pory"

# 13 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 14 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 15 "data/maps/PetalburgCity/scripts.pory"
	return
# 16 "data/maps/PetalburgCity/scripts.pory"

# 17 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 18 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 19 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 20 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 21 "data/maps/PetalburgCity/scripts.pory"

# 22 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 23 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 24 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 25 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 26 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 27 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 28 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 29 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 30 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 31 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 32 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 33 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 34 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 35 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 36 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 37 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 38 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 39 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 40 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 41 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 42 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 43 "data/maps/PetalburgCity/scripts.pory"
	end
# 44 "data/maps/PetalburgCity/scripts.pory"

# 45 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 46 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 47 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 48 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 49 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 51 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 52 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 53 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 54 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 55 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 57 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 58 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 59 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 60 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 61 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 62 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 63 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 64 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 65 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 66 "data/maps/PetalburgCity/scripts.pory"
	end
# 67 "data/maps/PetalburgCity/scripts.pory"

# 68 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 69 "data/maps/PetalburgCity/scripts.pory"
	lock
# 70 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 71 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 72 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 73 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 74 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/PetalburgCity/scripts.pory"
	release
# 76 "data/maps/PetalburgCity/scripts.pory"
	end
# 77 "data/maps/PetalburgCity/scripts.pory"

# 78 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 79 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 80 "data/maps/PetalburgCity/scripts.pory"
	end
# 81 "data/maps/PetalburgCity/scripts.pory"

# 82 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 83 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 84 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 85 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 86 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 87 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 88 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 89 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 90 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 92 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 93 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 94 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 95 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 96 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 97 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 98 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 99 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 100 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 101 "data/maps/PetalburgCity/scripts.pory"

# 102 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 103 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 104 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 105 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 106 "data/maps/PetalburgCity/scripts.pory"

# 107 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 108 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 125 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 126 "data/maps/PetalburgCity/scripts.pory"

# 127 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 129 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 130 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 131 "data/maps/PetalburgCity/scripts.pory"

# 132 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 133 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 166 "data/maps/PetalburgCity/scripts.pory"

# 167 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 168 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 201 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 202 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 204 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 205 "data/maps/PetalburgCity/scripts.pory"

# 206 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 207 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 208 "data/maps/PetalburgCity/scripts.pory"
	end
# 209 "data/maps/PetalburgCity/scripts.pory"

# 210 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 211 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 212 "data/maps/PetalburgCity/scripts.pory"
	end
# 213 "data/maps/PetalburgCity/scripts.pory"

# 214 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 215 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 216 "data/maps/PetalburgCity/scripts.pory"
	end
# 217 "data/maps/PetalburgCity/scripts.pory"

# 218 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 219 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 220 "data/maps/PetalburgCity/scripts.pory"
	end
# 221 "data/maps/PetalburgCity/scripts.pory"

# 222 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 223 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 224 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 225 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 226 "data/maps/PetalburgCity/scripts.pory"
	end
# 227 "data/maps/PetalburgCity/scripts.pory"

# 228 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 229 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 230 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 231 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 232 "data/maps/PetalburgCity/scripts.pory"
	end
# 233 "data/maps/PetalburgCity/scripts.pory"

# 234 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 235 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 236 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 237 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 238 "data/maps/PetalburgCity/scripts.pory"
	end
# 239 "data/maps/PetalburgCity/scripts.pory"

# 240 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 241 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 242 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 243 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 244 "data/maps/PetalburgCity/scripts.pory"
	end
# 245 "data/maps/PetalburgCity/scripts.pory"

# 246 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 247 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 248 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 249 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 250 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 251 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 252 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 253 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 254 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 255 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 256 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 257 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 258 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 259 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 260 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 261 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 262 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 263 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 264 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 265 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 266 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 267 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 268 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 269 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 270 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 271 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_BoyWalkAway
# 272 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 273 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 274 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 275 "data/maps/PetalburgCity/scripts.pory"
	end
# 276 "data/maps/PetalburgCity/scripts.pory"

# 277 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 278 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_BoyApproachPlayer0
# 279 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 280 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 281 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 282 "data/maps/PetalburgCity/scripts.pory"
	return
# 283 "data/maps/PetalburgCity/scripts.pory"

# 284 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 285 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_BoyApproachPlayer1
# 286 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 287 "data/maps/PetalburgCity/scripts.pory"
	return
# 288 "data/maps/PetalburgCity/scripts.pory"

# 289 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 290 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_BoyApproachPlayer2
# 291 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 293 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 294 "data/maps/PetalburgCity/scripts.pory"
	return
# 295 "data/maps/PetalburgCity/scripts.pory"

# 296 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 297 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_BoyApproachPlayer3
# 298 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 299 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 300 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity/scripts.pory"
	return
# 302 "data/maps/PetalburgCity/scripts.pory"

# 303 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 304 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_BoyWalkToGym0
# 305 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 306 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 307 "data/maps/PetalburgCity/scripts.pory"
	return
# 308 "data/maps/PetalburgCity/scripts.pory"

# 309 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 310 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_BoyWalkToGym1
# 311 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 312 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 313 "data/maps/PetalburgCity/scripts.pory"
	return
# 314 "data/maps/PetalburgCity/scripts.pory"

# 315 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 316 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_BoyWalkToGym2
# 317 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 318 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 319 "data/maps/PetalburgCity/scripts.pory"
	return
# 320 "data/maps/PetalburgCity/scripts.pory"

# 321 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 322 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_BoyWalkToGym3
# 323 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 324 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 325 "data/maps/PetalburgCity/scripts.pory"
	return
# 326 "data/maps/PetalburgCity/scripts.pory"

# 327 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 328 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 329 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 330 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 331 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 332 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 333 "data/maps/PetalburgCity/scripts.pory"

# 334 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 335 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 336 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 337 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 338 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 339 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 340 "data/maps/PetalburgCity/scripts.pory"

# 341 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 342 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 343 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 344 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 345 "data/maps/PetalburgCity/scripts.pory"

# 346 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 347 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 348 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 349 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 350 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 351 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 352 "data/maps/PetalburgCity/scripts.pory"

# 353 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 359 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 360 "data/maps/PetalburgCity/scripts.pory"

# 361 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 372 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 373 "data/maps/PetalburgCity/scripts.pory"

# 374 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 388 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 389 "data/maps/PetalburgCity/scripts.pory"

# 390 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 401 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 402 "data/maps/PetalburgCity/scripts.pory"

# 403 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 415 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 416 "data/maps/PetalburgCity/scripts.pory"

# 417 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 430 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 431 "data/maps/PetalburgCity/scripts.pory"

# 432 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 442 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 443 "data/maps/PetalburgCity/scripts.pory"

# 444 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 445 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 446 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 457 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 458 "data/maps/PetalburgCity/scripts.pory"

# 459 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 469 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 470 "data/maps/PetalburgCity/scripts.pory"

# 471 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 482 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 483 "data/maps/PetalburgCity/scripts.pory"

# 484 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 485 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 486 "data/maps/PetalburgCity/scripts.pory"
	addobject 1
# 487 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 488 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy 1, 13, 10
# 489 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 490 "data/maps/PetalburgCity/scripts.pory"
	end
# 491 "data/maps/PetalburgCity/scripts.pory"

# 492 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 493 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 494 "data/maps/PetalburgCity/scripts.pory"
	addobject 1
# 495 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 496 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy 1, 13, 11
# 497 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 498 "data/maps/PetalburgCity/scripts.pory"
	end
# 499 "data/maps/PetalburgCity/scripts.pory"

# 500 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 501 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 502 "data/maps/PetalburgCity/scripts.pory"
	addobject 1
# 503 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 504 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy 1, 13, 12
# 505 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 506 "data/maps/PetalburgCity/scripts.pory"
	end
# 507 "data/maps/PetalburgCity/scripts.pory"

# 508 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 509 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 510 "data/maps/PetalburgCity/scripts.pory"
	addobject 1
# 511 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 512 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy 1, 13, 13
# 513 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 514 "data/maps/PetalburgCity/scripts.pory"
	end
# 515 "data/maps/PetalburgCity/scripts.pory"

# 516 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 517 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_ScottStartWalkLeft
# 518 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 520 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 521 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 522 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 523 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_ScottApproachPlayer
# 525 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 526 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 527 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 529 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 530 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 531 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 532 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 534 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 535 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 536 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 537 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 539 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 540 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 541 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 542 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 543 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 544 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 545 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 546 "data/maps/PetalburgCity/scripts.pory"
	removeobject 1
# 547 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 548 "data/maps/PetalburgCity/scripts.pory"
	end
# 549 "data/maps/PetalburgCity/scripts.pory"

# 550 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 551 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 552 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_ScottExit0
# 553 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/PetalburgCity/scripts.pory"
	return
# 555 "data/maps/PetalburgCity/scripts.pory"

# 556 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 557 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 558 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_ScottExit1
# 559 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 560 "data/maps/PetalburgCity/scripts.pory"
	return
# 561 "data/maps/PetalburgCity/scripts.pory"

# 562 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 563 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 564 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_ScottExit2
# 565 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/PetalburgCity/scripts.pory"
	return
# 567 "data/maps/PetalburgCity/scripts.pory"

# 568 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 569 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 570 "data/maps/PetalburgCity/scripts.pory"
	applymovement 1, PetalburgCity_Movement_ScottExit3
# 571 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/PetalburgCity/scripts.pory"
	return
# 573 "data/maps/PetalburgCity/scripts.pory"

# 574 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 575 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 576 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 577 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 578 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 579 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 580 "data/maps/PetalburgCity/scripts.pory"

# 581 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 582 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 583 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 584 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 585 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 586 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 587 "data/maps/PetalburgCity/scripts.pory"

# 588 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 589 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 590 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 591 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 592 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 593 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 594 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 600 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 601 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 603 "data/maps/PetalburgCity/scripts.pory"

# 604 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 605 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 607 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 608 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 609 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 611 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 612 "data/maps/PetalburgCity/scripts.pory"

# 613 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 625 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 626 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 627 "data/maps/PetalburgCity/scripts.pory"

# 628 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 629 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 630 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 631 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 632 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 634 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 635 "data/maps/PetalburgCity/scripts.pory"

# 636 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 649 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 650 "data/maps/PetalburgCity/scripts.pory"

# 651 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 652 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 654 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 655 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 657 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 658 "data/maps/PetalburgCity/scripts.pory"

# 659 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 672 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 673 "data/maps/PetalburgCity/scripts.pory"

# 674 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 675 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 677 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 678 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 680 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 681 "data/maps/PetalburgCity/scripts.pory"

# 682 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 683 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 684 "data/maps/PetalburgCity/scripts.pory"
	end
# 685 "data/maps/PetalburgCity/scripts.pory"

# 686 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 687 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 688 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 689 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 690 "data/maps/PetalburgCity/scripts.pory"

# 691 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 692 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 693 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 694 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 695 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 696 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 697 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 698 "data/maps/PetalburgCity/scripts.pory"

# 699 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 700 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 701 "data/maps/PetalburgCity/scripts.pory"

# 702 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 703 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 704 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 705 "data/maps/PetalburgCity/scripts.pory"

# 706 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 707 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 708 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 712 "data/maps/PetalburgCity/scripts.pory"

# 713 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 718 "data/maps/PetalburgCity/scripts.pory"

# 719 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 723 "data/maps/PetalburgCity/scripts.pory"

# 724 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 727 "data/maps/PetalburgCity/scripts.pory"

# 728 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 730 "data/maps/PetalburgCity/scripts.pory"

# 731 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 735 "data/maps/PetalburgCity/scripts.pory"

# 736 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 738 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 741 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 742 "data/maps/PetalburgCity/scripts.pory"

# 743 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_MapScripts::
# 753 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCityMapscriptBundle
# 754 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCityMapscriptBundle
# 755 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCityMapscriptBundle
	.byte 0


PetalburgRiotSpawn::
# 766 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgRiotSpawn_1
	return

PetalburgRiotSpawn_1:
# 768 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
	return


PetalburgCityMapscriptBundle::
# 775 "data/maps/PetalburgCity/scripts.pory"
	gettimeofday
# 776 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq PetalburgCityMapscriptBundle_2
PetalburgCityMapscriptBundle_1:
# 779 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq PetalburgCityMapscriptBundle_5
PetalburgCityMapscriptBundle_4:
# 782 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq PetalburgCityMapscriptBundle_8
PetalburgCityMapscriptBundle_7:
# 785 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgCityMapscriptBundle_11
PetalburgCityMapscriptBundle_10:
# 788 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgCityMapscriptBundle_13
	return

PetalburgCityMapscriptBundle_2:
# 777 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_TEAMGRDUEL, TRUE
	goto PetalburgCityMapscriptBundle_1

PetalburgCityMapscriptBundle_5:
# 780 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_TEAMGRDUEL, TRUE
	goto PetalburgCityMapscriptBundle_4

PetalburgCityMapscriptBundle_8:
# 783 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_TEAMGRDUEL, TRUE
	goto PetalburgCityMapscriptBundle_7

PetalburgCityMapscriptBundle_11:
# 786 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_PANULACAVE, TRUE
	goto PetalburgCityMapscriptBundle_10

PetalburgCityMapscriptBundle_13:
# 790 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
	return


PetalburgRiotRebelAdminStart::
# 805 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 1
	return


PetalburgRiotDevonAdminStart::
# 809 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 2
	return


PetalburgRiotDevonAdminStartLeave::
# 813 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
	return


PetalburgRiotRebelAdminStartLeave::
# 817 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
	return


PetalburgRiotDontblocktheway::
# 823 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset petalburgriotstopped, PetalburgRiotDontblocktheway_1
	return

PetalburgRiotDontblocktheway_1:
# 825 "data/maps/PetalburgCity/scripts.pory"
	random 2
# 826 "data/maps/PetalburgCity/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 828 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 829 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgRiotDontblocktheway_4
# 830 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgRiotDontblocktheway_5
	return

PetalburgRiotDontblocktheway_4:
# 829 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgRiotDontblockthewayRebel
	return

PetalburgRiotDontblocktheway_5:
# 830 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgRiotDontblockthewayDevon
	return


PetalburgRiotDontblockthewayRebel::
# 837 "data/maps/PetalburgCity/scripts.pory"
	lock
# 838 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 839 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 840 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotDontblockthewayRebel_Movement_0
# 841 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 842 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotDontblockthewayRebel_Text_0
# 843 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 844 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotDontblockthewayRebel_Movement_1
# 845 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 846 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotDontblockthewayDevon::
# 850 "data/maps/PetalburgCity/scripts.pory"
	lock
# 851 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 852 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 853 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotDontblockthewayRebel_Movement_0
# 854 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 855 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotDontblockthewayDevon_Text_0
# 856 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 857 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotDontblockthewayRebel_Movement_1
# 858 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 859 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotRebelLead::
# 863 "data/maps/PetalburgCity/scripts.pory"
	lock
# 864 "data/maps/PetalburgCity/scripts.pory"
	applymovement 46, PetalburgRiotRebelLead_Movement_0
# 865 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 46
# 866 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_GLIGAR, CRY_MODE_NORMAL
# 867 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotRebelLead_Text_0
# 868 "data/maps/PetalburgCity/scripts.pory"
	applymovement 46, PetalburgRiotRebelLead_Movement_1
# 869 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 46
# 870 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotDevonLead::
# 874 "data/maps/PetalburgCity/scripts.pory"
	lock
# 875 "data/maps/PetalburgCity/scripts.pory"
	applymovement 45, PetalburgRiotRebelLead_Movement_0
# 876 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 45
# 877 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_ARYSTAL, CRY_MODE_NORMAL
# 878 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotDevonLead_Text_0
# 879 "data/maps/PetalburgCity/scripts.pory"
	applymovement 45, PetalburgRiotDevonLead_Movement_0
# 880 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 45
# 881 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotCutscene::
# 887 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 888 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 889 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 890 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_BOSSDRILLDOZER, TRUE
# 907 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 908 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_0
# 910 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 912 "data/maps/PetalburgCity/scripts.pory"
	playse SE_APPLAUSE
# 913 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_1
# 915 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 916 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_2
# 919 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 922 "data/maps/PetalburgCity/scripts.pory"
	playse SE_APPLAUSE
# 923 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_3
# 925 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 926 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_4
# 927 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 930 "data/maps/PetalburgCity/scripts.pory"
	playse SE_APPLAUSE
# 931 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_5
# 933 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_6
# 934 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PetalburgRiotCutscene_Text_7, PetalburgRiotCutscene_Text_8, PetalburgRiotCutscene_Text_9, PetalburgRiotCutscene_Text_10
# 936 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgRiotCutscene_2
PetalburgRiotCutscene_1:
# 1037 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgRiotCutscene_5
PetalburgRiotCutscene_4:
# 1137 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgRiotCutscene_11
PetalburgRiotCutscene_10:
# 1306 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PetalburgRiotCutscene_20
PetalburgRiotCutscene_19:
# 1313 "data/maps/PetalburgCity/scripts.pory"
endofpetalburgriotscript:
# 1315 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1316 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 1317 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1319 "data/maps/PetalburgCity/scripts.pory"
	gettimeofday
# 1320 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq PetalburgRiotCutscene_32
PetalburgRiotCutscene_31:
# 1323 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq PetalburgRiotCutscene_41
PetalburgRiotCutscene_40:
# 1326 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq PetalburgRiotCutscene_47
PetalburgRiotCutscene_46:
# 1329 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgRiotCutscene_53
PetalburgRiotCutscene_52:
# 1332 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgRiotCutscene_2:
# 937 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 1
	goto_if_eq PetalburgRiotCutscene_8
PetalburgRiotCutscene_7:
# 943 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 2
	goto_if_eq PetalburgRiotCutscene_17
PetalburgRiotCutscene_16:
# 948 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotRebelLead_Movement_1
# 949 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 950 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 951 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_4
# 952 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 953 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_11
# 954 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotRebelLead_Movement_1
# 955 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 956 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 957 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 958 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_12
# 960 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWSON, Dawson_Outro
# 963 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 964 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 968 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_13
# 970 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 972 "data/maps/PetalburgCity/scripts.pory"
	playse SE_FLEE
# 973 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 975 "data/maps/PetalburgCity/scripts.pory"
	removeobject 36
# 976 "data/maps/PetalburgCity/scripts.pory"
	removeobject 40
# 977 "data/maps/PetalburgCity/scripts.pory"
	removeobject 42
# 978 "data/maps/PetalburgCity/scripts.pory"
	removeobject 45
# 979 "data/maps/PetalburgCity/scripts.pory"
	removeobject 48
# 980 "data/maps/PetalburgCity/scripts.pory"
	removeobject 49
# 982 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 983 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 985 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_4
# 986 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_5
# 987 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 988 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 989 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgRiotCutscene_29
PetalburgRiotCutscene_28:
# 991 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgRiotCutscene_38
PetalburgRiotCutscene_37:
# 993 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_16
# 995 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 997 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 999 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_STRENGTH
# 1000 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1001 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_STRENGTH
# 1002 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1003 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_BRICK_BREAK
# 1004 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1008 "data/maps/PetalburgCity/scripts.pory"
	removeobject 37
# 1009 "data/maps/PetalburgCity/scripts.pory"
	removeobject 38
# 1010 "data/maps/PetalburgCity/scripts.pory"
	removeobject 39
# 1011 "data/maps/PetalburgCity/scripts.pory"
	removeobject 41
# 1012 "data/maps/PetalburgCity/scripts.pory"
	removeobject 43
# 1013 "data/maps/PetalburgCity/scripts.pory"
	removeobject 50
# 1014 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1015 "data/maps/PetalburgCity/scripts.pory"
	removeobject 47
# 1018 "data/maps/PetalburgCity/scripts.pory"
	addobject 27
# 1019 "data/maps/PetalburgCity/scripts.pory"
	addobject 9
# 1020 "data/maps/PetalburgCity/scripts.pory"
	addobject 10
# 1021 "data/maps/PetalburgCity/scripts.pory"
	addobject 11
# 1022 "data/maps/PetalburgCity/scripts.pory"
	addobject 15
# 1023 "data/maps/PetalburgCity/scripts.pory"
	addobject 51
# 1025 "data/maps/PetalburgCity/scripts.pory"
	clearflag rebelswonpetalburgriot
# 1026 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
# 1028 "data/maps/PetalburgCity/scripts.pory"
	clearflag petalburgriothidecivilians
# 1030 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1031 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1032 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_17
# 1033 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
# 1034 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgriotscript
	goto PetalburgRiotCutscene_1

PetalburgRiotCutscene_5:
# 1038 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 1
	goto_if_eq PetalburgRiotCutscene_14
PetalburgRiotCutscene_13:
# 1044 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 2
	goto_if_eq PetalburgRiotCutscene_26
PetalburgRiotCutscene_25:
# 1048 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1049 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1050 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_4
# 1051 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1052 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_18
# 1053 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotDevonLead_Movement_0
# 1054 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1055 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 1056 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1057 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_19
# 1059 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GEORGIA, Georgia_Outro
# 1061 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1062 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 1063 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1067 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_20
# 1068 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1069 "data/maps/PetalburgCity/scripts.pory"
	playse SE_LEDGE
# 1070 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_8
# 1071 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1073 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_21
# 1075 "data/maps/PetalburgCity/scripts.pory"
	playse SE_FLEE
# 1076 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1078 "data/maps/PetalburgCity/scripts.pory"
	removeobject 37
# 1079 "data/maps/PetalburgCity/scripts.pory"
	removeobject 38
# 1080 "data/maps/PetalburgCity/scripts.pory"
	removeobject 39
# 1081 "data/maps/PetalburgCity/scripts.pory"
	removeobject 41
# 1082 "data/maps/PetalburgCity/scripts.pory"
	removeobject 48
# 1083 "data/maps/PetalburgCity/scripts.pory"
	removeobject 50
# 1084 "data/maps/PetalburgCity/scripts.pory"
	removeobject 43
# 1085 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1086 "data/maps/PetalburgCity/scripts.pory"
	removeobject 47
# 1087 "data/maps/PetalburgCity/scripts.pory"
	applymovement 49, PetalburgRiotCutscene_Movement_9
# 1089 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1090 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1092 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_4
# 1093 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_5
# 1094 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1095 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_22
# 1102 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1104 "data/maps/PetalburgCity/scripts.pory"
	removeobject 36
# 1105 "data/maps/PetalburgCity/scripts.pory"
	removeobject 40
# 1106 "data/maps/PetalburgCity/scripts.pory"
	removeobject 42
# 1107 "data/maps/PetalburgCity/scripts.pory"
	removeobject 49
# 1108 "data/maps/PetalburgCity/scripts.pory"
	removeobject 45
# 1109 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1110 "data/maps/PetalburgCity/scripts.pory"
	removeobject 48
# 1111 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1116 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
# 1118 "data/maps/PetalburgCity/scripts.pory"
	setflag devonwonpetalburgriot
# 1120 "data/maps/PetalburgCity/scripts.pory"
	addobject 27
# 1121 "data/maps/PetalburgCity/scripts.pory"
	addobject 9
# 1122 "data/maps/PetalburgCity/scripts.pory"
	addobject 10
# 1123 "data/maps/PetalburgCity/scripts.pory"
	addobject 11
# 1124 "data/maps/PetalburgCity/scripts.pory"
	addobject 15
# 1125 "data/maps/PetalburgCity/scripts.pory"
	addobject 51
# 1127 "data/maps/PetalburgCity/scripts.pory"
	clearflag petalburgriothidecivilians
# 1129 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1130 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1132 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
# 1133 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgriotscript
	goto PetalburgRiotCutscene_4

PetalburgRiotCutscene_8:
# 938 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 939 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_0
# 940 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_0
	goto PetalburgRiotCutscene_7

PetalburgRiotCutscene_11:
# 1138 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1139 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 1
	goto_if_eq PetalburgRiotCutscene_23
PetalburgRiotCutscene_22:
# 1144 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 2
	goto_if_eq PetalburgRiotCutscene_35
PetalburgRiotCutscene_34:
# 1149 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1152 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1153 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotDontblockthewayRebel_Movement_0
# 1154 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1155 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_1
# 1157 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotDevonLead_Movement_0
# 1158 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1160 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_23
# 1162 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1163 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotDontblockthewayRebel_Movement_0
# 1164 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1165 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_0
# 1167 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotRebelLead_Movement_1
# 1168 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1170 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_24
# 1172 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 1173 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 1174 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1176 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_25
# 1177 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_two_trainers TRAINER_GEORGIA, Georgia_MultiOutro, TRAINER_DAWSON, Dawson_MultiOutro
# 1180 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1184 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1185 "data/maps/PetalburgCity/scripts.pory"
	applymovement 42, PetalburgRiotDontblockthewayRebel_Movement_0
# 1186 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1187 "data/maps/PetalburgCity/scripts.pory"
	applymovement 49, PetalburgRiotCutscene_Movement_14
# 1188 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1189 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1190 "data/maps/PetalburgCity/scripts.pory"
	applymovement 36, PetalburgRiotDontblockthewayRebel_Movement_0
# 1191 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1193 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1194 "data/maps/PetalburgCity/scripts.pory"
	applymovement 38, PetalburgRiotDontblockthewayRebel_Movement_0
# 1195 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1196 "data/maps/PetalburgCity/scripts.pory"
	applymovement 39, PetalburgRiotDontblockthewayRebel_Movement_0
# 1197 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1198 "data/maps/PetalburgCity/scripts.pory"
	applymovement 48, PetalburgRiotCutscene_Movement_14
# 1200 "data/maps/PetalburgCity/scripts.pory"
	playse SE_APPLAUSE
# 1203 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1204 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgRiotCutscene_44
PetalburgRiotCutscene_43:
# 1206 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgRiotCutscene_50
PetalburgRiotCutscene_49:
# 1210 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 1214 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 1215 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1216 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_NONE, TRUE
# 1218 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_28
# 1221 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1224 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_CALM, TRUE
# 1227 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_29
# 1235 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 1236 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1237 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_1
# 1239 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_1
# 1240 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1242 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_30
# 1244 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 1246 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1247 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_0
# 1248 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_0
# 1249 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1250 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_31
# 1253 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 1254 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1255 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 1256 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1258 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_32
# 1260 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1262 "data/maps/PetalburgCity/scripts.pory"
	removeobject 36
# 1263 "data/maps/PetalburgCity/scripts.pory"
	removeobject 40
# 1264 "data/maps/PetalburgCity/scripts.pory"
	removeobject 42
# 1265 "data/maps/PetalburgCity/scripts.pory"
	removeobject 49
# 1266 "data/maps/PetalburgCity/scripts.pory"
	removeobject 45
# 1267 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1268 "data/maps/PetalburgCity/scripts.pory"
	removeobject 48
# 1270 "data/maps/PetalburgCity/scripts.pory"
	removeobject 38
# 1271 "data/maps/PetalburgCity/scripts.pory"
	removeobject 39
# 1272 "data/maps/PetalburgCity/scripts.pory"
	removeobject 50
# 1274 "data/maps/PetalburgCity/scripts.pory"
	removeobject 47
# 1275 "data/maps/PetalburgCity/scripts.pory"
	removeobject 43
# 1276 "data/maps/PetalburgCity/scripts.pory"
	removeobject 37
# 1278 "data/maps/PetalburgCity/scripts.pory"
	removeobject 41
# 1279 "data/maps/PetalburgCity/scripts.pory"
	removeobject 43
# 1281 "data/maps/PetalburgCity/scripts.pory"
	addobject 27
# 1284 "data/maps/PetalburgCity/scripts.pory"
	addobject 9
# 1285 "data/maps/PetalburgCity/scripts.pory"
	addobject 10
# 1286 "data/maps/PetalburgCity/scripts.pory"
	addobject 11
# 1287 "data/maps/PetalburgCity/scripts.pory"
	addobject 15
# 1288 "data/maps/PetalburgCity/scripts.pory"
	addobject 51
# 1290 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 4
# 1292 "data/maps/PetalburgCity/scripts.pory"
	setflag devonwonpetalburgriot
# 1293 "data/maps/PetalburgCity/scripts.pory"
	setflag rebelswonpetalburgriot
# 1295 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
# 1296 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotendedforgood
# 1297 "data/maps/PetalburgCity/scripts.pory"
	clearflag petalburgriothidecivilians
# 1299 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1301 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgriotscript
	goto PetalburgRiotCutscene_10

PetalburgRiotCutscene_14:
# 1039 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1040 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_6
# 1041 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_7
	goto PetalburgRiotCutscene_13

PetalburgRiotCutscene_17:
# 944 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 945 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_2
# 946 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_3
	goto PetalburgRiotCutscene_16

PetalburgRiotCutscene_20:
# 1308 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
# 1309 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgriotscript
	goto PetalburgRiotCutscene_19

PetalburgRiotCutscene_23:
# 1140 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_10
# 1141 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_11
	goto PetalburgRiotCutscene_22

PetalburgRiotCutscene_26:
# 1045 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_1
# 1046 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_1
	goto PetalburgRiotCutscene_25

PetalburgRiotCutscene_29:
# 989 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_14
	goto PetalburgRiotCutscene_28

PetalburgRiotCutscene_32:
# 1321 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_TEAMGRDUEL, TRUE
	goto PetalburgRiotCutscene_31

PetalburgRiotCutscene_35:
# 1145 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_12
# 1146 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_13
	goto PetalburgRiotCutscene_34

PetalburgRiotCutscene_38:
# 991 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_15
	goto PetalburgRiotCutscene_37

PetalburgRiotCutscene_41:
# 1324 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_TEAMGRDUEL, TRUE
	goto PetalburgRiotCutscene_40

PetalburgRiotCutscene_44:
# 1204 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_26
	goto PetalburgRiotCutscene_43

PetalburgRiotCutscene_47:
# 1327 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_PANULACAVE, TRUE
	goto PetalburgRiotCutscene_46

PetalburgRiotCutscene_50:
# 1206 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_27
	goto PetalburgRiotCutscene_49

PetalburgRiotCutscene_53:
# 1330 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_PANULACAVE, TRUE
	goto PetalburgRiotCutscene_52


PetalburgRiotBatter::
# 1358 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1359 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1361 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 2
# 1362 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 6
# 1363 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8006, 4
# 1364 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8007, 4
# 1365 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_STRENGTH
# 1366 "data/maps/PetalburgCity/scripts.pory"
	special ShakeCamera
# 1368 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotBatter_Text_0
# 1369 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotRebelwithSign::
# 1374 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1375 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1376 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotRebelwithSign_Text_0
# 1377 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotInjuredRebel::
# 1382 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1383 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1384 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotInjuredRebel_Text_0
# 1385 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotArrestingDevon::
# 1390 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1391 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1392 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotArrestingDevon_Text_0
# 1393 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotInjuredDevon::
# 1398 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1399 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1400 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotInjuredDevon_Text_0
# 1401 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotLowerRebel::
# 1406 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1407 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1408 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotLowerRebel_Text_0
# 1410 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotLowerDevon::
# 1415 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1416 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1417 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotLowerDevon_Text_0
# 1419 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgArcadeGuard1::
# 1424 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1425 "data/maps/PetalburgCity/scripts.pory"
	applymovement 55, PetalburgRiotRebelLead_Movement_0
# 1426 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgArcadeGuard1_Text_0
# 1427 "data/maps/PetalburgCity/scripts.pory"
	applymovement 55, PetalburgRiotCutscene_Movement_9
# 1428 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 55
# 1429 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return


PetalburgArcadeGuardMaku::
# 1433 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1434 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 1435 "data/maps/PetalburgCity/scripts.pory"
	applymovement 56, PetalburgRiotRebelLead_Movement_0
# 1436 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgArcadeGuardMaku_Text_0
# 1437 "data/maps/PetalburgCity/scripts.pory"
	applymovement 56, PetalburgRiotCutscene_Movement_9
# 1438 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 56
# 1439 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return


PetalburgArcadeGuard2::
# 1443 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1444 "data/maps/PetalburgCity/scripts.pory"
	applymovement 53, PetalburgRiotCutscene_Movement_4
# 1445 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 53
# 1446 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgArcadeGuard2_Text_0
# 1448 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return


PetalburgArcadeGuard3::
# 1452 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1453 "data/maps/PetalburgCity/scripts.pory"
	applymovement 54, PetalburgRiotCutscene_Movement_5
# 1454 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 54
# 1455 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgArcadeGuard3_Text_0
# 1457 "data/maps/PetalburgCity/scripts.pory"
	applymovement 55, PetalburgRiotCutscene_Movement_9
# 1458 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 55
# 1459 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgArcadeGuardsGoAway
	return


PetalburgArcadeGuardsGoAway::
# 1463 "data/maps/PetalburgCity/scripts.pory"
	applymovement 53, PetalburgRiotCutscene_Movement_0
# 1464 "data/maps/PetalburgCity/scripts.pory"
	applymovement 54, PetalburgRiotCutscene_Movement_0
# 1465 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 54
# 1466 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgArcadeGuardsGoAway_Text_0
# 1467 "data/maps/PetalburgCity/scripts.pory"
	applymovement 53, PetalburgRiotCutscene_Movement_4
# 1468 "data/maps/PetalburgCity/scripts.pory"
	applymovement 54, PetalburgRiotCutscene_Movement_5
# 1469 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 54
# 1470 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return


PetalburgSmokerMilitia::
# 1474 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1475 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1476 "data/maps/PetalburgCity/scripts.pory"
	applymovement 57, PetalburgRiotRebelLead_Movement_0
# 1477 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 57
# 1479 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset petalburgsmokergivesligther, PetalburgSmokerMilitia_2
# 1486 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgSmokerMilitia_Text_1
PetalburgSmokerMilitia_1:
# 1489 "data/maps/PetalburgCity/scripts.pory"
	applymovement 57, PetalburgSmokerMilitia_Movement_0
# 1490 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 57
# 1491 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgSmokerMilitia_2:
# 1481 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgSmokerMilitia_Text_0
# 1482 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_FLAME_ORB
# 1483 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgsmokergivesligther
	goto PetalburgSmokerMilitia_1


PetalburgMilitiaSnackGuy::
# 1496 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1498 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset militiadailysnack, PetalburgMilitiaSnackGuy_2
# 1516 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMilitiaSnackGuy_Text_2
PetalburgMilitiaSnackGuy_1:
# 1520 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return

PetalburgMilitiaSnackGuy_2:
# 1500 "data/maps/PetalburgCity/scripts.pory"
	random 2
# 1501 "data/maps/PetalburgCity/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 1503 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 1504 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgMilitiaSnackGuy_7
# 1508 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgMilitiaSnackGuy_8
PetalburgMilitiaSnackGuy_5:
# 1513 "data/maps/PetalburgCity/scripts.pory"
	setflag militiadailysnack
	goto PetalburgMilitiaSnackGuy_1

PetalburgMilitiaSnackGuy_7:
# 1505 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMilitiaSnackGuy_Text_0
# 1507 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_FRESH_WATER
	goto PetalburgMilitiaSnackGuy_5

PetalburgMilitiaSnackGuy_8:
# 1509 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMilitiaSnackGuy_Text_1
# 1511 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
	goto PetalburgMilitiaSnackGuy_5


PetalburgMilitiaLeftGuy::
# 1524 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1525 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1526 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMilitiaLeftGuy_Text_0
# 1528 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgMilitiaRightGuy::
# 1532 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1534 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_SENSEIQTRAININGQUEST, 0
	goto_if_eq PetalburgMilitiaRightGuy_2
# 1539 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMilitiaRightGuy_Text_1
PetalburgMilitiaRightGuy_1:
# 1542 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgMilitiaRightGuy_2:
# 1535 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMilitiaRightGuy_Text_0
	goto PetalburgMilitiaRightGuy_1


PetalburgMartialArtsSensei::
# 1550 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1552 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_SENSEIQTRAININGQUEST, 1
	goto_if_eq PetalburgMartialArtsSensei_2
PetalburgMartialArtsSensei_1:
# 1559 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_SENSEIQTRAININGQUEST, 0
	goto_if_eq PetalburgMartialArtsSensei_4
	return

PetalburgMartialArtsSensei_2:
# 1554 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_0
# 1556 "data/maps/PetalburgCity/scripts.pory"
	goto senseiscriptend
	goto PetalburgMartialArtsSensei_1

PetalburgMartialArtsSensei_4:
# 1561 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_1
# 1564 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotRebelLead_Movement_0
# 1565 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1567 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1568 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgMartialArtsSensei_7
PetalburgMartialArtsSensei_6:
# 1570 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgMartialArtsSensei_10
PetalburgMartialArtsSensei_9:
# 1573 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_4
# 1577 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_5, PetalburgMartialArtsSensei_Text_6
# 1579 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgMartialArtsSensei_13
PetalburgMartialArtsSensei_12:
# 1584 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgMartialArtsSensei_16
PetalburgMartialArtsSensei_15:
# 1862 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SENSEIQTRAININGQUEST, 1
# 1864 "data/maps/PetalburgCity/scripts.pory"
senseiscriptend:
# 1866 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotCutscene_Movement_9
# 1867 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1869 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgMartialArtsSensei_7:
# 1568 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_2
	goto PetalburgMartialArtsSensei_6

PetalburgMartialArtsSensei_10:
# 1570 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_3
	goto PetalburgMartialArtsSensei_9

PetalburgMartialArtsSensei_13:
# 1580 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_7
# 1581 "data/maps/PetalburgCity/scripts.pory"
	goto senseiscriptend
	goto PetalburgMartialArtsSensei_12

PetalburgMartialArtsSensei_16:
# 1585 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SENSEIQTRAININGQUEST, 1
# 1586 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_8
# 1587 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_9, PetalburgMartialArtsSensei_Text_10, PetalburgMartialArtsSensei_Text_11, PetalburgMartialArtsSensei_Text_12
# 1593 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgMartialArtsSensei_19
PetalburgMartialArtsSensei_18:
# 1596 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgMartialArtsSensei_22
PetalburgMartialArtsSensei_21:
# 1599 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgMartialArtsSensei_25
PetalburgMartialArtsSensei_24:
# 1603 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PetalburgMartialArtsSensei_28
PetalburgMartialArtsSensei_27:
# 1608 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_17
# 1609 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1611 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1612 "data/maps/PetalburgCity/scripts.pory"
	hidefollower
# 1614 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 1615 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1616 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_EARTHANDSEA, TRUE
# 1618 "data/maps/PetalburgCity/scripts.pory"
	setflag punchpetalburgmartialartists
# 1619 "data/maps/PetalburgCity/scripts.pory"
	clearflag idlepetalburgmartialartists
# 1621 "data/maps/PetalburgCity/scripts.pory"
	removeobject 32
# 1622 "data/maps/PetalburgCity/scripts.pory"
	removeobject 33
# 1623 "data/maps/PetalburgCity/scripts.pory"
	removeobject 34
# 1625 "data/maps/PetalburgCity/scripts.pory"
	addobject 60
# 1626 "data/maps/PetalburgCity/scripts.pory"
	addobject 61
# 1627 "data/maps/PetalburgCity/scripts.pory"
	addobject 62
# 1629 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy 35, 20, 8
# 1630 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotRebelLead_Movement_1
# 1631 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1633 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 24, 8
# 1634 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotDevonLead_Movement_0
# 1635 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1637 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1640 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_18
# 1646 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1648 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_METRONOME
# 1649 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgMartialArtsSensei_Movement_0
# 1650 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1652 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotCutscene_Movement_0
# 1653 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1655 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_19
# 1658 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1659 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgMartialArtsSensei_31
PetalburgMartialArtsSensei_30:
# 1665 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgMartialArtsSensei_34
PetalburgMartialArtsSensei_33:
# 1671 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgMartialArtsSensei_37
PetalburgMartialArtsSensei_36:
# 1675 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgMartialArtsSensei_39
	goto PetalburgMartialArtsSensei_15

PetalburgMartialArtsSensei_19:
# 1594 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_13
	goto PetalburgMartialArtsSensei_18

PetalburgMartialArtsSensei_22:
# 1597 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_14
	goto PetalburgMartialArtsSensei_21

PetalburgMartialArtsSensei_25:
# 1600 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_15
	goto PetalburgMartialArtsSensei_24

PetalburgMartialArtsSensei_28:
# 1604 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_16
	goto PetalburgMartialArtsSensei_27

PetalburgMartialArtsSensei_31:
# 1661 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_20, PetalburgMartialArtsSensei_Text_21
	goto PetalburgMartialArtsSensei_30

PetalburgMartialArtsSensei_34:
# 1667 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_22, PetalburgMartialArtsSensei_Text_23
	goto PetalburgMartialArtsSensei_33

PetalburgMartialArtsSensei_37:
# 1672 "data/maps/PetalburgCity/scripts.pory"
	goto playerstrikessensei
	goto PetalburgMartialArtsSensei_36

PetalburgMartialArtsSensei_39:
# 1676 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1677 "data/maps/PetalburgCity/scripts.pory"
playerstrikessensei:
# 1678 "data/maps/PetalburgCity/scripts.pory"
	playse SE_FLEE
# 1679 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgMartialArtsSensei_Movement_1
# 1680 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1683 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 2
# 1684 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 6
# 1685 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8006, 4
# 1686 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8007, 4
# 1687 "data/maps/PetalburgCity/scripts.pory"
	special ShakeCamera
# 1688 "data/maps/PetalburgCity/scripts.pory"
	playse SE_CLICK
# 1689 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1691 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 4
# 1692 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 8
# 1693 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8006, 8
# 1694 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8007, 4
# 1695 "data/maps/PetalburgCity/scripts.pory"
	playse SE_EFFECTIVE
# 1696 "data/maps/PetalburgCity/scripts.pory"
	special ShakeCamera
# 1699 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_24
# 1701 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotCutscene_Movement_0
# 1702 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1704 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_25
# 1708 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1710 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgMartialArtsSensei_Movement_2
# 1711 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1713 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_26
# 1714 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1716 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1717 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotDontblockthewayRebel_Movement_0
# 1718 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1720 "data/maps/PetalburgCity/scripts.pory"
	playse SE_FLEE
# 1721 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgMartialArtsSensei_Movement_3
# 1722 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1724 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_27
# 1725 "data/maps/PetalburgCity/scripts.pory"
playercounterssenseichoice:
# 1726 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1727 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgMartialArtsSensei_42
PetalburgMartialArtsSensei_41:
# 1736 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgMartialArtsSensei_45
PetalburgMartialArtsSensei_44:
# 1743 "data/maps/PetalburgCity/scripts.pory"
counterchoiceresolves:
# 1744 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgMartialArtsSensei_48
PetalburgMartialArtsSensei_47:
# 1763 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgMartialArtsSensei_51
PetalburgMartialArtsSensei_50:
# 1792 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgMartialArtsSensei_53
	goto PetalburgMartialArtsSensei_15

PetalburgMartialArtsSensei_42:
# 1729 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_28, PetalburgMartialArtsSensei_Text_29, PetalburgMartialArtsSensei_Text_30
# 1733 "data/maps/PetalburgCity/scripts.pory"
	goto counterchoiceresolves
	goto PetalburgMartialArtsSensei_41

PetalburgMartialArtsSensei_45:
# 1738 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_28, PetalburgMartialArtsSensei_Text_31, PetalburgMartialArtsSensei_Text_32
	goto PetalburgMartialArtsSensei_44

PetalburgMartialArtsSensei_48:
# 1745 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1746 "data/maps/PetalburgCity/scripts.pory"
	playse SE_BALL_THROW
# 1747 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1748 "data/maps/PetalburgCity/scripts.pory"
	call SmallSenseiShake
# 1749 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_33
# 1751 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotCutscene_Movement_0
# 1752 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1754 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_34
# 1759 "data/maps/PetalburgCity/scripts.pory"
	goto playercounterssenseichoice
	goto PetalburgMartialArtsSensei_47

PetalburgMartialArtsSensei_51:
# 1764 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1765 "data/maps/PetalburgCity/scripts.pory"
	call SmallSenseiShake
# 1767 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_35
# 1769 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotCutscene_Movement_0
# 1770 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1772 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_36
# 1774 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1775 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgMartialArtsSensei_56
PetalburgMartialArtsSensei_55:
# 1782 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgMartialArtsSensei_61
	goto PetalburgMartialArtsSensei_50

PetalburgMartialArtsSensei_53:
# 1793 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1794 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1795 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgMartialArtsSensei_59
PetalburgMartialArtsSensei_58:
# 1799 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgMartialArtsSensei_64
PetalburgMartialArtsSensei_63:
# 1804 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1805 "data/maps/PetalburgCity/scripts.pory"
	call SmallSenseiShake
# 1806 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_39
# 1807 "data/maps/PetalburgCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 1808 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_40
# 1810 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotCutscene_Movement_0
# 1811 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1813 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_41
# 1817 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1818 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 1819 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1821 "data/maps/PetalburgCity/scripts.pory"
	gettimeofday
# 1822 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgMartialArtsSensei_67
# 1824 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_TEAMGRDUEL, TRUE
PetalburgMartialArtsSensei_66:
# 1826 "data/maps/PetalburgCity/scripts.pory"
	clearflag punchpetalburgmartialartists
# 1827 "data/maps/PetalburgCity/scripts.pory"
	setflag idlepetalburgmartialartists
# 1829 "data/maps/PetalburgCity/scripts.pory"
	addobject 32
# 1830 "data/maps/PetalburgCity/scripts.pory"
	addobject 33
# 1831 "data/maps/PetalburgCity/scripts.pory"
	addobject 34
# 1833 "data/maps/PetalburgCity/scripts.pory"
	removeobject 60
# 1834 "data/maps/PetalburgCity/scripts.pory"
	removeobject 61
# 1835 "data/maps/PetalburgCity/scripts.pory"
	removeobject 62
# 1837 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy 35, 22, 8
# 1838 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotRebelLead_Movement_1
# 1839 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1841 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 23, 8
# 1842 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotDevonLead_Movement_0
# 1843 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1845 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1847 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_42
	goto PetalburgMartialArtsSensei_15

PetalburgMartialArtsSensei_56:
# 1776 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_37
# 1779 "data/maps/PetalburgCity/scripts.pory"
	goto playercounterssenseichoice
	goto PetalburgMartialArtsSensei_55

PetalburgMartialArtsSensei_59:
# 1796 "data/maps/PetalburgCity/scripts.pory"
	playse SE_ICE_STAIRS
	goto PetalburgMartialArtsSensei_58

PetalburgMartialArtsSensei_61:
# 1783 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_38
# 1786 "data/maps/PetalburgCity/scripts.pory"
	goto playercounterssenseichoice
	goto PetalburgMartialArtsSensei_50

PetalburgMartialArtsSensei_64:
# 1800 "data/maps/PetalburgCity/scripts.pory"
	playse SE_BALL_THROW
# 1801 "data/maps/PetalburgCity/scripts.pory"
	waitse
	goto PetalburgMartialArtsSensei_63

PetalburgMartialArtsSensei_67:
# 1823 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_PANULACAVE, TRUE
	goto PetalburgMartialArtsSensei_66


SmallSenseiShake::
# 1878 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 4
# 1879 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 8
# 1880 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8006, 8
# 1881 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8007, 4
# 1882 "data/maps/PetalburgCity/scripts.pory"
	playse SE_EFFECTIVE
# 1883 "data/maps/PetalburgCity/scripts.pory"
	special ShakeCamera
# 1884 "data/maps/PetalburgCity/scripts.pory"
	waitse
	return


ArcadeLotFuelScooperTruck1Pointer::
# 1890 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1892 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1Pointer_Text_0
# 1893 "data/maps/PetalburgCity/scripts.pory"
	dofieldeffectsparkle 10, 31, 9
# 1894 "data/maps/PetalburgCity/scripts.pory"
	release
	return


ArcadeLotFuelScooperTruck1::
# 1901 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1903 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set arcadelottruck1fuel, ArcadeLotFuelScooperTruck1_2
ArcadeLotFuelScooperTruck1_1:
# 1908 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset arcadelottruck1fuel, ArcadeLotFuelScooperTruck1_5
ArcadeLotFuelScooperTruck1_4:
# 1996 "data/maps/PetalburgCity/scripts.pory"
endoffuelscooper:
# 1997 "data/maps/PetalburgCity/scripts.pory"
	release
	return

ArcadeLotFuelScooperTruck1_2:
# 1905 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_0
# 1906 "data/maps/PetalburgCity/scripts.pory"
	goto endoffuelscooper
	goto ArcadeLotFuelScooperTruck1_1

ArcadeLotFuelScooperTruck1_5:
# 1912 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 4
	goto_if_eq ArcadeLotFuelScooperTruck1_8
ArcadeLotFuelScooperTruck1_7:
# 1917 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_2
# 1918 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_5, PetalburgMartialArtsSensei_Text_6
# 1920 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ArcadeLotFuelScooperTruck1_11
ArcadeLotFuelScooperTruck1_10:
# 1924 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ArcadeLotFuelScooperTruck1_13
	goto ArcadeLotFuelScooperTruck1_4

ArcadeLotFuelScooperTruck1_8:
# 1913 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_1
# 1915 "data/maps/PetalburgCity/scripts.pory"
	goto endoffuelscooper
	goto ArcadeLotFuelScooperTruck1_7

ArcadeLotFuelScooperTruck1_11:
# 1921 "data/maps/PetalburgCity/scripts.pory"
	goto endoffuelscooper
	goto ArcadeLotFuelScooperTruck1_10

ArcadeLotFuelScooperTruck1_13:
# 1926 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1928 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_GIGA_DRAIN
# 1929 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1930 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_GIGA_DRAIN
# 1931 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1934 "data/maps/PetalburgCity/scripts.pory"
	addvar VAR_FUELSCOOPERLEVEL, + 1
# 1936 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 1
	goto_if_eq ArcadeLotFuelScooperTruck1_16
ArcadeLotFuelScooperTruck1_15:
# 1940 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 2
	goto_if_eq ArcadeLotFuelScooperTruck1_19
ArcadeLotFuelScooperTruck1_18:
# 1944 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 3
	goto_if_eq ArcadeLotFuelScooperTruck1_22
ArcadeLotFuelScooperTruck1_21:
# 1948 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 4
	goto_if_eq ArcadeLotFuelScooperTruck1_25
ArcadeLotFuelScooperTruck1_24:
# 1955 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 2
# 1956 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 6
# 1957 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8006, 4
# 1958 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8007, 4
# 1959 "data/maps/PetalburgCity/scripts.pory"
	playse SE_TRUCK_DOOR
# 1960 "data/maps/PetalburgCity/scripts.pory"
	special ShakeCamera
# 1963 "data/maps/PetalburgCity/scripts.pory"
	clearflag angryfuelowner
# 1964 "data/maps/PetalburgCity/scripts.pory"
	addobject 59
# 1965 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1967 "data/maps/PetalburgCity/scripts.pory"
	playse SE_LEDGE
# 1968 "data/maps/PetalburgCity/scripts.pory"
	applymovement 59, ArcadeLotFuelScooperTruck1_Movement_0
# 1969 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1971 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1972 "data/maps/PetalburgCity/scripts.pory"
	applymovement 59, PetalburgRiotDontblockthewayRebel_Movement_0
# 1973 "data/maps/PetalburgCity/scripts.pory"
	waitmovement
# 1975 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_7
# 1976 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RICKY_1, ConstructionWorkerM102_Outro
# 1978 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_8
# 1984 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1986 "data/maps/PetalburgCity/scripts.pory"
	applymovement 59, ArcadeLotFuelScooperTruck1_Movement_1
# 1987 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 59
# 1988 "data/maps/PetalburgCity/scripts.pory"
	removeobject 59
# 1989 "data/maps/PetalburgCity/scripts.pory"
	setflag angryfuelowner
# 1990 "data/maps/PetalburgCity/scripts.pory"
	setflag arcadelottruck1fuel
	goto ArcadeLotFuelScooperTruck1_4

ArcadeLotFuelScooperTruck1_16:
# 1937 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_3
	goto ArcadeLotFuelScooperTruck1_15

ArcadeLotFuelScooperTruck1_19:
# 1941 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_4
	goto ArcadeLotFuelScooperTruck1_18

ArcadeLotFuelScooperTruck1_22:
# 1945 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_5
	goto ArcadeLotFuelScooperTruck1_21

ArcadeLotFuelScooperTruck1_25:
# 1949 "data/maps/PetalburgCity/scripts.pory"
	playfanfare MUS_RG_PHOTO
# 1950 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_6
	goto ArcadeLotFuelScooperTruck1_24


PetalburgTrendyPhraseGuitarist::
# 2003 "data/maps/PetalburgCity/scripts.pory"
	lock
# 2004 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 2005 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgTrendyPhraseGuitarist_Text_0
	return


# 840 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotDontblockthewayRebel_Movement_0:
# 840 "data/maps/PetalburgCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 844 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotDontblockthewayRebel_Movement_1:
# 844 "data/maps/PetalburgCity/scripts.pory"
	walk_down
	step_end

# 864 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotRebelLead_Movement_0:
# 864 "data/maps/PetalburgCity/scripts.pory"
	face_player
	step_end

# 868 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotRebelLead_Movement_1:
# 868 "data/maps/PetalburgCity/scripts.pory"
	face_right
	step_end

# 879 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotDevonLead_Movement_0:
# 879 "data/maps/PetalburgCity/scripts.pory"
	face_left
	step_end

# 907 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_0:
# 907 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
	step_end

# 915 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_1:
# 915 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
	step_end

# 945 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_2:
# 945 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 945 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 945 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 945 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 945 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
	step_end

# 946 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_3:
# 946 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 946 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 946 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
	step_end

# 951 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_4:
# 951 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 986 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_5:
# 986 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
	step_end

# 1040 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_6:
# 1040 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1040 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1040 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1040 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1040 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
	step_end

# 1041 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_7:
# 1041 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1041 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1041 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
	step_end

# 1070 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_8:
# 1070 "data/maps/PetalburgCity/scripts.pory"
	jump_in_place_right
	step_end

# 1087 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_9:
# 1087 "data/maps/PetalburgCity/scripts.pory"
	face_up
	step_end

# 1140 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_10:
# 1140 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1140 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1140 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 1140 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1141 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_11:
# 1141 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1141 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1145 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_12:
# 1145 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1145 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1145 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 1145 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1146 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_13:
# 1146 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1146 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1187 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_14:
# 1187 "data/maps/PetalburgCity/scripts.pory"
	emote_exclamation_mark
# 1187 "data/maps/PetalburgCity/scripts.pory"
	face_up
	step_end

# 1489 "data/maps/PetalburgCity/scripts.pory"
PetalburgSmokerMilitia_Movement_0:
# 1489 "data/maps/PetalburgCity/scripts.pory"
	face_down
	step_end

# 1649 "data/maps/PetalburgCity/scripts.pory"
PetalburgMartialArtsSensei_Movement_0:
# 1649 "data/maps/PetalburgCity/scripts.pory"
	emote_question_mark
	step_end

# 1679 "data/maps/PetalburgCity/scripts.pory"
PetalburgMartialArtsSensei_Movement_1:
# 1679 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
# 1679 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
# 1679 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
	step_end

# 1710 "data/maps/PetalburgCity/scripts.pory"
PetalburgMartialArtsSensei_Movement_2:
# 1710 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1710 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1710 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1710 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
	step_end

# 1721 "data/maps/PetalburgCity/scripts.pory"
PetalburgMartialArtsSensei_Movement_3:
# 1721 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1721 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1721 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
	step_end

# 1968 "data/maps/PetalburgCity/scripts.pory"
ArcadeLotFuelScooperTruck1_Movement_0:
# 1968 "data/maps/PetalburgCity/scripts.pory"
	jump_down
# 1968 "data/maps/PetalburgCity/scripts.pory"
	face_left
	step_end

# 1986 "data/maps/PetalburgCity/scripts.pory"
ArcadeLotFuelScooperTruck1_Movement_1:
# 1986 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1986 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1986 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_up
# 1986 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_up
# 1986 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_up
# 1986 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1986 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1986 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1986 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
	step_end

PetalburgRiotDontblockthewayRebel_Text_0:
# 842 "data/maps/PetalburgCity/scripts.pory"
	.string "Hey, get off the way! We're rioting here!\n"
	.string "We're RIOTING HERE!$"

PetalburgRiotDontblockthewayDevon_Text_0:
# 855 "data/maps/PetalburgCity/scripts.pory"
	.string "Dear citizen, for your own safety, you\n"
	.string "must evacuate immediately!$"

PetalburgRiotRebelLead_Text_0:
# 867 "data/maps/PetalburgCity/scripts.pory"
	.string "GLIIII!$"

PetalburgRiotDevonLead_Text_0:
# 878 "data/maps/PetalburgCity/scripts.pory"
	.string "R-riiii...!$"

PetalburgRiotCutscene_Text_0:
# 908 "data/maps/PetalburgCity/scripts.pory"
	.string "The people is done with your greed, you\n"
	.string "Devon scum!\p"
	.string "We want free Pokémon healthcare back,\n"
	.string "and we want it NOW!$"

PetalburgRiotCutscene_Text_1:
# 913 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Hell yeah! Down with the corpos! Down\n"
	.string "with the corpos!$"

PetalburgRiotCutscene_Text_2:
# 916 "data/maps/PetalburgCity/scripts.pory"
	.string "Citizens of Petalburg - look around\n"
	.string "you! The war left Hoenn in shambles!\p"
	.string "If we are to rebuild, funds must be\n"
	.string "collected.\p"
	.string "It is a small sacrifice today, for a\n"
	.string "better future tomorrow.$"

PetalburgRiotCutscene_Text_3:
# 923 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR BLUE}Yes! It's fair! It's the only way! Stop\n"
	.string "making things harder!$"

PetalburgRiotCutscene_Text_4:
# 926 "data/maps/PetalburgCity/scripts.pory"
	.string "Then have Mr. Stone foot the bill! Not\n"
	.string "the little people!$"

PetalburgRiotCutscene_Text_5:
# 931 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Yeeees! Eat the rich, eat the rich!$"

PetalburgRiotCutscene_Text_6:
# 933 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}A clash between {COLOR RED}Rebel{COLOR DARK_GRAY} {COLOR GREEN}and {COLOR BLUE}Devon{COLOR GREEN} forces\n"
	.string "is in full force… what to do?$"

PetalburgRiotCutscene_Text_7:
# 934 "data/maps/PetalburgCity/scripts.pory"
	.string "Fight Devon$"

PetalburgRiotCutscene_Text_8:
# 934 "data/maps/PetalburgCity/scripts.pory"
	.string "Fight Rebels$"

PetalburgRiotCutscene_Text_9:
# 934 "data/maps/PetalburgCity/scripts.pory"
	.string "Fight both$"

PetalburgRiotCutscene_Text_10:
# 934 "data/maps/PetalburgCity/scripts.pory"
	.string "Do nothing$"

PetalburgRiotCutscene_Text_11:
# 953 "data/maps/PetalburgCity/scripts.pory"
	.string "Hah! Take a look, you shitty corpos! The\n"
	.string "people is with us!$"

PetalburgRiotCutscene_Text_12:
# 958 "data/maps/PetalburgCity/scripts.pory"
	.string "They simply fall prey to your\n"
	.string "manipulation. A shame…\p"
	.string "For the sake of Hoenn, I must have\n"
	.string "order restored!$"

PetalburgRiotCutscene_Text_13:
# 968 "data/maps/PetalburgCity/scripts.pory"
	.string "You will soon realize how wrong your\n"
	.string "thoughtless vandalism is...\p"
	.string "Everyone, back to base.$"

PetalburgRiotCutscene_Text_14:
# 989 "data/maps/PetalburgCity/scripts.pory"
	.string "Good job, man. That'll send Devon a good\n"
	.string "message.$"

PetalburgRiotCutscene_Text_15:
# 991 "data/maps/PetalburgCity/scripts.pory"
	.string "Good job, girl. That'll send Devon a good\n"
	.string "message.$"

PetalburgRiotCutscene_Text_16:
# 993 "data/maps/PetalburgCity/scripts.pory"
	.string "But they'll most likely be back\n"
	.string "tomorrow, so we will need to as well.\p"
	.string "Counting on you for the next raid. See\n"
	.string "ya!$"

PetalburgRiotCutscene_Text_17:
# 1032 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Rebels{COLOR DARK_GRAY} got inside the center before\n"
	.string "leaving, and made a mess of things!$"

PetalburgRiotCutscene_Text_18:
# 1052 "data/maps/PetalburgCity/scripts.pory"
	.string "Ah, thank you, citizen! You're helping\n"
	.string "preserve peace in Petalburg.$"

PetalburgRiotCutscene_Text_19:
# 1057 "data/maps/PetalburgCity/scripts.pory"
	.string "Peace? There'll never be peace, until\n"
	.string "you stop bleeding this region dry!\p"
	.string "Down with Devon… and down with lapdogs\n"
	.string "like you!$"

PetalburgRiotCutscene_Text_20:
# 1067 "data/maps/PetalburgCity/scripts.pory"
	.string "You're lucky this guy showed up. But\n"
	.string "we'll be back tomorrow.$"

PetalburgRiotCutscene_Text_21:
# 1073 "data/maps/PetalburgCity/scripts.pory"
	.string "Back to base, everyone!$"

PetalburgRiotCutscene_Text_22:
# 1095 "data/maps/PetalburgCity/scripts.pory"
	.string "Thanks again, citizen. You have done a\n"
	.string "great deed for Hoenn today.\p"
	.string "The center was damaged, but we should\n"
	.string "still be able to offer our services.\p"
	.string "However, we will need to increase the\n"
	.string "healing prices to compensate for the\l"
	.string "damages…\p"
	.string "Not to mention, the Rebels will surely\n"
	.string "be back tomorrow. So I hope we can\l"
	.string "count with your continued assistance.\p"
	.string "Farewell now, and take care in this\n"
	.string "dangerous city.$"

PetalburgRiotCutscene_Text_23:
# 1160 "data/maps/PetalburgCity/scripts.pory"
	.string "What? Don't get in the way, you\n"
	.string "meddlesome loser!$"

PetalburgRiotCutscene_Text_24:
# 1170 "data/maps/PetalburgCity/scripts.pory"
	.string "You would challenge us both? That is\n"
	.string "true anarchy...$"

PetalburgRiotCutscene_Text_25:
# 1176 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR BLUE}I cannot allow it!\n"
	.string "{COLOR RED}Piss off!$"

PetalburgRiotCutscene_Text_26:
# 1204 "data/maps/PetalburgCity/scripts.pory"
	.string "He defeated both admins...! Who's that\n"
	.string "trainer?$"

PetalburgRiotCutscene_Text_27:
# 1206 "data/maps/PetalburgCity/scripts.pory"
	.string "She defeated both admins...! Who's that\n"
	.string "trainer?$"

PetalburgRiotCutscene_Text_28:
# 1218 "data/maps/PetalburgCity/scripts.pory"
	.string "Your feat seems to have defused the\n"
	.string "situation. To avoid new escalation...$"

PetalburgRiotCutscene_Text_29:
# 1227 "data/maps/PetalburgCity/scripts.pory"
	.string "I propose a truce, and a compromise.\p"
	.string "To match the standard of living in\n"
	.string "{COLOR GREEN}Petalburg{COLOR DARK_GRAY}, the healing fees in this\l"
	.string "Devon Center will have a 25% discount.\p"
	.string "On the condition, however...\p"
	.string "That you Rebels repair the damage you\n"
	.string "just caused.\p"
	.string "Surely this is a reasonable deal.$"

PetalburgRiotCutscene_Text_30:
# 1242 "data/maps/PetalburgCity/scripts.pory"
	.string "Counter offer... make it a 50% discount,\n"
	.string "or we will make the damage worse.$"

PetalburgRiotCutscene_Text_31:
# 1250 "data/maps/PetalburgCity/scripts.pory"
	.string "Hmpf... you negotiate well, for a\n"
	.string "criminal. Very well.\p"
	.string "Thank you, trainer, for helping us\n"
	.string "arrive at this truce.\p"
	.string "It is far from ideal, but it will suffice\n"
	.string "for now.$"

PetalburgRiotCutscene_Text_32:
# 1258 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR BLUE}Grunts, to base!\n"
	.string "{COLOR RED}Pack it up, everyone!$"

PetalburgRiotBatter_Text_0:
# 1368 "data/maps/PetalburgCity/scripts.pory"
	.string "Damn Devon Center windows - they're\n"
	.string "tougher than an Aggron! GYAAAAA!$"

PetalburgRiotRebelwithSign_Text_0:
# 1376 "data/maps/PetalburgCity/scripts.pory"
	.string "DOWN WITH DEVON! DOWN WITH DEVON!$"

PetalburgRiotInjuredRebel_Text_0:
# 1384 "data/maps/PetalburgCity/scripts.pory"
	.string "Tsk… battle without potions next time,\n"
	.string "and we'll see who wins! Corpo scum!$"

PetalburgRiotArrestingDevon_Text_0:
# 1392 "data/maps/PetalburgCity/scripts.pory"
	.string "Stay down, for your own good! You are\n"
	.string "under arrest!$"

PetalburgRiotInjuredDevon_Text_0:
# 1400 "data/maps/PetalburgCity/scripts.pory"
	.string "Ugh… Just a little break, and I'll give\n"
	.string "that hoodlum with the bat some…!$"

PetalburgRiotLowerRebel_Text_0:
# 1408 "data/maps/PetalburgCity/scripts.pory"
	.string "Get it through your head, you\n"
	.string "thick-skulled lapdog!\p"
	.string "We want no bridges, no Safemon, and no\n"
	.string "shady corpos messing around!$"

PetalburgRiotLowerDevon_Text_0:
# 1417 "data/maps/PetalburgCity/scripts.pory"
	.string "Stop it! Why are you Rebels so\n"
	.string "ungrateful?\p"
	.string "Devon wants to rebuild this area, and\n"
	.string "all you do is get in the way!$"

PetalburgArcadeGuard1_Text_0:
# 1426 "data/maps/PetalburgCity/scripts.pory"
	.string "No games for you right now, kid. Arcade\n"
	.string "is off limits.$"

PetalburgArcadeGuardMaku_Text_0:
# 1436 "data/maps/PetalburgCity/scripts.pory"
	.string "Uu-ooh!$"

PetalburgArcadeGuard2_Text_0:
# 1446 "data/maps/PetalburgCity/scripts.pory"
	.string "I mean, a single trainer kicked them off\n"
	.string "the warehouse...\p"
	.string "Pfft, Huey's crew is pathetic. Should\n"
	.string "have sent us intead.$"

PetalburgArcadeGuard3_Text_0:
# 1455 "data/maps/PetalburgCity/scripts.pory"
	.string "They're reporting to the boss now. Them\n"
	.string "losers gonna demoted to guard duty.$"

PetalburgArcadeGuardsGoAway_Text_0:
# 1466 "data/maps/PetalburgCity/scripts.pory"
	.string "Hm? Arcade's off limits, kid. We're on\n"
	.string "high alert.$"

PetalburgSmokerMilitia_Text_0:
# 1481 "data/maps/PetalburgCity/scripts.pory"
	.string "I'll never catch up with the rest if I\n"
	.string "keep smoking...\p"
	.string "Here, take this from me!$"

PetalburgSmokerMilitia_Text_1:
# 1486 "data/maps/PetalburgCity/scripts.pory"
	.string "... I mean, I already lighted this one, so\n"
	.string "may as well smoke it.\p"
	.string "And I also got some matches, it'd be a\n"
	.string "waste not to use them.$"

PetalburgMilitiaSnackGuy_Text_0:
# 1505 "data/maps/PetalburgCity/scripts.pory"
	.string "HIII-YA! HIII-YA! Arf, arf...\p"
	.string "When doing exercise, gotta keep\n"
	.string "hydrated! Here, have this!$"

PetalburgMilitiaSnackGuy_Text_1:
# 1509 "data/maps/PetalburgCity/scripts.pory"
	.string "HIII-YA! HIII-YA! Arf, arf...\p"
	.string "Nothing like an energy bar to keep\n"
	.string "energy up! Here, have one!$"

PetalburgMilitiaSnackGuy_Text_2:
# 1516 "data/maps/PetalburgCity/scripts.pory"
	.string "Thanks for cheering us up! Come back\n"
	.string "tomorrow too! HIII-YA!$"

PetalburgMilitiaLeftGuy_Text_0:
# 1526 "data/maps/PetalburgCity/scripts.pory"
	.string "The war showed us Pokémon can't be\n"
	.string "trusted, and Safemon are useless.\p"
	.string "So what can you rely on to protect\n"
	.string "yourself these days?\p"
	.string "That's right - your BODY! WAYAAAA!$"

PetalburgMilitiaRightGuy_Text_0:
# 1535 "data/maps/PetalburgCity/scripts.pory"
	.string "If you want to join us, speak with\n"
	.string "Musashi-sensei! HIII-YAAH!$"

PetalburgMilitiaRightGuy_Text_1:
# 1539 "data/maps/PetalburgCity/scripts.pory"
	.string "Seeing you spar againt Musashi-sensei\n"
	.string "was so inspiring! HII-YAAH!$"

PetalburgMartialArtsSensei_Text_0:
# 1554 "data/maps/PetalburgCity/scripts.pory"
	.string "Remember. Martial arts are supposed to\n"
	.string "quell conflict, not fuel it.\p"
	.string "Those who use power wrongly... they risk\n"
	.string "being destroyed by it.$"

PetalburgMartialArtsSensei_Text_1:
# 1561 "data/maps/PetalburgCity/scripts.pory"
	.string "That's it - control your breathing!\n"
	.string "Watch your forms!\p"
	.string "It's still soon for a break!$"

PetalburgMartialArtsSensei_Text_2:
# 1568 "data/maps/PetalburgCity/scripts.pory"
	.string "Hmm? Come to join the lesson, young\n"
	.string "man?$"

PetalburgMartialArtsSensei_Text_3:
# 1570 "data/maps/PetalburgCity/scripts.pory"
	.string "Hmm? Come to join the lesson, young\n"
	.string "woman?$"

PetalburgMartialArtsSensei_Text_4:
# 1573 "data/maps/PetalburgCity/scripts.pory"
	.string "Hmm… I see it in that somber gaze you\n"
	.string "try to hide.\p"
	.string "You were a soldier. But you were never a\n"
	.string "warrior. And now you are neither.\p"
	.string "So why are you here? Do you wish for\n"
	.string "strength?$"

PetalburgMartialArtsSensei_Text_5:
# 1577 "data/maps/PetalburgCity/scripts.pory"
	.string "Yes$"

PetalburgMartialArtsSensei_Text_6:
# 1577 "data/maps/PetalburgCity/scripts.pory"
	.string "No$"

PetalburgMartialArtsSensei_Text_7:
# 1580 "data/maps/PetalburgCity/scripts.pory"
	.string "Very well... if you change your mind, we\n"
	.string "train here during the day.$"

PetalburgMartialArtsSensei_Text_8:
# 1586 "data/maps/PetalburgCity/scripts.pory"
	.string "And what would you use said strength\n"
	.string "for?$"

PetalburgMartialArtsSensei_Text_9:
# 1588 "data/maps/PetalburgCity/scripts.pory"
	.string "To defend myself$"

PetalburgMartialArtsSensei_Text_10:
# 1589 "data/maps/PetalburgCity/scripts.pory"
	.string "To accomplish my goals$"

PetalburgMartialArtsSensei_Text_11:
# 1590 "data/maps/PetalburgCity/scripts.pory"
	.string "To protect others$"

PetalburgMartialArtsSensei_Text_12:
# 1591 "data/maps/PetalburgCity/scripts.pory"
	.string "I don't know$"

PetalburgMartialArtsSensei_Text_13:
# 1594 "data/maps/PetalburgCity/scripts.pory"
	.string "I see. You have suffered harm - you are\n"
	.string "naturally afraid of more...$"

PetalburgMartialArtsSensei_Text_14:
# 1597 "data/maps/PetalburgCity/scripts.pory"
	.string "Your goals? Self-growth, perchance?\n"
	.string "Some manner of revenge? I hope not...$"

PetalburgMartialArtsSensei_Text_15:
# 1600 "data/maps/PetalburgCity/scripts.pory"
	.string "A worthy pursuit. But that, young one,\n"
	.string "often requires more resolve than\l"
	.string "strength...$"

PetalburgMartialArtsSensei_Text_16:
# 1604 "data/maps/PetalburgCity/scripts.pory"
	.string "Ah... you are honest, if nothing else.\n"
	.string "Sometimes we ignore why we are drawn to\l"
	.string "something.$"

PetalburgMartialArtsSensei_Text_17:
# 1608 "data/maps/PetalburgCity/scripts.pory"
	.string "Stand over there. I will impart a lesson\n"
	.string "to you.$"

PetalburgMartialArtsSensei_Text_18:
# 1640 "data/maps/PetalburgCity/scripts.pory"
	.string "True martial arts is not about\n"
	.string "vanquising your opponent's strength\l"
	.string "with your own.\p"
	.string "It's about redirecting said strenght\n"
	.string "towards a peaceful conclusion.\p"
	.string "Since ancient times, people have learnt\n"
	.string "to do this from Pokémon, which do this\l"
	.string "instinctively with moves like {COLOR GREEN} Counter{COLOR DARK_GRAY}.\p"
	.string "I will now teach you said move. Now, I\n"
	.string "wish you to strike me.$"

PetalburgMartialArtsSensei_Text_19:
# 1655 "data/maps/PetalburgCity/scripts.pory"
	.string "Hoho… fear not. Looks can be deceiving.\n"
	.string "And that goes for both of us…\p"
	.string "Do not hesitate. Strike me!$"

PetalburgMartialArtsSensei_Text_20:
# 1662 "data/maps/PetalburgCity/scripts.pory"
	.string "Strike with crutch$"

PetalburgMartialArtsSensei_Text_21:
# 1663 "data/maps/PetalburgCity/scripts.pory"
	.string "Low kick$"

PetalburgMartialArtsSensei_Text_22:
# 1668 "data/maps/PetalburgCity/scripts.pory"
	.string "Kick$"

PetalburgMartialArtsSensei_Text_23:
# 1669 "data/maps/PetalburgCity/scripts.pory"
	.string "Punch$"

PetalburgMartialArtsSensei_Text_24:
# 1699 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}The old man deflects the hit, and\n"
	.string "returns the blow!$"

PetalburgMartialArtsSensei_Text_25:
# 1704 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This was not a clash of your force\n"
	.string "against mine.\p"
	.string "It was a single motion, where your own\n"
	.string "blow turned against you.\p"
	.string "This is the secret of the move {COLOR GREEN}Counter{COLOR DARK_GRAY}.\p"
	.string "Now, go back to your spot.$"

PetalburgMartialArtsSensei_Text_26:
# 1713 "data/maps/PetalburgCity/scripts.pory"
	.string "I want you to try performing the move\n"
	.string "now. Get ready!$"

PetalburgMartialArtsSensei_Text_27:
# 1724 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}The old man draws near with great speed\n"
	.string "to strike!$"

PetalburgMartialArtsSensei_Text_28:
# 1730 "data/maps/PetalburgCity/scripts.pory"
	.string "Kick as he comes$"

PetalburgMartialArtsSensei_Text_29:
# 1731 "data/maps/PetalburgCity/scripts.pory"
	.string "Dodge and punch back$"

PetalburgMartialArtsSensei_Text_30:
# 1732 "data/maps/PetalburgCity/scripts.pory"
	.string "Trip him with crutch and strike back$"

PetalburgMartialArtsSensei_Text_31:
# 1740 "data/maps/PetalburgCity/scripts.pory"
	.string "Block with arm and punch back$"

PetalburgMartialArtsSensei_Text_32:
# 1741 "data/maps/PetalburgCity/scripts.pory"
	.string "Dodge and kick back$"

PetalburgMartialArtsSensei_Text_33:
# 1749 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}The old man dodges nimbly and strikes\n"
	.string "{PLAYER}!$"

PetalburgMartialArtsSensei_Text_34:
# 1754 "data/maps/PetalburgCity/scripts.pory"
	.string "That is not the way. You met my force\n"
	.string "with your own force.\p"
	.string "That is how the Hoenn army must have\n"
	.string "taught you....\p"
	.string "You must not think like a mere soldier -\n"
	.string "think like a warrior!\p"
	.string "Try and use my own motion against me.\n"
	.string "Again!\p"
	.string "{COLOR GREEN}The old man attempts to strike again!$"

PetalburgMartialArtsSensei_Text_35:
# 1767 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} is unable to dodge the old\n"
	.string "man's strike!$"

PetalburgMartialArtsSensei_Text_36:
# 1772 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR DARK_GRAY}You understood the principle... but you\n"
	.string "failed to understand your limits.$"

PetalburgMartialArtsSensei_Text_37:
# 1776 "data/maps/PetalburgCity/scripts.pory"
	.string "Those crutches you need for support -\n"
	.string "they rob you of your agility.\p"
	.string "However, they may also be turned to\n"
	.string "weapons at any moment. Again!\p"
	.string "{COLOR GREEN}The old man attempts to strike again!$"

PetalburgMartialArtsSensei_Text_38:
# 1783 "data/maps/PetalburgCity/scripts.pory"
	.string "You have only one able hand to block,\n"
	.string "while I have two to strike you.\p"
	.string "Think of what else you may leverage\n"
	.string "against me. Again!\p"
	.string "{COLOR GREEN}The old man attempts to strike again!$"

PetalburgMartialArtsSensei_Text_39:
# 1806 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} has successfuly countered\n"
	.string "the attack!$"

PetalburgMartialArtsSensei_Text_40:
# 1808 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} learnt the move Counter!$"

PetalburgMartialArtsSensei_Text_41:
# 1813 "data/maps/PetalburgCity/scripts.pory"
	.string "Excellent! Not only did you used my own\n"
	.string "move against me...\p"
	.string "You also understood your own\n"
	.string "limitations.\p"
	.string "You have potential as a martial artist.$"

PetalburgMartialArtsSensei_Text_42:
# 1847 "data/maps/PetalburgCity/scripts.pory"
	.string "I hope you never come into peril, and\n"
	.string "need to use {COLOR GREEN}Counter{COLOR DARK_GRAY}...\p"
	.string "But if you do, and feel yourself in need\n"
	.string "of even more training...\p"
	.string "I would be happy to be your teacher.\n"
	.string "Now, take care out there.$"

ArcadeLotFuelScooperTruck1Pointer_Text_0:
# 1892 "data/maps/PetalburgCity/scripts.pory"
	.string "This vehicle might have fuel... but this\n"
	.string "is not the spot to scoop it from.$"

ArcadeLotFuelScooperTruck1_Text_0:
# 1905 "data/maps/PetalburgCity/scripts.pory"
	.string "I've already scoped fuel from this\n"
	.string "truck. Its tank is empty.$"

ArcadeLotFuelScooperTruck1_Text_1:
# 1913 "data/maps/PetalburgCity/scripts.pory"
	.string "This vehicle might have fuel... but the\n"
	.string "{COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY}'s tank is full!\p"
	.string "I should take this to the manager of\n"
	.string "{COLOR GREEN}Petalburg's Hardware Store.$"

ArcadeLotFuelScooperTruck1_Text_2:
# 1917 "data/maps/PetalburgCity/scripts.pory"
	.string "This vehicle might have fuel...\n"
	.string "Use the {COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY}?$"

ArcadeLotFuelScooperTruck1_Text_3:
# 1937 "data/maps/PetalburgCity/scripts.pory"
	.string "The {COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY} tank is now a quarter\n"
	.string "full!$"

ArcadeLotFuelScooperTruck1_Text_4:
# 1941 "data/maps/PetalburgCity/scripts.pory"
	.string "The {COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY} tank is now half full!$"

ArcadeLotFuelScooperTruck1_Text_5:
# 1945 "data/maps/PetalburgCity/scripts.pory"
	.string "The {COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY} tank is now three\n"
	.string "quarters full!$"

ArcadeLotFuelScooperTruck1_Text_6:
# 1950 "data/maps/PetalburgCity/scripts.pory"
	.string "The {COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY} tank is now completely\n"
	.string "full!$"

ArcadeLotFuelScooperTruck1_Text_7:
# 1975 "data/maps/PetalburgCity/scripts.pory"
	.string "You thief! That's my hard-earned\n"
	.string "gasoline you're taking!$"

ArcadeLotFuelScooperTruck1_Text_8:
# 1978 "data/maps/PetalburgCity/scripts.pory"
	.string "Wait a minute - that {COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY}!\n"
	.string "You're working for the Hardware Store!\p"
	.string "Those jerks have been sending idiots\n"
	.string "like you to steal fuel for them...\p"
	.string "So they can resell it to the same people\n"
	.string "they're stealing from!\p"
	.string "Bah, I ain't servicing there anymore,\n"
	.string "even if I have to walk everywhere.\p"
	.string "I hope whatever they're paying you for\n"
	.string "this is worh it! Piss off!$"

PetalburgTrendyPhraseGuitarist_Text_0:
# 2005 "data/maps/PetalburgCity/scripts.pory"
	.string "Listen to my new song... {STR_VAR_1}!\p"
	.string "What, you don't know the phrase? It's\n"
	.string "like, the Rebel Zone's slogan right now!\p"
	.string "{STR_VAR_1}!!!!!$"

Dawson_Intro::
# 1335 "data/maps/PetalburgCity/scripts.pory"
	.string "Willneverplay$"

Georgia_Intro::
# 1338 "data/maps/PetalburgCity/scripts.pory"
	.string "Willneverplay$"

Dawson_Outro::
# 1341 "data/maps/PetalburgCity/scripts.pory"
	.string "And thus Hoenn plunges further into\nchaos...$"

Georgia_Outro::
# 1344 "data/maps/PetalburgCity/scripts.pory"
	.string "Tsk... we'll never give up!!$"

Georgia_MultiOutro::
# 1347 "data/maps/PetalburgCity/scripts.pory"
	.string "Tsk... only lost cause this guy\ndragged me down!!$"

Dawson_MultiOutro::
# 1350 "data/maps/PetalburgCity/scripts.pory"
	.string "You are quite strong. You would make\nan excellent Devon Grunt.$"
