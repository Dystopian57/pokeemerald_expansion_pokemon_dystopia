# 1 "data/maps/OldaleWarehouseColdStorage/scripts.pory"


OldaleWarehouseColdStorage_MapScripts::
# 6 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 7 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 8 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
# 9 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RedoChimechoBoxAlert
# 10 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RedoChimechoBoxAlert
	.byte 0


RedoChimechoBoxAlert::
# 15 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	goto_if_set chimechoboxjumped, RedoChimechoBoxAlert_2
	return

RedoChimechoBoxAlert_1:
# 16 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	clearflag chimechoboxjumped
	return

RedoChimechoBoxAlert_2:
# 15 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	goto_if_unset chimechodealtwith, RedoChimechoBoxAlert_1
	return


OldaleWarehouseColdStorageChimechoBoxAlert::
# 22 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	goto_if_unset chimechoboxjumped, OldaleWarehouseColdStorageChimechoBoxAlert_1
	return

OldaleWarehouseColdStorageChimechoBoxAlert_1:
# 23 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 24 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	playse SE_LEDGE
# 25 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	applymovement 4, OldaleWarehouseColdStorageChimechoBoxAlert_Movement_0
# 26 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	waitmovement 4
# 27 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	setflag chimechoboxjumped
# 28 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
# 29 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	playmoncry SPECIES_CHIMECHO, CRY_MODE_WEAK
	return


OldaleWarehouseColdStorageChimechoBox::
# 34 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 35 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageChimechoBox_Text_0
# 36 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseColdStorageChimechoBox_Text_1, OldaleWarehouseColdStorageChimechoBox_Text_2
# 38 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseColdStorageChimechoBox_2
OldaleWarehouseColdStorageChimechoBox_1:
# 67 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleWarehouseColdStorageChimechoBox_5
OldaleWarehouseColdStorageChimechoBox_4:
# 72 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
endchimechoscript:
# 73 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return

OldaleWarehouseColdStorageChimechoBox_2:
# 39 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	playmoncry SPECIES_CHIMECHO, CRY_MODE_HIGH_PITCH
# 40 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageChimechoBox_Text_3
# 43 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	setwildbattle SPECIES_CHIMECHO, 5, ITEM_NONE
# 44 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	dowildbattle
# 45 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 47 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq OldaleWarehouseColdStorageChimechoBox_7
# 51 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OldaleWarehouseColdStorageChimechoBox_8
# 55 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq OldaleWarehouseColdStorageChimechoBox_9
# 60 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq OldaleWarehouseColdStorageChimechoBox_10
	goto OldaleWarehouseColdStorageChimechoBox_1

OldaleWarehouseColdStorageChimechoBox_5:
# 68 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	goto endchimechoscript
	goto OldaleWarehouseColdStorageChimechoBox_4

OldaleWarehouseColdStorageChimechoBox_7:
# 48 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	setflag chimechodealtwith
# 49 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	goto endchimechoscript
	goto OldaleWarehouseColdStorageChimechoBox_1

OldaleWarehouseColdStorageChimechoBox_8:
# 52 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageChimechoBox_Text_4
# 53 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	goto endchimechoscript
	goto OldaleWarehouseColdStorageChimechoBox_1

OldaleWarehouseColdStorageChimechoBox_9:
# 56 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageChimechoBox_Text_4
# 57 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	goto endchimechoscript
	goto OldaleWarehouseColdStorageChimechoBox_1

OldaleWarehouseColdStorageChimechoBox_10:
# 61 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageChimechoBox_Text_4
# 62 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	goto endchimechoscript
	goto OldaleWarehouseColdStorageChimechoBox_1


OldaleWarehouseColdStorageMedic::
# 79 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 80 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 81 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	applymovement 1, OldaleWarehouseColdStorageMedic_Movement_0
# 82 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageMedic_Text_0
# 84 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	applymovement 1, OldaleWarehouseColdStorageMedic_Movement_1
# 85 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	waitmovement 1
# 86 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageRebelClerk::
# 90 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 91 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 92 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	applymovement 3, OldaleWarehouseColdStorageMedic_Movement_0
# 93 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageRebelClerk_Text_0
# 94 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	pokemart OldaleWarehouseColdStorage_TempShop
# 95 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageItem::
# 99 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 100 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	finditem ITEM_STAR_PIECE
# 101 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	removeobject 2
# 102 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	releaseall
	return


	.align 2
