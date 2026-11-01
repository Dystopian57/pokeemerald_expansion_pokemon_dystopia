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
# 752 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicPetalburgCity
# 753 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicPetalburgCity
# 754 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgRiotSpawn
# 755 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgRiotSpawn
# 756 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightMusicPetalburgCity
	.byte 0


DayNightMusicPetalburgCity::
# 760 "data/maps/PetalburgCity/scripts.pory"
	gettimeofday
# 761 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicPetalburgCity_2
DayNightMusicPetalburgCity_1:
# 764 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicPetalburgCity_5
DayNightMusicPetalburgCity_4:
# 767 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicPetalburgCity_8
DayNightMusicPetalburgCity_7:
# 770 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicPetalburgCity_11
DayNightMusicPetalburgCity_10:
# 774 "data/maps/PetalburgCity/scripts.pory"
enddaynightpetalburgcity:
	return

DayNightMusicPetalburgCity_2:
# 762 "data/maps/PetalburgCity/scripts.pory"
	goto enddaynightpetalburgcity
	goto DayNightMusicPetalburgCity_1

DayNightMusicPetalburgCity_5:
# 765 "data/maps/PetalburgCity/scripts.pory"
	goto enddaynightpetalburgcity
	goto DayNightMusicPetalburgCity_4

DayNightMusicPetalburgCity_8:
# 768 "data/maps/PetalburgCity/scripts.pory"
	goto enddaynightpetalburgcity
	goto DayNightMusicPetalburgCity_7

DayNightMusicPetalburgCity_11:
# 771 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_PANULACAVE, TRUE
# 772 "data/maps/PetalburgCity/scripts.pory"
	goto enddaynightpetalburgcity
	goto DayNightMusicPetalburgCity_10


PetalburgRiotSpawn::
# 779 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset petalburgriotstopped, PetalburgRiotSpawn_2
PetalburgRiotSpawn_1:
# 784 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgRiotSpawn_5
PetalburgRiotSpawn_4:
# 787 "data/maps/PetalburgCity/scripts.pory"
	callnative UpdateFollowingPokemon
	return

PetalburgRiotSpawn_2:
# 780 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
# 781 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriothidecivilians
# 782 "data/maps/PetalburgCity/scripts.pory"
	clearflag petalburgriotstopped
	goto PetalburgRiotSpawn_1

PetalburgRiotSpawn_5:
# 785 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
	goto PetalburgRiotSpawn_4


PetalburgRiotRebelAdminStart::
# 798 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 1
	return


PetalburgRiotDevonAdminStart::
# 802 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 2
	return


PetalburgRiotDevonAdminStartLeave::
# 806 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
	return


PetalburgRiotRebelAdminStartLeave::
# 810 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
	return


PetalburgRiotDontblocktheway::
# 815 "data/maps/PetalburgCity/scripts.pory"
	lock
# 816 "data/maps/PetalburgCity/scripts.pory"
	random 2
# 817 "data/maps/PetalburgCity/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 819 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 820 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgRiotDontblocktheway_2
# 821 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgRiotDontblocktheway_3
	return

PetalburgRiotDontblocktheway_2:
# 820 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgRiotDontblockthewayRebel
	return

PetalburgRiotDontblocktheway_3:
# 821 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgRiotDontblockthewayDevon
	return


PetalburgRiotDontblockthewayRebel::
# 827 "data/maps/PetalburgCity/scripts.pory"
	lock
# 828 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 829 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 830 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotDontblockthewayRebel_Movement_0
# 831 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 832 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotDontblockthewayRebel_Text_0
# 833 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 834 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotDontblockthewayRebel_Movement_1
# 835 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 836 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotDontblockthewayDevon::
# 840 "data/maps/PetalburgCity/scripts.pory"
	lock
# 841 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 842 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 843 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotDontblockthewayRebel_Movement_0
# 844 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 845 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotDontblockthewayDevon_Text_0
# 846 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 847 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotDontblockthewayRebel_Movement_1
# 848 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 849 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotRebelLead::
# 853 "data/maps/PetalburgCity/scripts.pory"
	lock
# 854 "data/maps/PetalburgCity/scripts.pory"
	applymovement 46, PetalburgRiotRebelLead_Movement_0
# 855 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 46
# 856 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_GLIGAR, CRY_MODE_NORMAL
# 857 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotRebelLead_Text_0
# 858 "data/maps/PetalburgCity/scripts.pory"
	applymovement 46, PetalburgRiotRebelLead_Movement_1
# 859 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 46
# 860 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotDevonLead::
# 864 "data/maps/PetalburgCity/scripts.pory"
	lock
# 865 "data/maps/PetalburgCity/scripts.pory"
	applymovement 45, PetalburgRiotRebelLead_Movement_0
