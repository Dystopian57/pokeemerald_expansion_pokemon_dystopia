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
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
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
	.string "Let's set the wristwatch on time...$"
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

ScriptedShinyFailsafe::
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag forceshiny
	return


Setclocktoleave::
# 321 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 322 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Setclocktoleave_Text_0
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 324 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, cantleavebedroom
# 325 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 326 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


ResetSamanthainMausoleumifneeded::
# 331 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset Samanthagotsnacks, ResetSamanthainMausoleumifneeded_2
# 336 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 4
ResetSamanthainMausoleumifneeded_1:
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag Samanthaleavesmausoleum
	return

ResetSamanthainMausoleumifneeded_2:
# 332 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 2
# 333 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag Samanthalamentsplayerdefeat
	goto ResetSamanthainMausoleumifneeded_1


ResetAideinLabifNeeded::
# 344 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set Aideeleaveslab, ResetAideinLabifNeeded_1
	return

ResetAideinLabifNeeded_1:
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 5
# 347 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag AidelamentsPlayerdefeatintunnel
# 349 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag Aideeleaveslab
	return


PlayerRoomGamecube::
# 355 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 356 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomGamecube_Text_0
# 357 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomTV::
# 361 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 362 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTV_Text_0
# 363 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomHeadphones::
# 367 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 368 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomHeadphones_Text_0
# 369 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomBedsideTable::
# 373 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 374 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBedsideTable_Text_0
# 375 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomSodas::
# 379 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 380 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomSodas_Text_0
# 381 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomSoda::
# 385 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 386 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomSoda_Text_0
# 387 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomChips::
# 391 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 392 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomChips_Text_0
# 393 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomPokeball::
# 397 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 398 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomPokeball_Text_0
# 399 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomShirt::
# 403 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 404 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomShirt_Text_0
# 405 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomCushion::
# 409 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 410 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomCushion_Text_0
# 411 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomPizza::
# 415 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 416 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomPizza_Text_0
# 417 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomBookshelf::
# 422 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 423 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBookshelf_Text_0
# 424 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


DoAndroidsDreamofMareep::
# 428 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 429 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox DoAndroidsDreamofMareep_Text_0
# 430 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomWardrobe::
# 434 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 435 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomWardrobe_Text_0
# 436 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


KantonianWarHistoryVol1PlayerHouse::
# 440 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lock
# 441 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox KantonianWarHistoryVol1PlayerHouse_Text_0
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, KantonianWarHistoryVol1PlayerHouse_Text_1, KantonianWarHistoryVol1PlayerHouse_Text_2
# 445 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KantonianWarHistoryVol1PlayerHouse_2
KantonianWarHistoryVol1PlayerHouse_1:
# 456 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KantonianWarHistoryVol1PlayerHouse_5
KantonianWarHistoryVol1PlayerHouse_4:
# 459 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
endkantonianwar1:
# 460 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

KantonianWarHistoryVol1PlayerHouse_2:
# 446 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_PIKACHU_HOENN, 10, 3
# 447 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox KantonianWarHistoryVol1PlayerHouse_Text_3
# 450 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 451 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_PIKACHU_KALOS, 10, 3
# 452 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox KantonianWarHistoryVol1PlayerHouse_Text_4
# 454 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 455 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto endkantonianwar1
	goto KantonianWarHistoryVol1PlayerHouse_1

KantonianWarHistoryVol1PlayerHouse_5:
# 457 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto endkantonianwar1
	goto KantonianWarHistoryVol1PlayerHouse_4


PlayerBedSimple::
# 464 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 465 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBedSimple_Text_0, MSGBOX_YESNO
# 466 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayerBedSimple_2
PlayerBedSimple_1:
# 472 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerBedSimple_2:
# 467 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 468 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse MUS_HEAL
# 469 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBedSimple_Text_1
# 470 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special HealPlayerParty
# 471 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto PlayerBedSimple_1


