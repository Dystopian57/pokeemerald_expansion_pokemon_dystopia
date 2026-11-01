# 1 "data/maps/Route102Shed/scripts.pory"

# 2 "data/maps/Route102Shed/scripts.pory"
Route102Shed_MapScripts::
# 3 "data/maps/Route102Shed/scripts.pory"
	.byte 0

Route103ScientistShedTalk::
# 8 "data/maps/Route102Shed/scripts.pory"
	lock
# 9 "data/maps/Route102Shed/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 11 "data/maps/Route102Shed/scripts.pory"
	playse SE_PIN
# 13 "data/maps/Route102Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route103ScientistShedTalk_Movement_0
# 14 "data/maps/Route102Shed/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 15 "data/maps/Route102Shed/scripts.pory"
	msgbox Route103ScientistShedTalk_Text_0
# 17 "data/maps/Route102Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route103ScientistShedTalk_Movement_1
# 18 "data/maps/Route102Shed/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 19 "data/maps/Route102Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route103ScientistShedTalk_Movement_2
# 20 "data/maps/Route102Shed/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 21 "data/maps/Route102Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route103ScientistShedTalk_Movement_3
# 22 "data/maps/Route102Shed/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 24 "data/maps/Route102Shed/scripts.pory"
	msgbox Route103ScientistShedTalk_Text_1
# 25 "data/maps/Route102Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route103ScientistShedTalk_Movement_4
# 26 "data/maps/Route102Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ScientistShedTalk_Movement_3
# 27 "data/maps/Route102Shed/scripts.pory"
	msgbox Route103ScientistShedTalk_Text_2
# 28 "data/maps/Route102Shed/scripts.pory"
	setvar VAR_102_SCIENTIST, 3
# 29 "data/maps/Route102Shed/scripts.pory"
	release
	return


Route102ShedTrashItem::
# 34 "data/maps/Route102Shed/scripts.pory"
	lock
# 35 "data/maps/Route102Shed/scripts.pory"
	goto_if_unset FLAG_ITEM_102SHED, Route102ShedTrashItem_2
# 42 "data/maps/Route102Shed/scripts.pory"
	msgbox Route102ShedTrashItem_Text_1
Route102ShedTrashItem_1:
# 45 "data/maps/Route102Shed/scripts.pory"
	release
	return

Route102ShedTrashItem_2:
# 37 "data/maps/Route102Shed/scripts.pory"
	msgbox Route102ShedTrashItem_Text_0
# 38 "data/maps/Route102Shed/scripts.pory"
	givedecoration DECOR_RED_PLANT
# 39 "data/maps/Route102Shed/scripts.pory"
	setflag FLAG_ITEM_102SHED
	goto Route102ShedTrashItem_1


Route102ShedFirstAidKit::
# 50 "data/maps/Route102Shed/scripts.pory"
	lock
# 51 "data/maps/Route102Shed/scripts.pory"
	goto_if_unset FLAG_ITEM_102SHED1STAID, Route102ShedFirstAidKit_2
# 58 "data/maps/Route102Shed/scripts.pory"
	msgbox Route102ShedFirstAidKit_Text_1
Route102ShedFirstAidKit_1:
# 61 "data/maps/Route102Shed/scripts.pory"
	release
	return

Route102ShedFirstAidKit_2:
# 53 "data/maps/Route102Shed/scripts.pory"
	msgbox Route102ShedFirstAidKit_Text_0
# 54 "data/maps/Route102Shed/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 55 "data/maps/Route102Shed/scripts.pory"
	setflag FLAG_ITEM_102SHED1STAID
	goto Route102ShedFirstAidKit_1


Route102ShedPlant::
# 67 "data/maps/Route102Shed/scripts.pory"
	lock
# 68 "data/maps/Route102Shed/scripts.pory"
	msgbox Route102ShedPlant_Text_0
# 69 "data/maps/Route102Shed/scripts.pory"
	release
	return


Route102ShedVines::
# 73 "data/maps/Route102Shed/scripts.pory"
	lock
# 74 "data/maps/Route102Shed/scripts.pory"
	msgbox Route102ShedVines_Text_0
# 75 "data/maps/Route102Shed/scripts.pory"
	release
	return


Route102ShedToolshelf::
# 79 "data/maps/Route102Shed/scripts.pory"
	lock
# 80 "data/maps/Route102Shed/scripts.pory"
	msgbox Route102ShedToolshelf_Text_0
# 81 "data/maps/Route102Shed/scripts.pory"
	release
	return


Route102ShedLadder::
# 85 "data/maps/Route102Shed/scripts.pory"
	lock
# 86 "data/maps/Route102Shed/scripts.pory"
	msgbox Route102ShedLadder_Text_0
# 87 "data/maps/Route102Shed/scripts.pory"
	release
	return


KantonianWarHistoryVol4102Shed::
# 92 "data/maps/Route102Shed/scripts.pory"
	lock
# 93 "data/maps/Route102Shed/scripts.pory"
	msgbox KantonianWarHistoryVol4102Shed_Text_0
