# 1 "data/maps/CourtneyWorkshop/scripts.pory"


CourtneyWorkshop_MapScripts::
# 6 "data/maps/CourtneyWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicCourtneyWorkshop
# 7 "data/maps/CourtneyWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicCourtneyWorkshop
# 8 "data/maps/CourtneyWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightMusicCourtneyWorkshop
# 10 "data/maps/CourtneyWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 11 "data/maps/CourtneyWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 12 "data/maps/CourtneyWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
	.byte 0


DayNightMusicCourtneyWorkshop::
# 16 "data/maps/CourtneyWorkshop/scripts.pory"
	gettimeofday
# 17 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicCourtneyWorkshop_2
DayNightMusicCourtneyWorkshop_1:
# 20 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicCourtneyWorkshop_5
DayNightMusicCourtneyWorkshop_4:
# 23 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicCourtneyWorkshop_8
DayNightMusicCourtneyWorkshop_7:
# 26 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicCourtneyWorkshop_11
DayNightMusicCourtneyWorkshop_10:
# 30 "data/maps/CourtneyWorkshop/scripts.pory"
enddaynightcourtneyworkshop:
	return

DayNightMusicCourtneyWorkshop_2:
# 18 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto DayNightMusicCourtneyWorkshop_1

DayNightMusicCourtneyWorkshop_5:
# 21 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto DayNightMusicCourtneyWorkshop_4

DayNightMusicCourtneyWorkshop_8:
# 24 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto DayNightMusicCourtneyWorkshop_7

DayNightMusicCourtneyWorkshop_11:
# 27 "data/maps/CourtneyWorkshop/scripts.pory"
	playbgm MUS_TAKARASUSHI, TRUE
# 28 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto DayNightMusicCourtneyWorkshop_10

