# 2 "data/maps/PetalburgCity/scripts.pory"

# 3 "data/maps/PetalburgCity/scripts.pory"

# 4 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 5 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
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
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 27 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 28 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 29 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 31 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 32 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 33 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 34 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 35 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 36 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 37 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 38 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 39 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 40 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 41 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 42 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 43 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 44 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 45 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 46 "data/maps/PetalburgCity/scripts.pory"
	end
# 47 "data/maps/PetalburgCity/scripts.pory"

# 48 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 49 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 50 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 51 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 52 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 53 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 55 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 56 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 57 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 58 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 59 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 60 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 61 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 62 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 63 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 64 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 65 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 66 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 67 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 68 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 69 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 70 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 71 "data/maps/PetalburgCity/scripts.pory"
	end
# 72 "data/maps/PetalburgCity/scripts.pory"

# 73 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 74 "data/maps/PetalburgCity/scripts.pory"
	lock
# 75 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 76 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 77 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 78 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 79 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 80 "data/maps/PetalburgCity/scripts.pory"
	release
# 81 "data/maps/PetalburgCity/scripts.pory"
	end
# 82 "data/maps/PetalburgCity/scripts.pory"

# 83 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 84 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 85 "data/maps/PetalburgCity/scripts.pory"
	end
# 86 "data/maps/PetalburgCity/scripts.pory"

# 87 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 88 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 89 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 90 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 92 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 93 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 94 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 95 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 96 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 97 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 98 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 99 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 100 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 101 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 102 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 103 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 104 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 105 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 106 "data/maps/PetalburgCity/scripts.pory"

# 107 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 110 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 111 "data/maps/PetalburgCity/scripts.pory"

# 112 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 113 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 130 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 131 "data/maps/PetalburgCity/scripts.pory"

# 132 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 134 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 135 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 136 "data/maps/PetalburgCity/scripts.pory"

# 137 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 138 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 171 "data/maps/PetalburgCity/scripts.pory"

# 172 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 173 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 204 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 206 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 207 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 209 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 210 "data/maps/PetalburgCity/scripts.pory"

# 211 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 212 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 213 "data/maps/PetalburgCity/scripts.pory"
	end
# 214 "data/maps/PetalburgCity/scripts.pory"

# 215 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 216 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 217 "data/maps/PetalburgCity/scripts.pory"
	end
# 218 "data/maps/PetalburgCity/scripts.pory"

# 219 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 220 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 221 "data/maps/PetalburgCity/scripts.pory"
	end
# 222 "data/maps/PetalburgCity/scripts.pory"

# 223 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 224 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 225 "data/maps/PetalburgCity/scripts.pory"
	end
# 226 "data/maps/PetalburgCity/scripts.pory"

# 227 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 228 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 229 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 230 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 231 "data/maps/PetalburgCity/scripts.pory"
	end
# 232 "data/maps/PetalburgCity/scripts.pory"

# 233 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 234 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 235 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 236 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 237 "data/maps/PetalburgCity/scripts.pory"
	end
# 238 "data/maps/PetalburgCity/scripts.pory"

# 239 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 240 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 241 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 242 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 243 "data/maps/PetalburgCity/scripts.pory"
	end
# 244 "data/maps/PetalburgCity/scripts.pory"

# 245 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 246 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 247 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 248 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 249 "data/maps/PetalburgCity/scripts.pory"
	end
# 250 "data/maps/PetalburgCity/scripts.pory"

# 251 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 252 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 253 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 254 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 255 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 256 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 257 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 258 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 259 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 260 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 261 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 262 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 263 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 264 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 265 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 266 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 267 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 268 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 269 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 270 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 271 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 272 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 273 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 274 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 275 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 276 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 277 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 278 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 279 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 280 "data/maps/PetalburgCity/scripts.pory"
	end
# 281 "data/maps/PetalburgCity/scripts.pory"

# 282 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 283 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 284 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 285 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 286 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 287 "data/maps/PetalburgCity/scripts.pory"
	return
# 288 "data/maps/PetalburgCity/scripts.pory"

