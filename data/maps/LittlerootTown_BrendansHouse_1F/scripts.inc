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
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
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
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 452 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 453 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 454 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 455 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 465 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 469 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 470 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 480 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 481 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 486 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 487 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 494 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 495 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 496 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 503 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 505 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 509 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 510 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 511 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 512 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 514 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 515 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 516 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 517 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 518 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 520 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 521 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 522 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 523 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 524 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 525 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 526 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 527 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 528 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 529 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 530 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 531 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 532 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 533 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 534 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 535 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 536 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 537 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 538 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 539 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 540 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 541 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 542 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 543 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 544 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 545 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 546 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 547 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 548 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 549 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 550 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 551 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 552 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 553 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 554 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 555 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 556 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 557 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 558 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 559 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 560 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 561 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 562 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 563 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 564 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 565 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 566 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 567 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 568 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 569 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 570 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 571 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 572 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 573 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 574 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 575 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 576 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 577 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 578 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 579 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 580 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 581 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 582 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 583 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 584 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 585 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 586 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 587 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 588 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 589 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 590 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 591 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 592 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 593 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 594 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 595 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 596 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 597 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 598 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 599 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 600 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 601 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 602 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 603 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 604 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 605 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 606 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 607 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 608 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 609 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 610 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 611 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 612 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 613 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 614 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 615 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 616 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 617 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 618 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 619 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 620 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 621 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 622 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 623 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 624 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 625 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 626 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 627 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 628 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 629 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 630 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 631 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 632 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 633 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 634 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 635 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 636 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 637 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 638 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 639 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 640 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 641 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 642 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 643 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 644 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 645 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 646 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 647 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 648 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 649 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 650 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 651 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 652 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 653 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 654 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 655 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 656 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 657 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 658 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 659 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 660 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 661 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 662 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 663 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 664 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 665 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 666 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 667 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 668 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 669 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 670 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 671 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 672 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 673 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 674 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 675 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 676 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 677 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 678 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 679 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 680 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 681 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 682 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 683 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 684 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 685 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 686 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 687 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 688 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 689 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 690 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 691 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 692 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 693 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 694 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 695 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 696 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 697 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 698 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 699 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 700 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 701 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 702 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 703 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 704 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 705 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 706 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 707 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 708 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 709 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 710 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 711 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 712 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 713 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 714 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 715 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 716 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 717 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 718 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 719 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 720 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 721 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 722 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 723 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 724 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 725 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 726 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 727 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 728 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 729 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 730 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 731 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 732 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 733 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 734 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 735 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 736 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 737 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 738 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 739 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 740 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 741 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 742 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 743 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 744 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 745 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 746 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 747 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 748 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 749 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 750 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 751 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 752 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 753 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 754 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 755 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 756 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 757 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 758 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 759 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 760 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 761 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 762 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 763 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 764 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 765 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 766 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 767 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 768 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 769 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 770 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 771 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 772 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 773 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 774 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 775 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 776 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 777 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 778 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 779 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 780 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 781 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 782 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 783 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 784 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 785 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 786 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 787 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 788 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 789 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 790 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 791 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 792 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 793 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 794 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 795 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 796 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 797 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 798 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 799 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 800 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 801 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 802 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 803 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 804 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 805 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 806 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 807 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 808 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 809 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 810 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 811 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 812 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 813 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 814 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 815 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 816 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 817 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 818 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 819 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 820 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 821 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 822 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 823 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 824 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 825 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 826 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 827 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 828 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 829 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 830 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"
