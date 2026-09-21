# 1 "data/maps/LittlerootLabTunnel2/scripts.pory"

# 2 "data/maps/LittlerootLabTunnel2/scripts.pory"
LittlerootLabTunnel2_MapScripts::
# 3 "data/maps/LittlerootLabTunnel2/scripts.pory"
	.byte 0

DiggletHole::
# 8 "data/maps/LittlerootLabTunnel2/scripts.pory"
	lock
# 9 "data/maps/LittlerootLabTunnel2/scripts.pory"
	playmoncry SPECIES_DIGLETT, CRY_MODE_NORMAL
# 10 "data/maps/LittlerootLabTunnel2/scripts.pory"
	msgbox DiggletHole_Text_0
# 11 "data/maps/LittlerootLabTunnel2/scripts.pory"
	releaseall
	return


DiggletHole_Text_0:
# 10 "data/maps/LittlerootLabTunnel2/scripts.pory"
	.string "Digglets can be heard digging beneath\n"
	.string "the ground...$"
