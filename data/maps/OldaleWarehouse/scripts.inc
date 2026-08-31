# 1 "data/maps/OldaleWarehouse/scripts.pory"


OldaleWarehouse_MapScripts::
# 6 "data/maps/OldaleWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 7 "data/maps/OldaleWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 8 "data/maps/OldaleWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
	.byte 0


OldaleWarehouseRebel1::
# 13 "data/maps/OldaleWarehouse/scripts.pory"
	trainerbattle_single TRAINER_REBELGRUNT_OLDALEWAREHOUSE_1, WarehouseRebel1_Intro, WarehouseRebel1_Outro
# 14 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseRebel1_Text_0
# 16 "data/maps/OldaleWarehouse/scripts.pory"
	release
	end


OldaleWarehouseRebel2::
# 28 "data/maps/OldaleWarehouse/scripts.pory"
	trainerbattle_single TRAINER_REBELGRUNT_OLDALEWAREHOUSE_2, WarehouseRebel2_Intro, WarehouseRebel2_Outro
# 29 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseRebel2_Text_0
# 30 "data/maps/OldaleWarehouse/scripts.pory"
	release
	end


OldaleWarehouseManchine::
# 42 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 43 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_unset warehousemanchine, OldaleWarehouseManchine_2
# 72 "data/maps/OldaleWarehouse/scripts.pory"
	release
OldaleWarehouseManchine_1:
# 73 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return

OldaleWarehouseManchine_2:
# 45 "data/maps/OldaleWarehouse/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 46 "data/maps/OldaleWarehouse/scripts.pory"
	playse SE_PIN
# 47 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 5, OldaleWarehouseManchine_Movement_0
# 48 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseManchine_Text_0
# 49 "data/maps/OldaleWarehouse/scripts.pory"
	waitmessage
# 50 "data/maps/OldaleWarehouse/scripts.pory"
	setwildbattle SPECIES_MANCHINE, 5
# 51 "data/maps/OldaleWarehouse/scripts.pory"
	dowildbattle
# 52 "data/maps/OldaleWarehouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 53 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq OldaleWarehouseManchine_5
# 58 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OldaleWarehouseManchine_6
# 63 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq OldaleWarehouseManchine_7
# 67 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq OldaleWarehouseManchine_8
	goto OldaleWarehouseManchine_1

OldaleWarehouseManchine_5:
# 54 "data/maps/OldaleWarehouse/scripts.pory"
	removeobject 5
# 55 "data/maps/OldaleWarehouse/scripts.pory"
	setflag warehousemanchine
# 56 "data/maps/OldaleWarehouse/scripts.pory"
	goto finishwarehousemanchine
	goto OldaleWarehouseManchine_1

OldaleWarehouseManchine_6:
# 59 "data/maps/OldaleWarehouse/scripts.pory"
	removeobject 5
# 60 "data/maps/OldaleWarehouse/scripts.pory"
	setflag warehousemanchine
# 61 "data/maps/OldaleWarehouse/scripts.pory"
	goto finishwarehousemanchine
	goto OldaleWarehouseManchine_1

OldaleWarehouseManchine_7:
# 65 "data/maps/OldaleWarehouse/scripts.pory"
	goto finishwarehousemanchine
	goto OldaleWarehouseManchine_1

OldaleWarehouseManchine_8:
# 68 "data/maps/OldaleWarehouse/scripts.pory"
	goto finishwarehousemanchine
	goto OldaleWarehouseManchine_1


OldaleWarehouseManchineTrigger::
# 77 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 78 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_unset warehousemanchine, OldaleWarehouseManchineTrigger_2
# 117 "data/maps/OldaleWarehouse/scripts.pory"
	release
OldaleWarehouseManchineTrigger_1:
# 118 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return

OldaleWarehouseManchineTrigger_2:
# 80 "data/maps/OldaleWarehouse/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 81 "data/maps/OldaleWarehouse/scripts.pory"
	playse SE_PIN
# 82 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 5, OldaleWarehouseManchine_Movement_0
# 83 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseManchine_Text_0
# 84 "data/maps/OldaleWarehouse/scripts.pory"
	waitmessage
# 85 "data/maps/OldaleWarehouse/scripts.pory"
	setwildbattle SPECIES_MANCHINE, 5
# 86 "data/maps/OldaleWarehouse/scripts.pory"
	dowildbattle
# 87 "data/maps/OldaleWarehouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 88 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq OldaleWarehouseManchineTrigger_6
# 93 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OldaleWarehouseManchineTrigger_7
# 98 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq OldaleWarehouseManchineTrigger_8
# 102 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq OldaleWarehouseManchineTrigger_9
OldaleWarehouseManchineTrigger_5:
# 106 "data/maps/OldaleWarehouse/scripts.pory"
EscapedManchine:
# 107 "data/maps/OldaleWarehouse/scripts.pory"
	special SpawnCameraObject
# 108 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleWarehouseManchineTrigger_Movement_0
# 109 "data/maps/OldaleWarehouse/scripts.pory"
	waitmovement 0
# 110 "data/maps/OldaleWarehouse/scripts.pory"
	special RemoveCameraObject
# 111 "data/maps/OldaleWarehouse/scripts.pory"
	setobjectxy 5, 2, 8
# 112 "data/maps/OldaleWarehouse/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 3, 8
# 113 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 5, OldaleWarehouseManchineTrigger_Movement_1
# 114 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseManchineTrigger_Movement_2
# 115 "data/maps/OldaleWarehouse/scripts.pory"
finishwarehousemanchine:
	goto OldaleWarehouseManchineTrigger_1

