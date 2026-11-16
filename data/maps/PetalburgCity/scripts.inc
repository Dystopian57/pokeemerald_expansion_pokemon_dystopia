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
	goto_if_set petalburgriotendedforgood, PetalburgCityMapscriptBundle_14
PetalburgCityMapscriptBundle_13:
# 793 "data/maps/PetalburgCity/scripts.pory"
	gettimeofday
# 794 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq PetalburgCityMapscriptBundle_17
PetalburgCityMapscriptBundle_16:
# 800 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq PetalburgCityMapscriptBundle_20
PetalburgCityMapscriptBundle_19:
# 805 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq PetalburgCityMapscriptBundle_23
PetalburgCityMapscriptBundle_22:
# 812 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgCityMapscriptBundle_25
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

PetalburgCityMapscriptBundle_14:
# 790 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
	goto PetalburgCityMapscriptBundle_13

PetalburgCityMapscriptBundle_17:
# 795 "data/maps/PetalburgCity/scripts.pory"
	clearflag daynpc
# 796 "data/maps/PetalburgCity/scripts.pory"
	setflag nightnpc
# 798 "data/maps/PetalburgCity/scripts.pory"
	goto endofdaynightnpc
	goto PetalburgCityMapscriptBundle_16

PetalburgCityMapscriptBundle_20:
# 801 "data/maps/PetalburgCity/scripts.pory"
	clearflag daynpc
# 802 "data/maps/PetalburgCity/scripts.pory"
	setflag nightnpc
# 803 "data/maps/PetalburgCity/scripts.pory"
	goto endofdaynightnpc
	goto PetalburgCityMapscriptBundle_19

PetalburgCityMapscriptBundle_23:
# 807 "data/maps/PetalburgCity/scripts.pory"
	setflag daynpc
# 808 "data/maps/PetalburgCity/scripts.pory"
	setflag nightnpc
# 810 "data/maps/PetalburgCity/scripts.pory"
	goto endofdaynightnpc
	goto PetalburgCityMapscriptBundle_22

PetalburgCityMapscriptBundle_25:
# 813 "data/maps/PetalburgCity/scripts.pory"
	clearflag nightnpc
# 814 "data/maps/PetalburgCity/scripts.pory"
	setflag daynpc
# 815 "data/maps/PetalburgCity/scripts.pory"
	goto endofdaynightnpc
	return


PetalburgRiotRebelAdminStart::
# 829 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 1
	return


PetalburgRiotDevonAdminStart::
# 833 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 2
	return


PetalburgRiotDevonAdminStartLeave::
# 837 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
	return


PetalburgRiotRebelAdminStartLeave::
# 841 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
	return


PetalburgRiotDontblocktheway::
# 847 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset petalburgriotstopped, PetalburgRiotDontblocktheway_1
	return

PetalburgRiotDontblocktheway_1:
# 849 "data/maps/PetalburgCity/scripts.pory"
	random 2
# 850 "data/maps/PetalburgCity/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 852 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 853 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgRiotDontblocktheway_4
# 854 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgRiotDontblocktheway_5
	return

PetalburgRiotDontblocktheway_4:
# 853 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgRiotDontblockthewayRebel
	return

PetalburgRiotDontblocktheway_5:
# 854 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgRiotDontblockthewayDevon
	return


PetalburgRiotDontblockthewayRebel::
# 861 "data/maps/PetalburgCity/scripts.pory"
	lock
# 862 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 863 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 864 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotDontblockthewayRebel_Movement_0
# 865 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 866 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotDontblockthewayRebel_Text_0
# 867 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 868 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotDontblockthewayRebel_Movement_1
# 869 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 870 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotDontblockthewayDevon::
# 874 "data/maps/PetalburgCity/scripts.pory"
	lock
# 875 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 876 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 877 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotDontblockthewayRebel_Movement_0
# 878 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 879 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotDontblockthewayDevon_Text_0
# 880 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 881 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotDontblockthewayRebel_Movement_1
# 882 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 883 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotRebelLead::
# 887 "data/maps/PetalburgCity/scripts.pory"
	lock
# 888 "data/maps/PetalburgCity/scripts.pory"
	applymovement 46, PetalburgRiotRebelLead_Movement_0
# 889 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 46
# 890 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_GLIGAR, CRY_MODE_NORMAL
# 891 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotRebelLead_Text_0
# 892 "data/maps/PetalburgCity/scripts.pory"
	applymovement 46, PetalburgRiotRebelLead_Movement_1
# 893 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 46
# 894 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotDevonLead::
# 898 "data/maps/PetalburgCity/scripts.pory"
	lock
# 899 "data/maps/PetalburgCity/scripts.pory"
	applymovement 45, PetalburgRiotRebelLead_Movement_0
# 900 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 45
# 901 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_ARYSTAL, CRY_MODE_NORMAL
# 902 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotDevonLead_Text_0
# 903 "data/maps/PetalburgCity/scripts.pory"
	applymovement 45, PetalburgRiotDevonLead_Movement_0
# 904 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 45
# 905 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotCutscene::
# 911 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 912 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 913 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 914 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_BOSSDRILLDOZER, TRUE
# 931 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 932 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_0
# 934 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 936 "data/maps/PetalburgCity/scripts.pory"
	playse SE_APPLAUSE
# 937 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_1
# 939 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 940 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_2
# 943 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 946 "data/maps/PetalburgCity/scripts.pory"
	playse SE_APPLAUSE
# 947 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_3
# 949 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 950 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_4
# 951 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 954 "data/maps/PetalburgCity/scripts.pory"
	playse SE_APPLAUSE
# 955 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_5
# 957 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_6
# 958 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PetalburgRiotCutscene_Text_7, PetalburgRiotCutscene_Text_8, PetalburgRiotCutscene_Text_9, PetalburgRiotCutscene_Text_10
# 960 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgRiotCutscene_2
PetalburgRiotCutscene_1:
# 1061 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgRiotCutscene_5
PetalburgRiotCutscene_4:
# 1161 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgRiotCutscene_11
PetalburgRiotCutscene_10:
# 1330 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PetalburgRiotCutscene_20
PetalburgRiotCutscene_19:
# 1337 "data/maps/PetalburgCity/scripts.pory"
endofpetalburgriotscript:
# 1339 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1340 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 1341 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1343 "data/maps/PetalburgCity/scripts.pory"
	gettimeofday
# 1344 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq PetalburgRiotCutscene_32
PetalburgRiotCutscene_31:
# 1347 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq PetalburgRiotCutscene_41
PetalburgRiotCutscene_40:
# 1350 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq PetalburgRiotCutscene_47
PetalburgRiotCutscene_46:
# 1353 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgRiotCutscene_53
PetalburgRiotCutscene_52:
# 1356 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgRiotCutscene_2:
# 961 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 1
	goto_if_eq PetalburgRiotCutscene_8
PetalburgRiotCutscene_7:
# 967 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 2
	goto_if_eq PetalburgRiotCutscene_17
PetalburgRiotCutscene_16:
# 972 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotRebelLead_Movement_1
# 973 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 974 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 975 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_4
# 976 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 977 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_11
# 978 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotRebelLead_Movement_1
# 979 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 980 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 981 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 982 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_12
# 984 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWSON, Dawson_Outro
# 987 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 988 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 992 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_13
# 994 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 996 "data/maps/PetalburgCity/scripts.pory"
	playse SE_FLEE
# 997 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 999 "data/maps/PetalburgCity/scripts.pory"
	removeobject 36
# 1000 "data/maps/PetalburgCity/scripts.pory"
	removeobject 40
# 1001 "data/maps/PetalburgCity/scripts.pory"
	removeobject 42
# 1002 "data/maps/PetalburgCity/scripts.pory"
	removeobject 45
# 1003 "data/maps/PetalburgCity/scripts.pory"
	removeobject 48
# 1004 "data/maps/PetalburgCity/scripts.pory"
	removeobject 49
# 1006 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1007 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1009 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_4
# 1010 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_5
# 1011 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1012 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1013 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgRiotCutscene_29
PetalburgRiotCutscene_28:
# 1015 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgRiotCutscene_38
PetalburgRiotCutscene_37:
# 1017 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_16
# 1019 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1021 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1023 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_STRENGTH
# 1024 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1025 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_STRENGTH
# 1026 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1027 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_BRICK_BREAK
# 1028 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1032 "data/maps/PetalburgCity/scripts.pory"
	removeobject 37
# 1033 "data/maps/PetalburgCity/scripts.pory"
	removeobject 38
# 1034 "data/maps/PetalburgCity/scripts.pory"
	removeobject 39
# 1035 "data/maps/PetalburgCity/scripts.pory"
	removeobject 41
# 1036 "data/maps/PetalburgCity/scripts.pory"
	removeobject 43
# 1037 "data/maps/PetalburgCity/scripts.pory"
	removeobject 50
# 1038 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1039 "data/maps/PetalburgCity/scripts.pory"
	removeobject 47
# 1042 "data/maps/PetalburgCity/scripts.pory"
	addobject 27
# 1043 "data/maps/PetalburgCity/scripts.pory"
	addobject 9
# 1044 "data/maps/PetalburgCity/scripts.pory"
	addobject 10
# 1045 "data/maps/PetalburgCity/scripts.pory"
	addobject 11
# 1046 "data/maps/PetalburgCity/scripts.pory"
	addobject 15
# 1047 "data/maps/PetalburgCity/scripts.pory"
	addobject 51
# 1049 "data/maps/PetalburgCity/scripts.pory"
	clearflag rebelswonpetalburgriot
# 1050 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
# 1052 "data/maps/PetalburgCity/scripts.pory"
	clearflag petalburgriothidecivilians
# 1054 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1055 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1056 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_17
# 1057 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
# 1058 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgriotscript
	goto PetalburgRiotCutscene_1

PetalburgRiotCutscene_5:
# 1062 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 1
	goto_if_eq PetalburgRiotCutscene_14
PetalburgRiotCutscene_13:
# 1068 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 2
	goto_if_eq PetalburgRiotCutscene_26
PetalburgRiotCutscene_25:
# 1072 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1073 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1074 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_4
# 1075 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1076 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_18
# 1077 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotDevonLead_Movement_0
# 1078 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1079 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 1080 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1081 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_19
# 1083 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GEORGIA, Georgia_Outro
# 1085 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1086 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 1087 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1091 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_20
# 1092 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1093 "data/maps/PetalburgCity/scripts.pory"
	playse SE_LEDGE
# 1094 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_8
# 1095 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1097 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_21
# 1099 "data/maps/PetalburgCity/scripts.pory"
	playse SE_FLEE
# 1100 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1102 "data/maps/PetalburgCity/scripts.pory"
	removeobject 37
# 1103 "data/maps/PetalburgCity/scripts.pory"
	removeobject 38
# 1104 "data/maps/PetalburgCity/scripts.pory"
	removeobject 39
# 1105 "data/maps/PetalburgCity/scripts.pory"
	removeobject 41
