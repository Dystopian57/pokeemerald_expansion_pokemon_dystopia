# 1 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_MapScripts::
# 3 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EnableFollowers
# 7 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 8 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.byte 0
# 9 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 10 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 11 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_EventScript_Colosseum::
# 12 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 13 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	end
# 14 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 15 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_EventScript_TradeCenter::
# 16 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 17 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	end
# 18 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 19 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_EventScript_RecordCorner::
# 20 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 21 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	end
# 22 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 23 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
EnableFollowers::
# 24 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED

InnNPCStopsPlayerfromInn::
# 30 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 31 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, enddevoninnscript2
# 32 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, innnpcstopsplayer
# 33 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
innnpcstopsplayer:
# 34 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 35 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 36 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_0
# 37 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, InnNPCStopsPlayerfromInn_Movement_1
# 38 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_0
# 39 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
innroomchoice2:
# 40 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, InnNPCStopsPlayerfromInn_Text_1, InnNPCStopsPlayerfromInn_Text_2, InnNPCStopsPlayerfromInn_Text_3
# 41 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq InnNPCStopsPlayerfromInn_2
InnNPCStopsPlayerfromInn_1:
# 67 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq InnNPCStopsPlayerfromInn_5
InnNPCStopsPlayerfromInn_4:
# 76 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq InnNPCStopsPlayerfromInn_11
InnNPCStopsPlayerfromInn_10:
# 82 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
enddevoninnscript2:
# 83 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	releaseall
	return

InnNPCStopsPlayerfromInn_2:
# 42 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	showmoneybox 18, 0
# 43 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_4
# 44 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkmoney 200
# 45 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq InnNPCStopsPlayerfromInn_8
InnNPCStopsPlayerfromInn_7:
# 58 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq InnNPCStopsPlayerfromInn_13
	goto InnNPCStopsPlayerfromInn_1

InnNPCStopsPlayerfromInn_5:
# 68 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_8
# 72 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_9
# 73 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto innroomchoice2
	goto InnNPCStopsPlayerfromInn_4

InnNPCStopsPlayerfromInn_8:
# 46 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SHOP
# 47 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitse
# 48 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removemoney 200
# 49 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	updatemoneybox
# 50 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_5
# 52 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 53 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	giveitem ITEM_CARD_KEY
# 56 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript2
	goto InnNPCStopsPlayerfromInn_7

InnNPCStopsPlayerfromInn_11:
# 77 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_10
# 78 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, InnNPCStopsPlayerfromInn_Movement_2
# 79 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto InnNPCStopsPlayerfromInn_10

InnNPCStopsPlayerfromInn_13:
# 59 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_6
# 60 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 61 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_7
# 62 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, InnNPCStopsPlayerfromInn_Movement_2
# 63 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 64 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript2
	goto InnNPCStopsPlayerfromInn_1


DevonInnNPC::
# 87 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
startinnnpcscript:
# 88 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 89 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 90 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_0
# 91 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_0
# 92 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
innroomchoice:
# 93 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, InnNPCStopsPlayerfromInn_Text_1, InnNPCStopsPlayerfromInn_Text_2, InnNPCStopsPlayerfromInn_Text_3
# 94 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonInnNPC_2
DevonInnNPC_1:
# 118 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonInnNPC_5
DevonInnNPC_4:
# 127 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonInnNPC_11
DevonInnNPC_10:
# 131 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
enddevoninnscript:
# 132 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	releaseall
	return

DevonInnNPC_2:
# 95 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	showmoneybox 18, 0
# 96 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_4
# 97 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkmoney 200
# 98 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DevonInnNPC_8
DevonInnNPC_7:
# 111 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DevonInnNPC_13
	goto DevonInnNPC_1

DevonInnNPC_5:
# 119 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_8
# 123 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_9
# 124 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto innroomchoice
	goto DevonInnNPC_4

DevonInnNPC_8:
# 99 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SHOP
# 100 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitse
# 101 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removemoney 200
# 102 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	updatemoneybox
# 103 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_5
# 105 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 106 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	giveitem ITEM_CARD_KEY
# 109 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_7

DevonInnNPC_11:
# 128 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_10
	goto DevonInnNPC_10

DevonInnNPC_13:
# 112 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_6
# 113 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 114 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_7
# 115 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_1


