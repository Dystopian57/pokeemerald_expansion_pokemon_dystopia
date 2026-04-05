# 1 "data/maps/LittlerootCemetery/scripts.pory"

# 2 "data/maps/LittlerootCemetery/scripts.pory"
LittlerootCemetery_MapScripts::
# 3 "data/maps/LittlerootCemetery/scripts.pory"
	.byte 0

LittlerootCemetery_CemeterySign::
# 8 "data/maps/LittlerootCemetery/scripts.pory"
	lockall
# 9 "data/maps/LittlerootCemetery/scripts.pory"
	msgbox LittlerootCemetery_CemeterySign_Text_0
# 10 "data/maps/LittlerootCemetery/scripts.pory"
	releaseall
	return


LittlerootCemetery_CemeterySign_Text_0:
# 9 "data/maps/LittlerootCemetery/scripts.pory"
	.string "Littleroot Cemetery.$"