# 95 "data/maps/Route102Shed/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, KantonianWarHistoryVol4102Shed_Text_1, KantonianWarHistoryVol4102Shed_Text_2
# 97 "data/maps/Route102Shed/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KantonianWarHistoryVol4102Shed_2
KantonianWarHistoryVol4102Shed_1:
# 107 "data/maps/Route102Shed/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KantonianWarHistoryVol4102Shed_5
KantonianWarHistoryVol4102Shed_4:
# 109 "data/maps/Route102Shed/scripts.pory"
	release
	return

KantonianWarHistoryVol4102Shed_2:
# 99 "data/maps/Route102Shed/scripts.pory"
	msgbox KantonianWarHistoryVol4102Shed_Text_3
	goto KantonianWarHistoryVol4102Shed_1

KantonianWarHistoryVol4102Shed_5:
# 107 "data/maps/Route102Shed/scripts.pory"
	release
	goto KantonianWarHistoryVol4102Shed_4


# 13 "data/maps/Route102Shed/scripts.pory"
Route103ScientistShedTalk_Movement_0:
# 13 "data/maps/Route102Shed/scripts.pory"
	face_player
# 13 "data/maps/Route102Shed/scripts.pory"
	emote_exclamation_mark
	step_end

# 17 "data/maps/Route102Shed/scripts.pory"
Route103ScientistShedTalk_Movement_1:
# 17 "data/maps/Route102Shed/scripts.pory"
	walk_in_place_right
	step_end

# 19 "data/maps/Route102Shed/scripts.pory"
Route103ScientistShedTalk_Movement_2:
# 19 "data/maps/Route102Shed/scripts.pory"
	walk_in_place_left
	step_end

# 21 "data/maps/Route102Shed/scripts.pory"
Route103ScientistShedTalk_Movement_3:
# 21 "data/maps/Route102Shed/scripts.pory"
	walk_in_place_down
	step_end

# 25 "data/maps/Route102Shed/scripts.pory"
Route103ScientistShedTalk_Movement_4:
# 25 "data/maps/Route102Shed/scripts.pory"
	walk_in_place_up
	step_end

Route103ScientistShedTalk_Text_0:
# 15 "data/maps/Route102Shed/scripts.pory"
	.string "Most intriguing...$"

Route103ScientistShedTalk_Text_1:
# 24 "data/maps/Route102Shed/scripts.pory"
	.string "This must be the supply shed the\n"
	.string "builders of {COLOR GREEN}Road 002{COLOR DARK_GRAY} were using.$"

Route103ScientistShedTalk_Text_2:
# 27 "data/maps/Route102Shed/scripts.pory"
	.string "I see a bizarre cavity on the northern\n"
	.string "wall of the shed. Let us explore\l"
	.string "further.$"

Route102ShedTrashItem_Text_0:
# 37 "data/maps/Route102Shed/scripts.pory"
	.string "There's a potted plant inside the trash\n"
	.string "can...$"

Route102ShedTrashItem_Text_1:
# 42 "data/maps/Route102Shed/scripts.pory"
	.string "The trash can is empty.$"

Route102ShedFirstAidKit_Text_0:
# 53 "data/maps/Route102Shed/scripts.pory"
	.string "There may be something in the first aid\n"
	.string "kit...$"

Route102ShedFirstAidKit_Text_1:
# 58 "data/maps/Route102Shed/scripts.pory"
	.string "The first aid kit is empty.$"

Route102ShedPlant_Text_0:
# 68 "data/maps/Route102Shed/scripts.pory"
	.string "Seems the plant withered a long time\n"
	.string "ago.$"

Route102ShedVines_Text_0:
# 74 "data/maps/Route102Shed/scripts.pory"
	.string "Vines are creeped from the other side\n"
	.string "of the wall.$"

Route102ShedToolshelf_Text_0:
# 80 "data/maps/Route102Shed/scripts.pory"
	.string "The discarded tools have begun to\n"
	.string "gather rust.$"

Route102ShedLadder_Text_0:
# 86 "data/maps/Route102Shed/scripts.pory"
	.string "A rather moldy wooden ladder.$"

KantonianWarHistoryVol4102Shed_Text_0:
# 93 "data/maps/Route102Shed/scripts.pory"
	.string "A book's cover reads “History of the\n"
	.string "Kantonian War, Volume 3”.\p"
	.string "Read it?$"

KantonianWarHistoryVol4102Shed_Text_1:
# 95 "data/maps/Route102Shed/scripts.pory"
	.string "Yes$"

KantonianWarHistoryVol4102Shed_Text_2:
# 95 "data/maps/Route102Shed/scripts.pory"
	.string "No$"

KantonianWarHistoryVol4102Shed_Text_3:
# 99 "data/maps/Route102Shed/scripts.pory"
	.string "May, 2006. Team Rocket has spent the\n"
	.string "last decade using Silph Co. as a proxy\l"
	.string "for their criminal activities, primarily\l"
	.string "that of Pokémon trafficking.\p"
	.string "The Kantonian citizens are outraged,\n"
	.string "but authorities are kept at bay\l"
	.string "through bribery.\p"
	.string "In a curious move, the company acquires\n"
	.string "Cinnabar's Laboratory to invest in the\l"
	.string "study of Pokémon Fossils.$"
