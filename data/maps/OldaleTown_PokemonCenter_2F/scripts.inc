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
# 70 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq InnNPCStopsPlayerfromInn_5
InnNPCStopsPlayerfromInn_4:
# 79 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq InnNPCStopsPlayerfromInn_11
InnNPCStopsPlayerfromInn_10:
# 85 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
enddevoninnscript2:
# 86 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
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
# 59 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq InnNPCStopsPlayerfromInn_13
	goto InnNPCStopsPlayerfromInn_1

InnNPCStopsPlayerfromInn_5:
# 71 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_8
# 75 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_9
# 76 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
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
# 54 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag seenweatheratinnvisit
# 57 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript2
	goto InnNPCStopsPlayerfromInn_7

InnNPCStopsPlayerfromInn_11:
# 80 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_10
# 81 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, InnNPCStopsPlayerfromInn_Movement_2
# 82 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto InnNPCStopsPlayerfromInn_10

InnNPCStopsPlayerfromInn_13:
# 60 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_6
# 61 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 62 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_7
# 63 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, InnNPCStopsPlayerfromInn_Movement_2
# 64 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 65 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_3
# 66 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement 1
# 67 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript2
	goto InnNPCStopsPlayerfromInn_1


DevonInnNPC::
# 90 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 91 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, pleaseenjoystay
# 92 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, startinnnpcdialogue
# 93 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
startinnnpcdialogue:
# 94 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 95 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 96 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_0
# 97 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_0
# 98 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
innroomchoice:
# 99 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, InnNPCStopsPlayerfromInn_Text_1, InnNPCStopsPlayerfromInn_Text_2, InnNPCStopsPlayerfromInn_Text_3
# 100 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonInnNPC_2
DevonInnNPC_1:
# 124 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonInnNPC_5
DevonInnNPC_4:
# 133 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonInnNPC_11
DevonInnNPC_10:
# 137 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
pleaseenjoystay:
# 138 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnNPC_Text_0
# 140 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
enddevoninnscript:
# 141 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	releaseall
	return

DevonInnNPC_2:
# 101 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	showmoneybox 18, 0
# 102 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_4
# 103 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkmoney 200
# 104 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DevonInnNPC_8
DevonInnNPC_7:
# 117 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DevonInnNPC_13
	goto DevonInnNPC_1

DevonInnNPC_5:
# 125 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_8
# 129 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_9
# 130 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto innroomchoice
	goto DevonInnNPC_4

DevonInnNPC_8:
# 105 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SHOP
# 106 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitse
# 107 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removemoney 200
# 108 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	updatemoneybox
# 109 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_5
# 111 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 112 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	giveitem ITEM_CARD_KEY
# 115 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_7

DevonInnNPC_11:
# 134 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_10
# 135 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_10

DevonInnNPC_13:
# 118 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_6
# 119 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 120 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_7
# 121 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_1


DevonInnTakeKey::
# 145 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 146 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, takeguestcard
# 147 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, letthroughdownstairs
# 149 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
takeguestcard:
# 150 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 151 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 152 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonInnTakeKey_Movement_0
# 153 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 154 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_3
# 155 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement 1
# 156 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnTakeKey_Text_0
# 158 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removeitem ITEM_CARD_KEY
# 162 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
letthroughdownstairs:
# 163 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnRoom1Sign::
# 167 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 168 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnRoom1Sign_Text_0
# 169 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnRoom2Sign::
# 173 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 174 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnRoom2Sign_Text_0
# 175 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnBreakLady::
# 179 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 180 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnBreakLady_Text_0
# 181 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnForbiddenFollower::
# 188 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidefollower
# 189 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 190 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
	return


DevonInnAllowedFollower::
# 194 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 195 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
	return


DevonInnBlockDoor::
# 199 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setmetatile 3, 1, METATILE_General_Door_PokeCenter, FALSE
	return


DevonInnClosedDoor::
# 204 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 205 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 206 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, inndoorisopen
# 207 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, inndoorisclosed
# 209 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
inndoorisopen:
# 210 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnClosedDoor_Text_0
# 211 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
# 212 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	opendoor 3, 1
# 213 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SLIDING_DOOR
# 214 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitdooranim
# 215 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonInnClosedDoor_Movement_0
# 216 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hideplayer
# 217 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	closedoor 3, 1
# 218 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto endinndoorscript
# 220 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
inndoorisclosed:
# 221 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnClosedDoor_Text_1
# 223 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
endinndoorscript:
# 224 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
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

# 63 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
InnNPCStopsPlayerfromInn_Movement_2:
# 63 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
InnNPCStopsPlayerfromInn_Movement_3:
# 65 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_down
	step_end

# 152 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
DevonInnTakeKey_Movement_0:
# 152 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_up
	step_end

# 215 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
DevonInnClosedDoor_Movement_0:
# 215 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
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
# 60 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Ah, it would seem you are somewhat\n"
	.string "short of the 200¥...$"

InnNPCStopsPlayerfromInn_Text_7:
# 62 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "We hope we can welcome you in another\n"
	.string "ocassion!$"

InnNPCStopsPlayerfromInn_Text_8:
# 71 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Yes, there are three main rules...\p"
	.string "Rule Number 1: While in the room,\n"
	.string "Pokémon must be kept inside their\l"
	.string "Pokéballs.\p"
	.string "Rule Number 2: No running or biking\n"
	.string "allowed in the rooms.\p"
	.string "Rule Number 3: Lodging privileges cease\n"
	.string "upon leaving this floor.$"

InnNPCStopsPlayerfromInn_Text_9:
# 75 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "So... would you like a room?$"

InnNPCStopsPlayerfromInn_Text_10:
# 80 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Very well. We hope we can welcome you in\n"
	.string "another ocassion!$"

DevonInnNPC_Text_0:
# 138 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Please enjoy your stay! And keep your\n"
	.string "Pokémon in their Pokéballs.$"

DevonInnTakeKey_Text_0:
# 156 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "We hope you enjoyed your stay. I will\n"
	.string "take your Guest Card now.\p"
	.string "Please visit us again!$"

DevonInnRoom1Sign_Text_0:
# 168 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Room 1$"

DevonInnRoom2Sign_Text_0:
# 174 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Room 2$"

DevonInnBreakLady_Text_0:
# 180 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "I'm sorry, I'm on my break here. Please\n"
	.string "do not disturb me.$"

DevonInnClosedDoor_Text_0:
# 210 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "You approach the Guest Card to the\n"
	.string "card reader. The door slides open.$"

DevonInnClosedDoor_Text_1:
# 221 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "The door does not slide open. It seems\n"
	.string "it needs a Guest Card to do so.$"
