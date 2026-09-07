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


EnterSecretLabPreUnsafeningCheck::
# 23 "data/maps/ExclusionZoneTunnel/scripts.pory"
	setflag enteredsecretlabbeforetime
	return


MinefieldLever::
# 30 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 31 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox MinefieldLever_Text_0
# 32 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelCamera::
# 37 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 38 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelCamera_Text_0
# 39 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelSeismeter::
# 43 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 44 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelSeismeter_Text_0
# 45 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelWeirdMachine::
# 49 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 50 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelWeirdMachine_Text_0
# 51 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelDrill::
# 55 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 56 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelDrill_Text_0
# 57 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelLoner::
# 61 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 62 "data/maps/ExclusionZoneTunnel/scripts.pory"
	applymovement 19, TunnelLoner_Movement_0
# 63 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelLoner_Text_0
# 65 "data/maps/ExclusionZoneTunnel/scripts.pory"
	applymovement 19, TunnelLoner_Movement_1
# 66 "data/maps/ExclusionZoneTunnel/scripts.pory"
	waitmovement
# 67 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


# 62 "data/maps/ExclusionZoneTunnel/scripts.pory"
TunnelLoner_Movement_0:
# 62 "data/maps/ExclusionZoneTunnel/scripts.pory"
	face_player
	step_end

# 65 "data/maps/ExclusionZoneTunnel/scripts.pory"
TunnelLoner_Movement_1:
# 65 "data/maps/ExclusionZoneTunnel/scripts.pory"
	face_left
	step_end

MinefieldLever_Text_0:
# 31 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "A warning sign by the terminal reads:\n"
	.string "'DO NOT TOUCH'.\p"
	.string "Better to leave this alone...$"

TunnelCamera_Text_0:
# 38 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "It's a camera feed. It shows all of the\n"
	.string "entrances of the tunnel.$"

TunnelSeismeter_Text_0:
# 44 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "It looks like a machine to register\n"
	.string "seismic data.$"

TunnelWeirdMachine_Text_0:
# 50 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "No idea what this does. Better not to\n"
	.string "touch it$"

TunnelDrill_Text_0:
# 56 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "The drill shows signs of recent use.$"

TunnelLoner_Text_0:
# 63 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "The water from this pool comes from the\n"
	.string "sea, so it's not warm like the one in the\l"
	.string "hot springs. It's way chiller.\p"
	.string "Why am I here, then? To be in peace,\n"
	.string "alone with my thoughts.$"
