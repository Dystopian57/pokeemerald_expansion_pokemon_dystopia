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
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.byte 0
# 8 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 10 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_EventScript_Colosseum::
# 11 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 12 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	end
# 13 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 14 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_EventScript_TradeCenter::
# 15 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 16 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	end
# 17 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 18 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_EventScript_RecordCorner::
# 19 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 20 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	end

DevonInnNPC::
# 28 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 29 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 30 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement 1, DevonInnNPC_Movement_0
# 31 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnNPC_Text_0
# 32 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
innroomchoice:
# 33 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, DevonInnNPC_Text_1, DevonInnNPC_Text_2, DevonInnNPC_Text_3
# 34 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonInnNPC_2
DevonInnNPC_1:
# 58 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonInnNPC_5
DevonInnNPC_4:
# 67 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonInnNPC_11
DevonInnNPC_10:
# 71 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
enddevoninnscript:
# 72 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	releaseall
	return

DevonInnNPC_2:
# 35 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	showmoneybox 18, 0
# 36 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnNPC_Text_4
# 37 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkmoney 200
# 38 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DevonInnNPC_8
DevonInnNPC_7:
# 51 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DevonInnNPC_13
	goto DevonInnNPC_1

DevonInnNPC_5:
# 59 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnNPC_Text_8
# 63 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnNPC_Text_9
# 64 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto innroomchoice
	goto DevonInnNPC_4

DevonInnNPC_8:
# 39 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SHOP
# 40 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitse
# 41 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removemoney 200
# 42 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	updatemoneybox
# 43 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnNPC_Text_5
# 45 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 46 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	giveitem ITEM_CARD_KEY
# 49 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_7

DevonInnNPC_11:
# 68 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnNPC_Text_10
	goto DevonInnNPC_10

DevonInnNPC_13:
# 52 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnNPC_Text_6
# 53 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hidemoneybox
# 54 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnNPC_Text_7
# 55 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto enddevoninnscript
	goto DevonInnNPC_1


DevonInnClosedDoor::
# 76 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 77 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 78 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, inndoorisopen
# 79 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, inndoorisclosed
# 81 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
inndoorisopen:
# 82 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnClosedDoor_Text_0
# 83 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
# 84 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	opendoor 3, 1
# 85 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	playse SE_SLIDING_DOOR
# 86 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitdooranim
# 87 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonInnClosedDoor_Movement_0
# 88 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	hideplayer
# 89 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	closedoor 3, 1
# 90 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto endinndoorscript
# 92 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
inndoorisclosed:
# 93 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnClosedDoor_Text_1
# 95 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
endinndoorscript:
# 96 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnTakeKey::
# 100 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkitem ITEM_CARD_KEY
# 101 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, takeguestcard
# 102 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, letthroughdownstairs
# 104 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
takeguestcard:
# 105 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 106 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonInnTakeKey_Movement_0
# 107 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnTakeKey_Text_0
# 109 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	removeitem ITEM_CARD_KEY
# 113 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
letthroughdownstairs:
# 114 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnRoom1Sign::
# 118 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 119 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnRoom1Sign_Text_0
# 120 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnRoom2Sign::
# 124 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 125 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnRoom2Sign_Text_0
# 126 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnBreakLady::
# 130 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 131 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox DevonInnBreakLady_Text_0
# 132 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


DevonInnForbiddenFollower::
# 136 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
	return


DevonInnAllowedFollower::
# 140 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
	return


DevonInnBlockDoor::
# 144 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setmetatile 3, 1, METATILE_General_Door_PokeCenter, FALSE
	return


# 30 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
DevonInnNPC_Movement_0:
# 30 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_player
	step_end

# 87 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
DevonInnClosedDoor_Movement_0:
# 87 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	walk_up
	step_end

# 106 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
DevonInnTakeKey_Movement_0:
# 106 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	face_up
	step_end

DevonInnNPC_Text_0:
# 31 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Welcome to Oldale's Devon Inn. Would you\n"
	.string "like to lodge with us for 200¥?$"

DevonInnNPC_Text_1:
# 33 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Yes, please$"

DevonInnNPC_Text_2:
# 33 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Any rules?$"

DevonInnNPC_Text_3:
# 33 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "No, thank you$"

DevonInnNPC_Text_4:
# 36 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Wonderful. I will take payment\n"
	.string "upfront...$"

DevonInnNPC_Text_5:
# 43 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "You are in Room 1. Here's your Guest Key\n"
	.string "- use it on the door to enter.$"

DevonInnNPC_Text_6:
# 52 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Ah, it would seem you are somewhat\n"
	.string "short of the 200¥...$"

DevonInnNPC_Text_7:
# 54 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "We hope we can welcome you in another\n"
	.string "ocassion!$"

DevonInnNPC_Text_8:
# 59 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Yes, there are three main rules...\p"
	.string "Rule Number 1: While in the room,\n"
	.string "Pokémon must be kept inside their\l"
	.string "Pokéballs.\p"
	.string "Rule Number 2: No running or biking\n"
	.string "allowed in the rooms.\p"
	.string "Rule Number 3: Lodging privileges cease\n"
	.string "upon leaving this floor.$"

DevonInnNPC_Text_9:
# 63 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "So... would you like a room?$"

DevonInnNPC_Text_10:
# 68 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Very well. We hope we can welcome you in\n"
	.string "another ocassion!$"

DevonInnClosedDoor_Text_0:
# 82 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "You approach the Guest Card to the\n"
	.string "card reader. The door slides open.$"

DevonInnClosedDoor_Text_1:
# 93 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "The door does not slide open. It seems\n"
	.string "it needs a Guest Card to do so.$"

DevonInnTakeKey_Text_0:
# 107 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "We hope you enjoyed your stay. I will\n"
	.string "take your Guest Card now.\p"
	.string "Please visit us again!$"

DevonInnRoom1Sign_Text_0:
# 119 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Room 1$"

DevonInnRoom2Sign_Text_0:
# 125 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Room 2$"

DevonInnBreakLady_Text_0:
# 131 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "I'm sorry, I'm on my break here. Please\n"
	.string "do not disturb me.$"