# 866 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 45
# 867 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_ARYSTAL, CRY_MODE_NORMAL
# 868 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotDevonLead_Text_0
# 869 "data/maps/PetalburgCity/scripts.pory"
	applymovement 45, PetalburgRiotDevonLead_Movement_0
# 870 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 45
# 871 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotCutscene::
# 877 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 878 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 879 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 880 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_BOSSDRILLDOZER, TRUE
# 883 "data/maps/PetalburgCity/scripts.pory"
	special SpawnCameraObject
# 884 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 1
	goto_if_eq PetalburgRiotCutscene_2
PetalburgRiotCutscene_1:
# 887 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 2
	goto_if_eq PetalburgRiotCutscene_5
PetalburgRiotCutscene_4:
# 890 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 891 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgRiotCutscene_Movement_2
# 892 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 895 "data/maps/PetalburgCity/scripts.pory"
	special RemoveCameraObject
# 897 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_3
# 898 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_0
# 900 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 902 "data/maps/PetalburgCity/scripts.pory"
	playse SE_APPLAUSE
# 903 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_1
# 905 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_4
# 906 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_2
# 909 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 912 "data/maps/PetalburgCity/scripts.pory"
	playse SE_APPLAUSE
# 913 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_3
# 915 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_3
# 916 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_4
# 917 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 920 "data/maps/PetalburgCity/scripts.pory"
	playse SE_APPLAUSE
# 921 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_5
# 923 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_6
# 924 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PetalburgRiotCutscene_Text_7, PetalburgRiotCutscene_Text_8, PetalburgRiotCutscene_Text_9, PetalburgRiotCutscene_Text_10
# 926 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgRiotCutscene_8
PetalburgRiotCutscene_7:
# 1025 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgRiotCutscene_11
PetalburgRiotCutscene_10:
# 1119 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgRiotCutscene_17
PetalburgRiotCutscene_16:
# 1278 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PetalburgRiotCutscene_26
PetalburgRiotCutscene_25:
# 1285 "data/maps/PetalburgCity/scripts.pory"
endofpetalburgriotscript:
# 1287 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1288 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 1289 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1291 "data/maps/PetalburgCity/scripts.pory"
	gettimeofday
# 1292 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq PetalburgRiotCutscene_38
PetalburgRiotCutscene_37:
# 1295 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq PetalburgRiotCutscene_47
PetalburgRiotCutscene_46:
# 1298 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq PetalburgRiotCutscene_53
PetalburgRiotCutscene_52:
# 1301 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgRiotCutscene_59
PetalburgRiotCutscene_58:
# 1304 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgRiotCutscene_2:
# 885 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgRiotCutscene_Movement_0
	goto PetalburgRiotCutscene_1

PetalburgRiotCutscene_5:
# 888 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgRiotCutscene_Movement_1
	goto PetalburgRiotCutscene_4

PetalburgRiotCutscene_8:
# 927 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 1
	goto_if_eq PetalburgRiotCutscene_14
PetalburgRiotCutscene_13:
# 933 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 2
	goto_if_eq PetalburgRiotCutscene_23
PetalburgRiotCutscene_22:
# 938 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotRebelLead_Movement_1
# 939 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 940 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 941 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_7
# 942 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 943 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_11
# 944 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotRebelLead_Movement_1
# 945 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 946 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_4
# 947 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 948 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_12
# 950 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWSON, Dawson_Outro
# 953 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_4
# 954 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 958 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_13
# 960 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 962 "data/maps/PetalburgCity/scripts.pory"
	playse SE_FLEE
# 963 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 965 "data/maps/PetalburgCity/scripts.pory"
	removeobject 36
# 966 "data/maps/PetalburgCity/scripts.pory"
	removeobject 40
# 967 "data/maps/PetalburgCity/scripts.pory"
	removeobject 42
# 968 "data/maps/PetalburgCity/scripts.pory"
	removeobject 45
# 969 "data/maps/PetalburgCity/scripts.pory"
	removeobject 48
# 970 "data/maps/PetalburgCity/scripts.pory"
	removeobject 49
# 972 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 973 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 975 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_7
# 976 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_8
# 977 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 978 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 979 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgRiotCutscene_35
PetalburgRiotCutscene_34:
# 981 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgRiotCutscene_44
PetalburgRiotCutscene_43:
# 983 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_16
# 985 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 987 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 989 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_STRENGTH
# 990 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 991 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_STRENGTH
# 992 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 993 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_BRICK_BREAK
# 994 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 998 "data/maps/PetalburgCity/scripts.pory"
	removeobject 37
# 999 "data/maps/PetalburgCity/scripts.pory"
	removeobject 38
