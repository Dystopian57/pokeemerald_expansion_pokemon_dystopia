# 1 "data/maps/PetalburgLandfill/scripts.pory"


PetalburgLandfill_MapScripts::
# 6 "data/maps/PetalburgLandfill/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgLandfillWeather
	.byte 0


PetalburgLandfillWeather::
# 12 "data/maps/PetalburgLandfill/scripts.pory"
	goto_if_eq VAR_PETALBURGLANDFILL_WEATHER, 0, PetalburgLandfillShade
# 13 "data/maps/PetalburgLandfill/scripts.pory"
	goto_if_eq VAR_PETALBURGLANDFILL_WEATHER, 1, PetalburgLandfillFog1
# 14 "data/maps/PetalburgLandfill/scripts.pory"
	goto_if_eq VAR_PETALBURGLANDFILL_WEATHER, 2, PetalburgLandfillFog2
# 15 "data/maps/PetalburgLandfill/scripts.pory"
	goto_if_eq VAR_PETALBURGLANDFILL_WEATHER, 3, PetalburgLandfillEndAsh
# 17 "data/maps/PetalburgLandfill/scripts.pory"
	release
	return


PetalburgLandfillShade::
# 21 "data/maps/PetalburgLandfill/scripts.pory"
	setweather WEATHER_SHADE
	return


PetalburgLandfillFog1::
# 25 "data/maps/PetalburgLandfill/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 26 "data/maps/PetalburgLandfill/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 2
	return


PetalburgLandfillFog2::
# 30 "data/maps/PetalburgLandfill/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 31 "data/maps/PetalburgLandfill/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 3
	return


PetalburgLandfillEndAsh::
# 36 "data/maps/PetalburgLandfill/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 37 "data/maps/PetalburgLandfill/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 0
	return

