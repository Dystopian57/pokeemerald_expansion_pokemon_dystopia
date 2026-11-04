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
	clearflag forceshiny
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
GiveSturdyWatch::
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset newgameitems, GiveSturdyWatch_1
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
GiveSturdyWatch_1:
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	additem ITEM_KEY_TO_ROOM_1
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
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
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
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
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
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
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Let's set the wristwatch on time...$"
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "HOENN region map.$"
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"

ScriptedShinyFailsafe::
# 320 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag forceshiny
	return


Setclocktoleave::
# 324 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 325 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Setclocktoleave_Text_0
# 326 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, cantleavebedroom
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


ResetSamanthainMausoleumifneeded::
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset Samanthagotsnacks, ResetSamanthainMausoleumifneeded_2
# 339 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 4
ResetSamanthainMausoleumifneeded_1:
# 341 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag Samanthaleavesmausoleum
	return

ResetSamanthainMausoleumifneeded_2:
# 335 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 2
# 336 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag Samanthalamentsplayerdefeat
	goto ResetSamanthainMausoleumifneeded_1


ResetAideinLabifNeeded::
# 347 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set Aideeleaveslab, ResetAideinLabifNeeded_1
	return

ResetAideinLabifNeeded_1:
# 349 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 5
# 350 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag AidelamentsPlayerdefeatintunnel
# 352 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag Aideeleaveslab
	return


PlayerRoomGamecube::
# 358 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 359 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomGamecube_Text_0
# 360 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomTV::
# 364 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 365 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTV_Text_0
# 366 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomHeadphones::
# 370 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 371 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomHeadphones_Text_0
# 372 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomBedsideTable::
# 376 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 377 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBedsideTable_Text_0
# 378 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomSodas::
# 382 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 383 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomSodas_Text_0
# 384 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomSoda::
# 388 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 389 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomSoda_Text_0
# 390 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomChips::
# 394 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomChips_Text_0
# 396 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomPokeball::
# 400 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 401 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomPokeball_Text_0
# 402 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomShirt::
# 406 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 407 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomShirt_Text_0
# 408 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomCushion::
# 412 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 413 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomCushion_Text_0
# 414 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomPizza::
# 418 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 419 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomPizza_Text_0
# 420 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomBookshelf::
# 425 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 426 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBookshelf_Text_0
# 427 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


DoAndroidsDreamofMareep::
# 431 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 432 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox DoAndroidsDreamofMareep_Text_0
# 433 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomWardrobe::
# 437 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 438 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomWardrobe_Text_0
# 439 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


KantonianWarHistoryVol1PlayerHouse::
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lock
# 444 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox KantonianWarHistoryVol1PlayerHouse_Text_0
# 446 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, KantonianWarHistoryVol1PlayerHouse_Text_1, KantonianWarHistoryVol1PlayerHouse_Text_2
# 448 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KantonianWarHistoryVol1PlayerHouse_2
KantonianWarHistoryVol1PlayerHouse_1:
# 459 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KantonianWarHistoryVol1PlayerHouse_5
KantonianWarHistoryVol1PlayerHouse_4:
# 462 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
endkantonianwar1:
# 463 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

KantonianWarHistoryVol1PlayerHouse_2:
# 449 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_PIKACHU_HOENN, 10, 3
# 450 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox KantonianWarHistoryVol1PlayerHouse_Text_3
# 453 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 454 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_PIKACHU_KALOS, 10, 3
# 455 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox KantonianWarHistoryVol1PlayerHouse_Text_4
# 457 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 458 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto endkantonianwar1
	goto KantonianWarHistoryVol1PlayerHouse_1

KantonianWarHistoryVol1PlayerHouse_5:
# 460 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto endkantonianwar1
	goto KantonianWarHistoryVol1PlayerHouse_4


PlayerBedSimple::
# 467 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 468 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBedSimple_Text_0, MSGBOX_YESNO
# 469 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayerBedSimple_2
PlayerBedSimple_1:
# 475 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerBedSimple_2:
# 470 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 471 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse MUS_HEAL
# 472 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBedSimple_Text_1
# 473 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special HealPlayerParty
# 474 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto PlayerBedSimple_1


PlayerHouseBedTime::
# 479 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 480 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerBedSimple_Text_0, MSGBOX_YESNO
# 481 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayerHouseBedTime_2
PlayerHouseBedTime_1:
# 518 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerHouseBedTime_2:
# 482 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 483 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerHouseBedTime_Text_0
# 484 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special StartWallClock
# 485 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 486 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 487 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse MUS_HEAL
# 488 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 489 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	random 4
# 490 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 501 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_SUCCESS
# 502 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 503 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_SUCCESS
# 504 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 505 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_SUCCESS
# 506 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 508 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, PlayerHouseBedTime_6
PlayerHouseBedTime_4:
# 513 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 514 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special HealPlayerParty
# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerHouseBedTime_Text_1
	goto PlayerHouseBedTime_1

PlayerHouseBedTime_5:
# 509 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_FLASHBACK_WAKEUPLOCATION, 1
# 510 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadeoutbgm 1
# 511 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warpsilent MAP_PAST_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 1
	goto PlayerHouseBedTime_4