# 1000 "data/maps/PetalburgCity/scripts.pory"
	removeobject 39
# 1001 "data/maps/PetalburgCity/scripts.pory"
	removeobject 41
# 1002 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1003 "data/maps/PetalburgCity/scripts.pory"
	removeobject 50
# 1007 "data/maps/PetalburgCity/scripts.pory"
	addobject 9
# 1008 "data/maps/PetalburgCity/scripts.pory"
	addobject 10
# 1009 "data/maps/PetalburgCity/scripts.pory"
	addobject 11
# 1010 "data/maps/PetalburgCity/scripts.pory"
	addobject 15
# 1011 "data/maps/PetalburgCity/scripts.pory"
	addobject 51
# 1013 "data/maps/PetalburgCity/scripts.pory"
	clearflag rebelswonpetalburgriot
# 1014 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
# 1016 "data/maps/PetalburgCity/scripts.pory"
	clearflag petalburgriothidecivilians
# 1018 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1019 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1020 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_17
# 1022 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgriotscript
	goto PetalburgRiotCutscene_7

PetalburgRiotCutscene_11:
# 1026 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 1
	goto_if_eq PetalburgRiotCutscene_20
PetalburgRiotCutscene_19:
# 1032 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 2
	goto_if_eq PetalburgRiotCutscene_32
PetalburgRiotCutscene_31:
# 1036 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1037 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1038 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_7
# 1039 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1040 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_18
# 1041 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotDevonLead_Movement_0
# 1042 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1043 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_3
# 1044 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1045 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_19
# 1047 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GEORGIA, Georgia_Outro
# 1050 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_3
# 1051 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1055 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_20
# 1056 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1057 "data/maps/PetalburgCity/scripts.pory"
	playse SE_LEDGE
# 1058 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_11
# 1059 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1061 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_21
# 1063 "data/maps/PetalburgCity/scripts.pory"
	playse SE_FLEE
# 1064 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1066 "data/maps/PetalburgCity/scripts.pory"
	removeobject 37
# 1067 "data/maps/PetalburgCity/scripts.pory"
	removeobject 38
# 1068 "data/maps/PetalburgCity/scripts.pory"
	removeobject 39
# 1069 "data/maps/PetalburgCity/scripts.pory"
	removeobject 41
# 1070 "data/maps/PetalburgCity/scripts.pory"
	removeobject 48
# 1071 "data/maps/PetalburgCity/scripts.pory"
	removeobject 50
# 1072 "data/maps/PetalburgCity/scripts.pory"
	removeobject 43
# 1073 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1074 "data/maps/PetalburgCity/scripts.pory"
	removeobject 47
# 1075 "data/maps/PetalburgCity/scripts.pory"
	applymovement 49, PetalburgRiotCutscene_Movement_12
# 1077 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1078 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1080 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_7
# 1081 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_8
# 1082 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1083 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_22
# 1090 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1092 "data/maps/PetalburgCity/scripts.pory"
	removeobject 36
# 1093 "data/maps/PetalburgCity/scripts.pory"
	removeobject 40
# 1094 "data/maps/PetalburgCity/scripts.pory"
	removeobject 42
# 1095 "data/maps/PetalburgCity/scripts.pory"
	removeobject 49
# 1096 "data/maps/PetalburgCity/scripts.pory"
	removeobject 45
# 1097 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1098 "data/maps/PetalburgCity/scripts.pory"
	removeobject 48
# 1100 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
# 1102 "data/maps/PetalburgCity/scripts.pory"
	setflag devonwonpetalburgriot
# 1104 "data/maps/PetalburgCity/scripts.pory"
	addobject 9
# 1105 "data/maps/PetalburgCity/scripts.pory"
	addobject 10
# 1106 "data/maps/PetalburgCity/scripts.pory"
	addobject 11
# 1107 "data/maps/PetalburgCity/scripts.pory"
	addobject 15
# 1108 "data/maps/PetalburgCity/scripts.pory"
	addobject 51
# 1110 "data/maps/PetalburgCity/scripts.pory"
	clearflag petalburgriothidecivilians
# 1112 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1113 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1115 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgriotscript
	goto PetalburgRiotCutscene_10

PetalburgRiotCutscene_14:
# 928 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 929 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_3
# 930 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_3
	goto PetalburgRiotCutscene_13

PetalburgRiotCutscene_17:
# 1120 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1121 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 1
	goto_if_eq PetalburgRiotCutscene_29
PetalburgRiotCutscene_28:
# 1126 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 2
	goto_if_eq PetalburgRiotCutscene_41
