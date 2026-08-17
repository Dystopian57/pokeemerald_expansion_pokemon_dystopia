# 1 "data/maps/ArcadeElevator/scripts.pory"

# 2 "data/maps/ArcadeElevator/scripts.pory"
ArcadeElevator_MapScripts::
# 3 "data/maps/ArcadeElevator/scripts.pory"
	.byte 0

ArcadeElevatorArcade::
# 8 "data/maps/ArcadeElevator/scripts.pory"
	lock
# 9 "data/maps/ArcadeElevator/scripts.pory"
	msgbox ArcadeElevatorArcade_Text_0
# 10 "data/maps/ArcadeElevator/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ArcadeElevatorArcade_Text_1, ArcadeElevatorArcade_Text_2, ArcadeElevatorArcade_Text_3
# 12 "data/maps/ArcadeElevator/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ArcadeElevatorArcade_2
ArcadeElevatorArcade_1:
# 32 "data/maps/ArcadeElevator/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ArcadeElevatorArcade_5
ArcadeElevatorArcade_4:
# 35 "data/maps/ArcadeElevator/scripts.pory"
	release
	return

ArcadeElevatorArcade_2:
# 13 "data/maps/ArcadeElevator/scripts.pory"
	playse SE_TRUCK_STOP
# 14 "data/maps/ArcadeElevator/scripts.pory"
	call Elevatorstart
# 15 "data/maps/ArcadeElevator/scripts.pory"
	waitse
# 16 "data/maps/ArcadeElevator/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 17 "data/maps/ArcadeElevator/scripts.pory"
	warp MAP_ARCADE_ELEVATOR, 0
# 18 "data/maps/ArcadeElevator/scripts.pory"
	playse SE_ELEVATOR
# 19 "data/maps/ArcadeElevator/scripts.pory"
	waitse
# 20 "data/maps/ArcadeElevator/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 21 "data/maps/ArcadeElevator/scripts.pory"
	special SpawnCameraObject
# 22 "data/maps/ArcadeElevator/scripts.pory"
	call Elevatorshake
# 23 "data/maps/ArcadeElevator/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 12, 6
# 24 "data/maps/ArcadeElevator/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 12, 6
# 25 "data/maps/ArcadeElevator/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ArcadeElevatorArcade_Movement_0
# 26 "data/maps/ArcadeElevator/scripts.pory"
	special RemoveCameraObject
# 27 "data/maps/ArcadeElevator/scripts.pory"
	waitse
# 28 "data/maps/ArcadeElevator/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 29 "data/maps/ArcadeElevator/scripts.pory"
	msgbox ArcadeElevatorArcade_Text_4
	goto ArcadeElevatorArcade_1

ArcadeElevatorArcade_5:
# 33 "data/maps/ArcadeElevator/scripts.pory"
	release
	goto ArcadeElevatorArcade_4


Elevatorshake::
# 42 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8004, 2
# 43 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8005, 6
# 44 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8006, 4
# 45 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8007, 4
# 46 "data/maps/ArcadeElevator/scripts.pory"
	special ShakeCamera
	return


Elevatorstart::
# 51 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8004, 2
# 52 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8005, 4
# 53 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8006, 2
# 54 "data/maps/ArcadeElevator/scripts.pory"
	setvar VAR_0x8007, 4
# 55 "data/maps/ArcadeElevator/scripts.pory"
	special ShakeCamera
	return


# 25 "data/maps/ArcadeElevator/scripts.pory"
ArcadeElevatorArcade_Movement_0:
# 25 "data/maps/ArcadeElevator/scripts.pory"
	face_up
	step_end

ArcadeElevatorArcade_Text_0:
# 9 "data/maps/ArcadeElevator/scripts.pory"
	.string "Which level?$"

ArcadeElevatorArcade_Text_1:
# 10 "data/maps/ArcadeElevator/scripts.pory"
	.string "-1 - RHH$"

ArcadeElevatorArcade_Text_2:
# 10 "data/maps/ArcadeElevator/scripts.pory"
	.string "-2 - Barracks$"

ArcadeElevatorArcade_Text_3:
# 10 "data/maps/ArcadeElevator/scripts.pory"
	.string "Remain here$"

ArcadeElevatorArcade_Text_4:
# 29 "data/maps/ArcadeElevator/scripts.pory"
	.string "-1 F - RHH reached.$"
