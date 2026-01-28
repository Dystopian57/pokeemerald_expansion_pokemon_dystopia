# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Let's see...$"
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "HOENN region map.$"
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"

Setclocktoleave::
# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Setclocktoleave_Text_0
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, cantleavebedroom
# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomGamecube::
# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomGamecube_Text_0
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomBookshelf::
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBookshelf_Text_0
# 312 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomWardrobe::
# 316 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomWardrobe_Text_0
# 318 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerBed::
# 322 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBed_Text_0, MSGBOX_YESNO
# 324 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayerBed_2
PlayerBed_1:
# 331 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerBed_2:
# 325 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 326 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special HealPlayerParty
# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse MUS_HEAL
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBed_Text_1
# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitbuttonpress
# 330 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto PlayerBed_1


PlayerRoomDadPrize::
# 335 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 336 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 337 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRoomDadPrize_2
# 340 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDadPrize_Text_0
PlayerRoomDadPrize_1:
# 342 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomDadPrize_2:
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDadPrize_Text_0
	goto PlayerRoomDadPrize_1


PlayerRoomBox::
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 347 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBox_Text_0
# 348 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomTrashCan::
# 352 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_BEDROOM_TRASHCAN, PlayerRoomTrashCan_2
# 358 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTrashCan_Text_1
PlayerRoomTrashCan_1:
# 359 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomTrashCan_2:
# 354 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTrashCan_Text_0
# 355 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 356 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_ITEM_BEDROOM_TRASHCAN
	goto PlayerRoomTrashCan_1


PlayerRoomWarmBedding::
# 363 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 364 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_WARM_BEDDING, PlayerRoomWarmBedding_2
# 370 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomWarmBedding_Text_1
PlayerRoomWarmBedding_1:
# 371 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomWarmBedding_2:
# 365 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomWarmBedding_Text_0
# 366 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 14
# 367 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_SCROLL_OF_DARKNESS
# 368 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_ITEM_WARM_BEDDING
	goto PlayerRoomWarmBedding_1


PlayerRoomTextbooks::
# 378 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 379 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTextbooks_Text_0
# 380 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomDiary::
# 384 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 385 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
opendiary:
# 386 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_0
# 387 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PlayerRoomDiary_Text_1, PlayerRoomDiary_Text_2, PlayerRoomDiary_Text_3, PlayerRoomDiary_Text_4
# 388 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomDiary_2
PlayerRoomDiary_1:
# 397 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PlayerRoomDiary_5
PlayerRoomDiary_4:
# 405 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PlayerRoomDiary_8
PlayerRoomDiary_7:
# 413 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PlayerRoomDiary_11
PlayerRoomDiary_10:
# 415 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomDiary_2:
# 389 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_5
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto opendiary
	goto PlayerRoomDiary_1

PlayerRoomDiary_5:
# 398 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_6
# 404 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto opendiary
	goto PlayerRoomDiary_4

PlayerRoomDiary_8:
# 406 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_7
# 411 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto opendiary
	goto PlayerRoomDiary_7

PlayerRoomDiary_11:
# 414 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	goto PlayerRoomDiary_10


PlayerRoomMail::
# 419 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 420 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_0
# 421 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
backtomail:
# 422 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_1
# 423 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PlayerRoomMail_Text_2, PlayerRoomMail_Text_3, PlayerRoomMail_Text_4, PlayerRoomMail_Text_5
# 424 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomMail_2
PlayerRoomMail_1:
# 431 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PlayerRoomMail_5
PlayerRoomMail_4:
# 452 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PlayerRoomMail_8
PlayerRoomMail_7:
# 461 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PlayerRoomMail_15
PlayerRoomMail_14:
# 463 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomMail_2:
# 425 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_6
# 429 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto backtomail
	goto PlayerRoomMail_1

PlayerRoomMail_5:
# 432 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 433 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRoomMail_11
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_8
PlayerRoomMail_10:
# 451 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto backtomail
	goto PlayerRoomMail_4

PlayerRoomMail_8:
# 453 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_9
# 459 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto backtomail
	goto PlayerRoomMail_7

PlayerRoomMail_11:
# 434 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_7
	goto PlayerRoomMail_10

PlayerRoomMail_15:
# 462 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	goto PlayerRoomMail_14


# 466 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
cantleavebedroom:
# 467 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
	step_end

Setclocktoleave_Text_0:
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Is it too early to leave...? I should\n"
	.string "check the clock.$"

PlayerRoomGamecube_Text_0:
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's an old Gamecube. The game 'Harvest\n"
	.string "Moon: A Wonderful Life' is loaded in.$"

PlayerRoomBookshelf_Text_0:
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The shelf is full of novels. Most of\n"
	.string "them are science fiction ones.$"

PlayerRoomWardrobe_Text_0:
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The wardrobe is full of dirty, smelly\n"
	.string "clothes.$"

PlayerBed_Text_0:
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Rest for a bit?$"

PlayerBed_Text_1:
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "You rest for a while.$"

PlayerRoomDadPrize_Text_0:
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Battle Frontier trophy.\p"
	.string "It's quite dusty and has lost most of\n"
	.string "its sheen.$"

PlayerRoomBox_Text_0:
# 347 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Pokéball Rifle is dissasembled inside\n"
	.string "the box.$"

PlayerRoomTrashCan_Text_0:
# 354 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "There's something in the trash can...$"

PlayerRoomTrashCan_Text_1:
# 358 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The trash can is empty.$"

PlayerRoomWarmBedding_Text_0:
# 365 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's an extra set of bedding for the\n"
	.string "winter.$"

PlayerRoomWarmBedding_Text_1:
# 370 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "There's nothing here.$"

