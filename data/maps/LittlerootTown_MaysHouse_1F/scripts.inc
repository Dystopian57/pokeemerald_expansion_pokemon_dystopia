# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 5
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 1, 8
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "neighbor! Hi!\p"
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "We have a {STR_VAR_1} about the same\n"
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "age as you.\p"
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} was excited about making\n"
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a new friend.\p"
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like child, like father.\p"
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My husband is as wild about POKéMON\n"
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "as our child.\p"
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "If he's not at his LAB, he's likely\n"
# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "scrabbling about in grassy places.$"
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That {RIVAL}!\p"
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I guess our child is too busy with\n"
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "POKéMON to notice that you came\l"
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.$"
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "just a little while ago.\p"
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like father, like child.\n"
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "travel with POKéMON.\p"
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "But you should go home every so often\n"
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh?\n"
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who… Who are you?\p"
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\n"
# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\p"
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So your move was today.\p"
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Um… I'm MAY.\n"
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Glad to meet you!\p"
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I…\n"
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Eheheh…\p"
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON!\p"
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "You…\p"
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who are you?\p"
# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Moved in next door, right?\p"
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My name's BRENDAN.\n"
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a POKéMON?\p"
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON.\p"
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Some other time, okay?$"
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you already have your\n"
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "own POKéMON?$"

Littleroot_Idletalk_Rival::
# 413 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 414 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Littleroot_Idletalk_Rival_Text_0
# 415 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE::
# 419 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 420 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_Text_0
# 421 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmessage
# 422 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setwildbattle SPECIES_SMEARGLE, 5, ITEM_BLUE_ORB
# 423 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	dowildbattle
# 424 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 425 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_2
# 428 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_3
# 431 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_4
# 434 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_5
LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1:
# 437 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmessage
# 438 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_2:
# 426 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call Won_or_Caught
	goto LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_3:
# 429 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call Won_or_Caught
	goto LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_4:
# 432 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call RanAway
	goto LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_5:
# 435 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call RanAway
	goto LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1


Won_or_Caught::
# 442 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 443 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject 2
# 444 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 445 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Won_or_Caught_Text_0
# 446 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Rivalleaves
# 447 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 1
# 448 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject 1
# 449 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag RIVAL_LEAVES_HOME
# 450 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag DOLL_BATTLE
# 451 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 3
	return


# 455 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Rivalleaves:
# 456 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 456 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 456 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 457 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 457 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
	step_end

RanAway::
# 461 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RanAway_Text_0
	return


Littleroot_Idletalk_Rival_Text_0:
# 414 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "PLEASE HELP ME$"

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_Text_0:
# 420 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "It's just a doll...$"

Won_or_Caught_Text_0:
# 445 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "THANK YOU NOW I GO$"

RanAway_Text_0:
# 461 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I GET IT'S SCARY BUT COME ON$"
