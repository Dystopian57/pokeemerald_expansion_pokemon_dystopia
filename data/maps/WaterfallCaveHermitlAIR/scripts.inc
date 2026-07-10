# 1 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"

# 2 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
WaterfallCaveHermitlAIR_MapScripts::
# 3 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.byte 0

WaterfallHermit::
# 8 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	lock
# 9 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 10 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	applymovement 1, WaterfallHermit_Movement_0
# 12 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_WATERFALL, WaterfallHermit_2
# 69 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_14
WaterfallHermit_1:
# 72 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	release
	return

WaterfallHermit_2:
# 14 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_0
# 20 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_1
# 21 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, WaterfallHermit_Text_2, WaterfallHermit_Text_3, WaterfallHermit_Text_4, WaterfallHermit_Text_5
# 26 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaterfallHermit_6
WaterfallHermit_5:
# 30 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WaterfallHermit_9
WaterfallHermit_8:
# 34 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq WaterfallHermit_12
WaterfallHermit_11:
# 38 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq WaterfallHermit_15
WaterfallHermit_14:
# 42 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_10
# 44 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	trainerbattle_no_intro TRAINER_HERMIT_WATERFALL, WaterfallHermit_Outro
# 47 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	goto_if_unset hermitmovesexplained, WaterfallHermit_18
WaterfallHermit_17:
# 52 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_12
# 58 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 59 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_13
# 60 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	setflag FLAG_BADGE07_GET
# 61 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 62 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	giveitem ITEM_HM07
# 63 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	setflag hermitmovesexplained
	goto WaterfallHermit_1

WaterfallHermit_6:
# 27 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_6
	goto WaterfallHermit_5

WaterfallHermit_9:
# 31 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_7
	goto WaterfallHermit_8

WaterfallHermit_12:
# 35 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_8
	goto WaterfallHermit_11

WaterfallHermit_15:
# 39 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_9
	goto WaterfallHermit_14

WaterfallHermit_18:
# 48 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_11
	goto WaterfallHermit_17


# 10 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
WaterfallHermit_Movement_0:
# 10 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	face_player
	step_end

WaterfallHermit_Text_0:
# 14 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "Welcome, young traveller, to Waterfall\n"
	.string "Cave - a place who has been hidden for\l"
	.string "centuries.\p"
	.string "It used to be that things like nature\n"
	.string "and time were the shole shapers of our\l"
	.string "world.\p"
	.string "But now, the acts of humans - born from\n"
	.string "conflict, or in the name of progress -\l"
	.string "are threatening to become just as\l"
	.string "strong a changing force. Some say they\l"
	.string "will replace all others.$"

WaterfallHermit_Text_1:
# 20 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "Tell me - do you think this should be\n"
	.string "so?$"

WaterfallHermit_Text_2:
# 22 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "Yes. We will take care of the world$"

WaterfallHermit_Text_3:
# 23 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "No. We should stop changing the world$"

WaterfallHermit_Text_4:
# 24 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "All forces must coexist$"

WaterfallHermit_Text_5:
# 25 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "I don't know the answer$"

WaterfallHermit_Text_6:
# 27 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "So you have such faith in humanity...\n"
	.string "it's commendable.$"

WaterfallHermit_Text_7:
# 31 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "You seem to hold a great respect for\n"
	.string "nature. It's admirable.$"

WaterfallHermit_Text_8:
# 35 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "A compromise...? It is often the hardest\n"
	.string "path to achieve. You must possess\l"
	.string "great ambition.$"

WaterfallHermit_Text_9:
# 39 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "So you don't dare cast judgment on a\n"
	.string "matter of such magnitude. Many would\l"
	.string "say that is wise.$"

WaterfallHermit_Text_10:
# 42 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "You intrigue me. Let us do battle, so I\n"
	.string "may learn more about you.$"

WaterfallHermit_Text_11:
# 48 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "I am one of the Eight Hermits. My\n"
	.string "brothers and I keep the lore of the\l"
	.string "Hermit Moves.\p"
	.string "We do not grant this lore just to\n"
	.string "anyone - in these times of strife, much\l"
	.string "damage can be done with them. But you...$"

WaterfallHermit_Text_12:
# 52 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "You demonstrated a great level of\n"
	.string "instrospection in your answer. And you\l"
	.string "command your Pokémon with kindness...\p"
	.string "The kindness of one who knows the pain\n"
	.string "that people can bring.\p"
	.string "Therefore, as one of the Eight Hermits,\n"
	.string "I deem you worthy to have these.$"

WaterfallHermit_Text_13:
# 59 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "Obtained the Cascade Token$"

WaterfallHermit_Text_14:
# 69 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "I have nothing else to teach you. I wish\n"
	.string "you luck on your travels.$"

WaterfallHermit_Outro::
# 75 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "I see... a few parting words, if I may.$"