PetalburgRiotCutscene_40:
# 1131 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1134 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1135 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotDontblockthewayRebel_Movement_0
# 1136 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1137 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_4
# 1139 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotDevonLead_Movement_0
# 1140 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1142 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_23
# 1144 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1145 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotDontblockthewayRebel_Movement_0
# 1146 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1147 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_3
# 1149 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotRebelLead_Movement_1
# 1150 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1152 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_24
# 1154 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_3
# 1155 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_4
# 1156 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1158 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_25
# 1159 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_two_trainers TRAINER_GEORGIA, Georgia_MultiOutro, TRAINER_DAWSON, Dawson_MultiOutro
# 1164 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1165 "data/maps/PetalburgCity/scripts.pory"
	applymovement 42, PetalburgRiotDontblockthewayRebel_Movement_0
# 1166 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1167 "data/maps/PetalburgCity/scripts.pory"
	applymovement 49, PetalburgRiotCutscene_Movement_17
# 1168 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1169 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1170 "data/maps/PetalburgCity/scripts.pory"
	applymovement 36, PetalburgRiotDontblockthewayRebel_Movement_0
# 1171 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1173 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1174 "data/maps/PetalburgCity/scripts.pory"
	applymovement 38, PetalburgRiotDontblockthewayRebel_Movement_0
# 1175 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1176 "data/maps/PetalburgCity/scripts.pory"
	applymovement 39, PetalburgRiotDontblockthewayRebel_Movement_0
# 1177 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1178 "data/maps/PetalburgCity/scripts.pory"
	applymovement 48, PetalburgRiotCutscene_Movement_17
# 1180 "data/maps/PetalburgCity/scripts.pory"
	playse SE_APPLAUSE
# 1183 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1184 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgRiotCutscene_50
PetalburgRiotCutscene_49:
# 1186 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgRiotCutscene_56
PetalburgRiotCutscene_55:
# 1190 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_4
# 1194 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 1195 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1196 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_CALM, TRUE
# 1198 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_28
# 1201 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1204 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_CALM, TRUE
# 1207 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_29
# 1215 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_3
# 1216 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_4
# 1217 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1219 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_30
# 1221 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_4
# 1222 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_3
# 1223 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1224 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_31
# 1227 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_3
# 1228 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1229 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_4
# 1230 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1232 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_32
# 1234 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1236 "data/maps/PetalburgCity/scripts.pory"
	removeobject 36
# 1237 "data/maps/PetalburgCity/scripts.pory"
	removeobject 40
# 1238 "data/maps/PetalburgCity/scripts.pory"
	removeobject 42
# 1239 "data/maps/PetalburgCity/scripts.pory"
	removeobject 49
# 1240 "data/maps/PetalburgCity/scripts.pory"
	removeobject 45
# 1241 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1242 "data/maps/PetalburgCity/scripts.pory"
	removeobject 48
# 1244 "data/maps/PetalburgCity/scripts.pory"
	removeobject 38
# 1245 "data/maps/PetalburgCity/scripts.pory"
	removeobject 39
# 1246 "data/maps/PetalburgCity/scripts.pory"
	removeobject 50
# 1248 "data/maps/PetalburgCity/scripts.pory"
	removeobject 47
# 1249 "data/maps/PetalburgCity/scripts.pory"
	removeobject 43
# 1250 "data/maps/PetalburgCity/scripts.pory"
	removeobject 37
# 1252 "data/maps/PetalburgCity/scripts.pory"
	removeobject 41
# 1256 "data/maps/PetalburgCity/scripts.pory"
	addobject 9
# 1257 "data/maps/PetalburgCity/scripts.pory"
	addobject 10
# 1258 "data/maps/PetalburgCity/scripts.pory"
	addobject 11
# 1259 "data/maps/PetalburgCity/scripts.pory"
	addobject 15
# 1260 "data/maps/PetalburgCity/scripts.pory"
	addobject 51
# 1262 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 3
# 1264 "data/maps/PetalburgCity/scripts.pory"
	setflag devonwonpetalburgriot
# 1265 "data/maps/PetalburgCity/scripts.pory"
	setflag rebelswonpetalburgriot
# 1267 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
# 1268 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotendedforgood
# 1269 "data/maps/PetalburgCity/scripts.pory"
	clearflag petalburgriothidecivilians
# 1271 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1273 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgriotscript
	goto PetalburgRiotCutscene_16

PetalburgRiotCutscene_20:
# 1027 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1028 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_9
# 1029 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_10
	goto PetalburgRiotCutscene_19

PetalburgRiotCutscene_23:
# 934 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 935 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_5
# 936 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_6
	goto PetalburgRiotCutscene_22

PetalburgRiotCutscene_26:
# 1280 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
# 1281 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgriotscript
	goto PetalburgRiotCutscene_25

