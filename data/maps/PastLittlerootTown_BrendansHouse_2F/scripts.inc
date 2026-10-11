# 1 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"


PastLittlerootTown_BrendansHouse_2F_MapScripts::
# 6 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PastSpriteSwapTrick
	.byte 0


PastSpriteSwapTrick::
# 11 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 17 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastSpriteSwapTrick_Movement_0
# 19 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxy 1, 5, 4
	return


# 17 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
PastSpriteSwapTrick_Movement_0:
# 17 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	set_invisible
	step_end
