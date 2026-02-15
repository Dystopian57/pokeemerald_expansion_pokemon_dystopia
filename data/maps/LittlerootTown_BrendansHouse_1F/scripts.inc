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

# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 452 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 453 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 454 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 455 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 465 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 469 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 470 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 480 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 481 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 486 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 487 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 494 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 495 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 496 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 503 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 505 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 509 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 510 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 511 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 512 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 514 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 515 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 516 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 517 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 518 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 520 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 521 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 522 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 523 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 524 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 525 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 526 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 527 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 528 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 529 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 530 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 531 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 532 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 533 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 534 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 535 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 536 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 537 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 538 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 539 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 540 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 541 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 542 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 543 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 544 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 545 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 546 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 547 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 548 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 549 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 550 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 551 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 552 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 553 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 554 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 555 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 556 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 557 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 558 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 559 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 560 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 561 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 562 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 563 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 564 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 565 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 566 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 567 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 568 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 569 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 570 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 571 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 572 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 573 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 574 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 575 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 576 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 577 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 578 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 579 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 580 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 581 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 582 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 583 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 584 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 585 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 586 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 587 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 588 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 589 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 590 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 591 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 592 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 593 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 594 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 595 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 596 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 597 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 598 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 599 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 600 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 601 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 602 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 603 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 604 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 605 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 606 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 607 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 608 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 609 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 610 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 611 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 612 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 613 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 614 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 615 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 616 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 617 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 618 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 619 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 620 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 621 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 622 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 623 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 624 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 625 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 626 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 627 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 628 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 629 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 630 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 631 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 632 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 633 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 634 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 635 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 636 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 637 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 638 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 639 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 640 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 641 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 642 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 643 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 644 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 645 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 646 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 647 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 648 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 649 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 650 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 651 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 652 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 653 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 654 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 655 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 656 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 657 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 658 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 659 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 660 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 661 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 662 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 663 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 664 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 665 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 666 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 667 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 668 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 669 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 670 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 671 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 672 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 673 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 674 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 675 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 676 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 677 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 678 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 679 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 680 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 681 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 682 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 683 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 684 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 685 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 686 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 687 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 688 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 689 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 690 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 691 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 692 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 693 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 694 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 695 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 696 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 697 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 698 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 699 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 700 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 701 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 702 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 703 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 704 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 705 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 706 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 707 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 708 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 709 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 710 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 711 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 712 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 713 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 714 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 715 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 716 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 717 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 718 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 719 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 720 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 721 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 722 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 723 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 724 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 725 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 726 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 727 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 728 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 729 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"

LittlerootTown_BrendansHouse_1F_MapScripts::
# 734 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TVOFF
	.byte 0


TVOFF::
# 737 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set WatchedTVathome, TVOFF_1
# 739 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special TurnOnTVScreen
	return

TVOFF_1:
# 738 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special TurnOffTVScreen
	return


ShouldTurnOffTV::
# 744 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 745 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox ShouldTurnOffTV_Text_0
# 746 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShouldTurnOffTV_Movement_0
# 747 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 748 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


PlayerMedicineCabinet::
# 753 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 754 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerMedicineCabinet_Text_0
# 755 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


PlayerRationBoxes::
# 760 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 761 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerRationBoxes_Text_0
# 762 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


PlayerFridge::
# 770 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 771 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerFridge_Text_0
# 772 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


PlayerKitchenCabinet::
# 777 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 778 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerKitchenCabinet_Text_0
# 779 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


Player1FTrashcan::
# 784 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 785 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox Player1FTrashcan_Text_0
# 786 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


Player1FPlant::
# 791 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 792 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox Player1FPlant_Text_0
# 793 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


PlayerVitaminCabinet::
# 797 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 798 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset FLAG_ITEM_PLAYER1F_VITAMIN, PlayerVitaminCabinet_2
# 803 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerVitaminCabinet_Text_1
PlayerVitaminCabinet_1:
# 804 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

PlayerVitaminCabinet_2:
# 799 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerVitaminCabinet_Text_0
# 800 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_X_DEFENSE
# 801 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_ITEM_PLAYER1F_VITAMIN
	goto PlayerVitaminCabinet_1


PlayerFirstAidKit::
# 808 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 809 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset FLAG_ITEM_PLAYER1F_AIDKIT_POTION, PlayerFirstAidKit_2
# 814 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerFirstAidKit_Text_1
PlayerFirstAidKit_1:
# 815 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

PlayerFirstAidKit_2:
# 810 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerFirstAidKit_Text_0
# 811 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_POTION
# 812 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_ITEM_PLAYER1F_AIDKIT_POTION
	goto PlayerFirstAidKit_1


