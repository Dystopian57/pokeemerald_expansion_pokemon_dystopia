# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 452 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 453 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 454 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 455 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 465 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 469 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 470 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 480 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 481 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 486 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 487 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 494 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 495 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 496 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 503 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 505 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 509 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 510 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 511 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 512 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 514 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 515 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 516 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 517 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 518 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 520 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 521 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 522 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 523 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 524 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 525 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 526 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 527 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 528 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 529 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 530 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 531 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 532 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 533 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 534 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 535 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 536 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 537 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 538 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 539 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 540 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 541 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 542 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 543 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 544 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 545 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 546 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 547 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 548 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 549 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 550 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 551 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 552 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 553 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 554 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 555 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 556 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 557 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 558 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 559 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 560 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 561 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 562 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 563 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 564 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 565 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 566 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 567 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 568 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 569 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 570 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 571 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 572 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 573 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 574 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 575 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 576 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 577 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 578 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 579 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 580 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 581 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 582 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 583 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 584 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 585 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 586 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 587 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 588 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 589 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 590 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 591 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 592 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 593 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 594 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 595 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 596 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 597 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 598 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 599 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 600 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 601 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 602 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 603 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 604 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 605 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 606 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 607 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 608 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 609 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 610 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 611 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 612 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 613 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 614 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 615 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 616 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 617 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 618 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 619 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 620 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 621 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 622 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 623 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 624 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 625 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 626 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 627 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 628 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 629 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 630 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 631 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 632 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 633 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 634 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 635 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 636 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 637 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 638 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 639 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 640 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 641 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 642 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 643 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 644 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 645 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 646 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 647 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 648 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 649 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 650 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 651 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 652 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 653 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 654 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 655 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 656 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 657 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 658 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 659 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 660 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 661 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 662 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 663 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 664 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 665 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 666 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 667 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 668 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 669 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 670 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 671 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 672 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 673 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 674 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 675 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 676 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 677 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 678 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 679 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 680 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 681 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 682 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 683 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 684 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 685 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 686 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 687 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 688 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 689 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 690 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 691 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 692 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 693 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 694 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 695 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 696 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 697 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 698 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 699 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 700 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 701 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 702 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 703 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 704 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 705 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 706 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 707 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 708 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 709 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 710 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 711 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 712 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 713 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 714 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 715 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 716 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 717 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 718 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 719 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 720 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 721 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 722 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 723 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 724 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 725 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 726 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 727 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 728 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 729 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 730 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 731 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 732 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 733 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 734 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 735 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 736 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 737 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 738 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 739 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 740 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 741 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 742 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 743 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 744 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 745 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 746 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 747 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 748 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 749 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 750 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 751 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 752 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 753 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 754 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 755 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 756 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 757 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 758 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 759 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 760 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 761 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 762 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 763 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 764 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 765 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 766 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 767 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 768 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 769 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 770 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 771 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 772 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 773 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 774 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 775 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 776 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 777 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 778 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 779 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 780 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 781 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 782 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 783 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 784 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 785 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 786 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 787 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 788 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 789 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 790 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 791 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 792 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 793 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 794 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 795 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 796 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 797 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 798 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 799 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 800 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 801 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"

ShouldTurnOffTV::
# 807 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 808 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox ShouldTurnOffTV_Text_0
# 809 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShouldTurnOffTV_Movement_0
# 810 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 811 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


PlayerMedicineCabinet::
# 816 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 817 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerMedicineCabinet_Text_0
# 819 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


PlayerRationBoxes::
# 824 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 825 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerRationBoxes_Text_0
# 827 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


PlayerFridge::
# 832 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 833 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerFridge_Text_0
# 834 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


PlayerKitchenCabinet::
# 839 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 840 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerKitchenCabinet_Text_0
# 841 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


PlayerVitaminCabinet::
# 845 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 846 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset FLAG_ITEM_PLAYER1F_VITAMIN, PlayerVitaminCabinet_2
# 851 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerVitaminCabinet_Text_1
PlayerVitaminCabinet_1:
# 852 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 853 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

PlayerVitaminCabinet_2:
# 847 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerVitaminCabinet_Text_0
# 848 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_X_DEFENSE
# 849 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_ITEM_PLAYER1F_VITAMIN
	goto PlayerVitaminCabinet_1


PlayerFirstAidKit::
# 857 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 858 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset FLAG_ITEM_PLAYER1F_AIDKIT_POTION, PlayerFirstAidKit_2
# 863 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerFirstAidKit_Text_1
PlayerFirstAidKit_1:
# 864 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 865 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