PlayerHouseBedTime::
# 476 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 477 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBedSimple_Text_0, MSGBOX_YESNO
# 478 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayerHouseBedTime_2
PlayerHouseBedTime_1:
# 506 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerHouseBedTime_2:
# 479 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 480 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerHouseBedTime_Text_0
# 481 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special StartWallClock
# 482 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 483 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 484 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse MUS_HEAL
# 485 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 486 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	random 4
# 487 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 489 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_RESULT
# 490 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, PlayerHouseBedTime_6
# 491 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, PlayerHouseBedTime_7
# 492 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, PlayerHouseBedTime_8
# 493 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 3, PlayerHouseBedTime_9
PlayerHouseBedTime_4:
# 495 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_SUCCESS
# 496 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 497 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_SUCCESS
# 498 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 499 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_SUCCESS
# 500 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 501 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 502 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special HealPlayerParty
# 503 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerHouseBedTime_Text_1
	goto PlayerHouseBedTime_1

PlayerHouseBedTime_6:
# 490 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 3
	goto PlayerHouseBedTime_4

PlayerHouseBedTime_7:
# 491 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 3
	goto PlayerHouseBedTime_4

PlayerHouseBedTime_8:
# 492 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 3
	goto PlayerHouseBedTime_4

PlayerHouseBedTime_9:
# 493 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 3
	goto PlayerHouseBedTime_4


PlayerRoomDadPrize::
# 510 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 511 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 512 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRoomDadPrize_2
# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDadPrize_Text_1
PlayerRoomDadPrize_1:
# 517 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomDadPrize_2:
# 513 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDadPrize_Text_0
	goto PlayerRoomDadPrize_1


PlayerRoomBox::
# 521 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_BEDROOM_RIFLE, PlayerRoomBox_2
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBox_Text_2
PlayerRoomBox_1:
# 544 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
endplayerroomboxscript:
# 545 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomBox_2:
# 525 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBox_Text_0
# 526 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBox_Text_1
# 527 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, KantonianWarHistoryVol1PlayerHouse_Text_1, KantonianWarHistoryVol1PlayerHouse_Text_2
# 528 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomBox_6
PlayerRoomBox_5:
# 537 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomBox_8
	goto PlayerRoomBox_1

PlayerRoomBox_6:
# 529 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_SWITCH
# 530 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 531 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_CLICK
# 532 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 533 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 534 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_ITEM_BEDROOM_RIFLE
	goto PlayerRoomBox_5

PlayerRoomBox_8:
# 538 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto endplayerroomboxscript
	goto PlayerRoomBox_1


PlayerRoomTrashCan::
# 551 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 552 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_BEDROOM_TRASHCAN, PlayerRoomTrashCan_2
# 557 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTrashCan_Text_1
PlayerRoomTrashCan_1:
# 558 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomTrashCan_2:
# 553 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTrashCan_Text_0
# 554 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 555 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_ITEM_BEDROOM_TRASHCAN
	goto PlayerRoomTrashCan_1


PlayerRoomWarmBedding::
# 562 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 563 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_WARM_BEDDING, PlayerRoomWarmBedding_2
# 569 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomWarmBedding_Text_1
PlayerRoomWarmBedding_1:
# 570 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomWarmBedding_2:
# 564 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomWarmBedding_Text_0
# 565 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 14
# 566 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_SCROLL_OF_DARKNESS
# 567 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_ITEM_WARM_BEDDING
	goto PlayerRoomWarmBedding_1


PlayerRoomTextbooks::
# 577 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 578 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTextbooks_Text_0
# 579 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomDiary::
# 583 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 584 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
opendiary:
# 585 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_0
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PlayerRoomDiary_Text_1, PlayerRoomDiary_Text_2, PlayerRoomDiary_Text_3, PlayerRoomDiary_Text_4
# 587 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomDiary_2
PlayerRoomDiary_1:
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PlayerRoomDiary_5
PlayerRoomDiary_4:
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PlayerRoomDiary_8
PlayerRoomDiary_7:
# 613 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PlayerRoomDiary_11
PlayerRoomDiary_10:
# 615 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomDiary_2:
# 588 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_ALCREMIE, 10, 3
# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_5
# 595 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 596 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto opendiary
	goto PlayerRoomDiary_1

PlayerRoomDiary_5:
# 599 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_6
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto opendiary
	goto PlayerRoomDiary_4

PlayerRoomDiary_8:
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_7
# 611 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto opendiary
	goto PlayerRoomDiary_7

PlayerRoomDiary_11:
# 614 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	goto PlayerRoomDiary_10


