# 1 "data/maps/OldaleTown/scripts.pory"

# 2 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 3 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 4 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 5 "data/maps/OldaleTown/scripts.pory"

# 6 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 7 "data/maps/OldaleTown/scripts.pory"

# 8 "data/maps/OldaleTown/scripts.pory"

# 9 "data/maps/OldaleTown/scripts.pory"

# 10 "data/maps/OldaleTown/scripts.pory"

# 11 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 12 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 13 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

OldaleOutsideHikerGuy::
# 19 "data/maps/OldaleTown/scripts.pory"
	lockall
# 20 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 21 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
# 24 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideParkGuy::
# 28 "data/maps/OldaleTown/scripts.pory"
	lockall
# 29 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, OldaleOutsideHikerGuy_Movement_0
# 30 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkGuy_Text_0
# 34 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldGuy::
# 38 "data/maps/OldaleTown/scripts.pory"
	lockall
# 39 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, OldaleOutsideHikerGuy_Movement_0
# 40 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 44 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_GotoTherapy::
# 48 "data/maps/OldaleTown/scripts.pory"
	lockall
# 49 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 50 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 51 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 52 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 53 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 54 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 55 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 56 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 58 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 59 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 60 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 64 "data/maps/OldaleTown/scripts.pory"
	lockall
# 65 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 67 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 69 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
# 72 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
# 74 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
# 77 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
# 79 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 81 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 82 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 83 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 85 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_10
# 87 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 89 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 90 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 93 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
# 94 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 95 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
# 96 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 97 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 99 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 102 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


# 20 "data/maps/OldaleTown/scripts.pory"
OldaleOutsideHikerGuy_Movement_0:
# 20 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 50 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 55 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 58 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 58 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

OldaleOutsideHikerGuy_Text_0:
# 21 "data/maps/OldaleTown/scripts.pory"
	.string "They say those Rebels are all about\n"
	.string "fighting Devon, and things like the\l"
	.string "Safemon project...\p"
	.string "But most of them are old Team Aqua and\n"
	.string "Team Magma members.\p"
	.string "If you ask me, they're the same\n"
	.string "hoodlums, with a different name!$"

OldaleOutsideParkGuy_Text_0:
# 30 "data/maps/OldaleTown/scripts.pory"
	.string "It's tough being a trader around here\n"
	.string "lately... tons of competition.\p"
	.string "There's scammers taking advantage of\n"
	.string "war tourists, war victims selling their\l"
	.string "valuables to meet their needs...\p"
	.string "You be careful where you shop now.$"

OldaleOutsideOldGuy_Text_0:
# 40 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The brown of the trees is because they\n"
	.string "are dying... it's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleTown_GotoTherapy_Text_0:
# 52 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... I\n"
	.string "should attend the therapy session.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 65 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy... what did you even signed us up\n"
	.string "for here?$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 67 "data/maps/OldaleTown/scripts.pory"
	.string "I'm pretty sure it was a therapy\n"
	.string "session of sorts.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 69 "data/maps/OldaleTown/scripts.pory"
	.string "W-well, you know... Norman told us he\n"
	.string "wouldn't let us help him, until we learnt\l"
	.string "more about the war and Safemon, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 72 "data/maps/OldaleTown/scripts.pory"
	.string "So I thought we'd get some good info\n"
	.string "here!$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 74 "data/maps/OldaleTown/scripts.pory"
	.string "Right... you probably just skimmed\n"
	.string "through the ad, and clicked without\l"
	.string "thinking, right...?$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 77 "data/maps/OldaleTown/scripts.pory"
	.string "W-well... oh, look!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 79 "data/maps/OldaleTown/scripts.pory"
	.string "T-those clothes... and that injury...\n"
	.string "mister, you're a soldier, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 81 "data/maps/OldaleTown/scripts.pory"
	.string "I knew it! Camelia, he can tell us all\n"
	.string "about the war!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 82 "data/maps/OldaleTown/scripts.pory"
	.string "Come on, I know you are - don't be\n"
	.string "modest now!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 83 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia, you know what this means!? He\n"
	.string "can tell us all about the war$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 85 "data/maps/OldaleTown/scripts.pory"
	.string "Sigh... Sharpy, we've been through this.\n"
	.string "You can't just ask strangers about\l"
	.string "horrible things like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 87 "data/maps/OldaleTown/scripts.pory"
	.string "ESPECIALLY soldiers!$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 89 "data/maps/OldaleTown/scripts.pory"
	.string "O-of course...! You're right... why would\n"
	.string "he even tell me, if...$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 90 "data/maps/OldaleTown/scripts.pory"
	.string "If I haven't beaten him in a Pokémon\n"
	.string "battle! That's the soldier way! You\l"
	.string "don't spill the beans unless you lose$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 93 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? Are you stupid$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 94 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, of course! What am I THINKING!?\n"
	.string "Thank you, Camelia!$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 95 "data/maps/OldaleTown/scripts.pory"
	.string "If we battle here, we may scare someone\n"
	.string "like that littlegirl again...$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 96 "data/maps/OldaleTown/scripts.pory"
	.string "Meet me at Route 103 - we won't bother\n"
	.string "anyone there. I'll be waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 97 "data/maps/OldaleTown/scripts.pory"
	.string "...$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 99 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick? You fought in\l"
	.string "the war, so it should be easy. He won't\l"
	.string "leave until you battle him, and our\l"
	.string "tutor will be mad if we're not home\l"
	.string "soon...$"