DevonInnTakeKey::
# 136 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 137 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, takeguestcard
# 138 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, letthroughdownstairs
# 140 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
takeguestcard:
# 141 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 142 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 143 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonInnTakeKey_Movement_0
# 144 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnTakeKey_Text_0
# 146 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removeitem ITEM_CARD_KEY
# 150 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
letthroughdownstairs:
# 151 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnRoom1Sign::
# 155 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 156 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnRoom1Sign_Text_0
# 157 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnRoom2Sign::
# 161 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 162 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnRoom2Sign_Text_0
# 163 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnBreakLady::
# 167 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 168 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnBreakLady_Text_0
# 169 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnForbiddenFollower::
# 176 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidefollower
# 177 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 178 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
	return


DevonInnAllowedFollower::
# 182 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 183 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
	return


DevonInnBlockDoor::
# 187 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setmetatile 3, 1, METATILE_General_Door_PokeCenter, FALSE
	return


DevonInnClosedDoor::
# 192 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 193 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 194 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, inndoorisopen
# 195 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, inndoorisclosed
# 197 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
inndoorisopen:
# 198 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnClosedDoor_Text_0
# 199 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
# 200 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	opendoor 3, 1
# 201 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SLIDING_DOOR
# 202 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitdooranim
# 203 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonInnClosedDoor_Movement_0
# 204 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hideplayer
# 205 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	closedoor 3, 1
# 206 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto endinndoorscript
# 208 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
inndoorisclosed:
# 209 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnClosedDoor_Text_1
# 211 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
endinndoorscript:
# 212 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


# 36 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
InnNPCStopsPlayerfromInn_Movement_0:
# 36 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_player
	step_end

# 37 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
InnNPCStopsPlayerfromInn_Movement_1:
# 37 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_left
	step_end

# 62 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
InnNPCStopsPlayerfromInn_Movement_2:
# 62 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	walk_down
	step_end

# 143 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
DevonInnTakeKey_Movement_0:
# 143 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_up
	step_end

# 203 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
DevonInnClosedDoor_Movement_0:
# 203 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	walk_up
	step_end

InnNPCStopsPlayerfromInn_Text_0:
# 38 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Welcome to Oldale's Devon Inn. Would you\n"
	.string "like to lodge with us for 200¥?$"

InnNPCStopsPlayerfromInn_Text_1:
# 40 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Yes, please$"

InnNPCStopsPlayerfromInn_Text_2:
# 40 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Any rules?$"

InnNPCStopsPlayerfromInn_Text_3:
# 40 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "No, thank you$"

InnNPCStopsPlayerfromInn_Text_4:
# 43 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Wonderful. I will take payment\n"
	.string "upfront...$"

InnNPCStopsPlayerfromInn_Text_5:
# 50 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "You are in Room 1. Here's your Guest Key\n"
	.string "- use it on the door to enter.$"

InnNPCStopsPlayerfromInn_Text_6:
# 59 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Ah, it would seem you are somewhat\n"
	.string "short of the 200¥...$"

InnNPCStopsPlayerfromInn_Text_7:
# 61 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "We hope we can welcome you in another\n"
	.string "ocassion!$"

InnNPCStopsPlayerfromInn_Text_8:
# 68 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Yes, there are three main rules...\p"
	.string "Rule Number 1: While in the room,\n"
	.string "Pokémon must be kept inside their\l"
	.string "Pokéballs.\p"
	.string "Rule Number 2: No running or biking\n"
	.string "allowed in the rooms.\p"
	.string "Rule Number 3: Lodging privileges cease\n"
	.string "upon leaving this floor.$"

InnNPCStopsPlayerfromInn_Text_9:
# 72 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "So... would you like a room?$"

InnNPCStopsPlayerfromInn_Text_10:
# 77 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Very well. We hope we can welcome you in\n"
	.string "another ocassion!$"

DevonInnTakeKey_Text_0:
# 144 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "We hope you enjoyed your stay. I will\n"
	.string "take your Guest Card now.\p"
	.string "Please visit us again!$"

DevonInnRoom1Sign_Text_0:
# 156 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Room 1$"

DevonInnRoom2Sign_Text_0:
# 162 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Room 2$"

DevonInnBreakLady_Text_0:
# 168 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "I'm sorry, I'm on my break here. Please\n"
	.string "do not disturb me.$"

DevonInnClosedDoor_Text_0:
# 198 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "You approach the Guest Card to the\n"
	.string "card reader. The door slides open.$"

DevonInnClosedDoor_Text_1:
# 209 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "The door does not slide open. It seems\n"
	.string "it needs a Guest Card to do so.$"