# 289 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 290 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 291 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgCity/scripts.pory"
	return
# 293 "data/maps/PetalburgCity/scripts.pory"

# 294 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 295 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 296 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 297 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 298 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 299 "data/maps/PetalburgCity/scripts.pory"
	return
# 300 "data/maps/PetalburgCity/scripts.pory"

# 301 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 302 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 303 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 304 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 305 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/PetalburgCity/scripts.pory"
	return
# 307 "data/maps/PetalburgCity/scripts.pory"

# 308 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 309 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 310 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 311 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/PetalburgCity/scripts.pory"
	return
# 313 "data/maps/PetalburgCity/scripts.pory"

# 314 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 315 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 316 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 317 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 318 "data/maps/PetalburgCity/scripts.pory"
	return
# 319 "data/maps/PetalburgCity/scripts.pory"

# 320 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 321 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 322 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 323 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 324 "data/maps/PetalburgCity/scripts.pory"
	return
# 325 "data/maps/PetalburgCity/scripts.pory"

# 326 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 327 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 329 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity/scripts.pory"
	return
# 331 "data/maps/PetalburgCity/scripts.pory"

# 332 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 333 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 334 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 335 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 336 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 337 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 338 "data/maps/PetalburgCity/scripts.pory"

# 339 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 340 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 341 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 342 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 343 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 344 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 345 "data/maps/PetalburgCity/scripts.pory"

# 346 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 347 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 348 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 349 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 350 "data/maps/PetalburgCity/scripts.pory"

# 351 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 352 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 353 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 356 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 357 "data/maps/PetalburgCity/scripts.pory"

# 358 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 364 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 365 "data/maps/PetalburgCity/scripts.pory"

# 366 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 377 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 378 "data/maps/PetalburgCity/scripts.pory"

# 379 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 393 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 394 "data/maps/PetalburgCity/scripts.pory"

# 395 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 406 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 407 "data/maps/PetalburgCity/scripts.pory"

# 408 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 420 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 421 "data/maps/PetalburgCity/scripts.pory"

# 422 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 435 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 436 "data/maps/PetalburgCity/scripts.pory"

# 437 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 447 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 448 "data/maps/PetalburgCity/scripts.pory"

# 449 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 450 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 451 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 462 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 463 "data/maps/PetalburgCity/scripts.pory"

# 464 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 474 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 475 "data/maps/PetalburgCity/scripts.pory"

# 476 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 487 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 488 "data/maps/PetalburgCity/scripts.pory"

# 489 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 490 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 491 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 492 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 493 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 494 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 495 "data/maps/PetalburgCity/scripts.pory"
	end
# 496 "data/maps/PetalburgCity/scripts.pory"

# 497 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 498 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 499 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 500 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 501 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 502 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 503 "data/maps/PetalburgCity/scripts.pory"
	end
# 504 "data/maps/PetalburgCity/scripts.pory"

# 505 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 506 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 507 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 508 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 509 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 510 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 511 "data/maps/PetalburgCity/scripts.pory"
	end
# 512 "data/maps/PetalburgCity/scripts.pory"

# 513 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 514 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 515 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 516 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 517 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 518 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 519 "data/maps/PetalburgCity/scripts.pory"
	end
# 520 "data/maps/PetalburgCity/scripts.pory"

# 521 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 522 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 523 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 525 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 526 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 527 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 528 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 529 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 530 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 532 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 534 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 535 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 536 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 537 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 539 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 540 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 541 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 542 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 544 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 545 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 546 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 547 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 548 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 549 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 550 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 551 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 552 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 553 "data/maps/PetalburgCity/scripts.pory"
	end
# 554 "data/maps/PetalburgCity/scripts.pory"

# 555 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 556 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 557 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 558 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/PetalburgCity/scripts.pory"
	return
# 560 "data/maps/PetalburgCity/scripts.pory"

# 561 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 562 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 563 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 564 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/PetalburgCity/scripts.pory"
	return
# 566 "data/maps/PetalburgCity/scripts.pory"

# 567 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 568 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 569 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 570 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/PetalburgCity/scripts.pory"
	return