PlayerRoomMail::
# 619 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 620 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_0
# 621 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
backtomail:
# 622 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_1
# 623 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PlayerRoomMail_Text_2, PlayerRoomMail_Text_3, PlayerRoomMail_Text_4, PlayerRoomMail_Text_5
# 624 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomMail_2
PlayerRoomMail_1:
# 631 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PlayerRoomMail_5
PlayerRoomMail_4:
# 652 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PlayerRoomMail_8
PlayerRoomMail_7:
# 661 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PlayerRoomMail_15
PlayerRoomMail_14:
# 663 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomMail_2:
# 625 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_6
# 629 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto backtomail
	goto PlayerRoomMail_1

PlayerRoomMail_5:
# 632 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 633 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRoomMail_11
# 643 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_8
PlayerRoomMail_10:
# 651 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto backtomail
	goto PlayerRoomMail_4

PlayerRoomMail_8:
# 653 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_9
# 659 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto backtomail
	goto PlayerRoomMail_7

PlayerRoomMail_11:
# 634 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_7
	goto PlayerRoomMail_10

PlayerRoomMail_15:
# 662 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	goto PlayerRoomMail_14


# 666 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
cantleavebedroom:
# 667 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
	step_end

Setclocktoleave_Text_0:
# 322 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The wristwach's time is off... better set\n"
	.string "it to match the wall's clock.$"

PlayerRoomGamecube_Text_0:
# 356 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's an old Gamecube. The game “Harvest\n"
	.string "Moon: A Wonderful Life” is loaded in.$"

PlayerRoomTV_Text_0:
# 362 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's a portable TV. The batteries are\n"
	.string "spent.$"

PlayerRoomHeadphones_Text_0:
# 368 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}A pair of headphones. The left side is\n"
	.string "mute.$"

PlayerRoomBedsideTable_Text_0:
# 374 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A bedside table. The drawers are full of\n"
	.string "empty blisters packs.$"

PlayerRoomSodas_Text_0:
# 380 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's two empty cans of soda.$"

PlayerRoomSoda_Text_0:
# 386 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}A toppled soda can. It has made a bit of\n"
	.string "a mess in the carpet.$"

PlayerRoomChips_Text_0:
# 392 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's the remains of a chip bag. The\n"
	.string "chips are a bit moldy.$"

PlayerRoomPokeball_Text_0:
# 398 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's Primeape's old Pokéball...$"

PlayerRoomShirt_Text_0:
# 404 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's a shirt with the Devon Co. logo\n"
	.string "that came in the mail.$"

PlayerRoomCushion_Text_0:
# 410 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}The cushion has sweat stains all over\n"
	.string "it.$"

PlayerRoomPizza_Text_0:
# 416 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "An empty cardboard box for a Slateport\n"
	.string "Pizza.$"

PlayerRoomBookshelf_Text_0:
# 423 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The shelf is full of novels. Most of\n"
	.string "them are science fiction ones.$"

DoAndroidsDreamofMareep_Text_0:
# 429 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A copy of “Do androids Dream of\n"
	.string "Mareep?”. It provided escapism for a\l"
	.string "time.$"

PlayerRoomWardrobe_Text_0:
# 435 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The wardrobe is full of dirty, smelly\n"
	.string "clothes.$"

KantonianWarHistoryVol1PlayerHouse_Text_0:
# 441 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A book's cover reads “History of the\n"
	.string "Kantonian War, Volume 1”.\p"
	.string "Read it?$"

KantonianWarHistoryVol1PlayerHouse_Text_1:
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Yes$"

KantonianWarHistoryVol1PlayerHouse_Text_2:
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "No$"

KantonianWarHistoryVol1PlayerHouse_Text_3:
# 447 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "February, 1996. Team Rocket, a criminal\n"
	.string "organization with a strong presence in\l"
	.string "the Kanto region, invades the\l"
	.string "headquarters of Silph Co., a\l"
	.string "technological company in Saffron City.$"

KantonianWarHistoryVol1PlayerHouse_Text_4:
# 452 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They defeat all opposition, and the\n"
	.string "leader of Team Rocket, Giovanni,\l"
	.string "assumes control of the company.$"

PlayerBedSimple_Text_0:
# 465 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Rest for a bit?$"

PlayerBedSimple_Text_1:
# 469 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "You rest for a while.$"

