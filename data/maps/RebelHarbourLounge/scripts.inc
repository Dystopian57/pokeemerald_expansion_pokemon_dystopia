RebelHarbourLounge_MapScripts::
# 2 "data/maps/RebelHarbourLounge/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RebelHarbourLoungeMapscriptBundle
# 3 "data/maps/RebelHarbourLounge/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RebelHarbourLoungeMapscriptBundle
# 4 "data/maps/RebelHarbourLounge/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RebelHarbourLoungeMapscriptBundle
	.byte 0


RebelHarbourLoungeMapscriptBundle::
# 10 "data/maps/RebelHarbourLounge/scripts.pory"
	gettimeofday
# 11 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq RebelHarbourLoungeMapscriptBundle_2
RebelHarbourLoungeMapscriptBundle_1:
# 14 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq RebelHarbourLoungeMapscriptBundle_5
RebelHarbourLoungeMapscriptBundle_4:
# 17 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq RebelHarbourLoungeMapscriptBundle_8
RebelHarbourLoungeMapscriptBundle_7:
# 20 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq RebelHarbourLoungeMapscriptBundle_11
RebelHarbourLoungeMapscriptBundle_10:
# 23 "data/maps/RebelHarbourLounge/scripts.pory"
	goto DayNightNPC
	return

RebelHarbourLoungeMapscriptBundle_2:
# 12 "data/maps/RebelHarbourLounge/scripts.pory"
	setweather WEATHER_NONE
	goto RebelHarbourLoungeMapscriptBundle_1

RebelHarbourLoungeMapscriptBundle_5:
# 15 "data/maps/RebelHarbourLounge/scripts.pory"
	setweather WEATHER_NONE
	goto RebelHarbourLoungeMapscriptBundle_4

RebelHarbourLoungeMapscriptBundle_8:
# 18 "data/maps/RebelHarbourLounge/scripts.pory"
	setweather WEATHER_NONE
	goto RebelHarbourLoungeMapscriptBundle_7

RebelHarbourLoungeMapscriptBundle_11:
# 21 "data/maps/RebelHarbourLounge/scripts.pory"
	setweather WEATHER_SHADE
	goto RebelHarbourLoungeMapscriptBundle_10