# 1106 "data/maps/PetalburgCity/scripts.pory"
	removeobject 48
# 1107 "data/maps/PetalburgCity/scripts.pory"
	removeobject 50
# 1108 "data/maps/PetalburgCity/scripts.pory"
	removeobject 43
# 1109 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1110 "data/maps/PetalburgCity/scripts.pory"
	removeobject 47
# 1111 "data/maps/PetalburgCity/scripts.pory"
	applymovement 49, PetalburgRiotCutscene_Movement_9
# 1113 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1114 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1116 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_4
# 1117 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_5
# 1118 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1119 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_22
# 1126 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1128 "data/maps/PetalburgCity/scripts.pory"
	removeobject 36
# 1129 "data/maps/PetalburgCity/scripts.pory"
	removeobject 40
# 1130 "data/maps/PetalburgCity/scripts.pory"
	removeobject 42
# 1131 "data/maps/PetalburgCity/scripts.pory"
	removeobject 49
# 1132 "data/maps/PetalburgCity/scripts.pory"
	removeobject 45
# 1133 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1134 "data/maps/PetalburgCity/scripts.pory"
	removeobject 48
# 1135 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1140 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
# 1142 "data/maps/PetalburgCity/scripts.pory"
	setflag devonwonpetalburgriot
# 1144 "data/maps/PetalburgCity/scripts.pory"
	addobject 27
# 1145 "data/maps/PetalburgCity/scripts.pory"
	addobject 9
# 1146 "data/maps/PetalburgCity/scripts.pory"
	addobject 10
# 1147 "data/maps/PetalburgCity/scripts.pory"
	addobject 11
# 1148 "data/maps/PetalburgCity/scripts.pory"
	addobject 15
# 1149 "data/maps/PetalburgCity/scripts.pory"
	addobject 51
# 1151 "data/maps/PetalburgCity/scripts.pory"
	clearflag petalburgriothidecivilians
# 1153 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1154 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1156 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
# 1157 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgriotscript
	goto PetalburgRiotCutscene_4

PetalburgRiotCutscene_8:
# 962 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 963 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_0
# 964 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_0
	goto PetalburgRiotCutscene_7

PetalburgRiotCutscene_11:
# 1162 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1163 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 1
	goto_if_eq PetalburgRiotCutscene_23
PetalburgRiotCutscene_22:
# 1168 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 2
	goto_if_eq PetalburgRiotCutscene_35
PetalburgRiotCutscene_34:
# 1173 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1176 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1177 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotDontblockthewayRebel_Movement_0
# 1178 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1179 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_1
# 1181 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotDevonLead_Movement_0
# 1182 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1184 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_23
# 1186 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1187 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotDontblockthewayRebel_Movement_0
# 1188 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1189 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_0
# 1191 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotRebelLead_Movement_1
# 1192 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1194 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_24
# 1196 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 1197 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 1198 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1200 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_25
# 1201 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_two_trainers TRAINER_GEORGIA, Georgia_MultiOutro, TRAINER_DAWSON, Dawson_MultiOutro
# 1204 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1208 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1209 "data/maps/PetalburgCity/scripts.pory"
	applymovement 42, PetalburgRiotDontblockthewayRebel_Movement_0
# 1210 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1211 "data/maps/PetalburgCity/scripts.pory"
	applymovement 49, PetalburgRiotCutscene_Movement_14
# 1212 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1213 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1214 "data/maps/PetalburgCity/scripts.pory"
	applymovement 36, PetalburgRiotDontblockthewayRebel_Movement_0
# 1215 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1217 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1218 "data/maps/PetalburgCity/scripts.pory"
	applymovement 38, PetalburgRiotDontblockthewayRebel_Movement_0
# 1219 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1220 "data/maps/PetalburgCity/scripts.pory"
	applymovement 39, PetalburgRiotDontblockthewayRebel_Movement_0
# 1221 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1222 "data/maps/PetalburgCity/scripts.pory"
	applymovement 48, PetalburgRiotCutscene_Movement_14
# 1224 "data/maps/PetalburgCity/scripts.pory"
	playse SE_APPLAUSE
# 1227 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1228 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgRiotCutscene_44
PetalburgRiotCutscene_43:
# 1230 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgRiotCutscene_50
PetalburgRiotCutscene_49:
# 1234 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 1238 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 1239 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1240 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_NONE, TRUE
# 1242 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_28
# 1245 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1248 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_CALM, TRUE
# 1251 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_29
# 1259 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 1260 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1261 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_1
# 1263 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_1
# 1264 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1266 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_30
# 1268 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 1270 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1271 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_0
# 1272 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_0
# 1273 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 1274 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_31
# 1277 "data/maps/PetalburgCity/scripts.pory"
	applymovement 41, PetalburgRiotCutscene_Movement_0
# 1278 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 41
# 1279 "data/maps/PetalburgCity/scripts.pory"
	applymovement 40, PetalburgRiotCutscene_Movement_1
# 1280 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 40
# 1282 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_32
# 1284 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1286 "data/maps/PetalburgCity/scripts.pory"
	removeobject 36
# 1287 "data/maps/PetalburgCity/scripts.pory"
	removeobject 40
# 1288 "data/maps/PetalburgCity/scripts.pory"
	removeobject 42
# 1289 "data/maps/PetalburgCity/scripts.pory"
	removeobject 49
# 1290 "data/maps/PetalburgCity/scripts.pory"
	removeobject 45
# 1291 "data/maps/PetalburgCity/scripts.pory"
	removeobject 46
# 1292 "data/maps/PetalburgCity/scripts.pory"
	removeobject 48
# 1294 "data/maps/PetalburgCity/scripts.pory"
	removeobject 38
# 1295 "data/maps/PetalburgCity/scripts.pory"
	removeobject 39
# 1296 "data/maps/PetalburgCity/scripts.pory"
	removeobject 50
# 1298 "data/maps/PetalburgCity/scripts.pory"
	removeobject 47
# 1299 "data/maps/PetalburgCity/scripts.pory"
	removeobject 43
# 1300 "data/maps/PetalburgCity/scripts.pory"
	removeobject 37
# 1302 "data/maps/PetalburgCity/scripts.pory"
	removeobject 41
# 1303 "data/maps/PetalburgCity/scripts.pory"
	removeobject 43
# 1305 "data/maps/PetalburgCity/scripts.pory"
	addobject 27
# 1308 "data/maps/PetalburgCity/scripts.pory"
	addobject 9
# 1309 "data/maps/PetalburgCity/scripts.pory"
	addobject 10
# 1310 "data/maps/PetalburgCity/scripts.pory"
	addobject 11
# 1311 "data/maps/PetalburgCity/scripts.pory"
	addobject 15
# 1312 "data/maps/PetalburgCity/scripts.pory"
	addobject 51
# 1314 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 4
# 1316 "data/maps/PetalburgCity/scripts.pory"
	setflag devonwonpetalburgriot
# 1317 "data/maps/PetalburgCity/scripts.pory"
	setflag rebelswonpetalburgriot
# 1319 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotstopped
# 1320 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgriotendedforgood
# 1321 "data/maps/PetalburgCity/scripts.pory"
	clearflag petalburgriothidecivilians
# 1323 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1325 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgriotscript
	goto PetalburgRiotCutscene_10

PetalburgRiotCutscene_14:
# 1063 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1064 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_6
# 1065 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_7
	goto PetalburgRiotCutscene_13

PetalburgRiotCutscene_17:
# 968 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 969 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_2
# 970 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_3
	goto PetalburgRiotCutscene_16

PetalburgRiotCutscene_20:
# 1332 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_RIOT_POSITION, 0
# 1333 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgriotscript
	goto PetalburgRiotCutscene_19

PetalburgRiotCutscene_23:
# 1164 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_10
# 1165 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_11
	goto PetalburgRiotCutscene_22

PetalburgRiotCutscene_26:
# 1069 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_1
# 1070 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_1
	goto PetalburgRiotCutscene_25

PetalburgRiotCutscene_29:
# 1013 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_14
	goto PetalburgRiotCutscene_28

PetalburgRiotCutscene_32:
# 1345 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_TEAMGRDUEL, TRUE
	goto PetalburgRiotCutscene_31

PetalburgRiotCutscene_35:
# 1169 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_12
# 1170 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PetalburgRiotCutscene_Movement_13
	goto PetalburgRiotCutscene_34

PetalburgRiotCutscene_38:
# 1015 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_15
	goto PetalburgRiotCutscene_37

PetalburgRiotCutscene_41:
# 1348 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_TEAMGRDUEL, TRUE
	goto PetalburgRiotCutscene_40

PetalburgRiotCutscene_44:
# 1228 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_26
	goto PetalburgRiotCutscene_43

PetalburgRiotCutscene_47:
# 1351 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_PANULACAVE, TRUE
	goto PetalburgRiotCutscene_46

PetalburgRiotCutscene_50:
# 1230 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotCutscene_Text_27
	goto PetalburgRiotCutscene_49

PetalburgRiotCutscene_53:
# 1354 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_PANULACAVE, TRUE
	goto PetalburgRiotCutscene_52


PetalburgRiotBatter::
# 1382 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1383 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1385 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 2
# 1386 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 6
# 1387 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8006, 4
# 1388 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8007, 4
# 1389 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_STRENGTH
# 1390 "data/maps/PetalburgCity/scripts.pory"
	special ShakeCamera
# 1392 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotBatter_Text_0
# 1393 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotRebelwithSign::
# 1398 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1399 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1400 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotRebelwithSign_Text_0
# 1401 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotInjuredRebel::
# 1406 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1407 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1408 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotInjuredRebel_Text_0
# 1409 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotArrestingDevon::
# 1414 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1415 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1416 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotArrestingDevon_Text_0
# 1417 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotInjuredDevon::
# 1422 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1423 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1424 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotInjuredDevon_Text_0
# 1425 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotLowerRebel::
# 1430 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1431 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1432 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotLowerRebel_Text_0
# 1434 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgRiotLowerDevon::
# 1439 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1440 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1441 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgRiotLowerDevon_Text_0
# 1443 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgArcadeGuard1::
# 1448 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1449 "data/maps/PetalburgCity/scripts.pory"
	applymovement 55, PetalburgRiotRebelLead_Movement_0
# 1450 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgArcadeGuard1_Text_0
# 1451 "data/maps/PetalburgCity/scripts.pory"
	applymovement 55, PetalburgRiotCutscene_Movement_9
# 1452 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 55
# 1453 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return


PetalburgArcadeGuardMaku::
# 1457 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1458 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 1459 "data/maps/PetalburgCity/scripts.pory"
	applymovement 56, PetalburgRiotRebelLead_Movement_0
# 1460 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgArcadeGuardMaku_Text_0
# 1461 "data/maps/PetalburgCity/scripts.pory"
	applymovement 56, PetalburgRiotCutscene_Movement_9
# 1462 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 56
# 1463 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return


