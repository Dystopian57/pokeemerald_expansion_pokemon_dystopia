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
# 50 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_9
CraterHermit_1:
# 54 "data/maps/GreatCraterBottom/scripts.pory"
endcraterhermitscript:
# 55 "data/maps/GreatCraterBottom/scripts.pory"
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
# 23 "data/maps/GreatCraterBottom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CraterHermit_8
	goto CraterHermit_1

CraterHermit_6:
# 19 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_3
# 20 "data/maps/GreatCraterBottom/scripts.pory"
	goto endcraterhermitscript
	goto CraterHermit_5

CraterHermit_8:
# 24 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_4
# 25 "data/maps/GreatCraterBottom/scripts.pory"
	trainerbattle_no_intro TRAINER_HERMIT_CRATER, CraterHermit_Outro
# 28 "data/maps/GreatCraterBottom/scripts.pory"
	goto_if_unset hermitmovesexplained, CraterHermit_11
CraterHermit_10:
# 33 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_6
# 39 "data/maps/GreatCraterBottom/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 40 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_7
# 41 "data/maps/GreatCraterBottom/scripts.pory"
	setflag FLAG_BADGE02_GET
# 42 "data/maps/GreatCraterBottom/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 43 "data/maps/GreatCraterBottom/scripts.pory"
	giveitem ITEM_HM05
# 44 "data/maps/GreatCraterBottom/scripts.pory"
	setflag hermitmovesexplained
# 45 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_8
	goto CraterHermit_1

CraterHermit_11:
# 29 "data/maps/GreatCraterBottom/scripts.pory"
	msgbox CraterHermit_Text_5
	goto CraterHermit_10


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
# 24 "data/maps/GreatCraterBottom/scripts.pory"
	.string "You're not? Hmm... show me your power,\n"
	.string "then.$"

CraterHermit_Text_5:
# 29 "data/maps/GreatCraterBottom/scripts.pory"
	.string "I am one of the Eight Hermits. My\n"
	.string "brothers and I keep the lore of the\l"
	.string "Hermit Moves.\p"
	.string "We do not grant this lore just to\n"
	.string "anyone - in these times of strife, much\l"
	.string "damage can be done with them. But you...$"

CraterHermit_Text_6:
# 33 "data/maps/GreatCraterBottom/scripts.pory"
	.string "You demonstrated kindness in saving\n"
	.string "that woman.\p"
	.string "And just now, you showed resolve when\n"
	.string "battling me in the darkness.\p"
	.string "Therefore, as one of the Eight Hermits,\n"
	.string "I deem you worthy to have these.$"

CraterHermit_Text_7:
# 40 "data/maps/GreatCraterBottom/scripts.pory"
	.string "Obtained the Light Token!$"

CraterHermit_Text_8:
# 45 "data/maps/GreatCraterBottom/scripts.pory"
	.string "If you gather all of the Hermit Moves\n"
	.string "from my 8 brothers... you may come back\l"
	.string "here.\p"
	.string "Only then I will grant you passage into\n"
	.string "the depths beyond.$"

CraterHermit_Text_9:
# 50 "data/maps/GreatCraterBottom/scripts.pory"
	.string "If you gather all of the Hermit Moves\n"
	.string "from my 8 brothers... you may come back\l"
	.string "here.\p"
	.string "Only then I will grant you passage into\n"
	.string "the depths beyond.\p"
	.string "Four of my brothers live here in the\n"
	.string "Rebel Zone, but the rest dwell further\l"
	.string "away.$"

CraterHermit_Outro::
# 58 "data/maps/GreatCraterBottom/scripts.pory"
	.string "Well done. Allow me to shed light onto\n a matter...$"