PetalburgRiotCutscene_29:
# 1122 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_13
# 1123 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_14
	goto PetalburgRiotCutscene_28

PetalburgRiotCutscene_32:
# 1033 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_4
# 1034 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_4
	goto PetalburgRiotCutscene_31

PetalburgRiotCutscene_35:
# 979 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_14
	goto PetalburgRiotCutscene_34

PetalburgRiotCutscene_38:
# 1293 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_TEAMGRDUEL, TRUE
	goto PetalburgRiotCutscene_37

PetalburgRiotCutscene_41:
# 1127 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_15
# 1128 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_16
	goto PetalburgRiotCutscene_40

PetalburgRiotCutscene_44:
# 981 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_15
	goto PetalburgRiotCutscene_43

PetalburgRiotCutscene_47:
# 1296 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_TEAMGRDUEL, TRUE
	goto PetalburgRiotCutscene_46

PetalburgRiotCutscene_50:
# 1184 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_26
	goto PetalburgRiotCutscene_49

PetalburgRiotCutscene_53:
# 1299 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_PANULACAVE, TRUE
	goto PetalburgRiotCutscene_52

PetalburgRiotCutscene_56:
# 1186 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_27
	goto PetalburgRiotCutscene_55

PetalburgRiotCutscene_59:
# 1302 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_PANULACAVE, TRUE
	goto PetalburgRiotCutscene_58


PetalburgRiotBatter::
# 1330 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1331 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1333 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 2
# 1334 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 6
# 1335 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8006, 4
# 1336 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8007, 4
# 1337 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_STRENGTH
# 1338 "data/maps/PetalburgCity/scripts.pory"
	special ShakeCamera
# 1340 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotBatter_Text_0
# 1341 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotRebelwithSign::
# 1346 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1347 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1348 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotRebelwithSign_Text_0
# 1349 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotInjuredRebel::
# 1354 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1355 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1356 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotInjuredRebel_Text_0
# 1357 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotArrestingDevon::
# 1362 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1363 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1364 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotArrestingDevon_Text_0
# 1365 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotInjuredDevon::
# 1370 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1371 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1372 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotInjuredDevon_Text_0
# 1373 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotLowerRebel::
# 1378 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1379 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1380 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotLowerRebel_Text_0
# 1382 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotLowerDevon::
# 1387 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1388 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1389 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotLowerDevon_Text_0
# 1391 "data/maps/PetalburgCity/scripts.pory"
	release
	return


HardwareStoreClerk::
# 1401 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset foughtwarehousescavenger2, HardwareStoreClerk_3
HardwareStoreClerk_1:
# 1404 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set foughtwarehousescavenger2, HardwareStoreClerk_8
HardwareStoreClerk_6:
# 1406 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set foughtwarehousescavenger2, HardwareStoreClerk_12
	return

HardwareStoreClerk_2:
	goto HardwareStoreClerk_1

HardwareStoreClerk_3:
# 1401 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, HardwareStoreClerk_2
	goto HardwareStoreClerk_1

HardwareStoreClerk_7:
	goto HardwareStoreClerk_6

HardwareStoreClerk_8:
# 1404 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, HardwareStoreClerk_7
	goto HardwareStoreClerk_6

HardwareStoreClerk_11:
	return

HardwareStoreClerk_12:
# 1406 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set scavengergivesobjectspotter, HardwareStoreClerk_11
	return


JimmyMcGligarSewersIdle::
# 1412 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyMcGligarSewersIdle_3
JimmyMcGligarSewersIdle_1:
# 1416 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyMcGligarSewersIdle_8
JimmyMcGligarSewersIdle_6:
# 1420 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq JimmyMcGligarSewersIdle_14
JimmyMcGligarSewersIdle_11:
# 1424 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 2
	goto_if_eq JimmyMcGligarSewersIdle_21
JimmyMcGligarSewersIdle_18:
# 1428 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 2
	goto_if_eq JimmyMcGligarSewersIdle_28
JimmyMcGligarSewersIdle_25:
# 1431 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 3
	goto_if_eq JimmyMcGligarSewersIdle_32
	return

JimmyMcGligarSewersIdle_2:
# 1414 "data/maps/PetalburgCity/scripts.pory"
	release
	goto JimmyMcGligarSewersIdle_1

JimmyMcGligarSewersIdle_3:
# 1412 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset conartistaskeddistract, JimmyMcGligarSewersIdle_2
	goto JimmyMcGligarSewersIdle_1

JimmyMcGligarSewersIdle_7:
	goto JimmyMcGligarSewersIdle_6

JimmyMcGligarSewersIdle_8:
# 1416 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set conartistaskeddistract, JimmyMcGligarSewersIdle_7
	goto JimmyMcGligarSewersIdle_6