PetalburgArcadeGuard2::
# 1467 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1468 "data/maps/PetalburgCity/scripts.pory"
	applymovement 53, PetalburgRiotCutscene_Movement_4
# 1469 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 53
# 1470 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgArcadeGuard2_Text_0
# 1472 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return


PetalburgArcadeGuard3::
# 1476 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1477 "data/maps/PetalburgCity/scripts.pory"
	applymovement 54, PetalburgRiotCutscene_Movement_5
# 1478 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 54
# 1479 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgArcadeGuard3_Text_0
# 1481 "data/maps/PetalburgCity/scripts.pory"
	applymovement 55, PetalburgRiotCutscene_Movement_9
# 1482 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 55
# 1483 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgArcadeGuardsGoAway
	return


PetalburgArcadeGuardsGoAway::
# 1487 "data/maps/PetalburgCity/scripts.pory"
	applymovement 53, PetalburgRiotCutscene_Movement_0
# 1488 "data/maps/PetalburgCity/scripts.pory"
	applymovement 54, PetalburgRiotCutscene_Movement_0
# 1489 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 54
# 1490 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgArcadeGuardsGoAway_Text_0
# 1491 "data/maps/PetalburgCity/scripts.pory"
	applymovement 53, PetalburgRiotCutscene_Movement_4
# 1492 "data/maps/PetalburgCity/scripts.pory"
	applymovement 54, PetalburgRiotCutscene_Movement_5
# 1493 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 54
# 1494 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return


PetalburgSmokerMilitia::
# 1498 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1499 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1500 "data/maps/PetalburgCity/scripts.pory"
	applymovement 57, PetalburgRiotRebelLead_Movement_0
# 1501 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 57
# 1503 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset petalburgsmokergivesligther, PetalburgSmokerMilitia_2
# 1512 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgSmokerMilitia_Text_1
PetalburgSmokerMilitia_1:
# 1515 "data/maps/PetalburgCity/scripts.pory"
	applymovement 57, PetalburgSmokerMilitia_Movement_0
# 1516 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 57
# 1517 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgSmokerMilitia_2:
# 1505 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgSmokerMilitia_Text_0
# 1508 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_FLAME_ORB
# 1509 "data/maps/PetalburgCity/scripts.pory"
	setflag petalburgsmokergivesligther
	goto PetalburgSmokerMilitia_1


PetalburgMilitiaSnackGuy::
# 1522 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1524 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset militiadailysnack, PetalburgMilitiaSnackGuy_2
# 1542 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMilitiaSnackGuy_Text_2
PetalburgMilitiaSnackGuy_1:
# 1546 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return

PetalburgMilitiaSnackGuy_2:
# 1526 "data/maps/PetalburgCity/scripts.pory"
	random 2
# 1527 "data/maps/PetalburgCity/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 1529 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 1530 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgMilitiaSnackGuy_7
# 1534 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgMilitiaSnackGuy_8
PetalburgMilitiaSnackGuy_5:
# 1539 "data/maps/PetalburgCity/scripts.pory"
	setflag militiadailysnack
	goto PetalburgMilitiaSnackGuy_1

PetalburgMilitiaSnackGuy_7:
# 1531 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMilitiaSnackGuy_Text_0
# 1533 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_FRESH_WATER
	goto PetalburgMilitiaSnackGuy_5

PetalburgMilitiaSnackGuy_8:
# 1535 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMilitiaSnackGuy_Text_1
# 1537 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
	goto PetalburgMilitiaSnackGuy_5


PetalburgMilitiaLeftGuy::
# 1550 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1551 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1552 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMilitiaLeftGuy_Text_0
# 1554 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgMilitiaRightGuy::
# 1558 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1560 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_SENSEIQTRAININGQUEST, 0
	goto_if_eq PetalburgMilitiaRightGuy_2
# 1565 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMilitiaRightGuy_Text_1
PetalburgMilitiaRightGuy_1:
# 1568 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgMilitiaRightGuy_2:
# 1561 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMilitiaRightGuy_Text_0
	goto PetalburgMilitiaRightGuy_1


PetalburgMartialArtsSenseiNight::
# 1574 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1576 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_SENSEIQTRAININGQUEST, 0
	goto_if_eq PetalburgMartialArtsSenseiNight_2
PetalburgMartialArtsSenseiNight_1:
# 1583 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_SENSEIQTRAININGQUEST, 1
	goto_if_eq PetalburgMartialArtsSenseiNight_5
PetalburgMartialArtsSenseiNight_4:
# 1589 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 60
# 1591 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgMartialArtsSenseiNight_2:
# 1577 "data/maps/PetalburgCity/scripts.pory"
	applymovement 60, PetalburgRiotRebelLead_Movement_0
# 1578 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSenseiNight_Text_0
# 1580 "data/maps/PetalburgCity/scripts.pory"
	applymovement 60, PetalburgRiotCutscene_Movement_9
	goto PetalburgMartialArtsSenseiNight_1

PetalburgMartialArtsSenseiNight_5:
# 1584 "data/maps/PetalburgCity/scripts.pory"
	applymovement 60, PetalburgRiotRebelLead_Movement_0
# 1585 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSenseiNight_Text_1
# 1586 "data/maps/PetalburgCity/scripts.pory"
	applymovement 60, PetalburgRiotCutscene_Movement_9
	goto PetalburgMartialArtsSenseiNight_4


PetalburgMartialArtsSensei::
# 1597 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1599 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_SENSEIQTRAININGQUEST, 1
	goto_if_eq PetalburgMartialArtsSensei_2
PetalburgMartialArtsSensei_1:
# 1606 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_SENSEIQTRAININGQUEST, 0
	goto_if_eq PetalburgMartialArtsSensei_4
	return

PetalburgMartialArtsSensei_2:
# 1601 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_0
# 1603 "data/maps/PetalburgCity/scripts.pory"
	goto senseiscriptend
	goto PetalburgMartialArtsSensei_1

PetalburgMartialArtsSensei_4:
# 1608 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_1
# 1611 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotRebelLead_Movement_0
# 1612 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1614 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1615 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgMartialArtsSensei_7
PetalburgMartialArtsSensei_6:
# 1617 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgMartialArtsSensei_10
PetalburgMartialArtsSensei_9:
# 1620 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_4
# 1624 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_5, PetalburgMartialArtsSensei_Text_6
# 1626 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgMartialArtsSensei_13
PetalburgMartialArtsSensei_12:
# 1631 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgMartialArtsSensei_16
PetalburgMartialArtsSensei_15:
# 1913 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SENSEIQTRAININGQUEST, 1
# 1915 "data/maps/PetalburgCity/scripts.pory"
senseiscriptend:
# 1917 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotCutscene_Movement_9
# 1918 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1920 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgMartialArtsSensei_7:
# 1615 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_2
	goto PetalburgMartialArtsSensei_6

PetalburgMartialArtsSensei_10:
# 1617 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_3
	goto PetalburgMartialArtsSensei_9

PetalburgMartialArtsSensei_13:
# 1627 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_7
# 1628 "data/maps/PetalburgCity/scripts.pory"
	goto senseiscriptend
	goto PetalburgMartialArtsSensei_12

PetalburgMartialArtsSensei_16:
# 1632 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SENSEIQTRAININGQUEST, 1
# 1633 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_8
# 1634 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_9, PetalburgMartialArtsSensei_Text_10, PetalburgMartialArtsSensei_Text_11, PetalburgMartialArtsSensei_Text_12
# 1640 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgMartialArtsSensei_19
PetalburgMartialArtsSensei_18:
# 1643 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgMartialArtsSensei_22
PetalburgMartialArtsSensei_21:
# 1646 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgMartialArtsSensei_25
PetalburgMartialArtsSensei_24:
# 1650 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PetalburgMartialArtsSensei_28
PetalburgMartialArtsSensei_27:
# 1655 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_17
# 1656 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1658 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1659 "data/maps/PetalburgCity/scripts.pory"
	hidefollower
# 1661 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 1662 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1663 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_EARTHANDSEA, TRUE
# 1668 "data/maps/PetalburgCity/scripts.pory"
	applymovement 32, PetalburgSmokerMilitia_Movement_0
# 1669 "data/maps/PetalburgCity/scripts.pory"
	applymovement 33, PetalburgSmokerMilitia_Movement_0
# 1670 "data/maps/PetalburgCity/scripts.pory"
	applymovement 34, PetalburgSmokerMilitia_Movement_0
# 1680 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy 35, 20, 8
# 1681 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotRebelLead_Movement_1
# 1682 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1684 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 24, 8
# 1685 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotDevonLead_Movement_0
# 1686 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1688 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1691 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_18
# 1697 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1699 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_METRONOME
# 1700 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgMartialArtsSensei_Movement_0
# 1701 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1703 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotCutscene_Movement_0
# 1704 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1706 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_19
# 1709 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1710 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgMartialArtsSensei_31
PetalburgMartialArtsSensei_30:
# 1716 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgMartialArtsSensei_34
PetalburgMartialArtsSensei_33:
# 1722 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgMartialArtsSensei_37
PetalburgMartialArtsSensei_36:
# 1726 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgMartialArtsSensei_39
	goto PetalburgMartialArtsSensei_15

PetalburgMartialArtsSensei_19:
# 1641 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_13
	goto PetalburgMartialArtsSensei_18

PetalburgMartialArtsSensei_22:
# 1644 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_14
	goto PetalburgMartialArtsSensei_21

PetalburgMartialArtsSensei_25:
# 1647 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_15
	goto PetalburgMartialArtsSensei_24

PetalburgMartialArtsSensei_28:
# 1651 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_16
	goto PetalburgMartialArtsSensei_27

PetalburgMartialArtsSensei_31:
# 1712 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_20, PetalburgMartialArtsSensei_Text_21
	goto PetalburgMartialArtsSensei_30

PetalburgMartialArtsSensei_34:
# 1718 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_22, PetalburgMartialArtsSensei_Text_23
	goto PetalburgMartialArtsSensei_33

PetalburgMartialArtsSensei_37:
# 1723 "data/maps/PetalburgCity/scripts.pory"
	goto playerstrikessensei
	goto PetalburgMartialArtsSensei_36

PetalburgMartialArtsSensei_39:
# 1727 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1728 "data/maps/PetalburgCity/scripts.pory"
playerstrikessensei:
# 1729 "data/maps/PetalburgCity/scripts.pory"
	playse SE_FLEE
# 1730 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgMartialArtsSensei_Movement_1
# 1731 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1734 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 2
# 1735 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 6
# 1736 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8006, 4
# 1737 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8007, 4
# 1738 "data/maps/PetalburgCity/scripts.pory"
	special ShakeCamera
# 1739 "data/maps/PetalburgCity/scripts.pory"
	playse SE_CLICK
# 1740 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1742 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 4
# 1743 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 8
# 1744 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8006, 8
# 1745 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8007, 4
# 1746 "data/maps/PetalburgCity/scripts.pory"
	playse SE_EFFECTIVE