PlayerHouseBedTime_6:
# 508 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FLASHBACK_DREAM, 0
	goto_if_eq PlayerHouseBedTime_5
	goto PlayerHouseBedTime_4


PlayerRoomDadPrize::
# 522 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 524 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRoomDadPrize_2
# 527 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDadPrize_Text_1
PlayerRoomDadPrize_1:
# 529 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomDadPrize_2:
# 525 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDadPrize_Text_0
	goto PlayerRoomDadPrize_1


PlayerRoomBox::
# 533 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 535 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_BEDROOM_RIFLE, PlayerRoomBox_2
# 554 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBox_Text_2
PlayerRoomBox_1:
# 556 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
endplayerroomboxscript:
# 557 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomBox_2:
# 537 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBox_Text_0
# 538 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomBox_Text_1
# 539 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, KantonianWarHistoryVol1PlayerHouse_Text_1, KantonianWarHistoryVol1PlayerHouse_Text_2
# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomBox_6
PlayerRoomBox_5:
# 549 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomBox_8
	goto PlayerRoomBox_1

PlayerRoomBox_6:
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_SWITCH
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 543 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_CLICK
# 544 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 545 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 546 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_ITEM_BEDROOM_RIFLE
	goto PlayerRoomBox_5

PlayerRoomBox_8:
# 550 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto endplayerroomboxscript
	goto PlayerRoomBox_1


PlayerRoomTrashCan::
# 563 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 564 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_BEDROOM_TRASHCAN, PlayerRoomTrashCan_2
# 569 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTrashCan_Text_1
PlayerRoomTrashCan_1:
# 570 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomTrashCan_2:
# 565 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTrashCan_Text_0
# 566 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 567 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_ITEM_BEDROOM_TRASHCAN
	goto PlayerRoomTrashCan_1


PlayerRoomWarmBedding::
# 574 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 575 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_WARM_BEDDING, PlayerRoomWarmBedding_2
# 581 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomWarmBedding_Text_1
PlayerRoomWarmBedding_1:
# 582 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomWarmBedding_2:
# 576 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomWarmBedding_Text_0
# 577 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 14
# 578 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_SCROLL_OF_DARKNESS
# 579 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_ITEM_WARM_BEDDING
	goto PlayerRoomWarmBedding_1


PlayerRoomTextbooks::
# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 590 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomTextbooks_Text_0
# 591 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


PlayerRoomDiary::
# 595 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 596 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
opendiary:
# 597 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_0
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PlayerRoomDiary_Text_1, PlayerRoomDiary_Text_2, PlayerRoomDiary_Text_3, PlayerRoomDiary_Text_4
# 599 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomDiary_2
PlayerRoomDiary_1:
# 610 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PlayerRoomDiary_5
PlayerRoomDiary_4:
# 617 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PlayerRoomDiary_8
PlayerRoomDiary_7:
# 625 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PlayerRoomDiary_11
PlayerRoomDiary_10:
# 627 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomDiary_2:
# 600 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_ALCREMIE, 10, 3
# 601 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_5
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto opendiary
	goto PlayerRoomDiary_1

PlayerRoomDiary_5:
# 611 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_6
# 616 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto opendiary
	goto PlayerRoomDiary_4

PlayerRoomDiary_8:
# 618 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomDiary_Text_7
# 623 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto opendiary
	goto PlayerRoomDiary_7

PlayerRoomDiary_11:
# 626 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	goto PlayerRoomDiary_10


PlayerRoomMail::
# 631 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 632 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_0
# 633 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
backtomail:
# 634 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_1
# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PlayerRoomMail_Text_2, PlayerRoomMail_Text_3, PlayerRoomMail_Text_4, PlayerRoomMail_Text_5
# 636 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayerRoomMail_2
PlayerRoomMail_1:
# 643 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PlayerRoomMail_5
PlayerRoomMail_4:
# 664 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PlayerRoomMail_8
PlayerRoomMail_7:
# 673 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PlayerRoomMail_15
PlayerRoomMail_14:
# 675 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PlayerRoomMail_2:
# 637 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_6
# 641 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto backtomail
	goto PlayerRoomMail_1

PlayerRoomMail_5:
# 644 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 645 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRoomMail_11
# 655 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_8
PlayerRoomMail_10:
# 663 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto backtomail
	goto PlayerRoomMail_4

PlayerRoomMail_8:
# 665 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_9
# 671 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto backtomail
	goto PlayerRoomMail_7

PlayerRoomMail_11:
# 646 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayerRoomMail_Text_7
	goto PlayerRoomMail_10

PlayerRoomMail_15:
# 674 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	goto PlayerRoomMail_14


# 678 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
cantleavebedroom:
# 679 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
	step_end

Setclocktoleave_Text_0:
# 325 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The wristwach's time is off... better set\n"
	.string "it to match the wall's clock.$"

PlayerRoomGamecube_Text_0:
# 359 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's an old Gamecube. The game “Harvest\n"
	.string "Moon: A Wonderful Life” is loaded in.$"

