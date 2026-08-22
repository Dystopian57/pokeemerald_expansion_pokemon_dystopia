# 1 "data/maps/OldaleTown_House2/scripts.pory"

# 2 "data/maps/OldaleTown_House2/scripts.pory"

# 3 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_Woman::
# 4 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
# 5 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 6 "data/maps/OldaleTown_House2/scripts.pory"

# 7 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_Man::
# 8 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
# 9 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 10 "data/maps/OldaleTown_House2/scripts.pory"

# 11 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_PokemonLevelUp:
# 12 "data/maps/OldaleTown_House2/scripts.pory"
	.string "When POKéMON battle, they eventually\n"
# 13 "data/maps/OldaleTown_House2/scripts.pory"
	.string "level up and become stronger.$"
# 14 "data/maps/OldaleTown_House2/scripts.pory"

# 15 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
# 16 "data/maps/OldaleTown_House2/scripts.pory"
	.string "If the POKéMON with you become\n"
# 17 "data/maps/OldaleTown_House2/scripts.pory"
	.string "stronger, you'll be able to go farther\l"
# 18 "data/maps/OldaleTown_House2/scripts.pory"
	.string "away from here.$"

OldaleTown_House2_MapScripts::
# 24 "data/maps/OldaleTown_House2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 25 "data/maps/OldaleTown_House2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 26 "data/maps/OldaleTown_House2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
	.byte 0


OldaleTownHouse2ArgumentCSMov1::
# 30 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 31 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 32 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTownHouse2ArgumentCSMov1_Movement_0
# 33 "data/maps/OldaleTown_House2/scripts.pory"
	goto beginargument
	return


OldaleTownHouse2ArgumentCSMov2::
# 37 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 38 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 39 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTownHouse2ArgumentCSMov1_Movement_0
# 40 "data/maps/OldaleTown_House2/scripts.pory"
	goto beginargument
	return


OldaleTownHouse2ArgumentCSMov3::
# 44 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 45 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 46 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTownHouse2ArgumentCSMov3_Movement_0
# 47 "data/maps/OldaleTown_House2/scripts.pory"
	goto beginargument
	return


OldaleTownHouse2ArgumentCSMov4::
# 51 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 52 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 53 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTownHouse2ArgumentCSMov4_Movement_0
# 54 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTownHouse2ArgumentCSMov4_Movement_1
# 55 "data/maps/OldaleTown_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 56 "data/maps/OldaleTown_House2/scripts.pory"
	goto beginargument
	return


OldaleTownHouse2Anne::
# 60 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 61 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 62 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleTownHouse2Anne_2
OldaleTownHouse2Anne_1:
# 74 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleTownHouse2Anne_5
OldaleTownHouse2Anne_4:
# 81 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	return

OldaleTownHouse2Anne_2:
# 64 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 2, OldaleTownHouse2Anne_Movement_0
# 65 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Anne_Text_0
# 67 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, OldaleTownHouse2Anne_Movement_1
# 68 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Anne_Text_1
# 71 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	goto OldaleTownHouse2Anne_1

OldaleTownHouse2Anne_5:
# 76 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 2, OldaleTownHouse2Anne_Movement_0
# 77 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Anne_Text_2
# 78 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, OldaleTownHouse2Anne_Movement_1
# 79 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Anne_Text_3
	goto OldaleTownHouse2Anne_4


OldaleTownHouse2Tiana::
# 85 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 86 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, OldaleTownHouse2Tiana_Movement_0
# 87 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 88 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleTownHouse2Tiana_2
OldaleTownHouse2Tiana_1:
# 93 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleTownHouse2Tiana_5
OldaleTownHouse2Tiana_4:
# 98 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleTownHouse2Tiana_8
OldaleTownHouse2Tiana_7:
# 103 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	return

OldaleTownHouse2Tiana_2:
# 89 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Anne_Text_1
	goto OldaleTownHouse2Tiana_1

OldaleTownHouse2Tiana_5:
# 94 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Tiana_Text_0
	goto OldaleTownHouse2Tiana_4

