# 1 "data/maps/RebelBasement/scripts.pory"


RebelBasement_MapScripts::
# 7 "data/maps/RebelBasement/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EnableFollowersRHH
	.byte 0


EnableFollowersRHH::
# 10 "data/maps/RebelBasement/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
	return

