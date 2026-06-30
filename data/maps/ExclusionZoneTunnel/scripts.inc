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
# 19 "data/maps/ExclusionZoneTunnel/scripts.pory"
	release
	return


MinefieldLever_Text_0:
# 17 "data/maps/ExclusionZoneTunnel/scripts.pory"
	.string "A warning sign by the terminal reads:\p"
	.string "'Minefield Detonation Device. Property\n"
	.string "of Littleroot's Pokémon Lab.'\p"
	.string "'DO NOT TOUCH'.\p"
	.string "Better to leave this alone...$"
