# 1 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"

# 2 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
PetalburgDojo_CameliaRoom_MapScripts::
# 3 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
	.byte 0

CameliaRoomCamelia::
# 8 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
	lock
# 9 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
	applymovement 2, CameliaRoomCamelia_Movement_0
# 11 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 12 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 13 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
	msgbox CameliaRoomCamelia_Text_0
# 15 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
	applymovement 2, CameliaRoomCamelia_Movement_1
# 16 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
	waitmovement 2
# 17 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
	releaseall
	return


# 9 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
CameliaRoomCamelia_Movement_0:
# 9 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
	face_player
	step_end

# 15 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
CameliaRoomCamelia_Movement_1:
# 15 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
	face_down
	step_end

CameliaRoomCamelia_Text_0:
# 13 "data/maps/PetalburgDojo_CameliaRoom/scripts.pory"
	.string "I already prepared everything in\n"
	.string "advance. So I'm just calming down now.\p"
	.string "Like my father always says - “a calm\n"
	.string "mind does a good job.”$"
