# 1 "data/maps/CourtneyWorkshop/scripts.pory"


CourtneyWorkshop_MapScripts::
# 6 "data/maps/CourtneyWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicCourtneyWorkshop
# 7 "data/maps/CourtneyWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicCourtneyWorkshop
# 8 "data/maps/CourtneyWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightMusicCourtneyWorkshop
	.byte 0


DayNightMusicCourtneyWorkshop::
# 12 "data/maps/CourtneyWorkshop/scripts.pory"
	gettimeofday
# 13 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicCourtneyWorkshop_2
DayNightMusicCourtneyWorkshop_1:
# 16 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicCourtneyWorkshop_5
DayNightMusicCourtneyWorkshop_4:
# 19 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicCourtneyWorkshop_8
DayNightMusicCourtneyWorkshop_7:
# 22 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicCourtneyWorkshop_11
DayNightMusicCourtneyWorkshop_10:
# 26 "data/maps/CourtneyWorkshop/scripts.pory"
enddaynightcourtneyworkshop:
	return

DayNightMusicCourtneyWorkshop_2:
# 14 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto DayNightMusicCourtneyWorkshop_1

DayNightMusicCourtneyWorkshop_5:
# 17 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto DayNightMusicCourtneyWorkshop_4

DayNightMusicCourtneyWorkshop_8:
# 20 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto DayNightMusicCourtneyWorkshop_7

DayNightMusicCourtneyWorkshop_11:
# 23 "data/maps/CourtneyWorkshop/scripts.pory"
	playbgm MUS_TAKARASUSHI, TRUE
# 24 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto DayNightMusicCourtneyWorkshop_10