JimmyMcGligarSewersIdle_12:
	goto JimmyMcGligarSewersIdle_11

JimmyMcGligarSewersIdle_13:
# 1420 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set ! betrayedconcordconartist, JimmyMcGligarSewersIdle_12
	goto JimmyMcGligarSewersIdle_11

JimmyMcGligarSewersIdle_14:
# 1420 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set conartistescaped, JimmyMcGligarSewersIdle_13
	goto JimmyMcGligarSewersIdle_11

JimmyMcGligarSewersIdle_19:
	goto JimmyMcGligarSewersIdle_18

JimmyMcGligarSewersIdle_20:
# 1424 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set helpedconcordconartist, JimmyMcGligarSewersIdle_19
	goto JimmyMcGligarSewersIdle_18

JimmyMcGligarSewersIdle_21:
# 1424 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set conartistescaped, JimmyMcGligarSewersIdle_20
	goto JimmyMcGligarSewersIdle_18

JimmyMcGligarSewersIdle_26:
	goto JimmyMcGligarSewersIdle_25

JimmyMcGligarSewersIdle_27:
# 1428 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set betrayedconcordconartist, JimmyMcGligarSewersIdle_26
	goto JimmyMcGligarSewersIdle_25

JimmyMcGligarSewersIdle_28:
# 1428 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set conartistescaped, JimmyMcGligarSewersIdle_27
	goto JimmyMcGligarSewersIdle_25

JimmyMcGligarSewersIdle_32:
	return


# 830 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotDontblockthewayRebel_Movement_0:
# 830 "data/maps/PetalburgCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 834 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotDontblockthewayRebel_Movement_1:
# 834 "data/maps/PetalburgCity/scripts.pory"
	walk_down
	step_end

# 854 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotRebelLead_Movement_0:
# 854 "data/maps/PetalburgCity/scripts.pory"
	face_player
	step_end

# 858 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotRebelLead_Movement_1:
# 858 "data/maps/PetalburgCity/scripts.pory"
	face_right
	step_end

# 869 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotDevonLead_Movement_0:
# 869 "data/maps/PetalburgCity/scripts.pory"
	face_left
	step_end

# 885 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_0:
# 885 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 885 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 888 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_1:
# 888 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 888 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 891 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_2:
# 891 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 891 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 897 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_3:
# 897 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
	step_end

# 905 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_4:
# 905 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
	step_end

# 935 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_5:
# 935 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 935 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 935 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 935 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 935 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
	step_end

# 936 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_6:
# 936 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 936 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 936 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
	step_end

# 941 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_7:
# 941 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 976 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_8:
# 976 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
	step_end

# 1028 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_9:
# 1028 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1028 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1028 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1028 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1028 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
	step_end

# 1029 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_10:
# 1029 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1029 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1029 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
	step_end

# 1058 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_11:
# 1058 "data/maps/PetalburgCity/scripts.pory"
	jump_in_place_right
	step_end

# 1075 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_12:
# 1075 "data/maps/PetalburgCity/scripts.pory"
	face_up
	step_end

# 1122 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_13:
# 1122 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1122 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1122 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 1122 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1123 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_14:
# 1123 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1123 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1123 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1123 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1127 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_15:
# 1127 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1127 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1127 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 1127 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1128 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_16:
# 1128 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1128 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1167 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_17:
# 1167 "data/maps/PetalburgCity/scripts.pory"
	emote_exclamation_mark
# 1167 "data/maps/PetalburgCity/scripts.pory"
	face_up
	step_end

PetalburgRiotDontblockthewayRebel_Text_0:
# 832 "data/maps/PetalburgCity/scripts.pory"
	.string "Hey, get off the way! We're rioting here!\n"
	.string "We're RIOTING HERE!$"

PetalburgRiotDontblockthewayDevon_Text_0:
# 845 "data/maps/PetalburgCity/scripts.pory"
	.string "Dear citizen, for your own safety, you\n"
	.string "must evacuate immediately!$"

PetalburgRiotRebelLead_Text_0:
# 857 "data/maps/PetalburgCity/scripts.pory"
	.string "GLIIII!$"

PetalburgRiotDevonLead_Text_0:
# 868 "data/maps/PetalburgCity/scripts.pory"
	.string "R-riiii...!$"

PetalburgRiotCutscene_Text_0:
# 898 "data/maps/PetalburgCity/scripts.pory"
	.string "The people is done with your greed, you\n"
	.string "Devon scum!\p"
	.string "We want free Pokémon healthcare back,\n"
	.string "and we want it NOW!$"

PetalburgRiotCutscene_Text_1:
# 903 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Hell yeah! Down with the corpos! Down\n"
	.string "with the corpos!$"

