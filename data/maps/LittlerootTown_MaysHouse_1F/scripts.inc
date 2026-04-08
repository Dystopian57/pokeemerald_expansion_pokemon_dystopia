# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 409 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 410 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 411 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 412 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 413 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 414 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 415 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 416 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 417 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 418 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 419 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 420 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 421 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 422 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 423 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 424 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 425 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 426 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 427 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 428 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 429 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 430 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 431 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 432 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 433 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 434 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 435 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 436 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 437 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 438 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 439 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 440 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 441 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 442 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 443 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 444 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 445 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 446 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 447 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 448 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 449 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 450 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 451 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 452 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 453 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 454 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 455 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 456 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 457 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 458 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 459 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 460 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 461 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 462 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 463 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 464 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 465 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 466 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 467 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 468 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 469 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 470 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 471 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 472 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 473 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 474 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 475 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 476 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 477 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 478 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 479 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 480 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 481 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 482 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 483 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 484 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 485 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 486 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 487 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 488 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 489 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 490 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 491 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 492 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 493 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "neighbor! Hi!\p"
# 494 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 495 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "We have a {STR_VAR_1} about the same\n"
# 496 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 497 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "age as you.\p"
# 498 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 499 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} was excited about making\n"
# 500 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 501 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a new friend.\p"
# 502 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 503 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 504 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 505 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 506 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 507 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 508 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 509 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like child, like father.\p"
# 510 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 511 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My husband is as wild about POKéMON\n"
# 512 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 513 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "as our child.\p"
# 514 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 515 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "If he's not at his LAB, he's likely\n"
# 516 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 517 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "scrabbling about in grassy places.$"
# 518 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 519 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 520 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 521 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 522 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 523 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That {RIVAL}!\p"
# 524 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 525 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I guess our child is too busy with\n"
# 526 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 527 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "POKéMON to notice that you came\l"
# 528 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 529 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.$"
# 530 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 531 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 532 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 533 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 534 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 535 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
# 536 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 537 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "just a little while ago.\p"
# 538 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 539 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like father, like child.\n"
# 540 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 541 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 542 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 543 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 544 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 545 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 546 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 547 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 548 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 549 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "travel with POKéMON.\p"
# 550 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 551 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "But you should go home every so often\n"
# 552 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 553 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 554 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 555 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 556 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 557 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 558 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 559 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 560 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 561 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 562 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 563 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh?\n"
# 564 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 565 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who… Who are you?\p"
# 566 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 567 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\n"
# 568 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 569 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\p"
# 570 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 571 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 572 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 573 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So your move was today.\p"
# 574 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 575 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Um… I'm MAY.\n"
# 576 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 577 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Glad to meet you!\p"
# 578 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 579 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I…\n"
# 580 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 581 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 582 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 583 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 584 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 585 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 586 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 587 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 588 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 589 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 590 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 591 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 592 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 593 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 594 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 595 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 596 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 597 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Eheheh…\p"
# 598 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 599 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 600 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 601 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 602 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 603 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON!\p"
# 604 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 605 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 606 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 607 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 608 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 609 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 610 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 611 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
# 612 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 613 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "You…\p"
# 614 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 615 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who are you?\p"
# 616 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 617 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 618 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 619 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Moved in next door, right?\p"
# 620 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 621 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 622 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 623 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 624 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 625 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 626 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 627 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 628 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 629 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My name's BRENDAN.\n"
# 630 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 631 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 632 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 633 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 634 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 635 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a POKéMON?\p"
# 636 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 637 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 638 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 639 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 640 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 641 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 642 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 643 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON.\p"
# 644 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 645 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Some other time, okay?$"
# 646 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 647 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 648 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 649 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 650 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 651 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
# 652 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 653 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you already have your\n"
# 654 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 655 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "own POKéMON?$"

LittlerootTown_MaysHouse_1F_MapScripts::
# 659 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GenderedSprite
# 660 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GenderedSprite
	.byte 0


GenderedSprite::
# 664 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


RivalWatchout::
# 669 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 670 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 671 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 672 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalWatchout_2
RivalWatchout_1:
# 673 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RivalWatchout_5
RivalWatchout_4:
# 674 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 675 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_HELP, TRUE
# 676 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, RivalWatchout_Movement_0
# 677 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalWatchout_Movement_1
# 678 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 679 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalWatchout_Text_0
# 680 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removefieldmugshot
# 681 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 682 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalWatchout_8
RivalWatchout_7:
# 683 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RivalWatchout_11
RivalWatchout_10:
# 684 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalWatchout_Text_1
# 685 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removefieldmugshot
# 686 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 687 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalWatchout_14
RivalWatchout_13:
# 688 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RivalWatchout_17
RivalWatchout_16:
# 689 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 690 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalWatchout_Text_2
# 691 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmessage
# 692 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalWatchout_Movement_1
# 693 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, RivalWatchout_Movement_1
# 694 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_RIVALMIMIWARNINGDONE, 1
# 695 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removefieldmugshot
# 696 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return

