# 1 "data/maps/PetalburgLandfill/scripts.pory"


PetalburgLandfill_MapScripts::
# 6 "data/maps/PetalburgLandfill/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgLandfillWeather
# 7 "data/maps/PetalburgLandfill/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DynamicWeatherLandfill
	.byte 0


DynamicWeatherLandfill::
# 10 "data/maps/PetalburgLandfill/scripts.pory"
	compare VAR_PETALBURGLANDFILL_WEATHER, 0
	goto_if_eq DynamicWeatherLandfill_1
	return

DynamicWeatherLandfill_1:
# 11 "data/maps/PetalburgLandfill/scripts.pory"
	random 10
# 12 "data/maps/PetalburgLandfill/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 14 "data/maps/PetalburgLandfill/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/PetalburgLandfill/scripts.pory"
	case 0, DynamicWeatherLandfill_4
# 16 "data/maps/PetalburgLandfill/scripts.pory"
	case 1, DynamicWeatherLandfill_5
# 17 "data/maps/PetalburgLandfill/scripts.pory"
	case 2, DynamicWeatherLandfill_6
# 18 "data/maps/PetalburgLandfill/scripts.pory"
	case 3, DynamicWeatherLandfill_7
# 19 "data/maps/PetalburgLandfill/scripts.pory"
	case 4, DynamicWeatherLandfill_8
# 20 "data/maps/PetalburgLandfill/scripts.pory"
	case 5, DynamicWeatherLandfill_9
# 21 "data/maps/PetalburgLandfill/scripts.pory"
	case 6, DynamicWeatherLandfill_10
# 22 "data/maps/PetalburgLandfill/scripts.pory"
	case 7, DynamicWeatherLandfill_11
# 23 "data/maps/PetalburgLandfill/scripts.pory"
	case 8, DynamicWeatherLandfill_12
# 24 "data/maps/PetalburgLandfill/scripts.pory"
	case 9, DynamicWeatherLandfill_13
# 25 "data/maps/PetalburgLandfill/scripts.pory"
	case 10, DynamicWeatherLandfill_14
	return

DynamicWeatherLandfill_4:
# 15 "data/maps/PetalburgLandfill/scripts.pory"
	goto PetalburgLandfillEndFog
	return

DynamicWeatherLandfill_5:
# 16 "data/maps/PetalburgLandfill/scripts.pory"
	goto PetalburgLandfillEndFog
	return

DynamicWeatherLandfill_6:
# 17 "data/maps/PetalburgLandfill/scripts.pory"
	goto PetalburgLandfillEndFog
	return

DynamicWeatherLandfill_7:
# 18 "data/maps/PetalburgLandfill/scripts.pory"
	goto PetalburgLandfillEndFog
	return

DynamicWeatherLandfill_8:
# 19 "data/maps/PetalburgLandfill/scripts.pory"
	goto PetalburgLandfillShade
	return

DynamicWeatherLandfill_9:
# 20 "data/maps/PetalburgLandfill/scripts.pory"
	goto PetalburgLandfillShade
	return

DynamicWeatherLandfill_10:
# 21 "data/maps/PetalburgLandfill/scripts.pory"
	goto PetalburgLandfillShade
	return

DynamicWeatherLandfill_11:
# 22 "data/maps/PetalburgLandfill/scripts.pory"
	goto PetalburgLandfillShade
	return

DynamicWeatherLandfill_12:
# 23 "data/maps/PetalburgLandfill/scripts.pory"
	goto PetalburgLandfillShade
	return

DynamicWeatherLandfill_13:
# 24 "data/maps/PetalburgLandfill/scripts.pory"
	goto PetalburgLandfillShade
	return

DynamicWeatherLandfill_14:
# 25 "data/maps/PetalburgLandfill/scripts.pory"
	goto PetalburgLandfillShade
	return


PetalburgLandfillWeather::
# 32 "data/maps/PetalburgLandfill/scripts.pory"
	goto_if_eq VAR_PETALBURGLANDFILL_WEATHER, 0, PetalburgLandfillShade
# 33 "data/maps/PetalburgLandfill/scripts.pory"
	goto_if_eq VAR_PETALBURGLANDFILL_WEATHER, 1, PetalburgLandfillFog1
# 34 "data/maps/PetalburgLandfill/scripts.pory"
	goto_if_eq VAR_PETALBURGLANDFILL_WEATHER, 2, PetalburgLandfillFog2
# 35 "data/maps/PetalburgLandfill/scripts.pory"
	goto_if_eq VAR_PETALBURGLANDFILL_WEATHER, 3, PetalburgLandfillEndFog
# 37 "data/maps/PetalburgLandfill/scripts.pory"
	release
	return


PetalburgLandfillShade::
# 41 "data/maps/PetalburgLandfill/scripts.pory"
	setweather WEATHER_SHADE
	return


PetalburgLandfillFog1::
# 45 "data/maps/PetalburgLandfill/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 46 "data/maps/PetalburgLandfill/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 2
	return


PetalburgLandfillFog2::
# 50 "data/maps/PetalburgLandfill/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 51 "data/maps/PetalburgLandfill/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 3
	return


PetalburgLandfillEndFog::
# 56 "data/maps/PetalburgLandfill/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 57 "data/maps/PetalburgLandfill/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 0
	return