PetalburgRiotCutscene_Text_2:
# 906 "data/maps/PetalburgCity/scripts.pory"
	.string "Rowdy citizens of Petalburg - look\n"
	.string "around you! Hoenn is in shambles!\p"
	.string "If we are to rebuild, funds must be\n"
	.string "collected.\p"
	.string "It is a small sacrifice today, for a\n"
	.string "better future tomorrow.$"

PetalburgRiotCutscene_Text_3:
# 913 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR BLUE}Yes! It's fair! It's the only way! Stop\n"
	.string "making things harder!$"

PetalburgRiotCutscene_Text_4:
# 916 "data/maps/PetalburgCity/scripts.pory"
	.string "Then have Mr. Stone foot the bill! Not\n"
	.string "the little people!$"

PetalburgRiotCutscene_Text_5:
# 921 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Yeeees! Eat the rich, eat the rich!$"

PetalburgRiotCutscene_Text_6:
# 923 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}A clash between {COLOR RED}Rebel{COLOR DARK_GRAY} {COLOR GREEN}and {COLOR BLUE}Devon{COLOR GREEN} forces\n"
	.string "is in full force… what to do?$"

PetalburgRiotCutscene_Text_7:
# 924 "data/maps/PetalburgCity/scripts.pory"
	.string "Fight Devon$"

PetalburgRiotCutscene_Text_8:
# 924 "data/maps/PetalburgCity/scripts.pory"
	.string "Fight Rebels$"

PetalburgRiotCutscene_Text_9:
# 924 "data/maps/PetalburgCity/scripts.pory"
	.string "Fight both$"

PetalburgRiotCutscene_Text_10:
# 924 "data/maps/PetalburgCity/scripts.pory"
	.string "Do nothing$"

PetalburgRiotCutscene_Text_11:
# 943 "data/maps/PetalburgCity/scripts.pory"
	.string "Hah! Take a look, you shitty corpos! The\n"
	.string "people is with us!$"

PetalburgRiotCutscene_Text_12:
# 948 "data/maps/PetalburgCity/scripts.pory"
	.string "They simply fall prey to your lies. A\n"
	.string "shame…\p"
	.string "For the sake of Hoenn, I must have\n"
	.string "order restored!$"

PetalburgRiotCutscene_Text_13:
# 958 "data/maps/PetalburgCity/scripts.pory"
	.string "You will soon realize how wrong your\n"
	.string "thoughtless vandalism is...\p"
	.string "Everyone, back to base.$"

PetalburgRiotCutscene_Text_14:
# 979 "data/maps/PetalburgCity/scripts.pory"
	.string "Good job, man. That'll send Devon a good\n"
	.string "message.$"

PetalburgRiotCutscene_Text_15:
# 981 "data/maps/PetalburgCity/scripts.pory"
	.string "Good job, girl. That'll send Devon a good\n"
	.string "message.$"

PetalburgRiotCutscene_Text_16:
# 983 "data/maps/PetalburgCity/scripts.pory"
	.string "But they'll most likely be back\n"
	.string "tomorrow, so we will need to as well.\p"
	.string "Counting on you for the next raid. See\n"
	.string "ya!$"

PetalburgRiotCutscene_Text_17:
# 1020 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Rebels{COLOR DARK_GRAY} got inside the center before\n"
	.string "leaving, and made a mess of things!$"

PetalburgRiotCutscene_Text_18:
# 1040 "data/maps/PetalburgCity/scripts.pory"
	.string "Ah, thank you, citizen! You're helping\n"
	.string "preserve peace in Petalburg.$"

PetalburgRiotCutscene_Text_19:
# 1045 "data/maps/PetalburgCity/scripts.pory"
	.string "Peace? There'll never be peace, until\n"
	.string "you stop bleeding this region dry!\p"
	.string "Down with Devon… and down with lapdogs\n"
	.string "like you!$"

PetalburgRiotCutscene_Text_20:
# 1055 "data/maps/PetalburgCity/scripts.pory"
	.string "You're lucky this guy showed up. But\n"
	.string "we'll be back tomorrow.$"

PetalburgRiotCutscene_Text_21:
# 1061 "data/maps/PetalburgCity/scripts.pory"
	.string "Back to base, everyone!$"

PetalburgRiotCutscene_Text_22:
# 1083 "data/maps/PetalburgCity/scripts.pory"
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
# 1142 "data/maps/PetalburgCity/scripts.pory"
	.string "What? Don't get in the way, you\n"
	.string "meddlesome loser!$"

PetalburgRiotCutscene_Text_24:
# 1152 "data/maps/PetalburgCity/scripts.pory"
	.string "You would challenge us both? That is\n"
	.string "true anarchy...$"