OldaleTownHouse2Tiana_8:
# 100 "data/maps/OldaleTown_House2/scripts.pory"
momrepliesafterargument:
# 101 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Tiana_Text_1
	goto OldaleTownHouse2Tiana_7


OldaleTownHouse2AnneArgument::
# 107 "data/maps/OldaleTown_House2/scripts.pory"
beginargument:
# 108 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 2, OldaleTownHouse2Anne_Movement_0
# 109 "data/maps/OldaleTown_House2/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 110 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2AnneArgument_Text_0
# 112 "data/maps/OldaleTown_House2/scripts.pory"
	setspeaker NULL
# 113 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, OldaleTownHouse2Anne_Movement_1
# 114 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2AnneArgument_Text_1
# 116 "data/maps/OldaleTown_House2/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 117 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 2, OldaleTownHouse2Anne_Movement_0
# 118 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2AnneArgument_Text_2
# 120 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 2, OldaleTownHouse2AnneArgument_Movement_0
# 121 "data/maps/OldaleTown_House2/scripts.pory"
	waitmovement 0
# 122 "data/maps/OldaleTown_House2/scripts.pory"
	removeobject 2
# 123 "data/maps/OldaleTown_House2/scripts.pory"
	setvar VAR_0x8004, 2
# 124 "data/maps/OldaleTown_House2/scripts.pory"
	setvar VAR_0x8005, 6
# 125 "data/maps/OldaleTown_House2/scripts.pory"
	setvar VAR_0x8006, 4
# 126 "data/maps/OldaleTown_House2/scripts.pory"
	setvar VAR_0x8007, 4
# 127 "data/maps/OldaleTown_House2/scripts.pory"
	special ShakeCamera
# 128 "data/maps/OldaleTown_House2/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 129 "data/maps/OldaleTown_House2/scripts.pory"
	waitse
# 131 "data/maps/OldaleTown_House2/scripts.pory"
	setflag annegoestojoel
# 132 "data/maps/OldaleTown_House2/scripts.pory"
	clearflag anneinroute101
# 134 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, OldaleTownHouse2AnneArgument_Movement_1
# 135 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2AnneArgument_Text_3
# 136 "data/maps/OldaleTown_House2/scripts.pory"
	setvar VAR_JOELQUESTS, 2
# 139 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	return


OldaleTownHouse2SealedMovingBox::
# 143 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 144 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2SealedMovingBox_Text_0
# 145 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	return


OldaleTownHouse2OpenMovingBox::
# 149 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 150 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2OpenMovingBox_Text_0
# 152 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	return


OldaleTownHouse2Everyonegone::
# 156 "data/maps/OldaleTown_House2/scripts.pory"
	lockall
# 157 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTownHouse2Everyonegone_Text_0
# 158 "data/maps/OldaleTown_House2/scripts.pory"
	setvar VAR_JOELQUESTS, 5
# 159 "data/maps/OldaleTown_House2/scripts.pory"
	releaseall
	return


# 32 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2ArgumentCSMov1_Movement_0:
# 32 "data/maps/OldaleTown_House2/scripts.pory"
	face_right
	step_end

# 46 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2ArgumentCSMov3_Movement_0:
# 46 "data/maps/OldaleTown_House2/scripts.pory"
	walk_left
# 46 "data/maps/OldaleTown_House2/scripts.pory"
	face_right
	step_end

# 53 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2ArgumentCSMov4_Movement_0:
# 53 "data/maps/OldaleTown_House2/scripts.pory"
	face_up
	step_end

# 54 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2ArgumentCSMov4_Movement_1:
# 54 "data/maps/OldaleTown_House2/scripts.pory"
	walk_up
	step_end

# 64 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2Anne_Movement_0:
# 64 "data/maps/OldaleTown_House2/scripts.pory"
	walk_in_place_right
	step_end

# 67 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2Anne_Movement_1:
# 67 "data/maps/OldaleTown_House2/scripts.pory"
	walk_in_place_left
	step_end

