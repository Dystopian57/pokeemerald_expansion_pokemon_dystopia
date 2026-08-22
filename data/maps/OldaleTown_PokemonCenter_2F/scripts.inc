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
# 75 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq InnNPCStopsPlayerfromInn_5
InnNPCStopsPlayerfromInn_4:
# 84 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq InnNPCStopsPlayerfromInn_11
InnNPCStopsPlayerfromInn_10:
# 90 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
enddevoninnscript2:
# 91 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
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
# 64 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq InnNPCStopsPlayerfromInn_13
	goto InnNPCStopsPlayerfromInn_1

InnNPCStopsPlayerfromInn_5:
# 76 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_8
# 80 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_9
# 81 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto innroomchoice2
	goto InnNPCStopsPlayerfromInn_4

InnNPCStopsPlayerfromInn_8:
# 51 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SHOP
# 52 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitse
# 53 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removemoney 200
# 54 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	updatemoneybox
# 55 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_5
# 57 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 58 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	giveitem ITEM_CARD_KEY
# 59 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag seenweatheratinnvisit
# 62 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript2
	goto InnNPCStopsPlayerfromInn_7

InnNPCStopsPlayerfromInn_11:
# 85 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_10
# 86 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, InnNPCStopsPlayerfromInn_Movement_2
# 87 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto InnNPCStopsPlayerfromInn_10

InnNPCStopsPlayerfromInn_13:
# 65 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_6
# 66 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 67 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_7
# 68 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, InnNPCStopsPlayerfromInn_Movement_2
# 69 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 70 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_3
# 71 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement 1
# 72 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript2
	goto InnNPCStopsPlayerfromInn_1


DevonInnNPC::
# 95 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 96 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, pleaseenjoystay
# 97 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, startinnnpcdialogue
# 98 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
startinnnpcdialogue:
# 99 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 100 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 101 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_0
# 102 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_0
# 103 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
innroomchoice:
# 104 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, InnNPCStopsPlayerfromInn_Text_1, InnNPCStopsPlayerfromInn_Text_2, InnNPCStopsPlayerfromInn_Text_3
# 105 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonInnNPC_2
DevonInnNPC_1:
# 129 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonInnNPC_5
DevonInnNPC_4:
# 138 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonInnNPC_11
DevonInnNPC_10:
# 142 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
pleaseenjoystay:
# 143 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_0
# 144 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnNPC_Text_0
# 146 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
enddevoninnscript:
# 147 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	releaseall
	return

DevonInnNPC_2:
# 106 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	showmoneybox 18, 0
# 107 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_4
# 108 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkmoney 200
# 109 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DevonInnNPC_8
DevonInnNPC_7:
# 122 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DevonInnNPC_13
	goto DevonInnNPC_1

DevonInnNPC_5:
# 130 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_8
# 134 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_9
# 135 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto innroomchoice
	goto DevonInnNPC_4

DevonInnNPC_8:
# 110 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SHOP
# 111 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitse
# 112 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removemoney 200
# 113 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	updatemoneybox
# 114 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_5
# 116 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 117 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	giveitem ITEM_CARD_KEY
# 120 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_7

DevonInnNPC_11:
# 139 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_10
# 140 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_10

DevonInnNPC_13:
# 123 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_6
# 124 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 125 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox InnNPCStopsPlayerfromInn_Text_7
# 126 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_1


DevonInnTakeKey::
# 151 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 152 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, takeguestcard
# 153 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, letthroughdownstairs
# 155 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
takeguestcard:
# 156 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 157 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 158 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonInnTakeKey_Movement_0
# 159 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 160 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, InnNPCStopsPlayerfromInn_Movement_3
# 161 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmovement 1
# 162 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnTakeKey_Text_0
# 164 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removeitem ITEM_CARD_KEY
# 168 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
letthroughdownstairs:
# 169 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnRoom1Sign::
# 173 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 174 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnRoom1Sign_Text_0
# 175 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnRoom2Sign::
# 179 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 180 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnRoom2Sign_Text_0
# 181 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnBreakLady::
# 185 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 186 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnBreakLady_Text_0
# 187 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnForbiddenFollower::
# 194 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidefollower
# 195 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 196 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
	return


DevonInnAllowedFollower::
# 200 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 201 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
	return


DevonInnBlockDoor::
# 205 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setmetatile 3, 1, METATILE_General_Door_PokeCenter, FALSE
	return


DevonInnClosedDoor::
# 210 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 211 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 212 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, inndoorisopen
# 213 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, inndoorisclosed
# 215 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
inndoorisopen:
# 216 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnClosedDoor_Text_0
# 217 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
# 218 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	opendoor 3, 1
# 219 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SLIDING_DOOR
# 220 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitdooranim
# 221 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonInnClosedDoor_Movement_0
# 222 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hideplayer
# 223 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	closedoor 3, 1
# 224 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto endinndoorscript
# 226 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
inndoorisclosed:
# 227 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnClosedDoor_Text_1
# 229 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
endinndoorscript:
# 230 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
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

# 68 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
InnNPCStopsPlayerfromInn_Movement_2:
# 68 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	walk_down
	step_end

# 70 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
InnNPCStopsPlayerfromInn_Movement_3:
# 70 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_down
	step_end

# 158 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
DevonInnTakeKey_Movement_0:
# 158 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_up
	step_end

# 221 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
DevonInnClosedDoor_Movement_0:
# 221 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
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
# 65 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Ah, it would seem you are somewhat\n"
	.string "short of the 200¥...$"

InnNPCStopsPlayerfromInn_Text_7:
# 67 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "We hope we can welcome you in another\n"
	.string "ocassion!$"

InnNPCStopsPlayerfromInn_Text_8:
# 76 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Yes, there are three main rules...\p"
	.string "Rule Number 1: While in the room,\n"
	.string "Pokémon must be kept inside their\l"
	.string "Pokéballs.\p"
	.string "Rule Number 2: No running or biking\n"
	.string "allowed in the rooms.\p"
	.string "Rule Number 3: Lodging privileges cease\n"
	.string "upon leaving this floor.$"

InnNPCStopsPlayerfromInn_Text_9:
# 80 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "So... would you like a room?$"

InnNPCStopsPlayerfromInn_Text_10:
# 85 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Very well. We hope we can welcome you in\n"
	.string "another ocassion!$"

DevonInnNPC_Text_0:
# 144 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Please enjoy your stay! And keep your\n"
	.string "Pokémon in their Pokéballs.$"

DevonInnTakeKey_Text_0:
# 162 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "We hope you enjoyed your stay. I will\n"
	.string "take your Guest Card now.\p"
	.string "Please visit us again!$"

DevonInnRoom1Sign_Text_0:
# 174 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Room 1$"

DevonInnRoom2Sign_Text_0:
# 180 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Room 2$"

DevonInnBreakLady_Text_0:
# 186 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "I'm sorry, I'm on my break here. Please\n"
	.string "do not disturb me.$"

DevonInnClosedDoor_Text_0:
# 216 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "You approach the Guest Card to the\n"
	.string "card reader. The door slides open.$"

DevonInnClosedDoor_Text_1:
# 227 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "The door does not slide open. It seems\n"
	.string "it needs a Guest Card to do so.$"
