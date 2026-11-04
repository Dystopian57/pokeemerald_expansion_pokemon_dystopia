PetalburgBikeShop_MapScripts::
# 2 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicHardwareWorkshop
# 3 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicHardwareWorkshop
# 4 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightMusicHardwareWorkshop
# 5 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 6 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
	.byte 0


DayNightMusicHardwareWorkshop::
# 11 "data/maps/PetalburgBikeShop/scripts.pory"
	gettimeofday
# 12 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicHardwareWorkshop_2
DayNightMusicHardwareWorkshop_1:
# 15 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicHardwareWorkshop_5
DayNightMusicHardwareWorkshop_4:
# 18 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicHardwareWorkshop_8
DayNightMusicHardwareWorkshop_7:
# 21 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicHardwareWorkshop_11
DayNightMusicHardwareWorkshop_10:
# 25 "data/maps/PetalburgBikeShop/scripts.pory"
enddaynighthardwareworkshop:
	return

DayNightMusicHardwareWorkshop_2:
# 13 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto DayNightMusicHardwareWorkshop_1

DayNightMusicHardwareWorkshop_5:
# 16 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto DayNightMusicHardwareWorkshop_4

DayNightMusicHardwareWorkshop_8:
# 19 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto DayNightMusicHardwareWorkshop_7

DayNightMusicHardwareWorkshop_11:
# 22 "data/maps/PetalburgBikeShop/scripts.pory"
	playbgm MUS_TAKARASUSHI, TRUE
# 23 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto DayNightMusicHardwareWorkshop_10


PetalburgHardwareStoreCustomer::
# 29 "data/maps/PetalburgBikeShop/scripts.pory"
	lock
# 30 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 3, PetalburgHardwareStoreCustomer_Movement_0
# 31 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreCustomer_Text_0
# 34 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 3, PetalburgHardwareStoreCustomer_Movement_1
# 35 "data/maps/PetalburgBikeShop/scripts.pory"
	waitmovement 3
# 36 "data/maps/PetalburgBikeShop/scripts.pory"
	releaseall
	return


HardwareStoreClerk::
# 44 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_unset foughtwarehousescavenger2, HardwareStoreClerk_3
HardwareStoreClerk_1:
# 47 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_set foughtwarehousescavenger2, HardwareStoreClerk_8
HardwareStoreClerk_6:
# 49 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_set foughtwarehousescavenger2, HardwareStoreClerk_12
	return

HardwareStoreClerk_2:
	goto HardwareStoreClerk_1

HardwareStoreClerk_3:
# 44 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, HardwareStoreClerk_2
	goto HardwareStoreClerk_1

HardwareStoreClerk_7:
	goto HardwareStoreClerk_6

HardwareStoreClerk_8:
# 47 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, HardwareStoreClerk_7
	goto HardwareStoreClerk_6

HardwareStoreClerk_11:
	return

HardwareStoreClerk_12:
# 49 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_set scavengergivesobjectspotter, HardwareStoreClerk_11
	return


# 30 "data/maps/PetalburgBikeShop/scripts.pory"
PetalburgHardwareStoreCustomer_Movement_0:
# 30 "data/maps/PetalburgBikeShop/scripts.pory"
	face_player
	step_end

# 34 "data/maps/PetalburgBikeShop/scripts.pory"
PetalburgHardwareStoreCustomer_Movement_1:
# 34 "data/maps/PetalburgBikeShop/scripts.pory"
	face_up
	step_end

PetalburgHardwareStoreCustomer_Text_0:
# 31 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "During the war, there used to be\n"
	.string "Grenade Balls that dealt damage to\l"
	.string "Pokémon, but Devon has removed all of\l"
	.string "those from circulation.\p"
	.string "It's one of the few good things Devon\n"
	.string "has done. Those were brutal, even for\l"
	.string "Rebel standards.$"
