# 1 "data/maps/PetalburgBeach/scripts.pory"


PetalburgBeach_MapScripts::
# 6 "data/maps/PetalburgBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightNPC
# 7 "data/maps/PetalburgBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicPetalburgBeach
# 8 "data/maps/PetalburgBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightNPC
# 9 "data/maps/PetalburgBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicPetalburgBeach
	.byte 0


DayNightMusicPetalburgBeach::
# 13 "data/maps/PetalburgBeach/scripts.pory"
	gettimeofday
# 14 "data/maps/PetalburgBeach/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicPetalburgBeach_2
DayNightMusicPetalburgBeach_1:
# 17 "data/maps/PetalburgBeach/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicPetalburgBeach_5
DayNightMusicPetalburgBeach_4:
# 20 "data/maps/PetalburgBeach/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicPetalburgBeach_8
DayNightMusicPetalburgBeach_7:
# 23 "data/maps/PetalburgBeach/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicPetalburgBeach_11
DayNightMusicPetalburgBeach_10:
# 27 "data/maps/PetalburgBeach/scripts.pory"
enddaynightpetalburgbeach:
	return

DayNightMusicPetalburgBeach_2:
# 15 "data/maps/PetalburgBeach/scripts.pory"
	goto enddaynightpetalburgbeach
	goto DayNightMusicPetalburgBeach_1

DayNightMusicPetalburgBeach_5:
# 18 "data/maps/PetalburgBeach/scripts.pory"
	goto enddaynightpetalburgbeach
	goto DayNightMusicPetalburgBeach_4

DayNightMusicPetalburgBeach_8:
# 21 "data/maps/PetalburgBeach/scripts.pory"
	goto enddaynightpetalburgbeach
	goto DayNightMusicPetalburgBeach_7

DayNightMusicPetalburgBeach_11:
# 24 "data/maps/PetalburgBeach/scripts.pory"
	playbgm MUS_SADSTORY, TRUE
# 25 "data/maps/PetalburgBeach/scripts.pory"
	goto enddaynightpetalburgbeach
	goto DayNightMusicPetalburgBeach_10

