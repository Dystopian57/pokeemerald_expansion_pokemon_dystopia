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
	applymovement 4, JoelTentDoll_Movement_0
# 13 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentDoll_Text_1
# 14 "data/maps/JoelTent/scripts.pory"
	goto thisisannedoll
# 15 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


JoelTentZigzagoon::
# 19 "data/maps/JoelTent/scripts.pory"
	lockall
# 20 "data/maps/JoelTent/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 21 "data/maps/JoelTent/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 22 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentZigzagoon_Text_0
# 23 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


JoelTentJoel::
# 27 "data/maps/JoelTent/scripts.pory"
	lockall
# 28 "data/maps/JoelTent/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 30 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq JoelTentJoel_3
JoelTentJoel_1:
# 49 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq JoelTentJoel_8
JoelTentJoel_6:
# 52 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 4
	goto_if_eq JoelTentJoel_12
JoelTentJoel_11:
# 66 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 5
	goto_if_eq JoelTentJoel_15
JoelTentJoel_14:
# 70 "data/maps/JoelTent/scripts.pory"
joelgivesdoll:
# 71 "data/maps/JoelTent/scripts.pory"
	releaseall
	return

JoelTentJoel_2:
# 32 "data/maps/JoelTent/scripts.pory"
thisisannedoll:
# 33 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_0
# 35 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 36 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_1
# 38 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_1
# 39 "data/maps/JoelTent/scripts.pory"
	removeobject 2
# 40 "data/maps/JoelTent/scripts.pory"
	waitmovement 4
# 41 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 42 "data/maps/JoelTent/scripts.pory"
	waitmovement 4
# 43 "data/maps/JoelTent/scripts.pory"
	giveitem ITEM_POKESHI_DOLL
# 44 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_2
# 45 "data/maps/JoelTent/scripts.pory"
	setflag anneandfamilygone
# 46 "data/maps/JoelTent/scripts.pory"
	setflag annegoestojoel
# 47 "data/maps/JoelTent/scripts.pory"
	goto joelgivesdoll
	goto JoelTentJoel_1

JoelTentJoel_3:
# 30 "data/maps/JoelTent/scripts.pory"
	goto_if_unset anneandfamilygone, JoelTentJoel_2
	goto JoelTentJoel_1

JoelTentJoel_7:
# 50 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_3
	goto JoelTentJoel_6

JoelTentJoel_8:
# 49 "data/maps/JoelTent/scripts.pory"
	goto_if_set anneandfamilygone, JoelTentJoel_7
	goto JoelTentJoel_6

JoelTentJoel_12:
# 53 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 54 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_4
# 57 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_2
# 58 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_5
# 61 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 62 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_6
# 64 "data/maps/JoelTent/scripts.pory"
	setvar VAR_JOELQUESTS, 5
	goto JoelTentJoel_11

JoelTentJoel_15:
# 67 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_7
	goto JoelTentJoel_14


# 12 "data/maps/JoelTent/scripts.pory"
JoelTentDoll_Movement_0:
# 12 "data/maps/JoelTent/scripts.pory"
	walk_in_place_down
	step_end

# 35 "data/maps/JoelTent/scripts.pory"
JoelTentJoel_Movement_0:
# 35 "data/maps/JoelTent/scripts.pory"
	face_player
	step_end

# 38 "data/maps/JoelTent/scripts.pory"
JoelTentJoel_Movement_1:
# 38 "data/maps/JoelTent/scripts.pory"
	face_up
	step_end

# 57 "data/maps/JoelTent/scripts.pory"
JoelTentJoel_Movement_2:
# 57 "data/maps/JoelTent/scripts.pory"
	face_right
	step_end

JoelTentDoll_Text_0:
# 10 "data/maps/JoelTent/scripts.pory"
	.string "It's a Super Substitute doll... or is it?\p"
	.string "You poke it just to be sure. This one\n"
	.string "seems like the real deal.$"

JoelTentDoll_Text_1:
# 13 "data/maps/JoelTent/scripts.pory"
	.string "Hey, don't touch it - it's not yours!\n"
	.string "It's not even mine...$"

JoelTentZigzagoon_Text_0:
# 22 "data/maps/JoelTent/scripts.pory"
	.string "Giiiz!$"

JoelTentJoel_Text_0:
# 33 "data/maps/JoelTent/scripts.pory"
	.string "This... this is Anne's doll! She must have\n"
	.string "forgotten it last time we played here.$"

JoelTentJoel_Text_1:
# 36 "data/maps/JoelTent/scripts.pory"
	.string "Hey, do you mind returning it to her? I'd\n"
	.string "go myself, but her mom always gets mad\l"
	.string "when I go visit.$"

JoelTentJoel_Text_2:
# 44 "data/maps/JoelTent/scripts.pory"
	.string "Hurry up, before she and her family move\n"
	.string "away!$"

JoelTentJoel_Text_3:
# 50 "data/maps/JoelTent/scripts.pory"
	.string "What are you waiting for? Go return\n"
	.string "Anne her {COLOR BLUE}Super Substitute Doll{COLOR DARK_GRAY}!$"

JoelTentJoel_Text_4:
# 54 "data/maps/JoelTent/scripts.pory"
	.string "What? Anne was already gone!? Oh no...\p"
	.string "She told me she can't sleep without\n"
	.string "that doll. And she'll miss it so much in\l"
	.string "her new home...\p"
	.string "I know it's a lot to ask... but if you go\n"
	.string "to Rustboro, could you please give it to\l"
	.string "her?$"

JoelTentJoel_Text_5:
# 58 "data/maps/JoelTent/scripts.pory"
	.string "I said I'd go visit her... but it was only\n"
	.string "so she wouldn't be sad.\p"
	.string "To go to Rustboro, you need a {COLOR BLUE}Devon\n"
	.string "Visa{COLOR DARK_GRAY}, or the Devon guards will stop you\l"
	.string "at {COLOR GREEN}Petalburg Customs{COLOR DARK_GRAY}.$"

JoelTentJoel_Text_6:
# 62 "data/maps/JoelTent/scripts.pory"
	.string "There's no way they'll let me through...\n"
	.string "but you look like a soldier. Perhaps\l"
	.string "they'll let you$"

JoelTentJoel_Text_7:
# 67 "data/maps/JoelTent/scripts.pory"
	.string "Please, you have to give Anne her doll\n"
	.string "back.\p"
	.string "She'll forget about me eventually... but\n"
	.string "I still don't want her to be sad.$"