# 86 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2Tiana_Movement_0:
# 86 "data/maps/OldaleTown_House2/scripts.pory"
	face_player
	step_end

# 120 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2AnneArgument_Movement_0:
# 120 "data/maps/OldaleTown_House2/scripts.pory"
	walk_fast_left
# 120 "data/maps/OldaleTown_House2/scripts.pory"
	walk_fast_down
# 120 "data/maps/OldaleTown_House2/scripts.pory"
	walk_fast_down
	step_end

# 134 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTownHouse2AnneArgument_Movement_1:
# 134 "data/maps/OldaleTown_House2/scripts.pory"
	walk_in_place_down
	step_end

OldaleTownHouse2Anne_Text_0:
# 65 "data/maps/OldaleTown_House2/scripts.pory"
	.string "And then Joel's Zigzagoon ate the\n"
	.string "berries from my hand - he even licked\l"
	.string "them clean! He was so hungry!$"

OldaleTownHouse2Anne_Text_1:
# 68 "data/maps/OldaleTown_House2/scripts.pory"
	.string "O-oh, I see...! Well, you should go wash\n"
	.string "your hands then...\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Aah... I should tell her and get it over\n"
	.string "with.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTownHouse2Anne_Text_2:
# 77 "data/maps/OldaleTown_House2/scripts.pory"
	.string "I'm sorry mom... I shouldn't have said\n"
	.string "that you are mean.$"

OldaleTownHouse2Anne_Text_3:
# 79 "data/maps/OldaleTown_House2/scripts.pory"
	.string "It's okay, as long as you understand...\n"
	.string "I'm sorry for yelling at you.\p"
	.string "Now be a good girl, and help mom pack\n"
	.string "the last things, alright?$"

OldaleTownHouse2Tiana_Text_0:
# 94 "data/maps/OldaleTown_House2/scripts.pory"
	.string "That kid will be the end of me... if only\n"
	.string "she was like her brother...!\p"
	.string "I'm sure she's gone to {COLOR GREEN}Route 101{COLOR DARK_GRAY} to play\n"
	.string "with that orphan kid again...$"

OldaleTownHouse2Tiana_Text_1:
# 101 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Good, good, as long as you understand...\n"
	.string "I'm sorry for yelling at you.\p"
	.string "Now be a good girl, and help mom pack\n"
	.string "the last things, alright?$"

OldaleTownHouse2AnneArgument_Text_0:
# 110 "data/maps/OldaleTown_House2/scripts.pory"
	.string "I don't want to move to Rustboro! I\n"
	.string "want to stay here and play with Joel.\p"
	.string "He's going to teach me how to make a\n"
	.string "Secret Shelter!$"

OldaleTownHouse2AnneArgument_Text_1:
# 114 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Don't be ridiculous! You'll make many\n"
	.string "more and better friends than that\l"
	.string "orphan in the city!\p"
	.string "Much cleaner at least - that little imp\n"
	.string "is always covered in mud!$"

OldaleTownHouse2AnneArgument_Text_2:
# 118 "data/maps/OldaleTown_House2/scripts.pory"
	.string "He's not an imp! He's fun and cool! And\n"
	.string "you're mean!$"

OldaleTownHouse2AnneArgument_Text_3:
# 135 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Anne!\p"
	.string "Come back here this instant! You hear\n"
	.string "me!?$"

OldaleTownHouse2SealedMovingBox_Text_0:
# 144 "data/maps/OldaleTown_House2/scripts.pory"
	.string "It's a well sealed box. The label says\n"
	.string "'Paul's textbooks'.$"

OldaleTownHouse2OpenMovingBox_Text_0:
# 150 "data/maps/OldaleTown_House2/scripts.pory"
	.string "It's an open cardboard box. It has'My\n"
	.string "things' written on the side with crayon.$"

OldaleTownHouse2Everyonegone_Text_0:
# 157 "data/maps/OldaleTown_House2/scripts.pory"
	.string "The house seems awfully quiet...$"
