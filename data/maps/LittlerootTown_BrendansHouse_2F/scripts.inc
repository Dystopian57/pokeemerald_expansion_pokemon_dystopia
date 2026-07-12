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
	call_if_eq VAR_LITTLEROOT_PHASE, 0, GiveSturdyWatch
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
GiveSturdyWatch::
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset newgameitems, GiveSturdyWatch_1
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
GiveSturdyWatch_1:
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	additem ITEM_KEY_TO_ROOM_1
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Let's see...$"
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "HOENN region map.$"
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"

Setclocktoleave::
# 319 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 320 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Setclocktoleave_Text_0
# 321 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, cantleavebedroom
# 322 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomGamecube::
# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomGamecube_Text_0
# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomTV::
# 333 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTV_Text_0
# 335 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomHeadphones::
# 339 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 340 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomHeadphones_Text_0
# 341 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomSodas::
# 345 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomSodas_Text_0
# 347 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomSoda::
# 351 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 352 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomSoda_Text_0
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomChips::
# 357 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 358 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomChips_Text_0
# 359 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomPokeball::
# 363 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 364 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomPokeball_Text_0
# 365 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomShirt::
# 369 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 370 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomShirt_Text_0
# 371 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomCushion::
# 375 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 376 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomCushion_Text_0
# 377 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomPizza::
# 381 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 382 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomPizza_Text_0
# 383 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomBookshelf::
# 388 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 389 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBookshelf_Text_0
# 390 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomWardrobe::
# 394 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomWardrobe_Text_0
# 396 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerBedSimple::
# 400 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 401 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBedSimple_Text_0, MSGBOX_YESNO
# 402 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayerBedSimple_2
PlayerBedSimple_1:
# 409 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerBedSimple_2:
# 403 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 404 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special HealPlayerParty
# 405 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse MUS_HEAL
# 406 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBedSimple_Text_1
# 407 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitbuttonpress
# 408 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto PlayerBedSimple_1


PlayerBedTime::
# 413 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 414 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBedSimple_Text_0, MSGBOX_YESNO
# 415 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayerBedTime_2
PlayerBedTime_1:
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerBedTime_2:
# 416 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBedTime_Text_0
# 417 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special StartWallClock
# 418 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 419 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse MUS_HEAL
# 420 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 421 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special HealPlayerParty
# 423 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	random 4
# 424 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 426 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_RESULT
# 427 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, PlayerBedTime_6
# 428 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, PlayerBedTime_7
# 429 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, PlayerBedTime_8
# 430 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 3, PlayerBedTime_9
# 431 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 4, PlayerBedTime_10
PlayerBedTime_4:
# 433 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_SUCCESS
# 434 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 435 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_SUCCESS
# 436 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 437 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_SUCCESS
# 438 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 439 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBedTime_Text_1
	goto PlayerBedTime_1

PlayerBedTime_6:
# 427 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 3
	goto PlayerBedTime_4

PlayerBedTime_7:
# 428 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 3
	goto PlayerBedTime_4

PlayerBedTime_8:
# 429 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 3
	goto PlayerBedTime_4

PlayerBedTime_9:
# 430 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 3
	goto PlayerBedTime_4

PlayerBedTime_10:
# 431 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootLabNews
	goto PlayerBedTime_4


PlayerRoomDadPrize::
# 447 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 448 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 449 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRoomDadPrize_2
# 452 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDadPrize_Text_0
PlayerRoomDadPrize_1:
# 454 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomDadPrize_2:
# 450 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDadPrize_Text_0
	goto PlayerRoomDadPrize_1


PlayerRoomBox::
# 458 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 460 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_BEDROOM_TRASHCAN, PlayerRoomBox_2
# 479 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBox_Text_4
PlayerRoomBox_1:
# 481 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
endplayerroomboxscript:
# 482 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomBox_2:
# 462 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBox_Text_0
# 463 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBox_Text_1
# 464 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PlayerRoomBox_Text_2, PlayerRoomBox_Text_3
# 465 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomBox_6
PlayerRoomBox_5:
# 474 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomBox_8
	goto PlayerRoomBox_1

PlayerRoomBox_6:
# 466 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_SWITCH
# 467 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 468 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_CLICK
# 469 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 470 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 471 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_ITEM_BEDROOM_RIFLE
	goto PlayerRoomBox_5