# 1747 "data/maps/PetalburgCity/scripts.pory"
	special ShakeCamera
# 1750 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_24
# 1752 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotCutscene_Movement_0
# 1753 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1755 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_25
# 1759 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1761 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgMartialArtsSensei_Movement_2
# 1762 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1764 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_26
# 1765 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1767 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 1768 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotDontblockthewayRebel_Movement_0
# 1769 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1771 "data/maps/PetalburgCity/scripts.pory"
	playse SE_FLEE
# 1772 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgMartialArtsSensei_Movement_3
# 1773 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1775 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_27
# 1776 "data/maps/PetalburgCity/scripts.pory"
playercounterssenseichoice:
# 1777 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1778 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgMartialArtsSensei_42
PetalburgMartialArtsSensei_41:
# 1787 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgMartialArtsSensei_45
PetalburgMartialArtsSensei_44:
# 1794 "data/maps/PetalburgCity/scripts.pory"
counterchoiceresolves:
# 1795 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgMartialArtsSensei_48
PetalburgMartialArtsSensei_47:
# 1814 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgMartialArtsSensei_51
PetalburgMartialArtsSensei_50:
# 1843 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgMartialArtsSensei_53
	goto PetalburgMartialArtsSensei_15

PetalburgMartialArtsSensei_42:
# 1780 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_28, PetalburgMartialArtsSensei_Text_29, PetalburgMartialArtsSensei_Text_30
# 1784 "data/maps/PetalburgCity/scripts.pory"
	goto counterchoiceresolves
	goto PetalburgMartialArtsSensei_41

PetalburgMartialArtsSensei_45:
# 1789 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_28, PetalburgMartialArtsSensei_Text_31, PetalburgMartialArtsSensei_Text_32
	goto PetalburgMartialArtsSensei_44

PetalburgMartialArtsSensei_48:
# 1796 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1797 "data/maps/PetalburgCity/scripts.pory"
	playse SE_BALL_THROW
# 1798 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1799 "data/maps/PetalburgCity/scripts.pory"
	call SmallSenseiShake
# 1800 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_33
# 1802 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotCutscene_Movement_0
# 1803 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1805 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_34
# 1810 "data/maps/PetalburgCity/scripts.pory"
	goto playercounterssenseichoice
	goto PetalburgMartialArtsSensei_47

PetalburgMartialArtsSensei_51:
# 1815 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1816 "data/maps/PetalburgCity/scripts.pory"
	call SmallSenseiShake
# 1818 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_35
# 1820 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotCutscene_Movement_0
# 1821 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1823 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_36
# 1825 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1826 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgMartialArtsSensei_56
PetalburgMartialArtsSensei_55:
# 1833 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgMartialArtsSensei_61
	goto PetalburgMartialArtsSensei_50

PetalburgMartialArtsSensei_53:
# 1844 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1845 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 1846 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgMartialArtsSensei_59
PetalburgMartialArtsSensei_58:
# 1850 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgMartialArtsSensei_64
PetalburgMartialArtsSensei_63:
# 1855 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1856 "data/maps/PetalburgCity/scripts.pory"
	call SmallSenseiShake
# 1857 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_39
# 1858 "data/maps/PetalburgCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 1859 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_40
# 1861 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotCutscene_Movement_0
# 1862 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1864 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_41
# 1868 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1869 "data/maps/PetalburgCity/scripts.pory"
	fadeoutbgm 1
# 1870 "data/maps/PetalburgCity/scripts.pory"
	fadeinbgm 1
# 1872 "data/maps/PetalburgCity/scripts.pory"
	gettimeofday
# 1873 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgMartialArtsSensei_67
# 1875 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_TEAMGRDUEL, TRUE
PetalburgMartialArtsSensei_66:
# 1888 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy 35, 22, 8
# 1889 "data/maps/PetalburgCity/scripts.pory"
	applymovement 35, PetalburgRiotRebelLead_Movement_1
# 1890 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 35
# 1892 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 23, 8
# 1893 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotDevonLead_Movement_0
# 1894 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1896 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1898 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_42
	goto PetalburgMartialArtsSensei_15

PetalburgMartialArtsSensei_56:
# 1827 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_37
# 1830 "data/maps/PetalburgCity/scripts.pory"
	goto playercounterssenseichoice
	goto PetalburgMartialArtsSensei_55

PetalburgMartialArtsSensei_59:
# 1847 "data/maps/PetalburgCity/scripts.pory"
	playse SE_ICE_STAIRS
	goto PetalburgMartialArtsSensei_58

PetalburgMartialArtsSensei_61:
# 1834 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgMartialArtsSensei_Text_38
# 1837 "data/maps/PetalburgCity/scripts.pory"
	goto playercounterssenseichoice
	goto PetalburgMartialArtsSensei_50

PetalburgMartialArtsSensei_64:
# 1851 "data/maps/PetalburgCity/scripts.pory"
	playse SE_BALL_THROW
# 1852 "data/maps/PetalburgCity/scripts.pory"
	waitse
	goto PetalburgMartialArtsSensei_63

PetalburgMartialArtsSensei_67:
# 1874 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_PANULACAVE, TRUE
	goto PetalburgMartialArtsSensei_66


SmallSenseiShake::
# 1929 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 4
# 1930 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 8
# 1931 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8006, 8
# 1932 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8007, 4
# 1933 "data/maps/PetalburgCity/scripts.pory"
	playse SE_EFFECTIVE
# 1934 "data/maps/PetalburgCity/scripts.pory"
	special ShakeCamera
# 1935 "data/maps/PetalburgCity/scripts.pory"
	waitse
	return


ArcadeLotFuelScooperTruck1Pointer::
# 1941 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1943 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1Pointer_Text_0
# 1944 "data/maps/PetalburgCity/scripts.pory"
	dofieldeffectsparkle 10, 31, 9
# 1945 "data/maps/PetalburgCity/scripts.pory"
	release
	return


ArcadeLotFuelScooperTruck1::
# 1952 "data/maps/PetalburgCity/scripts.pory"
	lock
# 1954 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set arcadelottruck1fuel, ArcadeLotFuelScooperTruck1_2
ArcadeLotFuelScooperTruck1_1:
# 1959 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset arcadelottruck1fuel, ArcadeLotFuelScooperTruck1_5
ArcadeLotFuelScooperTruck1_4:
# 2047 "data/maps/PetalburgCity/scripts.pory"
endoffuelscooper:
# 2048 "data/maps/PetalburgCity/scripts.pory"
	release
	return

ArcadeLotFuelScooperTruck1_2:
# 1956 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_0
# 1957 "data/maps/PetalburgCity/scripts.pory"
	goto endoffuelscooper
	goto ArcadeLotFuelScooperTruck1_1

ArcadeLotFuelScooperTruck1_5:
# 1963 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 4
	goto_if_eq ArcadeLotFuelScooperTruck1_8
ArcadeLotFuelScooperTruck1_7:
# 1968 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_2
# 1969 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_5, PetalburgMartialArtsSensei_Text_6
# 1971 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ArcadeLotFuelScooperTruck1_11
ArcadeLotFuelScooperTruck1_10:
# 1975 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ArcadeLotFuelScooperTruck1_13
	goto ArcadeLotFuelScooperTruck1_4

ArcadeLotFuelScooperTruck1_8:
# 1964 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_1
# 1966 "data/maps/PetalburgCity/scripts.pory"
	goto endoffuelscooper
	goto ArcadeLotFuelScooperTruck1_7

ArcadeLotFuelScooperTruck1_11:
# 1972 "data/maps/PetalburgCity/scripts.pory"
	goto endoffuelscooper
	goto ArcadeLotFuelScooperTruck1_10

ArcadeLotFuelScooperTruck1_13:
# 1977 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 1979 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_GIGA_DRAIN
# 1980 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1981 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_GIGA_DRAIN
# 1982 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 1985 "data/maps/PetalburgCity/scripts.pory"
	addvar VAR_FUELSCOOPERLEVEL, + 1
# 1987 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 1
	goto_if_eq ArcadeLotFuelScooperTruck1_16
ArcadeLotFuelScooperTruck1_15:
# 1991 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 2
	goto_if_eq ArcadeLotFuelScooperTruck1_19
ArcadeLotFuelScooperTruck1_18:
# 1995 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 3
	goto_if_eq ArcadeLotFuelScooperTruck1_22
ArcadeLotFuelScooperTruck1_21:
# 1999 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 4
	goto_if_eq ArcadeLotFuelScooperTruck1_25
ArcadeLotFuelScooperTruck1_24:
# 2006 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 2
# 2007 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 6
# 2008 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8006, 4
# 2009 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8007, 4
# 2010 "data/maps/PetalburgCity/scripts.pory"
	playse SE_TRUCK_DOOR
# 2011 "data/maps/PetalburgCity/scripts.pory"
	special ShakeCamera
# 2014 "data/maps/PetalburgCity/scripts.pory"
	clearflag angryfuelowner
# 2015 "data/maps/PetalburgCity/scripts.pory"
	addobject 59
# 2016 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 2018 "data/maps/PetalburgCity/scripts.pory"
	playse SE_LEDGE
# 2019 "data/maps/PetalburgCity/scripts.pory"
	applymovement 59, ArcadeLotFuelScooperTruck1_Movement_0
# 2020 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 2022 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 2023 "data/maps/PetalburgCity/scripts.pory"
	applymovement 59, PetalburgRiotDontblockthewayRebel_Movement_0
# 2024 "data/maps/PetalburgCity/scripts.pory"
	waitmovement
# 2026 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_7
# 2027 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RICKY_1, ConstructionWorkerM102_Outro
# 2029 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_8
# 2035 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 2037 "data/maps/PetalburgCity/scripts.pory"
	applymovement 59, ArcadeLotFuelScooperTruck1_Movement_1
# 2038 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 59
# 2039 "data/maps/PetalburgCity/scripts.pory"
	removeobject 59
# 2040 "data/maps/PetalburgCity/scripts.pory"
	setflag angryfuelowner
# 2041 "data/maps/PetalburgCity/scripts.pory"
	setflag arcadelottruck1fuel
	goto ArcadeLotFuelScooperTruck1_4

ArcadeLotFuelScooperTruck1_16:
# 1988 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_3
	goto ArcadeLotFuelScooperTruck1_15

ArcadeLotFuelScooperTruck1_19:
# 1992 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_4
	goto ArcadeLotFuelScooperTruck1_18

ArcadeLotFuelScooperTruck1_22:
# 1996 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_5
	goto ArcadeLotFuelScooperTruck1_21

ArcadeLotFuelScooperTruck1_25:
# 2000 "data/maps/PetalburgCity/scripts.pory"
	playfanfare MUS_RG_PHOTO
# 2001 "data/maps/PetalburgCity/scripts.pory"
	msgbox ArcadeLotFuelScooperTruck1_Text_6
	goto ArcadeLotFuelScooperTruck1_24


