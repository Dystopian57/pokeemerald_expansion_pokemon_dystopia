# 1 "data/maps/PetalburgHarbor/scripts.pory"


PetalburgHarbor_MapScripts::
# 6 "data/maps/PetalburgHarbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgHarborMapscriptBundle
# 7 "data/maps/PetalburgHarbor/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgHarborMapscriptBundle
# 8 "data/maps/PetalburgHarbor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgHarborMapscriptBundle
	.byte 0


PetalburgHarborMapscriptBundle::
# 14 "data/maps/PetalburgHarbor/scripts.pory"
	gettimeofday
# 15 "data/maps/PetalburgHarbor/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq PetalburgHarborMapscriptBundle_2
PetalburgHarborMapscriptBundle_1:
# 18 "data/maps/PetalburgHarbor/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq PetalburgHarborMapscriptBundle_5
PetalburgHarborMapscriptBundle_4:
# 21 "data/maps/PetalburgHarbor/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq PetalburgHarborMapscriptBundle_8
PetalburgHarborMapscriptBundle_7:
# 24 "data/maps/PetalburgHarbor/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgHarborMapscriptBundle_11
PetalburgHarborMapscriptBundle_10:
# 27 "data/maps/PetalburgHarbor/scripts.pory"
	goto DayNightNPC
	return

PetalburgHarborMapscriptBundle_2:
# 16 "data/maps/PetalburgHarbor/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgHarborMapscriptBundle_1

PetalburgHarborMapscriptBundle_5:
# 19 "data/maps/PetalburgHarbor/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgHarborMapscriptBundle_4

PetalburgHarborMapscriptBundle_8:
# 22 "data/maps/PetalburgHarbor/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgHarborMapscriptBundle_7

PetalburgHarborMapscriptBundle_11:
# 25 "data/maps/PetalburgHarbor/scripts.pory"
	setweather WEATHER_SHADE
	goto PetalburgHarborMapscriptBundle_10

