# 1 "data/maps/ExclusionZoneTunnel/scripts.pory"

# 2 "data/maps/ExclusionZoneTunnel/scripts.pory"
ExclusionZoneTunnel_MapScripts::
# 3 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.byte 0

EnterSecretLabPreUnsafeningCheck::
# 9 "data/maps/ExclusionZoneTunnel/scripts.pory"
	setflag enteredsecretlabbeforetime
	return


MinefieldLever::
# 16 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 17 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox MinefieldLever_Text_0
# 18 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelCamera::
# 23 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 24 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelCamera_Text_0
# 25 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelSeismeter::
# 29 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 30 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelSeismeter_Text_0
# 31 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelWeirdMachine::
# 35 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 36 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelWeirdMachine_Text_0
# 37 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelDrill::
# 41 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 42 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelDrill_Text_0
# 43 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


TunnelLoner::
# 47 "data/maps/ExclusionZoneTunnel/scripts.pory"
	lock
# 48 "data/maps/ExclusionZoneTunnel/scripts.pory"
	applymovement 19, TunnelLoner_Movement_0
# 49 "data/maps/ExclusionZoneTunnel/scripts.pory"
	msgbox TunnelLoner_Text_0
# 51 "data/maps/ExclusionZoneTunnel/scripts.pory"
	applymovement 19, TunnelLoner_Movement_1
# 52 "data/maps/ExclusionZoneTunnel/scripts.pory"
	waitmovement
# 53 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


# 48 "data/maps/ExclusionZoneTunnel/scripts.pory"
TunnelLoner_Movement_0:
# 48 "data/maps/ExclusionZoneTunnel/scripts.pory"
	face_player
	step_end

# 51 "data/maps/ExclusionZoneTunnel/scripts.pory"
TunnelLoner_Movement_1:
# 51 "data/maps/ExclusionZoneTunnel/scripts.pory"
	face_left
	step_end

MinefieldLever_Text_0:
# 17 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "A warning sign by the terminal reads:\n"
	.string "'DO NOT TOUCH'.\p"
	.string "Better to leave this alone...$"

TunnelCamera_Text_0:
# 24 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "It's a camera feed. It shows all of the\n"
	.string "entrances of the tunnel.$"

TunnelSeismeter_Text_0:
# 30 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "It looks like a machine to register\n"
	.string "seismic data.$"

TunnelWeirdMachine_Text_0:
# 36 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "No idea what this does. Better not to\n"
	.string "touch it$"

TunnelDrill_Text_0:
# 42 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "The drill shows signs of recent use.$"

TunnelLoner_Text_0:
# 49 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "The water from this pool comes from the\n"
	.string "sea, so it's not warm like the one in the\l"
	.string "hot springs. It's way chiller.\p"
	.string "Why am I here, then? To be in peace,\n"
	.string "alone with my thoughts.$"
