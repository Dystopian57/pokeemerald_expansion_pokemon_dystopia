# 1 "data/maps/GreatCraterBottom/scripts.pory"

# 2 "data/maps/GreatCraterBottom/scripts.pory"
GreatCraterBottom_MapScripts::
# 3 "data/maps/GreatCraterBottom/scripts.pory"
	.byte 0

CraterBottomItem::
# 9 "data/maps/GreatCraterBottom/scripts.pory"
	lock
# 10 "data/maps/GreatCraterBottom/scripts.pory"
	finditem ITEM_TM_DEFOG
# 13 "data/maps/GreatCraterBottom/scripts.pory"
	removeobject 3
# 14 "data/maps/GreatCraterBottom/scripts.pory"
	releaseall
	return


CraterBottomHole::
# 17 "data/maps/GreatCraterBottom/scripts.pory"
	lock
# 18 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterBottomHole_Text_0
# 19 "data/maps/GreatCraterBottom/scripts.pory"
	releaseall
	return


CraterHermit::
# 22 "data/maps/GreatCraterBottom/scripts.pory"
	lock
# 23 "data/maps/GreatCraterBottom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 24 "data/maps/GreatCraterBottom/scripts.pory"
	applymovement 1, CraterHermit_Movement_0
# 26 "data/maps/GreatCraterBottom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_FLASH, CraterHermit_2
# 63 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_9
CraterHermit_1:
# 67 "data/maps/GreatCraterBottom/scripts.pory"
endcraterhermitscript:
# 68 "data/maps/GreatCraterBottom/scripts.pory"
	release
	return

CraterHermit_2:
# 27 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_0
# 30 "data/maps/GreatCraterBottom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, CraterHermit_Text_1, CraterHermit_Text_2
# 31 "data/maps/GreatCraterBottom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CraterHermit_6
CraterHermit_5:
# 36 "data/maps/GreatCraterBottom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CraterHermit_8
	goto CraterHermit_1

CraterHermit_6:
# 32 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_3
# 33 "data/maps/GreatCraterBottom/scripts.pory"
	goto endcraterhermitscript
	goto CraterHermit_5

CraterHermit_8:
# 37 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_4
# 38 "data/maps/GreatCraterBottom/scripts.pory"
	trainerbattle_no_intro TRAINER_HERMIT_CRATER, CraterHermit_Outro
# 41 "data/maps/GreatCraterBottom/scripts.pory"
	goto_if_unset hermitmovesexplained, CraterHermit_11
CraterHermit_10:
# 46 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_6
# 52 "data/maps/GreatCraterBottom/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 53 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_7
# 54 "data/maps/GreatCraterBottom/scripts.pory"
	setflag FLAG_BADGE02_GET
# 55 "data/maps/GreatCraterBottom/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 56 "data/maps/GreatCraterBottom/scripts.pory"
	giveitem ITEM_HM05
# 57 "data/maps/GreatCraterBottom/scripts.pory"
	setflag hermitmovesexplained
# 58 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_8
	goto CraterHermit_1

CraterHermit_11:
# 42 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_5
	goto CraterHermit_10


# 24 "data/maps/GreatCraterBottom/scripts.pory"
CraterHermit_Movement_0:
# 24 "data/maps/GreatCraterBottom/scripts.pory"
	face_player
	step_end

CraterBottomHole_Text_0:
# 18 "data/maps/GreatCraterBottom/scripts.pory"
	.string "A strange eye stares at you from the\n"
	.string "depths...$"

CraterHermit_Text_0:
# 27 "data/maps/GreatCraterBottom/scripts.pory"
	.string "You helped that woman return to the\n"
	.string "surface, did you? Commendable.\p"
	.string "The powerless should not venture into\n"
	.string "places like these.\p"
	.string "And with 'powerless'... I am speaking of\n"
	.string "you as well.$"

CraterHermit_Text_1:
# 30 "data/maps/GreatCraterBottom/scripts.pory"
	.string "Yes. I better leave$"

CraterHermit_Text_2:
# 30 "data/maps/GreatCraterBottom/scripts.pory"
	.string "I am not powerless$"

CraterHermit_Text_3:
# 32 "data/maps/GreatCraterBottom/scripts.pory"
	.string "Good. The first step to power is to\n"
	.string "recognize one's lack of it.$"

CraterHermit_Text_4:
# 37 "data/maps/GreatCraterBottom/scripts.pory"
	.string "You're not? Hmm... show me your power,\n"
	.string "then.$"

CraterHermit_Text_5:
# 42 "data/maps/GreatCraterBottom/scripts.pory"
	.string "I am one of the Eight Hermits. My\n"
	.string "brothers and I keep the lore of the\l"
	.string "Hermit Moves.\p"
	.string "We do not grant this lore just to\n"
	.string "anyone - in these times of strife, much\l"
	.string "damage can be done with them, for they\l"
	.string "have the power to shape the land. But\l"
	.string "you...$"

CraterHermit_Text_6:
# 46 "data/maps/GreatCraterBottom/scripts.pory"
	.string "You demonstrated kindness in saving\n"
	.string "that woman.\p"
	.string "And just now, you showed resolve when\n"
	.string "battling me in the darkness.\p"
	.string "Therefore, as one of the Eight Hermits,\n"
	.string "I deem you worthy to have these.$"

CraterHermit_Text_7:
# 53 "data/maps/GreatCraterBottom/scripts.pory"
	.string "Obtained the Light Token!$"

CraterHermit_Text_8:
# 58 "data/maps/GreatCraterBottom/scripts.pory"
	.string "If you gather all of the Hermit Moves\n"
	.string "from my 8 brothers... you may come back\l"
	.string "here.\p"
	.string "Only then I will grant you passage into\n"
	.string "the depths beyond.$"

CraterHermit_Text_9:
# 63 "data/maps/GreatCraterBottom/scripts.pory"
	.string "If you gather all of the Hermit Moves\n"
	.string "from my 8 brothers... you may come back\l"
	.string "here.\p"
	.string "Only then I will grant you passage into\n"
	.string "the depths beyond.\p"
	.string "Four of my brothers live here in the\n"
	.string "Rebel Zone, but the rest dwell further\l"
	.string "away.$"

CraterHermit_Outro::
# 71 "data/maps/GreatCraterBottom/scripts.pory"
	.string "Well done. Allow me to shed light onto\n a matter...$"