PlayerRoomBox_8:
# 475 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto endplayerroomboxscript
	goto PlayerRoomBox_1


PlayerRoomTrashCan::
# 488 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 489 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_BEDROOM_TRASHCAN, PlayerRoomTrashCan_2
# 494 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTrashCan_Text_1
PlayerRoomTrashCan_1:
# 495 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomTrashCan_2:
# 490 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTrashCan_Text_0
# 491 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 492 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_ITEM_BEDROOM_TRASHCAN
	goto PlayerRoomTrashCan_1


PlayerRoomWarmBedding::
# 499 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 500 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_WARM_BEDDING, PlayerRoomWarmBedding_2
# 506 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomWarmBedding_Text_1
PlayerRoomWarmBedding_1:
# 507 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomWarmBedding_2:
# 501 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomWarmBedding_Text_0
# 502 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 14
# 503 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_SCROLL_OF_DARKNESS
# 504 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_ITEM_WARM_BEDDING
	goto PlayerRoomWarmBedding_1


PlayerRoomTextbooks::
# 514 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTextbooks_Text_0
# 516 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomDiary::
# 520 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 521 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
opendiary:
# 522 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_0
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PlayerRoomDiary_Text_1, PlayerRoomDiary_Text_2, PlayerRoomDiary_Text_3, PlayerRoomDiary_Text_4
# 524 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomDiary_2
PlayerRoomDiary_1:
# 535 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PlayerRoomDiary_5
PlayerRoomDiary_4:
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PlayerRoomDiary_8
PlayerRoomDiary_7:
# 550 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PlayerRoomDiary_11
PlayerRoomDiary_10:
# 552 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomDiary_2:
# 525 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_ALCREMIE, 10, 3
# 526 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_5
# 532 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 533 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto opendiary
	goto PlayerRoomDiary_1

PlayerRoomDiary_5:
# 536 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_6
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto opendiary
	goto PlayerRoomDiary_4

PlayerRoomDiary_8:
# 543 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_7
# 548 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto opendiary
	goto PlayerRoomDiary_7

PlayerRoomDiary_11:
# 551 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	goto PlayerRoomDiary_10


PlayerRoomMail::
# 556 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 557 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_0
# 558 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
backtomail:
# 559 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_1
# 560 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PlayerRoomMail_Text_2, PlayerRoomMail_Text_3, PlayerRoomMail_Text_4, PlayerRoomMail_Text_5
# 561 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomMail_2
PlayerRoomMail_1:
# 568 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PlayerRoomMail_5
PlayerRoomMail_4:
# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PlayerRoomMail_8
PlayerRoomMail_7:
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PlayerRoomMail_15
PlayerRoomMail_14:
# 600 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomMail_2:
# 562 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_6
# 566 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto backtomail
	goto PlayerRoomMail_1

PlayerRoomMail_5:
# 569 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 570 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRoomMail_11
# 580 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_8
PlayerRoomMail_10:
# 588 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto backtomail
	goto PlayerRoomMail_4

PlayerRoomMail_8:
# 590 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_9
# 596 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto backtomail
	goto PlayerRoomMail_7

PlayerRoomMail_11:
# 571 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_7
	goto PlayerRoomMail_10

PlayerRoomMail_15:
# 599 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	goto PlayerRoomMail_14


# 603 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
cantleavebedroom:
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
	step_end

Setclocktoleave_Text_0:
# 320 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The wristwach's time is off... better set\n"
	.string "it to match the wall's clock.$"

PlayerRoomGamecube_Text_0:
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's an old Gamecube. The game 'Harvest\n"
	.string "Moon: A Wonderful Life' is loaded in.$"

PlayerRoomTV_Text_0:
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's a portable TV. The batteries are\n"
	.string "spent.$"

PlayerRoomHeadphones_Text_0:
# 340 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}A pair of headphones. The left side is\n"
	.string "mute.$"

PlayerRoomSodas_Text_0:
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's two empty cans of Soda.$"

PlayerRoomSoda_Text_0:
# 352 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}A toppled soda can. It has made a bit of\n"
	.string "a mess in the carpet.$"

PlayerRoomChips_Text_0:
# 358 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's the remains of a chip bag. The\n"
	.string "chips are a bit moldy.$"

PlayerRoomPokeball_Text_0:
# 364 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's Primeape's old Pokéball...$"

