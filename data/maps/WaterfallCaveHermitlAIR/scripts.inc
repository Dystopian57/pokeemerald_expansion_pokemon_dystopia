# 1 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"

# 2 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
WaterfallCaveHermitlAIR_MapScripts::
# 3 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.byte 0

WaterfalHermitLairItem::
# 9 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	lock
# 10 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	finditem ITEM_TM_RAIN_DANCE
# 13 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	removeobject 3
# 14 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	releaseall
	return


WaterfallHermit::
# 17 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	lock
# 18 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 19 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	applymovement 1, WaterfallHermit_Movement_0
# 21 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_WATERFALL, WaterfallHermit_2
# 82 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_14
WaterfallHermit_1:
# 85 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	release
	return

WaterfallHermit_2:
# 23 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_0
# 29 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_1
# 30 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, WaterfallHermit_Text_2, WaterfallHermit_Text_3, WaterfallHermit_Text_4, WaterfallHermit_Text_5
# 35 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaterfallHermit_6
WaterfallHermit_5:
# 39 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WaterfallHermit_9
WaterfallHermit_8:
# 43 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq WaterfallHermit_12
WaterfallHermit_11:
# 47 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq WaterfallHermit_15
WaterfallHermit_14:
# 51 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_10
# 53 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	trainerbattle_no_intro TRAINER_HERMIT_WATERFALL, WaterfallHermit_Outro
# 56 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	goto_if_unset hermitmovesexplained, WaterfallHermit_18
WaterfallHermit_17:
# 61 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_12
# 66 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	fadeoutbgm 1
# 67 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 69 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_13
# 70 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	fadenewbgm 1
# 71 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	playbgm MUS_LEMURIA, TRUE
# 72 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	setflag FLAG_BADGE07_GET
# 73 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 74 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	giveitem ITEM_HM07
# 75 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	setflag hermitmovesexplained
# 76 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_14
	goto WaterfallHermit_1

WaterfallHermit_6:
# 36 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_6
	goto WaterfallHermit_5

WaterfallHermit_9:
# 40 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_7
	goto WaterfallHermit_8

WaterfallHermit_12:
# 44 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_8
	goto WaterfallHermit_11

WaterfallHermit_15:
# 48 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_9
	goto WaterfallHermit_14

WaterfallHermit_18:
# 57 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermit_Text_11
	goto WaterfallHermit_17


WaterfallHermitLairBooks::
# 93 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	lock
# 94 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermitLairBooks_Text_0
# 95 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	release
	return


WaterfallHermitLairFireplace::
# 99 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	lock
# 100 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermitLairFireplace_Text_0
# 101 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	release
	return


WaterfallHermitLairDesk::
# 105 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	lock
# 106 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermitLairDesk_Text_0
# 107 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	release
	return


WaterfallHermitLairVase::
# 111 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	lock
# 112 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermitLairVase_Text_0
# 113 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	release
	return


WaterfallHermitLairRations::
# 117 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	lock
# 118 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermitLairRations_Text_0
# 119 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	release
	return


WaterfallHermitLairLogs::
# 123 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	lock
# 124 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermitLairLogs_Text_0
# 125 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	release
	return


WaterfallHermitLairBed::
# 129 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	lock
# 130 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	msgbox WaterfallHermitLairBed_Text_0
# 131 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	release
	return


# 19 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
WaterfallHermit_Movement_0:
# 19 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	face_player
	step_end

WaterfallHermit_Text_0:
# 23 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "Welcome, young traveller, to Waterfall\n"
	.string "Cave - a place who has been hidden for\l"
	.string "centuries.\p"
	.string "It used to be that things like nature\n"
	.string "and time were the sole shapers of\l"
	.string "nature.\p"
	.string "But now, the acts of humans - born from\n"
	.string "conflict, or in the name of progress -\l"
	.string "are threatening to become just as\l"
	.string "strong a changing force.\p"
	.string "Some say they will replace all others.$"

WaterfallHermit_Text_1:
# 29 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "Tell me - do you think this should be\n"
	.string "so?$"

WaterfallHermit_Text_2:
# 31 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "Yes. We will take care of the world$"

WaterfallHermit_Text_3:
# 32 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "No. We should stop changing the world$"

WaterfallHermit_Text_4:
# 33 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "All forces must coexist$"

WaterfallHermit_Text_5:
# 34 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "I don't know the answer$"

WaterfallHermit_Text_6:
# 36 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "So you have such faith in humanity...\n"
	.string "it's commendable.$"

WaterfallHermit_Text_7:
# 40 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "You seem to hold a great respect for\n"
	.string "nature. It's admirable.$"

WaterfallHermit_Text_8:
# 44 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "A compromise...? It is often the hardest\n"
	.string "path to achieve. You must possess\l"
	.string "great ambition.$"

WaterfallHermit_Text_9:
# 48 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "So you don't dare cast judgment on a\n"
	.string "matter of such magnitude. Many would\l"
	.string "say that is wise.$"

WaterfallHermit_Text_10:
# 51 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "You intrigue me. Let us do battle, so I\n"
	.string "may learn more about you.$"

WaterfallHermit_Text_11:
# 57 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "I am one of the Eight Hermits. My\n"
	.string "brothers and I keep the lore of the\l"
	.string "Hermit Moves.\p"
	.string "We do not grant this lore to just\n"
	.string "anyone - in these times of strife, much\l"
	.string "damage can be done with them. But you...$"

WaterfallHermit_Text_12:
# 61 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "You showed a great level of\n"
	.string "instrospection in your answer. And you\l"
	.string "command your Pokémon with kindness...\p"
	.string "The kindness of one who knows the pain\n"
	.string "that people can bring.\p"
	.string "Therefore, as one of the Eight Hermits,\n"
	.string "I deem you worthy to have these.$"

WaterfallHermit_Text_13:
# 69 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "Obtained the Cascade Token!$"

WaterfallHermit_Text_14:
# 76 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "I wish you luck on your travels.$"

WaterfallHermitLairBooks_Text_0:
# 94 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "It's mostly books about history and\n"
	.string "folklore.$"

WaterfallHermitLairFireplace_Text_0:
# 100 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "A rudimentary but well-made fireplace.$"

WaterfallHermitLairDesk_Text_0:
# 106 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "A sturdy stone desk. It seems to have\n"
	.string "been sculpted by a Pokémon.$"

WaterfallHermitLairVase_Text_0:
# 112 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "The vase is empty.$"

WaterfallHermitLairRations_Text_0:
# 118 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "It's some canned rations.$"

WaterfallHermitLairLogs_Text_0:
# 124 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "A careful stack of logs.$"

WaterfallHermitLairBed_Text_0:
# 130 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "A remarkably bare bed.$"

WaterfallHermit_Outro::
# 88 "data/maps/WaterfallCaveHermitlAIR/scripts.pory"
	.string "I see... a few parting words, if I may.$"