PetalburgTrendyPhraseGuitarist::
# 2054 "data/maps/PetalburgCity/scripts.pory"
	lock
# 2055 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 2056 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgTrendyPhraseGuitarist_Text_0
# 2059 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgWildZoneNPCIntroTrigger::
# 2064 "data/maps/PetalburgCity/scripts.pory"
	lock
# 2065 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 2066 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 2067 "data/maps/PetalburgCity/scripts.pory"
	applymovement 12, PetalburgRiotDontblockthewayRebel_Movement_0
# 2068 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 12
# 2069 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_9
# 2070 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgWildZoneNPC
	return


PetalburgWildZoneNPCBuyTrigger::
# 2075 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 2076 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_9
# 2077 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgWildZoneNPC
	return


PetalburgWildZoneNPCLeaveTrigger::
# 2083 "data/maps/PetalburgCity/scripts.pory"
	lock
# 2084 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 2085 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_METRONOME
# 2086 "data/maps/PetalburgCity/scripts.pory"
	applymovement 12, PetalburgMartialArtsSensei_Movement_0
# 2087 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 12
# 2088 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_9
# 2089 "data/maps/PetalburgCity/scripts.pory"
	waitmovement
# 2090 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgWildZoneNPC
	return


PetalburgWildZoneNPC::
# 2096 "data/maps/PetalburgCity/scripts.pory"
	lock
# 2097 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 2099 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_WILD_ZONE, 2
	goto_if_eq PetalburgWildZoneNPC_2
PetalburgWildZoneNPC_1:
# 2141 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_WILD_ZONE, 0
	goto_if_eq PetalburgWildZoneNPC_5
PetalburgWildZoneNPC_4:
# 2205 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_WILD_ZONE, 1
	goto_if_eq PetalburgWildZoneNPC_11
PetalburgWildZoneNPC_10:
# 2288 "data/maps/PetalburgCity/scripts.pory"
endofpetalburgwildzonenpc:
# 2289 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgWildZoneNPC_2:
# 2101 "data/maps/PetalburgCity/scripts.pory"
	applymovement 12, PetalburgRiotRebelLead_Movement_0
# 2103 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_0
# 2105 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_5, PetalburgMartialArtsSensei_Text_6
# 2109 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgWildZoneNPC_8
PetalburgWildZoneNPC_7:
# 2119 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgWildZoneNPC_16
	goto PetalburgWildZoneNPC_1

PetalburgWildZoneNPC_5:
# 2143 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_WILD_ZONE, 1
# 2145 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_9
# 2146 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 2147 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgWildZoneNPC_14
PetalburgWildZoneNPC_13:
# 2150 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgWildZoneNPC_22
PetalburgWildZoneNPC_21:
# 2153 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_6
# 2155 "data/maps/PetalburgCity/scripts.pory"
	applymovement 12, PetalburgRiotDevonLead_Movement_0
# 2156 "data/maps/PetalburgCity/scripts.pory"
	applymovement 52, PetalburgRiotRebelLead_Movement_1
# 2157 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 52
# 2158 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_7
# 2160 "data/maps/PetalburgCity/scripts.pory"
	playse SE_LEDGE
# 2161 "data/maps/PetalburgCity/scripts.pory"
	applymovement 52, PetalburgRiotCutscene_Movement_8
# 2162 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 52
# 2163 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_ELECTRIKE, CRY_MODE_HIGH_PITCH
# 2165 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_8
# 2166 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 2168 "data/maps/PetalburgCity/scripts.pory"
	applymovement 12, PetalburgRiotCutscene_Movement_0
# 2170 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_0
# 2172 "data/maps/PetalburgCity/scripts.pory"
	special SpawnCameraObject
# 2173 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgWildZoneNPC_Movement_2
# 2174 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 2175 "data/maps/PetalburgCity/scripts.pory"
	special RemoveCameraObject
# 2178 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_9
# 2182 "data/maps/PetalburgCity/scripts.pory"
petalburgwildzoneexplanation:
# 2184 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_10
# 2187 "data/maps/PetalburgCity/scripts.pory"
	special SpawnCameraObject
# 2188 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgWildZoneNPC_Movement_3
# 2189 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 2190 "data/maps/PetalburgCity/scripts.pory"
	special RemoveCameraObject
# 2192 "data/maps/PetalburgCity/scripts.pory"
	applymovement 12, PetalburgRiotCutscene_Movement_4
# 2193 "data/maps/PetalburgCity/scripts.pory"
	applymovement 52, PetalburgSmokerMilitia_Movement_0
# 2195 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_5
# 2196 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 2199 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_11
# 2200 "data/maps/PetalburgCity/scripts.pory"
	goto petalburgwildzonechoice
	goto PetalburgWildZoneNPC_4

PetalburgWildZoneNPC_8:
# 2111 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_1
# 2112 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 2113 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWildZoneNPC_Movement_0
# 2114 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 2115 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgwildzonenpc
	goto PetalburgWildZoneNPC_7

PetalburgWildZoneNPC_11:
# 2207 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_5
# 2208 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 2210 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_12
# 2211 "data/maps/PetalburgCity/scripts.pory"
petalburgwildzonechoice:
# 2212 "data/maps/PetalburgCity/scripts.pory"
	showmoneybox 18, 0
# 2215 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgMartialArtsSensei_Text_5, PetalburgMartialArtsSensei_Text_6, PetalburgWildZoneNPC_Text_13
# 2220 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgWildZoneNPC_19
PetalburgWildZoneNPC_18:
# 2258 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgWildZoneNPC_25
PetalburgWildZoneNPC_24:
# 2267 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgWildZoneNPC_30
	goto PetalburgWildZoneNPC_10

PetalburgWildZoneNPC_14:
# 2148 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_4
	goto PetalburgWildZoneNPC_13

PetalburgWildZoneNPC_16:
# 2120 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_2
# 2122 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 2123 "data/maps/PetalburgCity/scripts.pory"
	playse SE_BALL_TRAY_BALL
# 2124 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 2125 "data/maps/PetalburgCity/scripts.pory"
	removeitem ITEM_PARK_BALL, 30
# 2126 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_3
# 2127 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 2128 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWildZoneNPC_Movement_1
# 2129 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 2132 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 2133 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_WILD_ZONE, 1
# 2135 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgwildzonenpc
	goto PetalburgWildZoneNPC_1

PetalburgWildZoneNPC_19:
# 2222 "data/maps/PetalburgCity/scripts.pory"
	checkmoney 100
# 2224 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWildZoneNPC_28
PetalburgWildZoneNPC_27:
# 2230 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgWildZoneNPC_32
	goto PetalburgWildZoneNPC_18

PetalburgWildZoneNPC_22:
# 2151 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_5
	goto PetalburgWildZoneNPC_21

PetalburgWildZoneNPC_25:
# 2259 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_17
# 2260 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 2261 "data/maps/PetalburgCity/scripts.pory"
	hidemoneybox
# 2262 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWildZoneNPC_Movement_1
# 2263 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 2264 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgwildzonenpc
	goto PetalburgWildZoneNPC_24

PetalburgWildZoneNPC_28:
# 2225 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_14
# 2226 "data/maps/PetalburgCity/scripts.pory"
	hidemoneybox
# 2227 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgwildzonenpc
	goto PetalburgWildZoneNPC_27

PetalburgWildZoneNPC_30:
# 2268 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_18
# 2269 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 2270 "data/maps/PetalburgCity/scripts.pory"
	hidemoneybox
# 2272 "data/maps/PetalburgCity/scripts.pory"
	applymovement 12, PetalburgRiotCutscene_Movement_0
# 2274 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgRiotCutscene_Movement_0
# 2276 "data/maps/PetalburgCity/scripts.pory"
	special SpawnCameraObject
# 2277 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgWildZoneNPC_Movement_2
# 2278 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 2279 "data/maps/PetalburgCity/scripts.pory"
	special RemoveCameraObject
# 2282 "data/maps/PetalburgCity/scripts.pory"
	goto petalburgwildzoneexplanation
	goto PetalburgWildZoneNPC_10

PetalburgWildZoneNPC_32:
# 2231 "data/maps/PetalburgCity/scripts.pory"
	removemoney 100
# 2232 "data/maps/PetalburgCity/scripts.pory"
	updatemoneybox
# 2233 "data/maps/PetalburgCity/scripts.pory"
	playse SE_RG_SHOP
# 2234 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 2235 "data/maps/PetalburgCity/scripts.pory"
	hidemoneybox
# 2237 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_15
# 2238 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_PARK_BALL, 30
# 2242 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneNPC_Text_16
# 2247 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWildZoneNPC_Movement_4
# 2248 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 2251 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_WILD_ZONE, 2
# 2252 "data/maps/PetalburgCity/scripts.pory"
	goto endofpetalburgwildzonenpc
	goto PetalburgWildZoneNPC_18


PetalburgWildZoneTourist::
# 2295 "data/maps/PetalburgCity/scripts.pory"
	lock
# 2296 "data/maps/PetalburgCity/scripts.pory"
	applymovement 62, PetalburgRiotRebelLead_Movement_0
# 2297 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneTourist_Text_0
# 2299 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_NINKABURI, CRY_MODE_NORMAL
# 2300 "data/maps/PetalburgCity/scripts.pory"
	playse SE_M_HORN_ATTACK
# 2301 "data/maps/PetalburgCity/scripts.pory"
	applymovement 62, PetalburgRiotCutscene_Movement_0
# 2302 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 62
# 2303 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgWildZoneTourist_Text_1
# 2304 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgBurgerMunchlax::
# 2312 "data/maps/PetalburgCity/scripts.pory"
	lock
# 2313 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_WEAK
# 2314 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgBurgerMunchlax_Text_0
# 2316 "data/maps/PetalburgCity/scripts.pory"
	release
	return


# 864 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotDontblockthewayRebel_Movement_0:
# 864 "data/maps/PetalburgCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 868 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotDontblockthewayRebel_Movement_1:
# 868 "data/maps/PetalburgCity/scripts.pory"
	walk_down
	step_end

# 888 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotRebelLead_Movement_0:
# 888 "data/maps/PetalburgCity/scripts.pory"
	face_player
	step_end

# 892 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotRebelLead_Movement_1:
# 892 "data/maps/PetalburgCity/scripts.pory"
	face_right
	step_end

# 903 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotDevonLead_Movement_0:
# 903 "data/maps/PetalburgCity/scripts.pory"
	face_left
	step_end

# 931 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_0:
# 931 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
	step_end

# 939 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_1:
# 939 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
	step_end

# 969 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_2:
# 969 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 969 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 969 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 969 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 969 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
	step_end

# 970 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_3:
# 970 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 970 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 970 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
	step_end

# 975 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_4:
# 975 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1010 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_5:
# 1010 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
	step_end

# 1064 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_6:
# 1064 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1064 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1064 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1064 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1064 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
	step_end

