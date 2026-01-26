# 1 "data/maps/OldaleTown_House2/scripts.pory"

# 2 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_MapScripts::
# 3 "data/maps/OldaleTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_House2/scripts.pory"

# 5 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_Woman::
# 6 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
# 7 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 8 "data/maps/OldaleTown_House2/scripts.pory"

# 9 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_Man::
# 10 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
# 11 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 12 "data/maps/OldaleTown_House2/scripts.pory"

# 13 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_PokemonLevelUp:
# 14 "data/maps/OldaleTown_House2/scripts.pory"
	.string "When POKéMON battle, they eventually\n"
# 15 "data/maps/OldaleTown_House2/scripts.pory"
	.string "level up and become stronger.$"
# 16 "data/maps/OldaleTown_House2/scripts.pory"

# 17 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
# 18 "data/maps/OldaleTown_House2/scripts.pory"
	.string "If the POKéMON with you become\n"
# 19 "data/maps/OldaleTown_House2/scripts.pory"
	.string "stronger, you'll be able to go farther\l"
# 20 "data/maps/OldaleTown_House2/scripts.pory"
	.string "away from here.$"

OldaleTownHouse2ArgumentCSMov1::
# 26 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 27 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 28 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTownHouse2ArgumentCSMov1_Movement_0
# 29 "data/maps/OldaleTown_House2/scripts.pory"
	goto beginargument
	return


OldaleTownHouse2ArgumentCSMov2::
# 33 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 34 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 35 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTownHouse2ArgumentCSMov1_Movement_0
# 36 "data/maps/OldaleTown_House2/scripts.pory"
	goto beginargument
	return


OldaleTownHouse2ArgumentCSMov3::
# 40 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 41 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 42 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTownHouse2ArgumentCSMov3_Movement_0
# 43 "data/maps/OldaleTown_House2/scripts.pory"
	goto beginargument
	return


OldaleTownHouse2ArgumentCSMov4::
# 47 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 48 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 49 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTownHouse2ArgumentCSMov4_Movement_0
# 50 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTownHouse2ArgumentCSMov4_Movement_1
# 51 "data/maps/OldaleTown_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 52 "data/maps/OldaleTown_House2/scripts.pory"
	goto beginargument
	return


OldaleTownHouse2Anne::
# 56 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 57 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 58 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleTownHouse2Anne_2
OldaleTownHouse2Anne_1:
# 70 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleTownHouse2Anne_5
OldaleTownHouse2Anne_4:
# 77 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	return

OldaleTownHouse2Anne_2:
# 60 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 2, OldaleTownHouse2Anne_Movement_0
# 61 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Anne_Text_0
# 63 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, OldaleTownHouse2Anne_Movement_1
# 64 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Anne_Text_1
# 67 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	goto OldaleTownHouse2Anne_1

OldaleTownHouse2Anne_5:
# 72 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 2, OldaleTownHouse2Anne_Movement_0
# 73 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Anne_Text_2
# 74 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, OldaleTownHouse2Anne_Movement_1
# 75 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Anne_Text_3
	goto OldaleTownHouse2Anne_4


OldaleTownHouse2Tiana::
# 81 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 82 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, OldaleTownHouse2Tiana_Movement_0
# 83 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 84 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleTownHouse2Tiana_2
OldaleTownHouse2Tiana_1:
# 89 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleTownHouse2Tiana_5
OldaleTownHouse2Tiana_4:
# 94 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleTownHouse2Tiana_8
OldaleTownHouse2Tiana_7:
# 99 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	return

OldaleTownHouse2Tiana_2:
# 85 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Anne_Text_1
	goto OldaleTownHouse2Tiana_1

OldaleTownHouse2Tiana_5:
# 90 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Tiana_Text_0
	goto OldaleTownHouse2Tiana_4

OldaleTownHouse2Tiana_8:
# 96 "data/maps/OldaleTown_House2/scripts.pory"
momrepliesafterargument:
# 97 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Tiana_Text_1
	goto OldaleTownHouse2Tiana_7


OldaleTownHouse2AnneArgument::
# 103 "data/maps/OldaleTown_House2/scripts.pory"
beginargument:
# 104 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 2, OldaleTownHouse2Anne_Movement_0
# 105 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2AnneArgument_Text_0
# 108 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, OldaleTownHouse2Anne_Movement_1
# 109 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2AnneArgument_Text_1
# 112 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 2, OldaleTownHouse2Anne_Movement_0
# 113 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2AnneArgument_Text_2
# 115 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 2, OldaleTownHouse2AnneArgument_Movement_0
# 116 "data/maps/OldaleTown_House2/scripts.pory"
	waitmovement 0
# 117 "data/maps/OldaleTown_House2/scripts.pory"
	removeobject 2
# 118 "data/maps/OldaleTown_House2/scripts.pory"
	setvar VAR_0x8004, 2
# 119 "data/maps/OldaleTown_House2/scripts.pory"
	setvar VAR_0x8005, 6
# 120 "data/maps/OldaleTown_House2/scripts.pory"
	setvar VAR_0x8006, 4
# 121 "data/maps/OldaleTown_House2/scripts.pory"
	setvar VAR_0x8007, 4
# 122 "data/maps/OldaleTown_House2/scripts.pory"
	special ShakeCamera
# 123 "data/maps/OldaleTown_House2/scripts.pory"
	playse SE_DOOR
# 124 "data/maps/OldaleTown_House2/scripts.pory"
	waitse
# 126 "data/maps/OldaleTown_House2/scripts.pory"
	setflag annegoestojoel
# 127 "data/maps/OldaleTown_House2/scripts.pory"
	clearflag anneinroute101