PlayerOpenRationBox::
# 819 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 820 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset FLAG_ITEM_PLAYER1F_RATION, PlayerOpenRationBox_2
# 825 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerOpenRationBox_Text_1
PlayerOpenRationBox_1:
# 826 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

PlayerOpenRationBox_2:
# 821 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerOpenRationBox_Text_0
# 822 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_ENERGY_ROOT, 3
# 823 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_ITEM_PLAYER1F_RATION
	goto PlayerOpenRationBox_1


PlayerDirtySink::
# 830 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 831 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, PlayerDirtySink_2
PlayerDirtySink_1:
# 834 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, PlayerDirtySink_6
PlayerDirtySink_4:
# 842 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, PlayerDirtySink_11
PlayerDirtySink_9:
# 844 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
ninkaburigone:
# 845 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

PlayerDirtySink_2:
# 832 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerDirtySink_Text_0
	goto PlayerDirtySink_1

PlayerDirtySink_5:
# 835 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerDirtySink_Text_1
# 836 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setwildbattle SPECIES_NINKABURI, 2
# 837 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	dowildbattle
# 838 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 839 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmessage
# 840 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag SinkNinkaburiGone
# 841 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto ninkaburigone
	goto PlayerDirtySink_4

PlayerDirtySink_6:
# 834 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset SinkNinkaburiGone, PlayerDirtySink_5
	goto PlayerDirtySink_4

PlayerDirtySink_10:
# 843 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayerDirtySink_Text_2
	goto PlayerDirtySink_9

PlayerDirtySink_11:
# 842 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set SinkNinkaburiGone, PlayerDirtySink_10
	goto PlayerDirtySink_9


TV::
# 850 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 851 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset WatchedTVathome, TV_2
# 861 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox TV_Text_1
TV_1:
# 863 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmessage
# 864 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

TV_2:
# 852 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_INTRO_BATTLE, FALSE
# 853 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox TV_Text_0
# 856 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special TurnOffTVScreen
# 857 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_TV_TURNOFF, 1
# 858 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_NONE, TRUE
# 859 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag WatchedTVathome
	goto TV_1


# 746 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
ShouldTurnOffTV_Movement_0:
# 746 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

ShouldTurnOffTV_Text_0:
# 745 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh... I should turn off the TV before I\n"
	.string "go.$"

PlayerMedicineCabinet_Text_0:
# 754 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The cabinet contains human medicine.\n"
	.string "There's some painkillers left in it.$"

PlayerRationBoxes_Text_0:
# 761 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's a sealed box full of canned\n"
	.string "rations.$"

PlayerFridge_Text_0:
# 771 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The fridge is empty.$"

PlayerKitchenCabinet_Text_0:
# 778 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There's only dusty dinnerware in here.$"

Player1FTrashcan_Text_0:
# 785 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The trash can is empty.$"

Player1FPlant_Text_0:
# 792 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Despite the lack of care, the plant\n"
	.string "clings to life.\p"
	.string "It is sort of inspiring.$"

PlayerVitaminCabinet_Text_0:
# 799 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The cabinet contains Pokémon medicine.\n"
	.string "There's a leftover bioenhancer...$"

PlayerVitaminCabinet_Text_1:
# 803 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The cabinet contains nothing of use.$"

PlayerFirstAidKit_Text_0:
# 810 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You open the first aid kit...$"

PlayerFirstAidKit_Text_1:
# 814 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There's nothing of use in the first aid\n"
	.string "kit.$"

PlayerOpenRationBox_Text_0:
# 821 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There's a few canned rations left in\n"
	.string "this box...$"

PlayerOpenRationBox_Text_1:
# 825 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The box is empty.$"

PlayerDirtySink_Text_0:
# 832 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "A NINKABURI has just retreated below\n"
	.string "the dirty sink.\p"
	.string "If I had a Pokémon and a Pokéball,\n"
	.string "perhaps I could catch it...$"

PlayerDirtySink_Text_1:
# 835 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "A NINKABURI appears boldly from below\n"
	.string "the sink!$"

PlayerDirtySink_Text_2:
# 843 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There doesn't seem to be any NINKABURI\n"
	.string "around the sink.$"

TV_Text_0:
# 853 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Is it a plane!? Is it a Wingull!? No, it's\n"
	.string "SUPER SUBSTITUTE!\p"
	.string "The hero that protects you from danger\n"
	.string "with a wall of fluffy justice!\p"
	.string "New season of Devon TV's most loved\n"
	.string "cartoon is airing soon, so...\p"
	.string "Stay tuned, and stay safe!$"

TV_Text_1:
# 861 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'm not in the mood for more TV...$"
