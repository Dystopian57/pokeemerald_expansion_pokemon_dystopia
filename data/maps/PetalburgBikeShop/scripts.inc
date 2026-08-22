PetalburgBikeShop_MapScripts::
# 2 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicHardwareWorkshop
# 3 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicHardwareWorkshop
# 4 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightMusicHardwareWorkshop
	.byte 0


DayNightMusicHardwareWorkshop::
# 8 "data/maps/PetalburgBikeShop/scripts.pory"
	gettimeofday
# 9 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicHardwareWorkshop_2
DayNightMusicHardwareWorkshop_1:
# 12 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicHardwareWorkshop_5
DayNightMusicHardwareWorkshop_4:
# 15 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicHardwareWorkshop_8
DayNightMusicHardwareWorkshop_7:
# 18 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicHardwareWorkshop_11
DayNightMusicHardwareWorkshop_10:
# 22 "data/maps/PetalburgBikeShop/scripts.pory"
enddaynighthardwareworkshop:
	return

DayNightMusicHardwareWorkshop_2:
# 10 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto DayNightMusicHardwareWorkshop_1

DayNightMusicHardwareWorkshop_5:
# 13 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto DayNightMusicHardwareWorkshop_4

DayNightMusicHardwareWorkshop_8:
# 16 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto DayNightMusicHardwareWorkshop_7

DayNightMusicHardwareWorkshop_11:
# 19 "data/maps/PetalburgBikeShop/scripts.pory"
	playbgm MUS_TAKARASUSHI, TRUE
# 20 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto DayNightMusicHardwareWorkshop_10