OldaleWarehouseManchineTrigger_6:
# 89 "data/maps/OldaleWarehouse/scripts.pory"
	removeobject 5
# 90 "data/maps/OldaleWarehouse/scripts.pory"
	setflag warehousemanchine
# 91 "data/maps/OldaleWarehouse/scripts.pory"
	goto finishwarehousemanchine
	goto OldaleWarehouseManchineTrigger_5

OldaleWarehouseManchineTrigger_7:
# 94 "data/maps/OldaleWarehouse/scripts.pory"
	removeobject 5
# 95 "data/maps/OldaleWarehouse/scripts.pory"
	setflag warehousemanchine
# 96 "data/maps/OldaleWarehouse/scripts.pory"
	goto finishwarehousemanchine
	goto OldaleWarehouseManchineTrigger_5

OldaleWarehouseManchineTrigger_8:
# 100 "data/maps/OldaleWarehouse/scripts.pory"
	goto EscapedManchine
	goto OldaleWarehouseManchineTrigger_5

OldaleWarehouseManchineTrigger_9:
# 103 "data/maps/OldaleWarehouse/scripts.pory"
	goto EscapedManchine
	goto OldaleWarehouseManchineTrigger_5


OldaleWarehouseHelipip::
# 127 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 128 "data/maps/OldaleWarehouse/scripts.pory"
	playmoncry SPECIES_HELIPIP, CRY_MODE_WEAK
# 129 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseHelipip_Text_0
# 130 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return


OldaleWarehouseLoadtad::
# 134 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 135 "data/maps/OldaleWarehouse/scripts.pory"
	playmoncry SPECIES_LOADTAD, CRY_MODE_WEAK
# 136 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseLoadtad_Text_0
# 137 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return


OldaleWarehouseForklift::
# 141 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 142 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseForklift_Text_0
# 143 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return


OldaleWarehouseSealedbox::
# 147 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 148 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseSealedbox_Text_0
# 149 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return


OldaleWarehouseToColdStorageSign::
# 153 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 154 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseToColdStorageSign_Text_0
# 155 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return


OldaleWarehouseToApplianceStorageSign::
# 159 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 160 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseToApplianceStorageSign_Text_0
# 161 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return


# 47 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseManchine_Movement_0:
# 47 "data/maps/OldaleWarehouse/scripts.pory"
	emote_exclamation_mark
# 47 "data/maps/OldaleWarehouse/scripts.pory"
	face_player
	step_end

# 108 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseManchineTrigger_Movement_0:
# 108 "data/maps/OldaleWarehouse/scripts.pory"
	walk_right
	step_end

# 113 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseManchineTrigger_Movement_1:
# 113 "data/maps/OldaleWarehouse/scripts.pory"
	face_right
	step_end

# 114 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseManchineTrigger_Movement_2:
# 114 "data/maps/OldaleWarehouse/scripts.pory"
	face_left
	step_end

OldaleWarehouseRebel1_Text_0:
# 14 "data/maps/OldaleWarehouse/scripts.pory"
	.string "When society goes to shit, it's easier\n"
	.string "to complain than to do something about\l"
	.string "it.\p"
	.string "We {COLOR RED}Rebels{COLOR DARK_GRAY} ARE doing something. So why\n"
	.string "are you getting in the way!?$"

OldaleWarehouseRebel2_Text_0:
# 29 "data/maps/OldaleWarehouse/scripts.pory"
	.string "You should just quit while you still can.\n"
	.string "Our {COLOR RED}Admin{COLOR DARK_GRAY} is going to wreck you.$"

OldaleWarehouseManchine_Text_0:
# 48 "data/maps/OldaleWarehouse/scripts.pory"
	.string "The haywire Manchine spots you and\n"
	.string "attacks!$"

OldaleWarehouseHelipip_Text_0:
# 129 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Piiiip...\p"
	.string "The Helipip is just blank staring ahead.$"

OldaleWarehouseLoadtad_Text_0:
# 136 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Tad-tad...!\p"
	.string "With no guidance, the Loadtad is\n"
	.string "aimlessly carrying a crate around.$"

OldaleWarehouseForklift_Text_0:
# 142 "data/maps/OldaleWarehouse/scripts.pory"
	.string "The forklift shows signs of recent\n"
	.string "misuse.$"

OldaleWarehouseSealedbox_Text_0:
# 148 "data/maps/OldaleWarehouse/scripts.pory"
	.string "A sealed box. Better not to open it.$"

OldaleWarehouseToColdStorageSign_Text_0:
# 154 "data/maps/OldaleWarehouse/scripts.pory"
	.string "To Cold Storage.$"

OldaleWarehouseToApplianceStorageSign_Text_0:
# 160 "data/maps/OldaleWarehouse/scripts.pory"
	.string "To Appliance Storage.$"

WarehouseRebel1_Intro::
# 20 "data/maps/OldaleWarehouse/scripts.pory"
	.string "'The system was not designed for\nyou to win...'\pBah, that's what losers say!$"

WarehouseRebel1_Outro::
# 23 "data/maps/OldaleWarehouse/scripts.pory"
	.string "... design or not, I still lost. Tsk.$"

WarehouseRebel2_Intro::
# 34 "data/maps/OldaleWarehouse/scripts.pory"
	.string "An intruder suits me fine - was starting\nto get boring around here!$"

WarehouseRebel2_Outro::
# 37 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Maybe the boredom was not so bad.$"