RivalWatchout_2:
# 672 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto RivalWatchout_1

RivalWatchout_5:
# 673 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto RivalWatchout_4

RivalWatchout_8:
# 682 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto RivalWatchout_7

RivalWatchout_11:
# 683 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto RivalWatchout_10

RivalWatchout_14:
# 687 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto RivalWatchout_13

RivalWatchout_17:
# 688 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto RivalWatchout_16


Littleroot_Idletalk_Rival::
# 700 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 701 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 702 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 703 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Littleroot_Idletalk_Rival_2
Littleroot_Idletalk_Rival_1:
# 704 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Littleroot_Idletalk_Rival_5
Littleroot_Idletalk_Rival_4:
# 705 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 706 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Littleroot_Idletalk_Rival_Movement_0
# 707 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_unset rivalhouse1stdialogue, Littleroot_Idletalk_Rival_8
# 719 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Littleroot_Idletalk_Rival_Text_3
Littleroot_Idletalk_Rival_7:
# 720 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, RivalWatchout_Movement_1
# 721 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removefieldmugshot
# 722 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return

Littleroot_Idletalk_Rival_2:
# 703 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto Littleroot_Idletalk_Rival_1

Littleroot_Idletalk_Rival_5:
# 704 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto Littleroot_Idletalk_Rival_4

Littleroot_Idletalk_Rival_8:
# 709 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Littleroot_Idletalk_Rival_Text_0
# 710 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removefieldmugshot
# 711 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Littleroot_Idletalk_Rival_Movement_0
# 712 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setspeaker [ NULL ]
# 713 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Littleroot_Idletalk_Rival_Text_1
# 715 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalWatchout_Movement_1
# 716 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Littleroot_Idletalk_Rival_Text_2
# 718 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag rivalhouse1stdialogue
	goto Littleroot_Idletalk_Rival_7


LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE::
# 726 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 727 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_Text_0
# 729 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmessage
# 730 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setwildbattle SPECIES_MIMIYURUI, 3
# 731 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	dowildbattle
# 732 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 733 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_2
# 736 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_3
# 739 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_4
# 742 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_5
LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1:
# 745 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmessage
# 746 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_2:
# 734 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call Won_or_Caught
	goto LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_3:
# 737 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call Won_or_Caught
	goto LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_4:
# 740 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call RanAway
	goto LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_5:
# 743 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call RanAway
	goto LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_1


Won_or_Caught::
# 750 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 751 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Won_or_Caught_Movement_0
# 752 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Won_or_Caught_Movement_1
# 753 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	hidefollower
# 754 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 755 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 756 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Won_or_Caught_2
Won_or_Caught_1:
# 757 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Won_or_Caught_5
Won_or_Caught_4:
# 758 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 759 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Won_or_Caught_Text_0
# 761 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmessage
# 762 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Won_or_Caught_Movement_2
# 763 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Won_or_Caught_Movement_3
# 764 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement
# 765 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Won_or_Caught_Text_1
# 766 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmessage
# 767 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxy 3, 10, 6
# 768 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_BALL_OPEN
# 769 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitse
# 770 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject 2
# 771 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject 3
# 772 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Won_or_Caught_Movement_4
# 773 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 774 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Won_or_Caught_Text_2
# 776 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removefieldmugshot
# 777 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 778 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Won_or_Caught_8
Won_or_Caught_7:
# 779 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Won_or_Caught_11
Won_or_Caught_10:
# 780 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 781 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Won_or_Caught_Text_3
# 782 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmessage
# 783 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_FLEE
# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Won_or_Caught_Movement_5
# 785 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 1
# 786 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject 1
# 787 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_DOOR
# 788 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removefieldmugshot
# 789 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag RIVAL_LEAVES_HOME
# 790 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag DOLL_BATTLE
# 791 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 4
# 792 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag Oldmantyhide
# 793 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_LITTLEROOT_TEST, TRUE
	return

Won_or_Caught_2:
# 756 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto Won_or_Caught_1

Won_or_Caught_5:
# 757 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto Won_or_Caught_4

Won_or_Caught_8:
# 778 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto Won_or_Caught_7

Won_or_Caught_11:
# 779 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto Won_or_Caught_10


RanAway::
# 798 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 799 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 800 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 801 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RanAway_2
RanAway_1:
# 802 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RanAway_5
RanAway_4:
# 803 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, RivalWatchout_Movement_1
# 804 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RanAway_Text_0
# 806 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removefieldmugshot
# 807 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 808 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RanAway_8
RanAway_7:
# 809 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RanAway_11
RanAway_10:
# 810 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RanAway_Text_1
# 811 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removefieldmugshot
# 812 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return

RanAway_2:
# 801 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto RanAway_1

RanAway_5:
# 802 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto RanAway_4

RanAway_8:
# 808 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto RanAway_7

RanAway_11:
# 809 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto RanAway_10


RivalHouseSealedBox::
# 817 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 818 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalHouseSealedBox_Text_0
# 819 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


RivalHouseTV::
# 823 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 824 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalHouseTV_Text_0
# 825 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


