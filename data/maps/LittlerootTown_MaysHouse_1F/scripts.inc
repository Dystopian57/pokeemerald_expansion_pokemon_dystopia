# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 2, 4
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 6, 5
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 1, 8
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 409 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 410 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 411 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 412 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 413 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 414 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 415 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 416 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 417 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 418 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 419 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 420 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 421 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 422 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 423 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 424 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 425 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 426 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 427 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 428 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 429 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 430 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 431 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 432 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 433 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 434 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 435 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 436 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 437 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 438 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 439 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 440 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 441 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 442 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 443 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 444 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 445 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 446 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 447 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 448 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 449 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 450 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 451 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 452 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 453 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 454 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 455 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 456 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 457 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 458 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 459 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 460 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 461 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 462 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 463 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 464 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 465 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 466 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 467 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 468 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 469 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 470 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 471 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 472 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 473 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 474 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 475 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 476 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 477 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 478 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 479 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 480 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 481 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 482 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 483 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 484 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 485 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 486 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 487 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 488 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 489 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 490 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 491 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 492 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 493 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 494 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 495 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 496 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 497 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 498 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 499 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 500 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 501 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 502 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 503 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 504 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 505 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 506 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 507 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 508 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 509 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 510 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 511 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 512 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 513 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 514 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 515 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 516 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 517 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 518 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 519 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 520 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 521 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 522 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 523 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 524 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 525 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 526 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 527 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 528 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 529 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 530 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 531 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 532 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 533 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 534 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 535 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 536 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 537 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 538 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 539 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 540 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 541 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 542 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 543 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 544 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 545 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 546 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 547 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 548 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 549 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 550 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 551 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 552 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 553 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 554 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 555 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 556 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 557 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 558 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 559 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 560 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 561 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 562 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 563 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 564 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 565 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 566 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 567 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 568 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 569 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 570 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 571 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 572 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 573 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 574 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 575 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 576 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 577 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 578 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 579 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 580 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 581 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 582 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 583 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 584 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 585 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 586 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 587 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 588 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 589 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 590 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 591 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 592 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 593 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 594 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 595 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 596 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 597 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 598 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 599 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 600 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 601 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "neighbor! Hi!\p"
# 602 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 603 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "We have a {STR_VAR_1} about the same\n"
# 604 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 605 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "age as you.\p"
# 606 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 607 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} was excited about making\n"
# 608 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 609 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a new friend.\p"
# 610 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 611 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 612 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 613 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 614 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 615 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 616 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 617 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like child, like father.\p"
# 618 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 619 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My husband is as wild about POKéMON\n"
# 620 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 621 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "as our child.\p"
# 622 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 623 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "If he's not at his LAB, he's likely\n"
# 624 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 625 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "scrabbling about in grassy places.$"
# 626 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 627 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 628 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 629 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 630 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 631 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That {RIVAL}!\p"
# 632 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 633 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I guess our child is too busy with\n"
# 634 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 635 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "POKéMON to notice that you came\l"
# 636 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 637 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.$"
# 638 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 639 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 640 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 641 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 642 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 643 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
# 644 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 645 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "just a little while ago.\p"
# 646 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 647 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like father, like child.\n"
# 648 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 649 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 650 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 651 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 652 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 653 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 654 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 655 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 656 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 657 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "travel with POKéMON.\p"
# 658 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 659 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "But you should go home every so often\n"
# 660 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 661 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 662 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 663 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 664 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 665 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 666 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 667 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 668 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 669 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 670 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 671 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh?\n"
# 672 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 673 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who… Who are you?\p"
# 674 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 675 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\n"
# 676 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 677 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\p"
# 678 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 679 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 680 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 681 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So your move was today.\p"
# 682 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 683 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Um… I'm MAY.\n"
# 684 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 685 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Glad to meet you!\p"
# 686 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 687 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I…\n"
# 688 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 689 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 690 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 691 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 692 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 693 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 694 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 695 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 696 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 697 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 698 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 699 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 700 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 701 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 702 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 703 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 704 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 705 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Eheheh…\p"
# 706 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 707 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 708 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 709 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 710 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 711 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON!\p"
# 712 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 713 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 714 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 715 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 716 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 717 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 718 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 719 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
# 720 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 721 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "You…\p"
# 722 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 723 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who are you?\p"
# 724 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 725 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 726 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 727 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Moved in next door, right?\p"
# 728 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 729 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 730 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 731 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 732 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 733 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 734 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 735 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 736 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 737 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My name's BRENDAN.\n"
# 738 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 739 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 740 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 741 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 742 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 743 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a POKéMON?\p"
# 744 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 745 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 746 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 747 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 748 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 749 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 750 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 751 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON.\p"
# 752 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 753 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Some other time, okay?$"
# 754 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 755 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 756 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 757 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 758 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 759 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
# 760 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 761 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you already have your\n"
# 762 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 763 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "own POKéMON?$"

Littleroot_Idletalk_Rival::
# 768 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 769 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Littleroot_Idletalk_Rival_Text_0
# 770 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE::
# 774 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 775 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_Text_0
# 776 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmessage
# 777 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setwildbattle SPECIES_SMEARGLE, 5, ITEM_BLUE_ORB
# 778 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	dowildbattle
# 779 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 780 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_2
# 783 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_3
# 786 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_4
# 789 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_5
LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1:
# 792 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmessage
# 793 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_2:
# 781 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call Won_or_Caught
	goto LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_3:
# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call Won_or_Caught
	goto LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_4:
# 787 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call RanAway
	goto LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_5:
# 790 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call RanAway
	goto LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1


Won_or_Caught::
# 797 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 798 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject 2
# 799 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 800 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Won_or_Caught_Text_0
# 801 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Rivalleaves
# 802 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 1
# 803 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject 1
# 804 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag RIVAL_LEAVES_HOME
# 805 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag DOLL_BATTLE
# 806 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 3
	return


# 810 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Rivalleaves:
# 811 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 811 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 811 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 812 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 812 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
	step_end

RanAway::
# 816 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RanAway_Text_0
	return


Littleroot_Idletalk_Rival_Text_0:
# 769 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "PLEASE HELP ME$"

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_Text_0:
# 775 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "It's just a doll...$"

Won_or_Caught_Text_0:
# 800 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "THANK YOU NOW I GO$"

RanAway_Text_0:
# 816 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I GET IT'S SCARY BUT COME ON$"
