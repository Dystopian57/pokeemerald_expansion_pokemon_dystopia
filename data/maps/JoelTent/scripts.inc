# 1 "data/maps/JoelTent/scripts.pory"

# 2 "data/maps/JoelTent/scripts.pory"
JoelTent_MapScripts::
# 3 "data/maps/JoelTent/scripts.pory"
	.byte 0

JoelTentDoll::
# 8 "data/maps/JoelTent/scripts.pory"
	lockall
# 9 "data/maps/JoelTent/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 10 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentDoll_Text_0
# 12 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq JoelTentDoll_1
# 19 "data/maps/JoelTent/scripts.pory"
	releaseall
	return

JoelTentDoll_1:
# 14 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentDoll_Movement_0
# 15 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentDoll_Text_1
# 16 "data/maps/JoelTent/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JoelTentDoll_Movement_1
# 17 "data/maps/JoelTent/scripts.pory"
	goto thisisannedoll
	return


JoelTentZigzagoon::
# 23 "data/maps/JoelTent/scripts.pory"
	lockall
# 24 "data/maps/JoelTent/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 25 "data/maps/JoelTent/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 26 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentZigzagoon_Text_0
# 27 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


JoelTentJoel::
# 31 "data/maps/JoelTent/scripts.pory"
	lockall
# 32 "data/maps/JoelTent/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 34 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq JoelTentJoel_3
JoelTentJoel_1:
# 54 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 4
	goto_if_eq JoelTentJoel_8
JoelTentJoel_6:
# 59 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 5
	goto_if_eq JoelTentJoel_12
JoelTentJoel_11:
# 76 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 6
	goto_if_eq JoelTentJoel_15
JoelTentJoel_14:
# 81 "data/maps/JoelTent/scripts.pory"
joelgivesdoll:
# 82 "data/maps/JoelTent/scripts.pory"
	releaseall
	return

JoelTentJoel_2:
# 36 "data/maps/JoelTent/scripts.pory"
thisisannedoll:
# 37 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_0
# 39 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 40 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_1
# 42 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_1
# 43 "data/maps/JoelTent/scripts.pory"
	removeobject 2
# 44 "data/maps/JoelTent/scripts.pory"
	waitmovement 4
# 45 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 46 "data/maps/JoelTent/scripts.pory"
	waitmovement 4
# 47 "data/maps/JoelTent/scripts.pory"
	giveitem ITEM_POKESHI_DOLL
# 48 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_2
# 49 "data/maps/JoelTent/scripts.pory"
	setflag anneandfamilygone
# 50 "data/maps/JoelTent/scripts.pory"
	setflag annegoestojoel
# 51 "data/maps/JoelTent/scripts.pory"
	setvar VAR_JOELQUESTS, 4
# 52 "data/maps/JoelTent/scripts.pory"
	goto joelgivesdoll
	goto JoelTentJoel_1

JoelTentJoel_3:
# 34 "data/maps/JoelTent/scripts.pory"
	goto_if_unset anneandfamilygone, JoelTentJoel_2
	goto JoelTentJoel_1

JoelTentJoel_7:
# 55 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 56 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_3
	goto JoelTentJoel_6

JoelTentJoel_8:
# 54 "data/maps/JoelTent/scripts.pory"
	goto_if_set anneandfamilygone, JoelTentJoel_7
	goto JoelTentJoel_6

JoelTentJoel_12:
# 60 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 61 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_4
# 64 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_2
# 65 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_5
# 66 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 67 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_6
# 69 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_7
# 71 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_8
# 72 "data/maps/JoelTent/scripts.pory"
	register_matchcall TRAINER_ORPHAN_MALE_101
# 73 "data/maps/JoelTent/scripts.pory"
	setvar VAR_JOELQUESTS, 6
# 74 "data/maps/JoelTent/scripts.pory"
	goto joelgivesdoll
	goto JoelTentJoel_11

JoelTentJoel_15:
# 77 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 78 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_9
	goto JoelTentJoel_14


JoelTentTV::
# 87 "data/maps/JoelTent/scripts.pory"
	lockall
# 88 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentTV_Text_0
# 89 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


JoelTentLantern::
# 93 "data/maps/JoelTent/scripts.pory"
	lockall
# 94 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentLantern_Text_0
# 95 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


JoelTentPoster::
# 99 "data/maps/JoelTent/scripts.pory"
	lockall
# 100 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentPoster_Text_0
# 101 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


JoelTentMudball::
# 105 "data/maps/JoelTent/scripts.pory"
	lockall
# 106 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentMudball_Text_0
# 107 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


JoelTentCushion::
# 111 "data/maps/JoelTent/scripts.pory"
	lockall
# 112 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentCushion_Text_0
# 113 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


# 14 "data/maps/JoelTent/scripts.pory"
JoelTentDoll_Movement_0:
# 14 "data/maps/JoelTent/scripts.pory"
	walk_in_place_up
	step_end

