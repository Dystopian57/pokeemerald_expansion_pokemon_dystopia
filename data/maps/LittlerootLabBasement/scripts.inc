# 1 "data/maps/LittlerootLabBasement/scripts.pory"

# 2 "data/maps/LittlerootLabBasement/scripts.pory"
LittlerootLabBasement_MapScripts::
# 3 "data/maps/LittlerootLabBasement/scripts.pory"
	.byte 0

AideeBasementUnfollow3::
# 6 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 7 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 8 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 9 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow3_Text_0
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow3_Movement_0
# 11 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 12 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 13 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 14 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow3_Text_1
# 15 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 16 "data/maps/LittlerootLabBasement/scripts.pory"
	destroyfollowernpc
# 17 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject LOCALID_AIDEEBASEMENT
# 18 "data/maps/LittlerootLabBasement/scripts.pory"
	clearflag Aideearrivestobasement
# 19 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 7
# 20 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


# 10 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow3_Movement_0:
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_left
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	face_down
	step_end

AideeBasementUnfollow3_Text_0:
# 9 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ah, here we are!$"

AideeBasementUnfollow3_Text_1:
# 14 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Come, {PLAYER}! I'll show you\n"
	.string "something really cool!$"