# 129 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, OldaleTownHouse2AnneArgument_Movement_1
# 130 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2AnneArgument_Text_3
# 131 "data/maps/OldaleTown_House2/scripts.pory"
	setvar VAR_JOELQUESTS, 2
# 134 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	return


OldaleTownHouse2SealedMovingBox::
# 138 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 139 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2SealedMovingBox_Text_0
# 140 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	return


OldaleTownHouse2OpenMovingBox::
# 144 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 145 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2OpenMovingBox_Text_0
# 147 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	return


OldaleTownHouse2Everyonegone::
# 151 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 152 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Everyonegone_Text_0
# 153 "data/maps/OldaleTown_House2/scripts.pory"
	setvar VAR_JOELQUESTS, 5
# 154 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	return


# 28 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2ArgumentCSMov1_Movement_0:
# 28 "data/maps/OldaleTown_House2/scripts.pory"
	face_right
	step_end

# 42 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2ArgumentCSMov3_Movement_0:
# 42 "data/maps/OldaleTown_House2/scripts.pory"
	walk_left
# 42 "data/maps/OldaleTown_House2/scripts.pory"
	face_right
	step_end

# 49 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2ArgumentCSMov4_Movement_0:
# 49 "data/maps/OldaleTown_House2/scripts.pory"
	face_up
	step_end

# 50 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2ArgumentCSMov4_Movement_1:
# 50 "data/maps/OldaleTown_House2/scripts.pory"
	walk_up
	step_end

# 60 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2Anne_Movement_0:
# 60 "data/maps/OldaleTown_House2/scripts.pory"
	walk_in_place_right
	step_end

# 63 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2Anne_Movement_1:
# 63 "data/maps/OldaleTown_House2/scripts.pory"
	walk_in_place_left
	step_end

# 82 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2Tiana_Movement_0:
# 82 "data/maps/OldaleTown_House2/scripts.pory"
	face_player
	step_end

# 115 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2AnneArgument_Movement_0:
# 115 "data/maps/OldaleTown_House2/scripts.pory"
	walk_fast_left
# 115 "data/maps/OldaleTown_House2/scripts.pory"
	walk_fast_down
# 115 "data/maps/OldaleTown_House2/scripts.pory"
	walk_fast_down
	step_end

# 129 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2AnneArgument_Movement_1:
# 129 "data/maps/OldaleTown_House2/scripts.pory"
	walk_in_place_down
	step_end

OldaleTownHouse2Anne_Text_0:
# 61 "data/maps/OldaleTown_House2/scripts.pory"
	.string "And then Joel's Zigzagoon ate the\n"
	.string "berries from my hand - he even licked\l"
	.string "them clean! He was so hungry!$"

OldaleTownHouse2Anne_Text_1:
# 64 "data/maps/OldaleTown_House2/scripts.pory"
	.string "O-oh, I see...! Well, you should go wash\n"
	.string "your hands then...\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Aah... I should tell her and get it over\n"
	.string "with.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTownHouse2Anne_Text_2:
# 73 "data/maps/OldaleTown_House2/scripts.pory"
	.string "I'm sorry mom... I shouldn't have said\n"
	.string "that you are mean.$"

OldaleTownHouse2Anne_Text_3:
# 75 "data/maps/OldaleTown_House2/scripts.pory"
	.string "It's okay, as long as you understand...\n"
	.string "I'm sorry for yelling at you.\p"
	.string "Now be a good girl, and help mom pack\n"
	.string "the last things, alright?$"

OldaleTownHouse2Tiana_Text_0:
# 90 "data/maps/OldaleTown_House2/scripts.pory"
	.string "That kid will be the end of me... if only\n"
	.string "she was like her brother...!\p"
	.string "I'm sure she's gone to {COLOR GREEN}Route 101{COLOR DARK_GRAY} to play\n"
	.string "with that orphan kid again...$"

OldaleTownHouse2Tiana_Text_1:
# 97 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Good, good, as long as you understand...\n"
	.string "I'm sorry for yelling at you.\p"
	.string "Now be a good girl, and help mom pack\n"
	.string "the last things, alright?$"

OldaleTownHouse2AnneArgument_Text_0:
# 105 "data/maps/OldaleTown_House2/scripts.pory"
	.string "I don't want to move to Rustboro! I\n"
	.string "want to stay here so I can play with\l"
	.string "Joel.\p"
	.string "He's going to teach me how to make a\n"
	.string "Secret Shelter!$"

OldaleTownHouse2AnneArgument_Text_1:
# 109 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Don't be ridiculous! You'll make many\n"
	.string "more and better friends than that\l"
	.string "orphan in the city!\p"
	.string "Much cleaner at least - that little imp\n"
	.string "is always covered in mud!$"

OldaleTownHouse2AnneArgument_Text_2:
# 113 "data/maps/OldaleTown_House2/scripts.pory"
	.string "He's not an imp! He's fun and cool! And\n"
	.string "you're mean!$"

OldaleTownHouse2AnneArgument_Text_3:
# 130 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Anne!\p"
	.string "Come back here this instant! You hear\n"
	.string "me!?$"

OldaleTownHouse2SealedMovingBox_Text_0:
# 139 "data/maps/OldaleTown_House2/scripts.pory"
	.string "It's a well sealed box. The label says\n"
	.string "'Paul's textbooks'.$"

OldaleTownHouse2OpenMovingBox_Text_0:
# 145 "data/maps/OldaleTown_House2/scripts.pory"
	.string "It's an open cardboard box. It has'My\n"
	.string "things' written on the side with crayon.$"

OldaleTownHouse2Everyonegone_Text_0:
# 152 "data/maps/OldaleTown_House2/scripts.pory"
	.string "The house seems awfully quiet...$"