# 572 "data/maps/PetalburgCity/scripts.pory"

# 573 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 574 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 575 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 576 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 577 "data/maps/PetalburgCity/scripts.pory"
	return
# 578 "data/maps/PetalburgCity/scripts.pory"

# 579 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 580 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 581 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 582 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 583 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 584 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 585 "data/maps/PetalburgCity/scripts.pory"

# 586 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 587 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 588 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 589 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 590 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 591 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 592 "data/maps/PetalburgCity/scripts.pory"

# 593 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 594 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 603 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 607 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 608 "data/maps/PetalburgCity/scripts.pory"

# 609 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 610 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 611 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 612 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 613 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 614 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 617 "data/maps/PetalburgCity/scripts.pory"

# 618 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 627 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 628 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 630 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 631 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 632 "data/maps/PetalburgCity/scripts.pory"

# 633 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 634 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 635 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 636 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 637 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 640 "data/maps/PetalburgCity/scripts.pory"

# 641 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 654 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 655 "data/maps/PetalburgCity/scripts.pory"

# 656 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 657 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 659 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 660 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 663 "data/maps/PetalburgCity/scripts.pory"

# 664 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_left
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 678 "data/maps/PetalburgCity/scripts.pory"

# 679 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 680 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 682 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 683 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 686 "data/maps/PetalburgCity/scripts.pory"

# 687 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 688 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 689 "data/maps/PetalburgCity/scripts.pory"
	end
# 690 "data/maps/PetalburgCity/scripts.pory"

# 691 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 692 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 693 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 694 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 695 "data/maps/PetalburgCity/scripts.pory"

# 696 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 697 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 698 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 699 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 700 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 701 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 702 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 703 "data/maps/PetalburgCity/scripts.pory"

# 704 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 705 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 706 "data/maps/PetalburgCity/scripts.pory"

# 707 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 708 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 710 "data/maps/PetalburgCity/scripts.pory"

# 711 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 712 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 717 "data/maps/PetalburgCity/scripts.pory"

# 718 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 719 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 723 "data/maps/PetalburgCity/scripts.pory"

# 724 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 728 "data/maps/PetalburgCity/scripts.pory"

# 729 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 732 "data/maps/PetalburgCity/scripts.pory"

# 733 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 735 "data/maps/PetalburgCity/scripts.pory"

# 736 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 738 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 740 "data/maps/PetalburgCity/scripts.pory"

# 741 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 742 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 747 "data/maps/PetalburgCity/scripts.pory"

# 748 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 750 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_MapScripts::
# 757 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicPetalburgCity
# 758 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicPetalburgCity
	.byte 0


DayNightMusicPetalburgCity::
# 762 "data/maps/PetalburgCity/scripts.pory"
	gettimeofday
# 763 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicPetalburgCity_2
DayNightMusicPetalburgCity_1:
# 766 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicPetalburgCity_5
DayNightMusicPetalburgCity_4:
# 769 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicPetalburgCity_8
DayNightMusicPetalburgCity_7:
# 772 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicPetalburgCity_11
DayNightMusicPetalburgCity_10:
# 776 "data/maps/PetalburgCity/scripts.pory"
enddaynightpetalburgcity:
	return

DayNightMusicPetalburgCity_2:
# 764 "data/maps/PetalburgCity/scripts.pory"
	goto enddaynightpetalburgcity
	goto DayNightMusicPetalburgCity_1

DayNightMusicPetalburgCity_5:
# 767 "data/maps/PetalburgCity/scripts.pory"
	goto enddaynightpetalburgcity
	goto DayNightMusicPetalburgCity_4

DayNightMusicPetalburgCity_8:
# 770 "data/maps/PetalburgCity/scripts.pory"
	goto enddaynightpetalburgcity
	goto DayNightMusicPetalburgCity_7

DayNightMusicPetalburgCity_11:
# 773 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_PANULACAVE, TRUE
# 774 "data/maps/PetalburgCity/scripts.pory"
	goto enddaynightpetalburgcity
	goto DayNightMusicPetalburgCity_10

