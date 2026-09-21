# 1 "data/maps/OldaleTown_House2_2F/scripts.pory"


OldaleTown_House2_2F_MapScripts::
# 7 "data/maps/OldaleTown_House2_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 8 "data/maps/OldaleTown_House2_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 9 "data/maps/OldaleTown_House2_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
	.byte 0


OldaleTownHouse2Annebrother::
# 13 "data/maps/OldaleTown_House2_2F/scripts.pory"
	lockall
# 14 "data/maps/OldaleTown_House2_2F/scripts.pory"
	applymovement 2, OldaleTownHouse2Annebrother_Movement_0
# 15 "data/maps/OldaleTown_House2_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 16 "data/maps/OldaleTown_House2_2F/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleTownHouse2Annebrother_2
OldaleTownHouse2Annebrother_1:
# 21 "data/maps/OldaleTown_House2_2F/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleTownHouse2Annebrother_5
OldaleTownHouse2Annebrother_4:
# 26 "data/maps/OldaleTown_House2_2F/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleTownHouse2Annebrother_8
OldaleTownHouse2Annebrother_7:
# 31 "data/maps/OldaleTown_House2_2F/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleTownHouse2Annebrother_11
OldaleTownHouse2Annebrother_10:
# 35 "data/maps/OldaleTown_House2_2F/scripts.pory"
	applymovement 2, OldaleTownHouse2Annebrother_Movement_1
# 36 "data/maps/OldaleTown_House2_2F/scripts.pory"
	waitmovement 2
# 37 "data/maps/OldaleTown_House2_2F/scripts.pory"
	releaseall
	return

OldaleTownHouse2Annebrother_2:
# 17 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox OldaleTownHouse2Annebrother_Text_0
	goto OldaleTownHouse2Annebrother_1

OldaleTownHouse2Annebrother_5:
# 22 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox OldaleTownHouse2Annebrother_Text_1
	goto OldaleTownHouse2Annebrother_4

OldaleTownHouse2Annebrother_8:
# 28 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox OldaleTownHouse2Annebrother_Text_2
	goto OldaleTownHouse2Annebrother_7

OldaleTownHouse2Annebrother_11:
# 33 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox OldaleTownHouse2Annebrother_Text_3
	goto OldaleTownHouse2Annebrother_10


AnnesHouseBrotherItem::
# 41 "data/maps/OldaleTown_House2_2F/scripts.pory"
	lock
# 42 "data/maps/OldaleTown_House2_2F/scripts.pory"
	finditem ITEM_FULL_INCENSE
# 43 "data/maps/OldaleTown_House2_2F/scripts.pory"
	removeobject 3
# 44 "data/maps/OldaleTown_House2_2F/scripts.pory"
	releaseall
	return


AnnesHouseDrawerItem::
# 47 "data/maps/OldaleTown_House2_2F/scripts.pory"
	lock
# 48 "data/maps/OldaleTown_House2_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_OLDALE_HOUSE2DRAWER, AnnesHouseDrawerItem_1
# 55 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox AnnesHouseDrawerItem_Text_1
# 56 "data/maps/OldaleTown_House2_2F/scripts.pory"
	release
	return

AnnesHouseDrawerItem_1:
# 49 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox AnnesHouseDrawerItem_Text_0
# 50 "data/maps/OldaleTown_House2_2F/scripts.pory"
	finditem ITEM_METRONOME
# 51 "data/maps/OldaleTown_House2_2F/scripts.pory"
	setflag FLAG_ITEM_OLDALE_HOUSE2DRAWER
# 52 "data/maps/OldaleTown_House2_2F/scripts.pory"
	releaseall
	return


AnneHouseTrashBin2F::
# 61 "data/maps/OldaleTown_House2_2F/scripts.pory"
	lock
# 62 "data/maps/OldaleTown_House2_2F/scripts.pory"
	goto_if_unset FLAG_ITEM_OLDALE_HOUSE2BIN, AnneHouseTrashBin2F_2
# 67 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox AnneHouseTrashBin2F_Text_1
AnneHouseTrashBin2F_1:
# 68 "data/maps/OldaleTown_House2_2F/scripts.pory"
	releaseall
	return

AnneHouseTrashBin2F_2:
# 63 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox AnneHouseTrashBin2F_Text_0
# 64 "data/maps/OldaleTown_House2_2F/scripts.pory"
	giveitem ITEM_LINKING_CORD