PlayerRoomTextbooks_Text_0:
# 379 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A pile of textbooks lies beside the bed.$"

PlayerRoomDiary_Text_0:
# 386 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A diary is open on top of the desk.$"

PlayerRoomDiary_Text_1:
# 387 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oldest entry$"

PlayerRoomDiary_Text_2:
# 387 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Old entry$"

PlayerRoomDiary_Text_3:
# 387 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Newest entry$"

PlayerRoomDiary_Text_4:
# 387 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Don't read$"

PlayerRoomDiary_Text_5:
# 389 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Today dad and mom gave me the best\n"
	.string "birthday gift ever - my first Pokémon!\l"
	.string "Yay!\p"
	.string "Mommy said it's a Mankey, a Fighting\n"
	.string "type.\p"
	.string "In school I learnt Fighting types are\n"
	.string "strong against Normal types, like the\l"
	.string "ones grandpa uses.\p"
	.string "Oh, about grandpa, Daddy said I am going\n"
	.string "to stay with him for a while...\p"
	.string "Because him and mommy are going to be\n"
	.string "very very busy with work.\p"
	.string "I was a bit sad. It was my birthday, but\n"
	.string "I think everyone was sad today.$"

PlayerRoomDiary_Text_6:
# 398 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Today, Mankey and I are being drafted\n"
	.string "into the Hoenn army.\p"
	.string "After our training, we will be sent to\n"
	.string "the Kanto front.\p"
	.string "I used to be scared that this day may\n"
	.string "come, but after all that happened, it's\l"
	.string "like I can't feel anything anymore.\p"
	.string "I think I have ran out of all my fear,\n"
	.string "anger, and sadness.\p"
	.string "This war seems to have stolen\n"
	.string "everything from me, even my feelings.\p"
	.string "If anything, I am curious - who is\n"
	.string "behind all of this, and why did it have\l"
	.string "to happen?$"

PlayerRoomDiary_Text_7:
# 406 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Grandfather was right all along. I am\n"
	.string "spineless. Useless.\p"
	.string "There is nothing of him or of my parents\n"
	.string "in me.\p"
	.string "Useless, useless, useless.\p"
	.string "They took Primeape away from me. Now I\n"
	.string "have nothing left of what they gave me.\p"
	.string "Only this rag, and this broken house I\n"
	.string "hate.\p"
	.string "Useless, useless, useless, useless,\n"
	.string "useless...\p"
	.string "USELESS.\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}The same word is written for pages on\n"
	.string "end.$"

PlayerRoomMail_Text_0:
# 420 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A laptop is on the floor, with Devon Mail\n"
	.string "open.$"

PlayerRoomMail_Text_1:
# 422 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "There's three mails in the inbox, from\n"
	.string "three different senders.$"

PlayerRoomMail_Text_2:
# 423 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Devon Corp - Rustboro HQ$"

PlayerRoomMail_Text_3:
# 423 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Petalburg Gym$"

PlayerRoomMail_Text_4:
# 423 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oldale DLC$"

PlayerRoomMail_Text_5:
# 423 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Ignore laptop$"

PlayerRoomMail_Text_6:
# 425 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "From: Devon Corporation.\n"
	.string "Subject: Mail has been delivered.\p"
	.string "After failing to deliver your package\n"
	.string "personally, our mailing staff has\l"
	.string "deposited it in your allocated mailbox\l"
	.string "right outside your domicile.\p"
	.string "Please check it at your earliest\n"
	.string "convenience.\p"
	.string "Stay safe,\n"
	.string "Devon Corporation$"

PlayerRoomMail_Text_7:
# 434 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "From: Petalburg Gym.\n"
	.string "Subject: How's it going, {PLAYER}?\p"
	.string "Hey lad. How is your leg? Does it still\n"
	.string "give you trouble?\p"
	.string "I know I said I'd visit, but things have\n"
	.string "been very busy in the gym.\p"
	.string "Maybe you can make the trip instead,\n"
	.string "once you're feeling better.\p"
	.string "We could have a Pokémon battle, just\n"
	.string "like your dad and I used to.\p"
	.string "He beat me when he was half your age…\n"
	.string "he was a real prodigy.\p"
	.string "Well, got to go. Remember to eat well,\n"
	.string "and do plenty of exercise.\p"
	.string "Take care,\n"
	.string "Norman.$"

PlayerRoomMail_Text_8:
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "From: Petalburg Gym.\n"
	.string "Subject: How's it going, {PLAYER}?\p"
	.string "Hey lass. How is your arm? Does it still\n"
	.string "give you trouble?\p"
	.string "I know I said I'd visit, but things have\n"
	.string "been very busy in the gym.\p"
	.string "Maybe you can make the trip instead,\n"
	.string "once you're feeling better.\p"
	.string "We could have a Pokémon battle, just\n"
	.string "like your mom and I used to.\p"
	.string "She beat me when he was half your age…\n"
	.string "she was a real prodigy.\p"
	.string "Well, got to go. Remember to eat well,\n"
	.string "and do plenty of exercise.\p"
	.string "Take care,\n"
	.string "Norman.$"

PlayerRoomMail_Text_9:
# 453 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "From: Oldale DLC.\n"
	.string "Subject: You are not alone.\p"
	.string "Did you live through traumatic\n"
	.string "experiences during the Kantonian war?\l"
	.string "If so, you are not alone.\p"
	.string "Come join us at the newly-established\n"
	.string "Oldale-based DLC (Devon Learning\l"
	.string "Center) and share your burden in an\l"
	.string "environment of kindness through a\l"
	.string "group-based, PTSD Therapy.\p"
	.string "Disclaimer: Only SAFEMON are allowed\n"
	.string "into the center during sessions.$"
