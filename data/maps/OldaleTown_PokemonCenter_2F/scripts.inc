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

# 9 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 10 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 11 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
# 12 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.byte 0
# 13 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 14 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 15 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_EventScript_Colosseum::
# 16 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 17 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	end
# 18 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 19 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_EventScript_TradeCenter::
# 20 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 21 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	end
# 22 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 23 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_EventScript_RecordCorner::
# 24 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 25 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	end
# 26 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 27 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
EnableFollowers::
# 28 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED

InnNPCStopsPlayerfromInn::
# 35 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 36 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, enddevoninnscript2
# 37 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, innnpcstopsplayer
# 38 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
innnpcstopsplayer:
# 39 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 40 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 41 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_0
# 42 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, InnNPCStopsPlayerfromInn_Movement_1
# 43 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_0
# 44 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
innroomchoice2:
# 45 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, InnNPCStopsPlayerfromInn_Text_1, InnNPCStopsPlayerfromInn_Text_2, InnNPCStopsPlayerfromInn_Text_3
# 46 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq InnNPCStopsPlayerfromInn_2
InnNPCStopsPlayerfromInn_1:
# 76 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq InnNPCStopsPlayerfromInn_5
InnNPCStopsPlayerfromInn_4:
# 85 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq InnNPCStopsPlayerfromInn_11
InnNPCStopsPlayerfromInn_10:
# 91 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
enddevoninnscript2:
# 92 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	releaseall
	return

InnNPCStopsPlayerfromInn_2:
# 47 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	showmoneybox 18, 0
# 48 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_4
# 49 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkmoney 200
# 50 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq InnNPCStopsPlayerfromInn_8
InnNPCStopsPlayerfromInn_7:
# 65 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq InnNPCStopsPlayerfromInn_13
	goto InnNPCStopsPlayerfromInn_1

InnNPCStopsPlayerfromInn_5:
# 77 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_8
# 81 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_9
# 82 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto innroomchoice2
	goto InnNPCStopsPlayerfromInn_4

InnNPCStopsPlayerfromInn_8:
# 51 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SHOP
# 52 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removemoney 200
# 53 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	updatemoneybox
# 54 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitse
# 55 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_5
# 57 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 58 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	giveitem ITEM_CARD_KEY
# 59 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag seenweatheratinnvisit
# 60 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag claimedinnfreedrink
# 63 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript2
	goto InnNPCStopsPlayerfromInn_7

InnNPCStopsPlayerfromInn_11:
# 86 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_10
# 87 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, InnNPCStopsPlayerfromInn_Movement_2
# 88 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto InnNPCStopsPlayerfromInn_10

InnNPCStopsPlayerfromInn_13:
# 66 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_6
# 67 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 68 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_7
# 69 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, InnNPCStopsPlayerfromInn_Movement_2
# 70 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 71 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_3
# 72 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement 1
# 73 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript2
	goto InnNPCStopsPlayerfromInn_1


DevonInnNPC::
# 96 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 97 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, pleaseenjoystay
# 98 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, startinnnpcdialogue
# 99 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
startinnnpcdialogue:
# 100 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 101 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 102 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_0
# 103 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_0
# 104 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
innroomchoice:
# 105 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, InnNPCStopsPlayerfromInn_Text_1, InnNPCStopsPlayerfromInn_Text_2, InnNPCStopsPlayerfromInn_Text_3
# 106 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonInnNPC_2
DevonInnNPC_1:
# 130 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonInnNPC_5
DevonInnNPC_4:
# 139 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonInnNPC_11
DevonInnNPC_10:
# 143 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
pleaseenjoystay:
# 144 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_0
# 145 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnNPC_Text_0
# 147 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
enddevoninnscript:
# 148 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	releaseall
	return

DevonInnNPC_2:
# 107 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	showmoneybox 18, 0
# 108 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_4
# 109 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkmoney 200
# 110 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DevonInnNPC_8
DevonInnNPC_7:
# 123 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DevonInnNPC_13
	goto DevonInnNPC_1

DevonInnNPC_5:
# 131 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_8
# 135 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_9
# 136 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto innroomchoice
	goto DevonInnNPC_4

DevonInnNPC_8:
# 111 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SHOP
# 112 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitse
# 113 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removemoney 200
# 114 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	updatemoneybox
# 115 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_5
# 117 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 118 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	giveitem ITEM_CARD_KEY
# 121 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_7

DevonInnNPC_11:
# 140 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_10
# 141 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_10

DevonInnNPC_13:
# 124 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_6
# 125 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 126 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_7
# 127 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_1