RivalHouseMedicineCabinet::
# 829 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 830 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalHouseMedicineCabinet_Text_0
# 832 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


RivalHouseFridge::
# 836 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 837 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalHouseFridge_Text_0
# 838 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


RivalHouseSink::
# 842 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 843 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalHouseSink_Text_0
# 844 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


RivalHouseSandbag::
# 848 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 849 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalHouseSandbag_Text_0
# 850 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


RivalHouseBinoculars::
# 855 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 856 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_unset FLAG_ITEM_RIVAL1F_LENS, RivalHouseBinoculars_2
# 862 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalHouseBinoculars_Text_1
RivalHouseBinoculars_1:
# 863 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return

RivalHouseBinoculars_2:
# 857 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalHouseBinoculars_Text_0
# 859 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	giveitem ITEM_ZOOM_LENS
# 860 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_ITEM_RIVAL1F_LENS
	goto RivalHouseBinoculars_1


# 676 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalWatchout_Movement_0:
# 676 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_down
# 676 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 677 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalWatchout_Movement_1:
# 677 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_right
	step_end

# 706 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Littleroot_Idletalk_Rival_Movement_0:
# 706 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_player
	step_end

# 751 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Won_or_Caught_Movement_0:
# 751 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_down
# 751 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_down
# 751 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_right
# 751 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_right
# 751 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_right
# 751 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_up
# 751 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_right
	step_end

# 752 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Won_or_Caught_Movement_1:
# 752 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_left
	step_end

# 762 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Won_or_Caught_Movement_2:
# 762 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 762 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_up
	step_end

# 763 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Won_or_Caught_Movement_3:
# 763 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 763 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_up
	step_end

# 772 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Won_or_Caught_Movement_4:
# 772 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_down
	step_end

# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Won_or_Caught_Movement_5:
# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_down
# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 784 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_down
	step_end

RivalWatchout_Text_0:
# 679 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}, don't go beyond the\n"
	.string "barricade!!$"

RivalWatchout_Text_1:
# 684 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That Pokémon the Kantonians threw at\n"
	.string "us... it's too strong...!$"

RivalWatchout_Text_2:
# 690 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Uggh... it got me good. Leave me... I'm\n"
	.string "done for!$"

Littleroot_Idletalk_Rival_Text_0:
# 709 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ugh... I don't have much longer... run\n"
	.string "away, while you can...$"

Littleroot_Idletalk_Rival_Text_1:
# 713 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} does not seem injured... and\n"
	.string "the 'enemy Pokémon' in question seems\l"
	.string "to be just a doll.$"

Littleroot_Idletalk_Rival_Text_2:
# 716 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} seems to be having another\n"
	.string "episode... perhaps they'll calm down if\l"
	.string "the 'enemy' is dealt with.$"

Littleroot_Idletalk_Rival_Text_3:
# 719 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}... it's been an honour... to\n"
	.string "share battlefield... with you.$"

LittlerootTown_MaysHouse_1F_EventScript_DOLL_BATTLE_Text_0:
# 727 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "As I thought, it's just a doll... one of\n"
	.string "Super Substitute, Devon's mascot.\p"
	.string "Wait... i-it's moving!?$"

Won_or_Caught_Text_0:
# 759 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}... you did it! You beat the\n"
	.string "fiend!\p"
	.string "This will go down in the history books.\n"
	.string "Let me restrain it - perhaps we can put\l"
	.string "it to some use.$"

Won_or_Caught_Text_1:
# 765 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Bang!$"

Won_or_Caught_Text_2:
# 774 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Piece of cake - now that this base is\n"
	.string "secure, let's push onto the north\l"
	.string "front!\p"
	.string "Cover my rear, {PLAYER}. At the count\n"
	.string "of three, two, one...$"

Won_or_Caught_Text_3:
# 781 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "CHAAAAAARGE!!$"

RanAway_Text_0:
# 804 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}, don't falter now!! This...!\p"
	.string "This is the battle that will decide the\n"
	.string "fate of HOENN!$"

RanAway_Text_1:
# 810 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "EVERYONE IS COUNTING ON YOU! YOU CAN\n"
	.string "DO IT$"

RivalHouseSealedBox_Text_0:
# 818 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

RivalHouseTV_Text_0:
# 824 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "The TV appears to be broken.$"

RivalHouseMedicineCabinet_Text_0:
# 830 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "The cabinet contains human medicine.\n"
	.string "You spot several types of\l"
	.string "antidepressants and antipsychotics.$"

RivalHouseFridge_Text_0:
# 837 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "The fridge is empty.$"

RivalHouseSink_Text_0:
# 843 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "The sink shows signs of recent use.$"

RivalHouseSandbag_Text_0:
# 849 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "It's a regular sandbag.$"

RivalHouseBinoculars_Text_0:
# 857 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "You open the cabinet's drawers. There's\n"
	.string "many gadgets and strange wires, and\l"
	.string "only one thing you might use...$"

RivalHouseBinoculars_Text_1:
# 862 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "There's nothing of use in the cabinet.$"