PlayerRoomShirt_Text_0:
# 370 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's a shirt with the Devon Co. logo\n"
	.string "that came in the mail.$"

PlayerRoomCushion_Text_0:
# 376 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}The cushion has sweat stains all over\n"
	.string "it.$"

PlayerRoomPizza_Text_0:
# 382 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's an empty 'Slateport Pizza'\n"
	.string "cardboard box.$"

PlayerRoomBookshelf_Text_0:
# 389 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The shelf is full of novels. Most of\n"
	.string "them are science fiction ones.$"

PlayerRoomWardrobe_Text_0:
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The wardrobe is full of dirty, smelly\n"
	.string "clothes.$"

PlayerBedSimple_Text_0:
# 401 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Rest for a bit?$"

PlayerBedSimple_Text_1:
# 406 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "You rest for a while.$"

PlayerBedTime_Text_0:
# 416 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Set the wristwatch's alarm to which\n"
	.string "time?$"

PlayerBedTime_Text_1:
# 439 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} wakes up.$"

PlayerRoomDadPrize_Text_0:
# 450 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Battle Frontier trophy.\p"
	.string "It's quite dusty and has lost most of\n"
	.string "its sheen.$"

PlayerRoomBox_Text_0:
# 462 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Pokéball Rifle is dissasembled inside\n"
	.string "the box.$"

PlayerRoomBox_Text_1:
# 463 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Assemble it?$"

PlayerRoomBox_Text_2:
# 464 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Yes$"

PlayerRoomBox_Text_3:
# 464 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "No$"

PlayerRoomBox_Text_4:
# 479 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The box is empty.$"

PlayerRoomTrashCan_Text_0:
# 490 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "There's something in the trash can...$"

PlayerRoomTrashCan_Text_1:
# 494 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The trash can is empty.$"

PlayerRoomWarmBedding_Text_0:
# 501 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's an extra set of bedding for the\n"
	.string "winter.$"

PlayerRoomWarmBedding_Text_1:
# 506 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "There's nothing here.$"

PlayerRoomTextbooks_Text_0:
# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A pile of textbooks lies beside the bed.$"

PlayerRoomDiary_Text_0:
# 522 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A diary is open on top of the desk.$"

PlayerRoomDiary_Text_1:
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oldest entry$"

PlayerRoomDiary_Text_2:
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Old entry$"

PlayerRoomDiary_Text_3:
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Newest entry$"

PlayerRoomDiary_Text_4:
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Don't read$"

PlayerRoomDiary_Text_5:
# 526 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Today dad and mom gave me the best\n"
	.string "birthday gift ever - my first Pokémon!\p"
	.string "Mommy said it's a Mankey, a Fighting\n"
	.string "type.\p"
	.string "In school I learnt Fighting types are\n"
	.string "strong against Normal types, like the\l"
	.string "ones grandpa uses.\p"
	.string "Speaking of grandpa, Daddy said I am\n"
	.string "going to stay with him for a while...\p"
	.string "Because him and mommy are going to be\n"
	.string "very very busy with work.\p"
	.string "I was a bit sad. It was my birthday, but\n"
	.string "I think everyone was sad today.$"

PlayerRoomDiary_Text_6:
# 536 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Today, Mankey and I are being drafted\n"
	.string "into the Hoenn army.\p"
	.string "After our training, we will be sent to\n"
	.string "the Kantonian front.\p"
	.string "I used to be scared that this day may\n"
	.string "come, but after all that happened, it's\l"
	.string "like I can't feel anything anymore.\p"
	.string "I think I have ran out of all my fear,\n"
	.string "anger, and sadness.\p"
	.string "This war has stolen everything from me,\n"
	.string "even my feelings.$"

PlayerRoomDiary_Text_7:
# 543 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 557 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A laptop is on the floor, with Devon Mail\n"
	.string "open.$"

PlayerRoomMail_Text_1:
# 559 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "There's three mails in the inbox, from\n"
	.string "three different senders.$"

PlayerRoomMail_Text_2:
# 560 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Devon Co. - Rustboro HQ$"

PlayerRoomMail_Text_3:
# 560 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Petalburg Gym$"

PlayerRoomMail_Text_4:
# 560 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oldale DLC$"

PlayerRoomMail_Text_5:
# 560 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Ignore laptop$"

PlayerRoomMail_Text_6:
# 562 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 571 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 580 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 590 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