PetalburgRiotCutscene_Text_25:
# 1158 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR BLUE}I cannot allow it!\n"
	.string "{COLOR RED}Piss off!$"

PetalburgRiotCutscene_Text_26:
# 1184 "data/maps/PetalburgCity/scripts.pory"
	.string "He defeated both admins...! Who's that\n"
	.string "trainer?$"

PetalburgRiotCutscene_Text_27:
# 1186 "data/maps/PetalburgCity/scripts.pory"
	.string "She defeated both admins...! Who's that\n"
	.string "trainer?$"

PetalburgRiotCutscene_Text_28:
# 1198 "data/maps/PetalburgCity/scripts.pory"
	.string "Your feat seems to have defused the\n"
	.string "situation. To avoid new escalation...$"

PetalburgRiotCutscene_Text_29:
# 1207 "data/maps/PetalburgCity/scripts.pory"
	.string "I propose a truce, and a compromise.\p"
	.string "To match the standard of living here in\n"
	.string "Petalburg, the healing fees in this\l"
	.string "Devon Center will receive a 25%\l"
	.string "discount.\p"
	.string "On the condition, however...\p"
	.string "That you Rebels repair the damage you\n"
	.string "just caused.\p"
	.string "Surely this is a reasonable deal.$"

PetalburgRiotCutscene_Text_30:
# 1219 "data/maps/PetalburgCity/scripts.pory"
	.string "Counter offer... make it a 50% discount,\n"
	.string "or we will make the damage worse.$"

PetalburgRiotCutscene_Text_31:
# 1224 "data/maps/PetalburgCity/scripts.pory"
	.string "Hmpf... you negotiate well, for a\n"
	.string "criminal. Very well.\p"
	.string "Thank you, trainer, for helping us\n"
	.string "arrive at this truce.\p"
	.string "It is far from ideal, but it will suffice\n"
	.string "for now.$"

PetalburgRiotCutscene_Text_32:
# 1232 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR BLUE}Grunts, to base!\n"
	.string "{COLOR RED}Pack it up, everyone!$"

PetalburgRiotBatter_Text_0:
# 1340 "data/maps/PetalburgCity/scripts.pory"
	.string "Damn Devon Center windows - they're\n"
	.string "tougher than an Aggron! GYAAAAA!$"

PetalburgRiotRebelwithSign_Text_0:
# 1348 "data/maps/PetalburgCity/scripts.pory"
	.string "DOWN WITH DEVON! DOWN WITH DEVON!$"

PetalburgRiotInjuredRebel_Text_0:
# 1356 "data/maps/PetalburgCity/scripts.pory"
	.string "Tsk… battle without potions next time,\n"
	.string "and we'll see who wins! Corpo scum!$"

PetalburgRiotArrestingDevon_Text_0:
# 1364 "data/maps/PetalburgCity/scripts.pory"
	.string "Stay down, for your own good! You are\n"
	.string "under arrest!$"

PetalburgRiotInjuredDevon_Text_0:
# 1372 "data/maps/PetalburgCity/scripts.pory"
	.string "Ugh… Just a little break, and I'll give\n"
	.string "that hoodlum with the bat some…!$"

PetalburgRiotLowerRebel_Text_0:
# 1380 "data/maps/PetalburgCity/scripts.pory"
	.string "Get it through your head, you\n"
	.string "thick-skulled lapdog!\p"
	.string "We want no bridges, no Safemon, and no\n"
	.string "shady corpos messing around!$"

PetalburgRiotLowerDevon_Text_0:
# 1389 "data/maps/PetalburgCity/scripts.pory"
	.string "Stop it! Why are you Rebels so\n"
	.string "ungrateful?\p"
	.string "Devon wants to rebuild this area, and\n"
	.string "all you do is get in the way!$"

Dawson_Intro::
# 1307 "data/maps/PetalburgCity/scripts.pory"
	.string "Willneverplay$"

Georgia_Intro::
# 1310 "data/maps/PetalburgCity/scripts.pory"
	.string "Willneverplay$"

Dawson_Outro::
# 1313 "data/maps/PetalburgCity/scripts.pory"
	.string "And thus Hoenn plunges further into\nchaos...$"

Georgia_Outro::
# 1316 "data/maps/PetalburgCity/scripts.pory"
	.string "Tsk... we'll never give up!!$"

Georgia_MultiOutro::
# 1319 "data/maps/PetalburgCity/scripts.pory"
	.string "Tsk... only lost cause this guy\ndragged me down!!$"

Dawson_MultiOutro::
# 1322 "data/maps/PetalburgCity/scripts.pory"
	.string "You are quite strong. You would make\nan excellent Devon Grunt.$"