PlayerRoomTV_Text_0:
# 365 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's a portable TV. The batteries are\n"
	.string "spent.$"

PlayerRoomHeadphones_Text_0:
# 371 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}A pair of headphones. The left side is\n"
	.string "mute.$"

PlayerRoomBedsideTable_Text_0:
# 377 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A bedside table. The drawers are full of\n"
	.string "empty blisters packs.$"

PlayerRoomSodas_Text_0:
# 383 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's two empty cans of soda.$"

PlayerRoomSoda_Text_0:
# 389 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}A toppled soda can. It has made a bit of\n"
	.string "a mess in the carpet.$"

PlayerRoomChips_Text_0:
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's the remains of a chip bag. The\n"
	.string "chips are a bit moldy.$"

PlayerRoomPokeball_Text_0:
# 401 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's Primeape's old Pokéball...$"

PlayerRoomShirt_Text_0:
# 407 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}It's a shirt with the Devon Co. logo\n"
	.string "that came in the mail.$"

PlayerRoomCushion_Text_0:
# 413 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}The cushion has sweat stains all over\n"
	.string "it.$"

PlayerRoomPizza_Text_0:
# 419 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "An empty cardboard box for a Slateport\n"
	.string "Pizza.$"

PlayerRoomBookshelf_Text_0:
# 426 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The shelf is full of novels. Most of\n"
	.string "them are science fiction ones.$"

DoAndroidsDreamofMareep_Text_0:
# 432 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A copy of “Do androids Dream of\n"
	.string "Mareep?”. It provided escapism for a\l"
	.string "time.$"

PlayerRoomWardrobe_Text_0:
# 438 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The wardrobe is full of dirty, smelly\n"
	.string "clothes.$"

KantonianWarHistoryVol1PlayerHouse_Text_0:
# 444 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A book's cover reads “History of the\n"
	.string "Kantonian War, Volume 1”.\p"
	.string "Read it?$"

KantonianWarHistoryVol1PlayerHouse_Text_1:
# 446 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Yes$"

KantonianWarHistoryVol1PlayerHouse_Text_2:
# 446 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "No$"

KantonianWarHistoryVol1PlayerHouse_Text_3:
# 450 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "February, 1996. Team Rocket, a criminal\n"
	.string "organization with a strong presence in\l"
	.string "the Kanto region, invades the\l"
	.string "headquarters of Silph Co., a\l"
	.string "technological company in Saffron City.$"

KantonianWarHistoryVol1PlayerHouse_Text_4:
# 455 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They defeat all opposition, and the\n"
	.string "leader of Team Rocket, Giovanni,\l"
	.string "assumes control of the company.$"

PlayerBedSimple_Text_0:
# 468 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Rest for a bit?$"

PlayerBedSimple_Text_1:
# 472 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "You rest for a while.$"

PlayerHouseBedTime_Text_0:
# 483 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Set the wristwatch's alarm to which\n"
	.string "time?$"

PlayerHouseBedTime_Text_1:
# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} wakes up.$"

PlayerRoomDadPrize_Text_0:
# 525 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's dad's Battle Frontier trophy.\p"
	.string "It's quite dusty and has lost most of\n"
	.string "its sheen.$"

PlayerRoomDadPrize_Text_1:
# 527 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's mom's Battle Frontier trophy.\p"
	.string "It's quite dusty and has lost most of\n"
	.string "its sheen.$"

PlayerRoomBox_Text_0:
# 537 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Pokéball Rifle is dissasembled inside\n"
	.string "the box.$"

PlayerRoomBox_Text_1:
# 538 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Assemble it?$"

PlayerRoomBox_Text_2:
# 554 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The box is empty.$"

PlayerRoomTrashCan_Text_0:
# 565 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "There's something in the trash can...$"

PlayerRoomTrashCan_Text_1:
# 569 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The trash can is empty.$"

PlayerRoomWarmBedding_Text_0:
# 576 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's an extra set of bedding for the\n"
	.string "winter.$"

PlayerRoomWarmBedding_Text_1:
# 581 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "There's nothing here.$"

PlayerRoomTextbooks_Text_0:
# 590 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A pile of textbooks lies beside the bed.$"

PlayerRoomDiary_Text_0:
# 597 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A diary is open on top of the desk.$"

PlayerRoomDiary_Text_1:
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oldest entry$"

PlayerRoomDiary_Text_2:
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Old entry$"

PlayerRoomDiary_Text_3:
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Newest entry$"

PlayerRoomDiary_Text_4:
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Don't read$"

PlayerRoomDiary_Text_5:
# 601 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 611 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 618 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 632 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A laptop is on the floor, with Devon Mail\n"
	.string "open.$"

PlayerRoomMail_Text_1:
# 634 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "There's three mails in the inbox, from\n"
	.string "three different senders.$"

PlayerRoomMail_Text_2:
# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Devon Co. Deliveries$"

PlayerRoomMail_Text_3:
# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Petalburg Gym$"

PlayerRoomMail_Text_4:
# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oldale DLC$"

PlayerRoomMail_Text_5:
# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Ignore laptop$"

PlayerRoomMail_Text_6:
# 637 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 646 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 655 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 665 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
