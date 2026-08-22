# 1 "data/maps/ArcadeElevator/scripts.pory"


ArcadeElevator_MapScripts::
# 7 "data/maps/ArcadeElevator/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DisableElevatorFollowers
	.byte 0


DisableElevatorFollowers::
# 10 "data/maps/ArcadeElevator/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	return


ArcadeElevatorArcade::
# 18 "data/maps/ArcadeElevator/scripts.pory"
	lock
# 19 "data/maps/ArcadeElevator/scripts.pory"
	msgbox ArcadeElevatorArcade_Text_0
# 20 "data/maps/ArcadeElevator/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ArcadeElevatorArcade_Text_1, ArcadeElevatorArcade_Text_2, ArcadeElevatorArcade_Text_3
# 22 "data/maps/ArcadeElevator/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ArcadeElevatorArcade_2
ArcadeElevatorArcade_1:
# 51 "data/maps/ArcadeElevator/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ArcadeElevatorArcade_5
ArcadeElevatorArcade_4:
# 54 "data/maps/ArcadeElevator/scripts.pory"
	release
	return

ArcadeElevatorArcade_2:
# 23 "data/maps/ArcadeElevator/scripts.pory"
	playse SE_TRUCK_STOP
# 24 "data/maps/ArcadeElevator/scripts.pory"
	call Elevatorstart
# 25 "data/maps/ArcadeElevator/scripts.pory"
	waitse
# 26 "data/maps/ArcadeElevator/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 29 "data/maps/ArcadeElevator/scripts.pory"
	playse SE_ELEVATOR
# 36 "data/maps/ArcadeElevator/scripts.pory"
	waitse
# 37 "data/maps/ArcadeElevator/scripts.pory"
	warpsilent MAP_ARCADE_ELEVATOR, 6
# 38 "data/maps/ArcadeElevator/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ArcadeElevatorArcade_Movement_0
# 39 "data/maps/ArcadeElevator/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 40 "data/maps/ArcadeElevator/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 41 "data/maps/ArcadeElevator/scripts.pory"
	call Elevatorshake
# 42 "data/maps/ArcadeElevator/scripts.pory"
	playse SE_M_STRENGTH
# 43 "data/maps/ArcadeElevator/scripts.pory"
	waitse
# 44 "data/maps/ArcadeElevator/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 45 "data/maps/ArcadeElevator/scripts.pory"
	waitse
# 48 "data/maps/ArcadeElevator/scripts.pory"
	msgbox ArcadeElevatorArcade_Text_4
	goto ArcadeElevatorArcade_1

ArcadeElevatorArcade_5:
# 52 "data/maps/ArcadeElevator/scripts.pory"
	release
	goto ArcadeElevatorArcade_4


Elevatorshake::
# 61 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8004, 2
# 62 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8005, 6
# 63 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8006, 4
# 64 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8007, 4
# 65 "data/maps/ArcadeElevator/scripts.pory"
	special ShakeCamera
	return


Elevatorstart::
# 70 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8004, 2
# 71 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8005, 4
# 72 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8006, 2
# 73 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8007, 4
# 74 "data/maps/ArcadeElevator/scripts.pory"
	special ShakeCamera
	return


# 38 "data/maps/ArcadeElevator/scripts.pory"
ArcadeElevatorArcade_Movement_0:
# 38 "data/maps/ArcadeElevator/scripts.pory"
	face_up
	step_end

ArcadeElevatorArcade_Text_0:
# 19 "data/maps/ArcadeElevator/scripts.pory"
	.string "Which level?$"

ArcadeElevatorArcade_Text_1:
# 20 "data/maps/ArcadeElevator/scripts.pory"
	.string "-1 - RHH$"

ArcadeElevatorArcade_Text_2:
# 20 "data/maps/ArcadeElevator/scripts.pory"
	.string "-2 - Barracks$"

ArcadeElevatorArcade_Text_3:
# 20 "data/maps/ArcadeElevator/scripts.pory"
	.string "Remain here$"

ArcadeElevatorArcade_Text_4:
# 48 "data/maps/ArcadeElevator/scripts.pory"
	.string "-1 F - RHH reached.$"
