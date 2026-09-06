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
	.string "builders of Road 002 were using.$"

Route103ScientistShedTalk_Text_2:
# 27 "data/maps/Route102Shed/scripts.pory"
	.string "I see a bizarre cavity on the northern\n"
	.string "wall of the shed. Let us explore\l"
	.string "further.$"