DevonInnTakeKey::
# 152 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 153 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, takeguestcard
# 154 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, letthroughdownstairs
# 156 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
takeguestcard:
# 157 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 158 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 159 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonInnTakeKey_Movement_0
# 160 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 161 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_3
# 162 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement 1
# 163 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnTakeKey_Text_0
# 165 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removeitem ITEM_CARD_KEY
# 169 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
letthroughdownstairs:
# 170 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnRoom1Sign::
# 174 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 175 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnRoom1Sign_Text_0
# 176 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnRoom2Sign::
# 180 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 181 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnRoom2Sign_Text_0
# 182 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnBreakLady::
# 186 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 187 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnBreakLady_Text_0
# 188 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnForbiddenFollower::
# 195 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidefollower
# 196 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 197 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
	return


DevonInnAllowedFollower::
# 201 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 202 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
	return


DevonInnBlockDoor::
# 206 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setmetatile 3, 1, METATILE_General_Door_PokeCenter, FALSE
	return


DevonInnClosedDoor::
# 211 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 212 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 213 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, inndoorisopen
# 214 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, inndoorisclosed
# 216 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
inndoorisopen:
# 217 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnClosedDoor_Text_0
# 218 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
# 219 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	opendoor 3, 1
# 220 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SLIDING_DOOR
# 221 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitdooranim
# 222 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonInnClosedDoor_Movement_0
# 223 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hideplayer
# 224 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	closedoor 3, 1
# 225 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto endinndoorscript
# 227 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
inndoorisclosed:
# 228 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnClosedDoor_Text_1
# 230 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
endinndoorscript:
# 231 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


# 41 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
InnNPCStopsPlayerfromInn_Movement_0:
# 41 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_player
	step_end

# 42 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
InnNPCStopsPlayerfromInn_Movement_1:
# 42 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_left
	step_end

# 69 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
InnNPCStopsPlayerfromInn_Movement_2:
# 69 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	walk_down
	step_end

# 71 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
InnNPCStopsPlayerfromInn_Movement_3:
# 71 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_down
	step_end

# 159 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
DevonInnTakeKey_Movement_0:
# 159 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_up
	step_end

# 222 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
DevonInnClosedDoor_Movement_0:
# 222 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	walk_up
	step_end

InnNPCStopsPlayerfromInn_Text_0:
# 43 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Welcome to Oldale's Devon Inn. Would you\n"
	.string "like to lodge with us for 200¥?$"

InnNPCStopsPlayerfromInn_Text_1:
# 45 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Yes, please$"

InnNPCStopsPlayerfromInn_Text_2:
# 45 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Any rules?$"

InnNPCStopsPlayerfromInn_Text_3:
# 45 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "No, thank you$"

InnNPCStopsPlayerfromInn_Text_4:
# 48 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Wonderful. I will take payment\n"
	.string "upfront...$"

InnNPCStopsPlayerfromInn_Text_5:
# 55 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "You are in Room 1. Here's your Guest Key\n"
	.string "- use it on the door to enter.$"

InnNPCStopsPlayerfromInn_Text_6:
# 66 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Ah, it would seem you are somewhat\n"
	.string "short of the 200¥...$"

InnNPCStopsPlayerfromInn_Text_7:
# 68 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "We hope we can welcome you in another\n"
	.string "ocassion!$"

InnNPCStopsPlayerfromInn_Text_8:
# 77 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Yes, there are three main rules...\p"
	.string "Rule Number 1: While in the room,\n"
	.string "Pokémon must be kept inside their\l"
	.string "Pokéballs.\p"
	.string "Rule Number 2: No running or biking\n"
	.string "allowed in the rooms.\p"
	.string "Rule Number 3: Lodging privileges cease\n"
	.string "upon leaving this floor.$"

InnNPCStopsPlayerfromInn_Text_9:
# 81 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "So... would you like a room?$"

InnNPCStopsPlayerfromInn_Text_10:
# 86 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Very well. We hope we can welcome you in\n"
	.string "another ocassion!$"

DevonInnNPC_Text_0:
# 145 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Please enjoy your stay! And keep your\n"
	.string "Pokémon in their Pokéballs.$"

DevonInnTakeKey_Text_0:
# 163 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "We hope you enjoyed your stay. I will\n"
	.string "take your Guest Card now.\p"
	.string "Please visit us again!$"

DevonInnRoom1Sign_Text_0:
# 175 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Room 1$"

DevonInnRoom2Sign_Text_0:
# 181 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Room 2$"

DevonInnBreakLady_Text_0:
# 187 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "I'm sorry, I'm on my break here. Please\n"
	.string "do not disturb me.$"

DevonInnClosedDoor_Text_0:
# 217 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "You approach the Guest Card to the\n"
	.string "card reader. The door slides open.$"

DevonInnClosedDoor_Text_1:
# 228 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "The door does not slide open. It seems\n"
	.string "it needs a Guest Card to do so.$"