# 1065 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_7:
# 1065 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1065 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1065 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
	step_end

# 1094 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_8:
# 1094 "data/maps/PetalburgCity/scripts.pory"
	jump_in_place_right
	step_end

# 1111 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_9:
# 1111 "data/maps/PetalburgCity/scripts.pory"
	face_up
	step_end

# 1164 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_10:
# 1164 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1164 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1164 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 1164 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1165 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_11:
# 1165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1165 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1169 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_12:
# 1169 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1169 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1169 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 1169 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1170 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_13:
# 1170 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1170 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1211 "data/maps/PetalburgCity/scripts.pory"
PetalburgRiotCutscene_Movement_14:
# 1211 "data/maps/PetalburgCity/scripts.pory"
	emote_exclamation_mark
# 1211 "data/maps/PetalburgCity/scripts.pory"
	face_up
	step_end

# 1515 "data/maps/PetalburgCity/scripts.pory"
PetalburgSmokerMilitia_Movement_0:
# 1515 "data/maps/PetalburgCity/scripts.pory"
	face_down
	step_end

# 1700 "data/maps/PetalburgCity/scripts.pory"
PetalburgMartialArtsSensei_Movement_0:
# 1700 "data/maps/PetalburgCity/scripts.pory"
	emote_question_mark
	step_end

# 1730 "data/maps/PetalburgCity/scripts.pory"
PetalburgMartialArtsSensei_Movement_1:
# 1730 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
# 1730 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
# 1730 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
	step_end

# 1761 "data/maps/PetalburgCity/scripts.pory"
PetalburgMartialArtsSensei_Movement_2:
# 1761 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1761 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1761 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1761 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
	step_end

# 1772 "data/maps/PetalburgCity/scripts.pory"
PetalburgMartialArtsSensei_Movement_3:
# 1772 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1772 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1772 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
	step_end

# 2019 "data/maps/PetalburgCity/scripts.pory"
ArcadeLotFuelScooperTruck1_Movement_0:
# 2019 "data/maps/PetalburgCity/scripts.pory"
	jump_down
# 2019 "data/maps/PetalburgCity/scripts.pory"
	face_left
	step_end

# 2037 "data/maps/PetalburgCity/scripts.pory"
ArcadeLotFuelScooperTruck1_Movement_1:
# 2037 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 2037 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 2037 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_up
# 2037 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_up
# 2037 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_up
# 2037 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 2037 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 2037 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 2037 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
	step_end

# 2113 "data/maps/PetalburgCity/scripts.pory"
PetalburgWildZoneNPC_Movement_0:
# 2113 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 2128 "data/maps/PetalburgCity/scripts.pory"
PetalburgWildZoneNPC_Movement_1:
# 2128 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 2173 "data/maps/PetalburgCity/scripts.pory"
PetalburgWildZoneNPC_Movement_2:
# 2173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 2173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 2173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 2173 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 2173 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 2188 "data/maps/PetalburgCity/scripts.pory"
PetalburgWildZoneNPC_Movement_3:
# 2188 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 2188 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 2188 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 2188 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 2188 "data/maps/PetalburgCity/scripts.pory"
	walk_down
	step_end

# 2247 "data/maps/PetalburgCity/scripts.pory"
PetalburgWildZoneNPC_Movement_4:
# 2247 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 2247 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

PetalburgRiotDontblockthewayRebel_Text_0:
# 866 "data/maps/PetalburgCity/scripts.pory"
	.string "Hey, get off the way! We're rioting here!\n"
	.string "We're RIOTING HERE!$"

PetalburgRiotDontblockthewayDevon_Text_0:
# 879 "data/maps/PetalburgCity/scripts.pory"
	.string "Dear citizen, for your own safety, you\n"
	.string "must evacuate immediately!$"

PetalburgRiotRebelLead_Text_0:
# 891 "data/maps/PetalburgCity/scripts.pory"
	.string "GLIIII!$"

PetalburgRiotDevonLead_Text_0:
# 902 "data/maps/PetalburgCity/scripts.pory"
	.string "R-riiii...!$"

PetalburgRiotCutscene_Text_0:
# 932 "data/maps/PetalburgCity/scripts.pory"
	.string "The people is done with your greed, you\n"
	.string "Devon scum!\p"
	.string "We want free Pokémon healthcare back,\n"
	.string "and we want it NOW!$"

PetalburgRiotCutscene_Text_1:
# 937 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Hell yeah! Down with the corpos! Down\n"
	.string "with the corpos!$"

PetalburgRiotCutscene_Text_2:
# 940 "data/maps/PetalburgCity/scripts.pory"
	.string "Citizens of Petalburg - look around\n"
	.string "you! The war left Hoenn in shambles!\p"
	.string "If we are to rebuild, funds must be\n"
	.string "collected.\p"
	.string "It is a small sacrifice today, for a\n"
	.string "better future tomorrow.$"

PetalburgRiotCutscene_Text_3:
# 947 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR BLUE}Yes! It's fair! It's the only way! Stop\n"
	.string "making things harder!$"

PetalburgRiotCutscene_Text_4:
# 950 "data/maps/PetalburgCity/scripts.pory"
	.string "Then have Mr. Stone foot the bill! Not\n"
	.string "the little people!$"

PetalburgRiotCutscene_Text_5:
# 955 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Yeeees! Eat the rich, eat the rich!$"

PetalburgRiotCutscene_Text_6:
# 957 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}A clash between {COLOR RED}Rebel{COLOR DARK_GRAY} {COLOR GREEN}and {COLOR BLUE}Devon{COLOR GREEN} forces\n"
	.string "is in full force… what to do?$"

PetalburgRiotCutscene_Text_7:
# 958 "data/maps/PetalburgCity/scripts.pory"
	.string "Fight Devon$"

PetalburgRiotCutscene_Text_8:
# 958 "data/maps/PetalburgCity/scripts.pory"
	.string "Fight Rebels$"

PetalburgRiotCutscene_Text_9:
# 958 "data/maps/PetalburgCity/scripts.pory"
	.string "Fight both$"

PetalburgRiotCutscene_Text_10:
# 958 "data/maps/PetalburgCity/scripts.pory"
	.string "Do nothing$"

PetalburgRiotCutscene_Text_11:
# 977 "data/maps/PetalburgCity/scripts.pory"
	.string "Hah! Take a look, you shitty corpos! The\n"
	.string "people is with us!$"

PetalburgRiotCutscene_Text_12:
# 982 "data/maps/PetalburgCity/scripts.pory"
	.string "They simply fall prey to your\n"
	.string "manipulation. A shame…\p"
	.string "For the sake of Hoenn, I must have\n"
	.string "order restored!$"

PetalburgRiotCutscene_Text_13:
# 992 "data/maps/PetalburgCity/scripts.pory"
	.string "You will soon realize how wrong your\n"
	.string "thoughtless vandalism is...\p"
	.string "Everyone, back to base.$"

PetalburgRiotCutscene_Text_14:
# 1013 "data/maps/PetalburgCity/scripts.pory"
	.string "Good job, man. That'll send Devon a good\n"
	.string "message.$"

PetalburgRiotCutscene_Text_15:
# 1015 "data/maps/PetalburgCity/scripts.pory"
	.string "Good job, girl. That'll send Devon a good\n"
	.string "message.$"

PetalburgRiotCutscene_Text_16:
# 1017 "data/maps/PetalburgCity/scripts.pory"
	.string "But they'll most likely be back\n"
	.string "tomorrow, so we will need to as well.\p"
	.string "Counting on you for the next raid. See\n"
	.string "ya!$"

PetalburgRiotCutscene_Text_17:
# 1056 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Rebels{COLOR DARK_GRAY} got inside the center before\n"
	.string "leaving, and made a mess of things!$"

PetalburgRiotCutscene_Text_18:
# 1076 "data/maps/PetalburgCity/scripts.pory"
	.string "Ah, thank you, citizen! You're helping\n"
	.string "preserve peace in Petalburg.$"

PetalburgRiotCutscene_Text_19:
# 1081 "data/maps/PetalburgCity/scripts.pory"
	.string "Peace? There'll never be peace, until\n"
	.string "you stop bleeding this region dry!\p"
	.string "Down with Devon… and down with lapdogs\n"
	.string "like you!$"

PetalburgRiotCutscene_Text_20:
# 1091 "data/maps/PetalburgCity/scripts.pory"
	.string "You're lucky this guy showed up. But\n"
	.string "we'll be back tomorrow.$"

PetalburgRiotCutscene_Text_21:
# 1097 "data/maps/PetalburgCity/scripts.pory"
	.string "Back to base, everyone!$"

PetalburgRiotCutscene_Text_22:
# 1119 "data/maps/PetalburgCity/scripts.pory"
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
# 1184 "data/maps/PetalburgCity/scripts.pory"
	.string "What? Don't get in the way, you\n"
	.string "meddlesome loser!$"

PetalburgRiotCutscene_Text_24:
# 1194 "data/maps/PetalburgCity/scripts.pory"
	.string "You would challenge us both? That is\n"
	.string "true anarchy...$"

PetalburgRiotCutscene_Text_25:
# 1200 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR BLUE}I cannot allow it!\n"
	.string "{COLOR RED}Piss off!$"

PetalburgRiotCutscene_Text_26:
# 1228 "data/maps/PetalburgCity/scripts.pory"
	.string "He defeated both admins...! Who's that\n"
	.string "trainer?$"

PetalburgRiotCutscene_Text_27:
# 1230 "data/maps/PetalburgCity/scripts.pory"
	.string "She defeated both admins...! Who's that\n"
	.string "trainer?$"

PetalburgRiotCutscene_Text_28:
# 1242 "data/maps/PetalburgCity/scripts.pory"
	.string "Your feat seems to have defused the\n"
	.string "situation. To avoid new escalation...$"

PetalburgRiotCutscene_Text_29:
# 1251 "data/maps/PetalburgCity/scripts.pory"
	.string "I propose a truce, and a compromise.\p"
	.string "To match the standard of living in\n"
	.string "{COLOR GREEN}Petalburg{COLOR DARK_GRAY}, the healing fees in this\l"
	.string "Devon Center will have a 25% discount.\p"
	.string "On the condition, however...\p"
	.string "That you Rebels repair the damage you\n"
	.string "just caused.\p"
	.string "Surely this is a reasonable deal.$"

PetalburgRiotCutscene_Text_30:
# 1266 "data/maps/PetalburgCity/scripts.pory"
	.string "Counter offer... make it a 50% discount,\n"
	.string "or we will make the damage worse.$"

PetalburgRiotCutscene_Text_31:
# 1274 "data/maps/PetalburgCity/scripts.pory"
	.string "Hmpf... you negotiate well, for a\n"
	.string "criminal. Very well.\p"
	.string "Thank you, trainer, for helping us\n"
	.string "arrive at this truce.\p"
	.string "It is far from ideal, but it will suffice\n"
	.string "for now.$"

