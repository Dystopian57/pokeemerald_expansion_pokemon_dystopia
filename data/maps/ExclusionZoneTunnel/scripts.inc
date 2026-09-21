# 1 "data/maps/ExclusionZoneTunnel/scripts.pory"


ExclusionZoneTunnel_MapScripts::
# 8 "data/maps/ExclusionZoneTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicExTunnel
# 9 "data/maps/ExclusionZoneTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicExTunnel
	.byte 0


DayNightMusicExTunnel::
# 13 "data/maps/ExclusionZoneTunnel/scripts.pory"
	gettimeofday
# 14 "data/maps/ExclusionZoneTunnel/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicExTunnel_1
	return

DayNightMusicExTunnel_1:
# 15 "data/maps/ExclusionZoneTunnel/scripts.pory"
	playbgm MUS_RELAXING, TRUE
	return


ExclusionZoneTunnelItembyMachines::
# 20 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 21 "data/maps/ExclusionZoneTunnel/scripts.pory"
	finditem ITEM_TM_DIG
# 22 "data/maps/ExclusionZoneTunnel/scripts.pory"
	removeobject 20
# 23 "data/maps/ExclusionZoneTunnel/scripts.pory"
	releaseall
	return


EnterSecretLabPreUnsafeningCheck::
# 27 "data/maps/ExclusionZoneTunnel/scripts.pory"
	setflag enteredsecretlabbeforetime
	return


MinefieldLever::
# 34 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 35 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox MinefieldLever_Text_0
# 36 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelCamera::
# 41 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 42 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelCamera_Text_0
# 43 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelSeismeter::
# 47 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 48 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelSeismeter_Text_0
# 49 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelWeirdMachine::
# 53 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 54 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelWeirdMachine_Text_0
# 55 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelDrill::
# 59 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 60 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelDrill_Text_0
# 61 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelLoner::
# 65 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 66 "data/maps/ExclusionZoneTunnel/scripts.pory"
	applymovement 19, TunnelLoner_Movement_0
# 67 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelLoner_Text_0
# 69 "data/maps/ExclusionZoneTunnel/scripts.pory"
	applymovement 19, TunnelLoner_Movement_1
# 70 "data/maps/ExclusionZoneTunnel/scripts.pory"
	waitmovement
# 71 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


# 66 "data/maps/ExclusionZoneTunnel/scripts.pory"
TunnelLoner_Movement_0:
# 66 "data/maps/ExclusionZoneTunnel/scripts.pory"
	face_player
	step_end

# 69 "data/maps/ExclusionZoneTunnel/scripts.pory"
TunnelLoner_Movement_1:
# 69 "data/maps/ExclusionZoneTunnel/scripts.pory"
	face_left
	step_end

MinefieldLever_Text_0:
# 35 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "A warning sign by the terminal reads:\n"
	.string "'DO NOT TOUCH'.\p"
	.string "Better to leave this alone...$"

TunnelCamera_Text_0:
# 42 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "It's a camera feed. It shows all of the\n"
	.string "entrances of the tunnel.$"

TunnelSeismeter_Text_0:
# 48 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "It looks like a machine to register\n"
	.string "seismic data.$"

TunnelWeirdMachine_Text_0:
# 54 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "No idea what this does. Better not to\n"
	.string "touch it$"

TunnelDrill_Text_0:
# 60 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "The drill shows signs of recent use.$"

TunnelLoner_Text_0:
# 67 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "The water from this pool comes from the\n"
	.string "sea, so it's not warm like the one in the\l"
	.string "hot springs. It's way chiller.\p"
	.string "Why am I here, then? To be in peace,\n"
	.string "alone with my thoughts.$"