# 65 "data/maps/OldaleTown_House2_2F/scripts.pory"
	setflag FLAG_ITEM_OLDALE_HOUSE2BIN
	goto AnneHouseTrashBin2F_1


OldaleTownHouse2Bed::
# 72 "data/maps/OldaleTown_House2_2F/scripts.pory"
	lockall
# 73 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox OldaleTownHouse2Bed_Text_0
# 74 "data/maps/OldaleTown_House2_2F/scripts.pory"
	releaseall
	return


OldaleTownHouse2MineralCollection::
# 78 "data/maps/OldaleTown_House2_2F/scripts.pory"
	lockall
# 79 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox OldaleTownHouse2MineralCollection_Text_0
# 80 "data/maps/OldaleTown_House2_2F/scripts.pory"
	releaseall
	return


OldaleTownHouse2BigPainting::
# 84 "data/maps/OldaleTown_House2_2F/scripts.pory"
	lockall
# 85 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox OldaleTownHouse2BigPainting_Text_0
# 86 "data/maps/OldaleTown_House2_2F/scripts.pory"
	releaseall
	return


OldaleTownHouse2SmallPainting::
# 90 "data/maps/OldaleTown_House2_2F/scripts.pory"
	lockall
# 91 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox OldaleTownHouse2SmallPainting_Text_0
# 92 "data/maps/OldaleTown_House2_2F/scripts.pory"
	releaseall
	return


# 14 "data/maps/OldaleTown_House2_2F/scripts.pory"
OldaleTownHouse2Annebrother_Movement_0:
# 14 "data/maps/OldaleTown_House2_2F/scripts.pory"
	face_player
	step_end

# 35 "data/maps/OldaleTown_House2_2F/scripts.pory"
OldaleTownHouse2Annebrother_Movement_1:
# 35 "data/maps/OldaleTown_House2_2F/scripts.pory"
	face_down
	step_end

OldaleTownHouse2Annebrother_Text_0:
# 17 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "Go, Purachu - use Thundershock!\n"
	.string "BZZZTBZ!\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}The kid flashes a Purachu Card in front\n"
	.string "of you.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Hehe... mom says I shouldn't play with\n"
	.string "Pokémon, or even Safemon.\p"
	.string "So I play with cards instead!$"

OldaleTownHouse2Annebrother_Text_1:
# 22 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "Go, Purachu - use Thundershock!\n"
	.string "BZZZTBZ!\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}The kid flashes a Purachu Card in front\n"
	.string "of you.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hehe... mom says I shouldn't play\l"
	.string "with Pokémon, or even Safemon. So I play\l"
	.string "with cards instead!$"

OldaleTownHouse2Annebrother_Text_2:
# 28 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "I just heard mom and sis arguing again...\n"
	.string "I hope we move to {COLOR BLUE}New Rustboro{COLOR DARK_GRAY} soon.\p"
	.string "Dad says he'll earn tons of money with\n"
	.string "his new job, and that we won't argue\l"
	.string "again then!$"

OldaleTownHouse2Annebrother_Text_3:
# 33 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "Hooray, sis is back! We're off to the\n"
	.string "city!$"

AnnesHouseDrawerItem_Text_0:
# 49 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "There's something left behind in the\n"
	.string "drawer...$"

AnnesHouseDrawerItem_Text_1:
# 55 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "There's nothing in the drawer.$"

AnneHouseTrashBin2F_Text_0:
# 63 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "There's a discarded cable in the trash\n"
	.string "can...$"

AnneHouseTrashBin2F_Text_1:
# 67 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "The trash can is empty.$"

OldaleTownHouse2Bed_Text_0:
# 73 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "Looks comfy to sleep in, but it's\n"
	.string "someone else's...$"

OldaleTownHouse2MineralCollection_Text_0:
# 79 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "A mineral collection. It's not too\n"
	.string "impressive.$"

OldaleTownHouse2BigPainting_Text_0:
# 85 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "A beautiful city sunset. The painting\n"
	.string "title is “{COLOR BLUE}New Rustboro{COLOR DARK_GRAY} Bay”.$"

OldaleTownHouse2SmallPainting_Text_0:
# 91 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "A river crossing a wide, green plan.\n"
	.string "Haven't seen one of these in a while.$"