PetalburgRiotCutscene_Text_32:
# 1282 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR BLUE}Grunts, to base!\n"
	.string "{COLOR RED}Pack it up, everyone!$"

PetalburgRiotBatter_Text_0:
# 1392 "data/maps/PetalburgCity/scripts.pory"
	.string "Damn Devon Center windows - they're\n"
	.string "tougher than an Aggron! GYAAAAA!$"

PetalburgRiotRebelwithSign_Text_0:
# 1400 "data/maps/PetalburgCity/scripts.pory"
	.string "DOWN WITH DEVON! DOWN WITH DEVON!$"

PetalburgRiotInjuredRebel_Text_0:
# 1408 "data/maps/PetalburgCity/scripts.pory"
	.string "Tsk… battle without potions next time,\n"
	.string "and we'll see who wins! Corpo scum!$"

PetalburgRiotArrestingDevon_Text_0:
# 1416 "data/maps/PetalburgCity/scripts.pory"
	.string "Stay down, for your own good! You are\n"
	.string "under arrest!$"

PetalburgRiotInjuredDevon_Text_0:
# 1424 "data/maps/PetalburgCity/scripts.pory"
	.string "Ugh… Just a little break, and I'll give\n"
	.string "that hoodlum with the bat some…!$"

PetalburgRiotLowerRebel_Text_0:
# 1432 "data/maps/PetalburgCity/scripts.pory"
	.string "Get it through your head, you\n"
	.string "thick-skulled lapdog!\p"
	.string "We want no bridges, no Safemon, and no\n"
	.string "shady corpos messing around!$"

PetalburgRiotLowerDevon_Text_0:
# 1441 "data/maps/PetalburgCity/scripts.pory"
	.string "Stop it! Why are you Rebels so\n"
	.string "ungrateful?\p"
	.string "Devon wants to rebuild this area, and\n"
	.string "all you do is get in the way!$"

PetalburgArcadeGuard1_Text_0:
# 1450 "data/maps/PetalburgCity/scripts.pory"
	.string "No games for you right now, kid. Arcade\n"
	.string "is off limits.$"

PetalburgArcadeGuardMaku_Text_0:
# 1460 "data/maps/PetalburgCity/scripts.pory"
	.string "Uu-ooh!$"

PetalburgArcadeGuard2_Text_0:
# 1470 "data/maps/PetalburgCity/scripts.pory"
	.string "I mean, a single trainer kicked them off\n"
	.string "the warehouse...\p"
	.string "Pfft, Huey's crew is pathetic. Should\n"
	.string "have sent us intead.$"

PetalburgArcadeGuard3_Text_0:
# 1479 "data/maps/PetalburgCity/scripts.pory"
	.string "They're reporting to the boss now. Them\n"
	.string "losers gonna demoted to guard duty.$"

PetalburgArcadeGuardsGoAway_Text_0:
# 1490 "data/maps/PetalburgCity/scripts.pory"
	.string "Hm? Arcade's off limits, kid. We're on\n"
	.string "high alert.$"

PetalburgSmokerMilitia_Text_0:
# 1505 "data/maps/PetalburgCity/scripts.pory"
	.string "Today's training was brutal - was dying\n"
	.string "for a smoke break...\p"
	.string "... but maybe it's the cigs that make it\n"
	.string "brutal!?\p"
	.string "Here, take this from me!$"

PetalburgSmokerMilitia_Text_1:
# 1512 "data/maps/PetalburgCity/scripts.pory"
	.string "... I mean, I already lighted this one, so\n"
	.string "may as well smoke it.\p"
	.string "And I also got some matches, it'd be a\n"
	.string "waste not to use them.$"

PetalburgMilitiaSnackGuy_Text_0:
# 1531 "data/maps/PetalburgCity/scripts.pory"
	.string "HIII-YA! HIII-YA! Arf, arf...\p"
	.string "When doing exercise, gotta keep\n"
	.string "hydrated! Here, have this!$"

PetalburgMilitiaSnackGuy_Text_1:
# 1535 "data/maps/PetalburgCity/scripts.pory"
	.string "HIII-YA! HIII-YA! Arf, arf...\p"
	.string "Nothing like an energy bar to keep\n"
	.string "energy up! Here, have one!$"

PetalburgMilitiaSnackGuy_Text_2:
# 1542 "data/maps/PetalburgCity/scripts.pory"
	.string "Thanks for cheering us up! Come back\n"
	.string "tomorrow too! HIII-YA!$"

PetalburgMilitiaLeftGuy_Text_0:
# 1552 "data/maps/PetalburgCity/scripts.pory"
	.string "The war showed us Pokémon can't be\n"
	.string "trusted, and Safemon are useless.\p"
	.string "So what can you rely on to protect\n"
	.string "yourself these days?\p"
	.string "That's right - your BODY! WAYAAAA!$"

PetalburgMilitiaRightGuy_Text_0:
# 1561 "data/maps/PetalburgCity/scripts.pory"
	.string "If you want to join us, speak with\n"
	.string "Musashi-sensei! HIII-YAAH!$"

PetalburgMilitiaRightGuy_Text_1:
# 1565 "data/maps/PetalburgCity/scripts.pory"
	.string "Seeing you spar againt Musashi-sensei\n"
	.string "was so inspiring! HII-YAAH!$"

PetalburgMartialArtsSenseiNight_Text_0:
# 1578 "data/maps/PetalburgCity/scripts.pory"
	.string "Hm? If you come for the training\n"
	.string "session, it's over now.\p"
	.string "Come back tomorrow, during the day.$"

PetalburgMartialArtsSenseiNight_Text_1:
# 1585 "data/maps/PetalburgCity/scripts.pory"
	.string "You should go to sleep. Resting is\n"
	.string "important to keep your strength up.$"

PetalburgMartialArtsSensei_Text_0:
# 1601 "data/maps/PetalburgCity/scripts.pory"
	.string "Remember. Martial arts are supposed to\n"
	.string "quell conflict, not fuel it.\p"
	.string "Those who use power wrongly... they risk\n"
	.string "being destroyed by it.$"

PetalburgMartialArtsSensei_Text_1:
# 1608 "data/maps/PetalburgCity/scripts.pory"
	.string "That's it - control your breathing!\n"
	.string "Watch your forms!\p"
	.string "It's still soon for a break!$"

PetalburgMartialArtsSensei_Text_2:
# 1615 "data/maps/PetalburgCity/scripts.pory"
	.string "Hmm? Come to join the lesson, young\n"
	.string "man?$"

PetalburgMartialArtsSensei_Text_3:
# 1617 "data/maps/PetalburgCity/scripts.pory"
	.string "Hmm? Come to join the lesson, young\n"
	.string "woman?$"

PetalburgMartialArtsSensei_Text_4:
# 1620 "data/maps/PetalburgCity/scripts.pory"
	.string "Hmm… I see it in that somber gaze you\n"
	.string "try to hide.\p"
	.string "You were a soldier. But you were never a\n"
	.string "warrior. And now you are neither.\p"
	.string "So why are you here? Do you wish for\n"
	.string "strength?$"

PetalburgMartialArtsSensei_Text_5:
# 1624 "data/maps/PetalburgCity/scripts.pory"
	.string "Yes$"

PetalburgMartialArtsSensei_Text_6:
# 1624 "data/maps/PetalburgCity/scripts.pory"
	.string "No$"

PetalburgMartialArtsSensei_Text_7:
# 1627 "data/maps/PetalburgCity/scripts.pory"
	.string "Very well... if you change your mind, we\n"
	.string "train here during the day.$"

PetalburgMartialArtsSensei_Text_8:
# 1633 "data/maps/PetalburgCity/scripts.pory"
	.string "And what would you use said strength\n"
	.string "for?$"

PetalburgMartialArtsSensei_Text_9:
# 1635 "data/maps/PetalburgCity/scripts.pory"
	.string "To defend myself$"

PetalburgMartialArtsSensei_Text_10:
# 1636 "data/maps/PetalburgCity/scripts.pory"
	.string "To accomplish my goals$"

PetalburgMartialArtsSensei_Text_11:
# 1637 "data/maps/PetalburgCity/scripts.pory"
	.string "To protect others$"

PetalburgMartialArtsSensei_Text_12:
# 1638 "data/maps/PetalburgCity/scripts.pory"
	.string "I don't know$"

PetalburgMartialArtsSensei_Text_13:
# 1641 "data/maps/PetalburgCity/scripts.pory"
	.string "I see. You have suffered harm - you are\n"
	.string "naturally afraid of more...$"

PetalburgMartialArtsSensei_Text_14:
# 1644 "data/maps/PetalburgCity/scripts.pory"
	.string "Your goals? Self-growth, perchance?\n"
	.string "Some manner of revenge? I hope not...$"

PetalburgMartialArtsSensei_Text_15:
# 1647 "data/maps/PetalburgCity/scripts.pory"
	.string "A worthy pursuit. But that, young one,\n"
	.string "often requires more resolve than\l"
	.string "strength...$"

PetalburgMartialArtsSensei_Text_16:
# 1651 "data/maps/PetalburgCity/scripts.pory"
	.string "Ah... you are honest, if nothing else.\n"
	.string "Sometimes we ignore why we are drawn to\l"
	.string "something.$"

PetalburgMartialArtsSensei_Text_17:
# 1655 "data/maps/PetalburgCity/scripts.pory"
	.string "Stand over there. I will impart a lesson\n"
	.string "to you.$"

PetalburgMartialArtsSensei_Text_18:
# 1691 "data/maps/PetalburgCity/scripts.pory"
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
# 1706 "data/maps/PetalburgCity/scripts.pory"
	.string "Hoho… fear not. Looks can be deceiving.\n"
	.string "And that goes for both of us…\p"
	.string "Do not hesitate. Strike me!$"

PetalburgMartialArtsSensei_Text_20:
# 1713 "data/maps/PetalburgCity/scripts.pory"
	.string "Strike with crutch$"

PetalburgMartialArtsSensei_Text_21:
# 1714 "data/maps/PetalburgCity/scripts.pory"
	.string "Low kick$"

PetalburgMartialArtsSensei_Text_22:
# 1719 "data/maps/PetalburgCity/scripts.pory"
	.string "Kick$"

PetalburgMartialArtsSensei_Text_23:
# 1720 "data/maps/PetalburgCity/scripts.pory"
	.string "Punch$"

PetalburgMartialArtsSensei_Text_24:
# 1750 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}The old man deflects the hit, and\n"
	.string "returns the blow!$"

PetalburgMartialArtsSensei_Text_25:
# 1755 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This was not a clash of your force\n"
	.string "against mine.\p"
	.string "It was a single motion, where your own\n"
	.string "blow turned against you.\p"
	.string "This is the secret of the move {COLOR GREEN}Counter{COLOR DARK_GRAY}.\p"
	.string "Now, go back to your spot.$"

PetalburgMartialArtsSensei_Text_26:
# 1764 "data/maps/PetalburgCity/scripts.pory"
	.string "I want you to try performing the move\n"
	.string "now. Get ready!$"