PlayerHouseBedTime_Text_0:
# 480 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Set the wristwatch's alarm to which\n"
	.string "time?$"

PlayerHouseBedTime_Text_1:
# 503 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} wakes up.$"

PlayerRoomDadPrize_Text_0:
# 513 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's dad's Battle Frontier trophy.\p"
	.string "It's quite dusty and has lost most of\n"
	.string "its sheen.$"

PlayerRoomDadPrize_Text_1:
# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's mom's Battle Frontier trophy.\p"
	.string "It's quite dusty and has lost most of\n"
	.string "its sheen.$"

PlayerRoomBox_Text_0:
# 525 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Pokéball Rifle is dissasembled inside\n"
	.string "the box.$"

PlayerRoomBox_Text_1:
# 526 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Assemble it?$"

PlayerRoomBox_Text_2:
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The box is empty.$"

PlayerRoomTrashCan_Text_0:
# 553 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "There's something in the trash can...$"

PlayerRoomTrashCan_Text_1:
# 557 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The trash can is empty.$"

PlayerRoomWarmBedding_Text_0:
# 564 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's an extra set of bedding for the\n"
	.string "winter.$"

PlayerRoomWarmBedding_Text_1:
# 569 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "There's nothing here.$"

PlayerRoomTextbooks_Text_0:
# 578 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A pile of textbooks lies beside the bed.$"

PlayerRoomDiary_Text_0:
# 585 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A diary is open on top of the desk.$"

PlayerRoomDiary_Text_1:
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oldest entry$"

PlayerRoomDiary_Text_2:
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Old entry$"

PlayerRoomDiary_Text_3:
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Newest entry$"

PlayerRoomDiary_Text_4:
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Don't read$"

PlayerRoomDiary_Text_5:
# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Today dad and mom gave me the best\n"
	.string "birthday gift ever - my first Pokémon!\p"
	.string "Mommy said it's a Mankey, a Fighting\n"
	.string "type.\p"
	.string "In school I learnt Fighting types are\n"
	.string "strong against Normal types, like the\l"
	.string "ones grandpa uses.\p"
	.string "Speaking of grandpa, daddy said I am\n"
	.string "going to stay with him for a while...\p"
	.string "Because him and mommy are going to be\n"
	.string "very very busy with work.\p"
	.string "I was a bit sad. It was my birthday, but\n"
	.string "I think everyone was sad today.$"

PlayerRoomDiary_Text_6:
# 599 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 620 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A laptop is on the floor, with Devon Mail\n"
	.string "open.$"

PlayerRoomMail_Text_1:
# 622 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "There's three mails in the inbox, from\n"
	.string "three different senders.$"

PlayerRoomMail_Text_2:
# 623 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Devon Co. Deliveries$"

PlayerRoomMail_Text_3:
# 623 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Petalburg Gym$"

PlayerRoomMail_Text_4:
# 623 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oldale DLC$"

PlayerRoomMail_Text_5:
# 623 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Ignore laptop$"

PlayerRoomMail_Text_6:
# 625 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "From: Devon Corporation Deliveries.\n"
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
# 634 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
	.string "He got my badge when he was half your\n"
	.string "age… he was a real prodigy.\p"
	.string "Well, got to go. Remember to eat well,\n"
	.string "and do plenty of exercise.\p"
	.string "Take care,\n"
	.string "Norman.$"

PlayerRoomMail_Text_8:
# 643 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
	.string "She beat me when she was half your age…\n"
	.string "she was a real prodigy.\p"
	.string "Well, got to go. Remember to eat well,\n"
	.string "and do plenty of exercise.\p"
	.string "Take care,\n"
	.string "Norman.$"

PlayerRoomMail_Text_9:
# 653 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "From: Oldale Devon Learning Center.\n"
	.string "Subject: You are not alone.\p"
	.string "Did you live through traumatic\n"
	.string "experiences during the Kantonian war?\l"
	.string "If so, you are not alone.\p"
	.string "Come join us at the newly-established\n"
	.string "Oldale-based DLC, and share your\l"
	.string "burden in an environment of kindness\l"
	.string "with a group-based, PTSD Therapy.\p"
	.string "Disclaimer: Only Safemon are allowed\n"
	.string "into the center during sessions.$"
