# 1 "data/maps/OldaleWarehouseColdStorage/scripts.pory"


OldaleWarehouseColdStorage_MapScripts::
# 6 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 7 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 8 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
	.byte 0


OldaleWarehouseColdStorageMedic::
# 13 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 14 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 15 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	applymovement 1, OldaleWarehouseColdStorageMedic_Movement_0
# 16 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageMedic_Text_0
# 18 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	applymovement 1, OldaleWarehouseColdStorageMedic_Movement_1
# 19 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	waitmovement 1
# 20 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageRebelClerk::
# 24 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 25 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 26 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	applymovement 3, OldaleWarehouseColdStorageMedic_Movement_0
# 27 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageRebelClerk_Text_0
# 28 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	pokemart OldaleWarehouseColdStorage_TempShop
# 29 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageItem::
# 33 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 34 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	finditem ITEM_STAR_PIECE
# 35 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	removeobject 2
# 36 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	releaseall
	return


	.align 2
# 38 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
OldaleWarehouseColdStorage_TempShop:
# 39 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_POKE_BALL
# 40 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_POTION
# 41 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 42 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_REMEDY
# 43 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 44 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_HONEY
# 45 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_POKE_TOY
# 46 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 47 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_AERODACTYLITE
	.2byte ITEM_NONE

OldaleWarehouseColdStorageSchedule::
# 50 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 51 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageSchedule_Text_0
# 54 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageMedStock::
# 58 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 59 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageMedStock_Text_0
# 60 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageFurStock::
# 64 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 65 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageFurStock_Text_0
# 66 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageFoodStock::
# 70 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 71 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageFoodStock_Text_0
# 72 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageJewels::
# 76 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 77 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageJewels_Text_0
# 78 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageSkinStock::
# 82 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 83 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageSkinStock_Text_0
# 84 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageShardStock::
# 88 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 89 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageShardStock_Text_0
# 90 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


# 15 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
OldaleWarehouseColdStorageMedic_Movement_0:
# 15 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	face_player
	step_end

# 18 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
OldaleWarehouseColdStorageMedic_Movement_1:
# 18 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	face_up
	step_end

OldaleWarehouseColdStorageMedic_Text_0:
# 16 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "First the riot on Petalburg's Devon\n"
	.string "Center, now the shortage of Oldale's...\p"
	.string "It can be hard getting medicine in\n"
	.string "these parts.$"

OldaleWarehouseColdStorageRebelClerk_Text_0:
# 27 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "Hm? Wasn't told about anyone else\n"
	.string "coming to buy today.\p"
	.string "Eh, whatever. Want something?$"

OldaleWarehouseColdStorageSchedule_Text_0:
# 51 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "The sign contains what seems like a\n"
	.string "shipping schedule...\p"
	.string "“{COLOR BLUE}Weekly Dewford - Mainland shipment:{COLOR DARK_GRAY}\p"
	.string "Swinub fur, Snorunt coats”.\p"
	.string "“{COLOR BLUE}Monthly Dewford - Rustboro shipment:{COLOR DARK_GRAY}\p"
	.string "Arystal Shards. Handle with care.”$"

OldaleWarehouseColdStorageMedStock_Text_0:
# 59 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "The shelves are full of\n"
	.string "healthcare-related supplies.$"

OldaleWarehouseColdStorageFurStock_Text_0:
# 65 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "Piles of furs, primarily of brown and\n"
	.string "orange color.$"

OldaleWarehouseColdStorageFoodStock_Text_0:
# 71 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "It's full of luxury-tier, package\n"
	.string "foodstuffs.$"

OldaleWarehouseColdStorageJewels_Text_0:
# 77 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "The expository shows beautiful jewels\n"
	.string "made with light-blue gems.$"

OldaleWarehouseColdStorageSkinStock_Text_0:
# 83 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "It contains skincare products, mostly\n"
	.string "of the Glalie's brand.$"

OldaleWarehouseColdStorageShardStock_Text_0:
# 89 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "There's various gems inside. Many look\n"
	.string "like beautiful ice shards.$"