PlayerFirstAidKit_2:
# 859 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerFirstAidKit_Text_0
# 860 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_POTION
# 861 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_ITEM_PLAYER1F_AIDKIT_POTION
	goto PlayerFirstAidKit_1


PlayerDirtySink::
# 869 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 870 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, PlayerDirtySink_2
PlayerDirtySink_1:
# 873 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, PlayerDirtySink_7
PlayerDirtySink_6:
# 893 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerDirtySink_Text_2
PlayerDirtySink_4:
# 894 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

PlayerDirtySink_2:
# 871 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerDirtySink_Text_0
	goto PlayerDirtySink_1

PlayerDirtySink_5:
# 874 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerDirtySink_Text_1
# 875 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setwildbattle SPECIES_NINKABURI, 2
# 876 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	dowildbattle
# 877 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 878 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq PlayerDirtySink_11
# 881 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PlayerDirtySink_12
# 884 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq PlayerDirtySink_13
# 887 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq PlayerDirtySink_14
PlayerDirtySink_10:
# 890 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmessage
# 891 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag SinkNinkaburiGone
	goto PlayerDirtySink_4

PlayerDirtySink_7:
# 873 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset SinkNinkaburiGone, PlayerDirtySink_5
	goto PlayerDirtySink_6

PlayerDirtySink_11:
# 879 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call Won_or_Caught
	goto PlayerDirtySink_10

PlayerDirtySink_12:
# 882 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call Won_or_Caught
	goto PlayerDirtySink_10

PlayerDirtySink_13:
# 885 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call RanAway
	goto PlayerDirtySink_10

PlayerDirtySink_14:
# 888 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call RanAway
	goto PlayerDirtySink_10


TV::
# 899 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 900 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset WatchedTVathome, TV_2
# 910 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox TV_Text_1
TV_1:
# 912 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmessage
# 913 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

TV_2:
# 901 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_INTRO_BATTLE, FALSE
# 902 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox TV_Text_0
# 905 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special TurnOffTVScreen
# 906 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_TV_TURNOFF, 1
# 907 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_NONE, TRUE
# 908 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag WatchedTVathome
	goto TV_1


# 809 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
ShouldTurnOffTV_Movement_0:
# 809 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

ShouldTurnOffTV_Text_0:
# 808 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh... I should turn off the TV before I\n"
	.string "go.$"

PlayerMedicineCabinet_Text_0:
# 817 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The cabinet contains human medicine.\p"
	.string "There's some painkillers left in here,\n"
	.string "but I don't need them anymore.$"

PlayerRationBoxes_Text_0:
# 825 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There's still war rations left in the\n"
	.string "boxes. I've been eating them for the\l"
	.string "past year or so...$"

PlayerFridge_Text_0:
# 833 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The fridge is empty$"

PlayerKitchenCabinet_Text_0:
# 840 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There's only dusty dinnerware in here.$"

PlayerVitaminCabinet_Text_0:
# 847 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The cabinet contains Pokémon medicine.\n"
	.string "There's a leftover bioenhancer...$"

PlayerVitaminCabinet_Text_1:
# 851 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The cabinet has nothing else of use$"

PlayerFirstAidKit_Text_0:
# 859 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You open the first aid kit...$"

PlayerFirstAidKit_Text_1:
# 863 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There's nothing else of use in the first\n"
	.string "aid kit.$"

PlayerDirtySink_Text_0:
# 871 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "A NINKABURI has just retreated below\n"
	.string "the dirty sink.\p"
	.string "If I had a Pokémon and a Pokéball,\n"
	.string "perhaps I could catch it...$"

PlayerDirtySink_Text_1:
# 874 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "A NINKABURI appears boldly from below\n"
	.string "the sink!$"

PlayerDirtySink_Text_2:
# 893 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You don't see any NINKABURI around the\n"
	.string "sink.$"

TV_Text_0:
# 902 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Is it a plane!? Is it a Wingull!? No, it's\n"
	.string "SUPER SUBSTITUTE!\p"
	.string "The hero that protects you from danger\n"
	.string "with a wall of fluffy justice!\p"
	.string "New season of Devon TV's most loved\n"
	.string "cartoon is airing soon, so...\p"
	.string "Stay tuned, and stay safe!$"

TV_Text_1:
# 910 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'm not in the mood for more TV...$"