PetalburgMartialArtsSensei_Text_27:
# 1775 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}The old man draws near with great speed\n"
	.string "to strike!$"

PetalburgMartialArtsSensei_Text_28:
# 1781 "data/maps/PetalburgCity/scripts.pory"
	.string "Kick as he comes$"

PetalburgMartialArtsSensei_Text_29:
# 1782 "data/maps/PetalburgCity/scripts.pory"
	.string "Dodge and punch back$"

PetalburgMartialArtsSensei_Text_30:
# 1783 "data/maps/PetalburgCity/scripts.pory"
	.string "Trip him with crutch and strike back$"

PetalburgMartialArtsSensei_Text_31:
# 1791 "data/maps/PetalburgCity/scripts.pory"
	.string "Block with arm and punch back$"

PetalburgMartialArtsSensei_Text_32:
# 1792 "data/maps/PetalburgCity/scripts.pory"
	.string "Dodge and kick back$"

PetalburgMartialArtsSensei_Text_33:
# 1800 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}The old man dodges nimbly and strikes\n"
	.string "{PLAYER}!$"

PetalburgMartialArtsSensei_Text_34:
# 1805 "data/maps/PetalburgCity/scripts.pory"
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
# 1818 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} is unable to dodge the old\n"
	.string "man's strike!$"

PetalburgMartialArtsSensei_Text_36:
# 1823 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR DARK_GRAY}You understood the principle... but you\n"
	.string "failed to understand your limits.$"

PetalburgMartialArtsSensei_Text_37:
# 1827 "data/maps/PetalburgCity/scripts.pory"
	.string "Those crutches you need for support -\n"
	.string "they rob you of your agility.\p"
	.string "However, they may also be turned to\n"
	.string "weapons at any moment. Again!\p"
	.string "{COLOR GREEN}The old man attempts to strike again!$"

PetalburgMartialArtsSensei_Text_38:
# 1834 "data/maps/PetalburgCity/scripts.pory"
	.string "You have only one able hand to block,\n"
	.string "while I have two to strike you.\p"
	.string "Think of what else you may leverage\n"
	.string "against me. Again!\p"
	.string "{COLOR GREEN}The old man attempts to strike again!$"

PetalburgMartialArtsSensei_Text_39:
# 1857 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} has successfuly countered\n"
	.string "the attack!$"

PetalburgMartialArtsSensei_Text_40:
# 1859 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} learnt the move Counter!$"

PetalburgMartialArtsSensei_Text_41:
# 1864 "data/maps/PetalburgCity/scripts.pory"
	.string "Excellent! Not only did you used my own\n"
	.string "move against me...\p"
	.string "You also understood your own\n"
	.string "limitations.\p"
	.string "You have potential as a martial artist.$"

PetalburgMartialArtsSensei_Text_42:
# 1898 "data/maps/PetalburgCity/scripts.pory"
	.string "I hope you never come into peril, and\n"
	.string "need to use {COLOR GREEN}Counter{COLOR DARK_GRAY}...\p"
	.string "But if you do, and feel yourself in need\n"
	.string "of even more training...\p"
	.string "I would be happy to be your teacher.\n"
	.string "Now, take care out there.$"

ArcadeLotFuelScooperTruck1Pointer_Text_0:
# 1943 "data/maps/PetalburgCity/scripts.pory"
	.string "This vehicle might have fuel... but this\n"
	.string "is not the spot to scoop it from.$"

ArcadeLotFuelScooperTruck1_Text_0:
# 1956 "data/maps/PetalburgCity/scripts.pory"
	.string "I've already scoped fuel from this\n"
	.string "truck. Its tank is empty.$"

ArcadeLotFuelScooperTruck1_Text_1:
# 1964 "data/maps/PetalburgCity/scripts.pory"
	.string "This vehicle might have fuel... but the\n"
	.string "{COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY}'s tank is full!\p"
	.string "I should take this to the manager of\n"
	.string "{COLOR GREEN}Petalburg's Hardware Store.$"

ArcadeLotFuelScooperTruck1_Text_2:
# 1968 "data/maps/PetalburgCity/scripts.pory"
	.string "This vehicle might have fuel...\n"
	.string "Use the {COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY}?$"

ArcadeLotFuelScooperTruck1_Text_3:
# 1988 "data/maps/PetalburgCity/scripts.pory"
	.string "The {COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY} tank is now a quarter\n"
	.string "full!$"

ArcadeLotFuelScooperTruck1_Text_4:
# 1992 "data/maps/PetalburgCity/scripts.pory"
	.string "The {COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY} tank is now half full!$"

ArcadeLotFuelScooperTruck1_Text_5:
# 1996 "data/maps/PetalburgCity/scripts.pory"
	.string "The {COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY} tank is now three\n"
	.string "quarters full!$"

ArcadeLotFuelScooperTruck1_Text_6:
# 2001 "data/maps/PetalburgCity/scripts.pory"
	.string "The {COLOR GREEN}Fuel Scooper{COLOR DARK_GRAY} tank is now completely\n"
	.string "full!$"

ArcadeLotFuelScooperTruck1_Text_7:
# 2026 "data/maps/PetalburgCity/scripts.pory"
	.string "You thief! That's my hard-earned\n"
	.string "gasoline you're taking!$"

ArcadeLotFuelScooperTruck1_Text_8:
# 2029 "data/maps/PetalburgCity/scripts.pory"
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
# 2056 "data/maps/PetalburgCity/scripts.pory"
	.string "Listen to my new song... {STR_VAR_1}!\p"
	.string "What, you don't know the phrase? It's\n"
	.string "like, the Rebel Zone's slogan right now!\p"
	.string "{STR_VAR_1}!!!!!$"

PetalburgWildZoneNPC_Text_0:
# 2103 "data/maps/PetalburgCity/scripts.pory"
	.string "Done already?$"

PetalburgWildZoneNPC_Text_1:
# 2111 "data/maps/PetalburgCity/scripts.pory"
	.string "No hurries then - enjoy the time you\n"
	.string "got left!$"

PetalburgWildZoneNPC_Text_2:
# 2120 "data/maps/PetalburgCity/scripts.pory"
	.string "Really? Well, I'll have your leftover\n"
	.string "Pokéballs back then!$"

PetalburgWildZoneNPC_Text_3:
# 2126 "data/maps/PetalburgCity/scripts.pory"
	.string "Come back soon!$"

PetalburgWildZoneNPC_Text_4:
# 2148 "data/maps/PetalburgCity/scripts.pory"
	.string "Oh hey, you're the guy from Oldale\n"
	.string "Warehouse! Remember me!?$"

PetalburgWildZoneNPC_Text_5:
# 2151 "data/maps/PetalburgCity/scripts.pory"
	.string "Oh hey, you're the girl from Oldale\n"
	.string "Warehouse! Remember me!?$"

PetalburgWildZoneNPC_Text_6:
# 2153 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm the Rebel who was left behind there.\n"
	.string "But that was the old me!\p"
	.string "Electrike and I, we're done working for\n"
	.string "others!$"

PetalburgWildZoneNPC_Text_7:
# 2158 "data/maps/PetalburgCity/scripts.pory"
	.string "We've started our own business, to make\n"
	.string "it big on our own - right buddy?$"

PetalburgWildZoneNPC_Text_8:
# 2165 "data/maps/PetalburgCity/scripts.pory"
	.string "IIIKE!$"

PetalburgWildZoneNPC_Text_9:
# 2178 "data/maps/PetalburgCity/scripts.pory"
	.string "And this is it - the first and only Wild\n"
	.string "Zone in Petalburg!$"

PetalburgWildZoneNPC_Text_10:
# 2184 "data/maps/PetalburgCity/scripts.pory"
	.string "It's simple - I give you Pokéballs, and\n"
	.string "you enter the area to catch rare\l"
	.string "Pokémon.$"

PetalburgWildZoneNPC_Text_11:
# 2199 "data/maps/PetalburgCity/scripts.pory"
	.string "It's 100¥ per entry. You want in?$"

PetalburgWildZoneNPC_Text_12:
# 2210 "data/maps/PetalburgCity/scripts.pory"
	.string "Welcome back! Want a round of the Wild\n"
	.string "Zone?$"

PetalburgWildZoneNPC_Text_13:
# 2218 "data/maps/PetalburgCity/scripts.pory"
	.string "Wild Zone?$"

PetalburgWildZoneNPC_Text_14:
# 2225 "data/maps/PetalburgCity/scripts.pory"
	.string "Hey, you ain't got enough! It's a Wild\n"
	.string "Zone pal, not a Free Zone!$"

PetalburgWildZoneNPC_Text_15:
# 2237 "data/maps/PetalburgCity/scripts.pory"
	.string "Alrighty! Here's your Pokéballs!$"

PetalburgWildZoneNPC_Text_16:
# 2242 "data/maps/PetalburgCity/scripts.pory"
	.string "Have a good time!$"

PetalburgWildZoneNPC_Text_17:
# 2259 "data/maps/PetalburgCity/scripts.pory"
	.string "You sure? You're going to miss on some\n"
	.string "raaaare Pokémon...$"

PetalburgWildZoneNPC_Text_18:
# 2268 "data/maps/PetalburgCity/scripts.pory"
	.string "Geez, I explained this to you already.$"

PetalburgWildZoneTourist_Text_0:
# 2297 "data/maps/PetalburgCity/scripts.pory"
	.string "This Wild Zone is a bit dirtier than the\n"
	.string "one we have in Lumiose...\p"
	.string "But it's an interesting regional spin!$"

PetalburgWildZoneTourist_Text_1:
# 2303 "data/maps/PetalburgCity/scripts.pory"
	.string "Ouch, something just bit me...!$"

PetalburgBurgerMunchlax_Text_0:
# 2314 "data/maps/PetalburgCity/scripts.pory"
	.string "Mun-muuun...\p"
	.string "The Munchlax is scraping the griller for\n"
	.string "leftover meat.$"

Dawson_Intro::
# 1359 "data/maps/PetalburgCity/scripts.pory"
	.string "Willneverplay$"

Georgia_Intro::
# 1362 "data/maps/PetalburgCity/scripts.pory"
	.string "Willneverplay$"

Dawson_Outro::
# 1365 "data/maps/PetalburgCity/scripts.pory"
	.string "And thus Hoenn plunges further into\nchaos...$"

Georgia_Outro::
# 1368 "data/maps/PetalburgCity/scripts.pory"
	.string "Tsk... we'll never give up!!$"

Georgia_MultiOutro::
# 1371 "data/maps/PetalburgCity/scripts.pory"
	.string "Tsk... only lost cause this guy\ndragged me down!!$"

Dawson_MultiOutro::
# 1374 "data/maps/PetalburgCity/scripts.pory"
	.string "You are quite strong. You would make\nan excellent Devon Grunt.$"
