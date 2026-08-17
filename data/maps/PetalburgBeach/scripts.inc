# 1 "data/maps/PetalburgBeach/scripts.pory"


PetalburgBeach_MapScripts::
# 6 "data/maps/PetalburgBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicPetalburgBeach
# 7 "data/maps/PetalburgBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicPetalburgBeach
	.byte 0


DayNightMusicPetalburgBeach::
# 11 "data/maps/PetalburgBeach/scripts.pory"
	gettimeofday
# 12 "data/maps/PetalburgBeach/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicPetalburgBeach_2
DayNightMusicPetalburgBeach_1:
# 15 "data/maps/PetalburgBeach/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicPetalburgBeach_5
DayNightMusicPetalburgBeach_4:
# 18 "data/maps/PetalburgBeach/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicPetalburgBeach_8
DayNightMusicPetalburgBeach_7:
# 21 "data/maps/PetalburgBeach/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicPetalburgBeach_11
DayNightMusicPetalburgBeach_10:
# 25 "data/maps/PetalburgBeach/scripts.pory"
enddaynightpetalburgbeach:
	return

DayNightMusicPetalburgBeach_2:
# 13 "data/maps/PetalburgBeach/scripts.pory"
	goto enddaynightpetalburgbeach
	goto DayNightMusicPetalburgBeach_1

DayNightMusicPetalburgBeach_5:
# 16 "data/maps/PetalburgBeach/scripts.pory"
	goto enddaynightpetalburgbeach
	goto DayNightMusicPetalburgBeach_4

DayNightMusicPetalburgBeach_8:
# 19 "data/maps/PetalburgBeach/scripts.pory"
	goto enddaynightpetalburgbeach
	goto DayNightMusicPetalburgBeach_7

DayNightMusicPetalburgBeach_11:
# 22 "data/maps/PetalburgBeach/scripts.pory"
	playbgm MUS_SADSTORY, TRUE
# 23 "data/maps/PetalburgBeach/scripts.pory"
	goto enddaynightpetalburgbeach
	goto DayNightMusicPetalburgBeach_10

