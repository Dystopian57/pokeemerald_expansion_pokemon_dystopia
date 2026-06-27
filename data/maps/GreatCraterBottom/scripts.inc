# 1 "data/maps/GreatCraterBottom/scripts.pory"

# 2 "data/maps/GreatCraterBottom/scripts.pory"
GreatCraterBottom_MapScripts::
# 3 "data/maps/GreatCraterBottom/scripts.pory"
	.byte 0

CraterHermit::
# 9 "data/maps/GreatCraterBottom/scripts.pory"
	lock
# 10 "data/maps/GreatCraterBottom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 11 "data/maps/GreatCraterBottom/scripts.pory"
	applymovement 1, CraterHermit_Movement_0
# 13 "data/maps/GreatCraterBottom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_FLASH, CraterHermit_2
# 38 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_8
CraterHermit_1:
# 41 "data/maps/GreatCraterBottom/scripts.pory"
	release
	return

CraterHermit_2:
# 14 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_0
# 17 "data/maps/GreatCraterBottom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, CraterHermit_Text_1, CraterHermit_Text_2
# 18 "data/maps/GreatCraterBottom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CraterHermit_6
CraterHermit_5:
# 22 "data/maps/GreatCraterBottom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CraterHermit_8
	goto CraterHermit_1

CraterHermit_6:
# 19 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_3
	goto CraterHermit_5

CraterHermit_8:
# 23 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_4
# 24 "data/maps/GreatCraterBottom/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, CraterHermit_Outro
# 26 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_5
# 28 "data/maps/GreatCraterBottom/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 29 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_6
# 30 "data/maps/GreatCraterBottom/scripts.pory"
	setflag FLAG_BADGE02_GET
# 31 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_7
# 32 "data/maps/GreatCraterBottom/scripts.pory"
	playse MUS_OBTAIN_TMHM
# 33 "data/maps/GreatCraterBottom/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 34 "data/maps/GreatCraterBottom/scripts.pory"
	giveitem ITEM_HM05
	goto CraterHermit_1


# 11 "data/maps/GreatCraterBottom/scripts.pory"
CraterHermit_Movement_0:
# 11 "data/maps/GreatCraterBottom/scripts.pory"
	face_player
	step_end

CraterHermit_Text_0:
# 14 "data/maps/GreatCraterBottom/scripts.pory"
	.string "You helped that woman return to the\n"
	.string "surface, did you? Commendable.\p"
	.string "The powerless should not venture into\n"
	.string "places like these.\p"
	.string "And with 'powerless'... I am speaking of\n"
	.string "you as well.$"

CraterHermit_Text_1:
# 17 "data/maps/GreatCraterBottom/scripts.pory"
	.string "Yes. I better leave$"

CraterHermit_Text_2:
# 17 "data/maps/GreatCraterBottom/scripts.pory"
	.string "I am not powerless$"

CraterHermit_Text_3:
# 19 "data/maps/GreatCraterBottom/scripts.pory"
	.string "Good. The first step to power is to\n"
	.string "recognize one's lack of it.$"

CraterHermit_Text_4:
# 23 "data/maps/GreatCraterBottom/scripts.pory"
	.string "You're not? Hmm... show to me your power,\n"
	.string "then.$"

CraterHermit_Text_5:
# 26 "data/maps/GreatCraterBottom/scripts.pory"
	.string "Not only do you possess power... you are\n"
	.string "also deserving of it.\p"
	.string "Here, take this.$"

CraterHermit_Text_6:
# 29 "data/maps/GreatCraterBottom/scripts.pory"
	.string "Obtained the Light Token!$"

CraterHermit_Text_7:
# 31 "data/maps/GreatCraterBottom/scripts.pory"
	.string "... and this as well.$"

CraterHermit_Text_8:
# 38 "data/maps/GreatCraterBottom/scripts.pory"
	.string "Good job.$"

CraterHermit_Outro::
# 44 "data/maps/GreatCraterBottom/scripts.pory"
	.string "I see... it was not mere hubris, then.$"
