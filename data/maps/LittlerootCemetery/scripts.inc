# 1 "data/maps/LittlerootCemetery/scripts.pory"


LittlerootCemetery_MapScripts::
# 5 "data/maps/LittlerootCemetery/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicCemetery
# 6 "data/maps/LittlerootCemetery/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicCemetery
	.byte 0


DayNightMusicCemetery::
# 10 "data/maps/LittlerootCemetery/scripts.pory"
	gettimeofday
# 11 "data/maps/LittlerootCemetery/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicCemetery_2
DayNightMusicCemetery_1:
# 14 "data/maps/LittlerootCemetery/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicCemetery_5
DayNightMusicCemetery_4:
# 17 "data/maps/LittlerootCemetery/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicCemetery_8
DayNightMusicCemetery_7:
# 21 "data/maps/LittlerootCemetery/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicCemetery_11
DayNightMusicCemetery_10:
# 25 "data/maps/LittlerootCemetery/scripts.pory"
enddaynightmusiccemetery:
	return

DayNightMusicCemetery_2:
# 12 "data/maps/LittlerootCemetery/scripts.pory"
	goto enddaynightmusiccemetery
	goto DayNightMusicCemetery_1

DayNightMusicCemetery_5:
# 15 "data/maps/LittlerootCemetery/scripts.pory"
	goto enddaynightmusiccemetery
	goto DayNightMusicCemetery_4

DayNightMusicCemetery_8:
# 18 "data/maps/LittlerootCemetery/scripts.pory"
	playbgm MUS_SCHOOLATNIGHT, TRUE
# 19 "data/maps/LittlerootCemetery/scripts.pory"
	goto enddaynightmusiccemetery
	goto DayNightMusicCemetery_7

DayNightMusicCemetery_11:
# 22 "data/maps/LittlerootCemetery/scripts.pory"
	playbgm MUS_SCHOOLATNIGHT, TRUE
# 23 "data/maps/LittlerootCemetery/scripts.pory"
	goto enddaynightmusiccemetery
	goto DayNightMusicCemetery_10


LittlerootCemetery_CemeterySign::
# 30 "data/maps/LittlerootCemetery/scripts.pory"
	lockall
# 31 "data/maps/LittlerootCemetery/scripts.pory"
	msgbox LittlerootCemetery_CemeterySign_Text_0
# 32 "data/maps/LittlerootCemetery/scripts.pory"
	releaseall
	return


LittlerootCemetery_CemeterySign_Text_0:
# 31 "data/maps/LittlerootCemetery/scripts.pory"
	.string "Littleroot Cemetery.$"