# 104 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
OldaleWarehouseColdStorage_TempShop:
# 105 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_POKE_BALL
# 106 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_POTION
# 107 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 108 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_REMEDY
# 109 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 110 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_HONEY
# 111 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_POKE_TOY
# 112 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 113 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.2byte ITEM_AERODACTYLITE
	.2byte ITEM_NONE

OldaleWarehouseColdStorageSchedule::
# 116 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 117 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageSchedule_Text_0
# 120 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageMedStock::
# 124 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 125 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageMedStock_Text_0
# 126 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageFurStock::
# 130 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 131 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageFurStock_Text_0
# 132 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageFoodStock::
# 136 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 137 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageFoodStock_Text_0
# 138 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageJewels::
# 142 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 143 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageJewels_Text_0
# 144 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageSkinStock::
# 148 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 149 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageSkinStock_Text_0
# 150 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


OldaleWarehouseColdStorageShardStock::
# 154 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	lock
# 155 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	msgbox OldaleWarehouseColdStorageShardStock_Text_0
# 156 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	release
	return


# 25 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
OldaleWarehouseColdStorageChimechoBoxAlert_Movement_0:
# 25 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	jump_in_place_down
	step_end

# 81 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
OldaleWarehouseColdStorageMedic_Movement_0:
# 81 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	face_player
	step_end

# 84 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
OldaleWarehouseColdStorageMedic_Movement_1:
# 84 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	face_up
	step_end

OldaleWarehouseColdStorageChimechoBox_Text_0:
# 35 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "The box is shaking slightly... open it?$"

OldaleWarehouseColdStorageChimechoBox_Text_1:
# 36 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "Yes$"

OldaleWarehouseColdStorageChimechoBox_Text_2:
# 36 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "No$"

OldaleWarehouseColdStorageChimechoBox_Text_3:
# 40 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "A Pokémon came out of the box!$"

OldaleWarehouseColdStorageChimechoBox_Text_4:
# 52 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "The Chimecho has hidden in the box\n"
	.string "again...$"

OldaleWarehouseColdStorageMedic_Text_0:
# 82 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "First the riot on Petalburg's Devon\n"
	.string "Center, now the shortage of Oldale's...\p"
	.string "It can be hard getting medicine in\n"
	.string "these parts.$"

OldaleWarehouseColdStorageRebelClerk_Text_0:
# 93 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "Hm? Wasn't told about anyone else\n"
	.string "coming to buy today.\p"
	.string "Eh, whatever. Want something?$"

OldaleWarehouseColdStorageSchedule_Text_0:
# 117 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "The sign contains what seems like a\n"
	.string "shipping schedule...\p"
	.string "“{COLOR BLUE}Weekly Dewford - Mainland shipment:{COLOR DARK_GRAY}\p"
	.string "Swinub fur, Snorunt coats”.\p"
	.string "“{COLOR BLUE}Monthly Dewford - Rustboro shipment:{COLOR DARK_GRAY}\p"
	.string "Arystal Shards. Handle with care.”$"

OldaleWarehouseColdStorageMedStock_Text_0:
# 125 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "The shelves are full of\n"
	.string "healthcare-related supplies.$"

OldaleWarehouseColdStorageFurStock_Text_0:
# 131 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "Piles of furs, primarily of brown and\n"
	.string "orange color.$"

OldaleWarehouseColdStorageFoodStock_Text_0:
# 137 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "It's full of luxury-tier, package\n"
	.string "foodstuffs.$"

OldaleWarehouseColdStorageJewels_Text_0:
# 143 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "The expository shows beautiful jewels\n"
	.string "made with light-blue gems.$"

OldaleWarehouseColdStorageSkinStock_Text_0:
# 149 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "It contains skincare products, mostly\n"
	.string "of the Glalie's brand.$"

OldaleWarehouseColdStorageShardStock_Text_0:
# 155 "data/maps/OldaleWarehouseColdStorage/scripts.pory"
	.string "There's various gems inside. Many look\n"
	.string "like beautiful ice shards.$"