# 16 "data/maps/JoelTent/scripts.pory"
JoelTentDoll_Movement_1:
# 16 "data/maps/JoelTent/scripts.pory"
	walk_down
# 16 "data/maps/JoelTent/scripts.pory"
	face_right
	step_end

# 39 "data/maps/JoelTent/scripts.pory"
JoelTentJoel_Movement_0:
# 39 "data/maps/JoelTent/scripts.pory"
	face_player
	step_end

# 42 "data/maps/JoelTent/scripts.pory"
JoelTentJoel_Movement_1:
# 42 "data/maps/JoelTent/scripts.pory"
	face_up
	step_end

# 64 "data/maps/JoelTent/scripts.pory"
JoelTentJoel_Movement_2:
# 64 "data/maps/JoelTent/scripts.pory"
	face_right
	step_end

JoelTentDoll_Text_0:
# 10 "data/maps/JoelTent/scripts.pory"
	.string "It's a Super Substitute doll... or is it?\p"
	.string "After a gentle poke, this one seems like\n"
	.string "the real deal.$"

JoelTentDoll_Text_1:
# 15 "data/maps/JoelTent/scripts.pory"
	.string "Hey, don't touch it - it's not yours!\n"
	.string "It's not even mine...$"

JoelTentZigzagoon_Text_0:
# 26 "data/maps/JoelTent/scripts.pory"
	.string "Giiiz!$"

JoelTentJoel_Text_0:
# 37 "data/maps/JoelTent/scripts.pory"
	.string "This... this is Anne's doll! She must have\n"
	.string "forgotten it last time we played here.$"

JoelTentJoel_Text_1:
# 40 "data/maps/JoelTent/scripts.pory"
	.string "Hey, do you mind returning it to her? I'd\n"
	.string "go myself, but her mom always gets mad\l"
	.string "when I go visit.$"

JoelTentJoel_Text_2:
# 48 "data/maps/JoelTent/scripts.pory"
	.string "Hurry up, before she and her family move\n"
	.string "away!$"

JoelTentJoel_Text_3:
# 56 "data/maps/JoelTent/scripts.pory"
	.string "You should hurry up! Go return Anne her\n"
	.string "{COLOR BLUE}Super Substitute Doll{COLOR DARK_GRAY}!\p"
	.string "She lives in Oldale, in the house with\n"
	.string "the metallic roof.$"

JoelTentJoel_Text_4:
# 61 "data/maps/JoelTent/scripts.pory"
	.string "What? Anne was already gone!? Oh no...\p"
	.string "She told me she can't sleep without\n"
	.string "that doll. She'll miss it so much in her\l"
	.string "new home...\p"
	.string "I know it's a big ask... but if you go to\n"
	.string "Rustboro, could you give it to her?$"

JoelTentJoel_Text_5:
# 65 "data/maps/JoelTent/scripts.pory"
	.string "I said I'd go visit her... but it was only\n"
	.string "so she wouldn't be sad.$"

JoelTentJoel_Text_6:
# 67 "data/maps/JoelTent/scripts.pory"
	.string "To go to Rustboro, you need a {COLOR BLUE}Devon\n"
	.string "Visa{COLOR DARK_GRAY}, or the Devon guards will stop you\l"
	.string "at {COLOR GREEN}Petalburg Customs{COLOR DARK_GRAY}.$"

JoelTentJoel_Text_7:
# 69 "data/maps/JoelTent/scripts.pory"
	.string "There's no way they'll let me through...\n"
	.string "but you look like a soldier. Perhaps\l"
	.string "they'll let you.$"

JoelTentJoel_Text_8:
# 71 "data/maps/JoelTent/scripts.pory"
	.string "Here's my Devon Nav number - let's keep\n"
	.string "in touch about this!$"

JoelTentJoel_Text_9:
# 78 "data/maps/JoelTent/scripts.pory"
	.string "Please, you have to give Anne her doll\n"
	.string "back.\p"
	.string "She'll forget about me eventually... but\n"
	.string "I still don't want her to be sad.$"

JoelTentTV_Text_0:
# 88 "data/maps/JoelTent/scripts.pory"
	.string "The TV is not plugged to anything...$"

JoelTentLantern_Text_0:
# 94 "data/maps/JoelTent/scripts.pory"
	.string "An oil lantern. It doesn't have much oil\n"
	.string "left.$"

JoelTentPoster_Text_0:
# 100 "data/maps/JoelTent/scripts.pory"
	.string "An old poster of a Treecko.$"

JoelTentMudball_Text_0:
# 106 "data/maps/JoelTent/scripts.pory"
	.string "The dry, cracked remains of a mudball.\n"
	.string "They resemble a Pokéball.$"

JoelTentCushion_Text_0:
# 112 "data/maps/JoelTent/scripts.pory"
	.string "A dirty cushion. It's got black and\n"
	.string "white hair all over it.$"
