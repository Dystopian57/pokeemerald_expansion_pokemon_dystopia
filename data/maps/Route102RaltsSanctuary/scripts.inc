# 1 "data/maps/Route102RaltsSanctuary/scripts.pory"


Route102RaltsSanctuary_MapScripts::
# 7 "data/maps/Route102RaltsSanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicRaltsSanctuary
# 8 "data/maps/Route102RaltsSanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicRaltsSanctuary
	.byte 0


DayNightMusicRaltsSanctuary::
# 12 "data/maps/Route102RaltsSanctuary/scripts.pory"
	gettimeofday
# 13 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicRaltsSanctuary_2
DayNightMusicRaltsSanctuary_1:
# 16 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicRaltsSanctuary_5
DayNightMusicRaltsSanctuary_4:
# 19 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicRaltsSanctuary_8
DayNightMusicRaltsSanctuary_7:
# 22 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicRaltsSanctuary_11
DayNightMusicRaltsSanctuary_10:
# 26 "data/maps/Route102RaltsSanctuary/scripts.pory"
enddaynightraltssanctuary:
	return

DayNightMusicRaltsSanctuary_2:
# 14 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto enddaynightraltssanctuary
	goto DayNightMusicRaltsSanctuary_1

DayNightMusicRaltsSanctuary_5:
# 17 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto enddaynightraltssanctuary
	goto DayNightMusicRaltsSanctuary_4

DayNightMusicRaltsSanctuary_8:
# 20 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto enddaynightraltssanctuary
	goto DayNightMusicRaltsSanctuary_7

DayNightMusicRaltsSanctuary_11:
# 23 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, TRUE
# 24 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto enddaynightraltssanctuary
	goto DayNightMusicRaltsSanctuary_10

