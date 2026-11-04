# 1 "data/maps/JimmyEggStore/scripts.pory"

# 2 "data/maps/JimmyEggStore/scripts.pory"
JimmyEggStore_MapScripts::
# 3 "data/maps/JimmyEggStore/scripts.pory"
	.byte 0

JimmyMcGligarSewersIdle::
# 8 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyMcGligarSewersIdle_3
JimmyMcGligarSewersIdle_1:
# 30 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyMcGligarSewersIdle_8
JimmyMcGligarSewersIdle_6:
# 34 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq JimmyMcGligarSewersIdle_17
JimmyMcGligarSewersIdle_14:
# 38 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 2
	goto_if_eq JimmyMcGligarSewersIdle_26
JimmyMcGligarSewersIdle_23:
# 42 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 2
	goto_if_eq JimmyMcGligarSewersIdle_33
JimmyMcGligarSewersIdle_30:
# 45 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 3
	goto_if_eq JimmyMcGligarSewersIdle_37
	return

JimmyMcGligarSewersIdle_2:
# 12 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_0
# 15 "data/maps/JimmyEggStore/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, JimmyMcGligarSewersIdle_Text_1, JimmyMcGligarSewersIdle_Text_2
# 17 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JimmyMcGligarSewersIdle_12
JimmyMcGligarSewersIdle_11:
# 19 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JimmyMcGligarSewersIdle_21
	goto JimmyMcGligarSewersIdle_1

JimmyMcGligarSewersIdle_3:
# 8 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_unset conartistaskeddistract, JimmyMcGligarSewersIdle_2
	goto JimmyMcGligarSewersIdle_1

JimmyMcGligarSewersIdle_7:
	goto JimmyMcGligarSewersIdle_6

JimmyMcGligarSewersIdle_8:
# 30 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set conartistaskeddistract, JimmyMcGligarSewersIdle_7
	goto JimmyMcGligarSewersIdle_6

JimmyMcGligarSewersIdle_12:
	goto JimmyMcGligarSewersIdle_11

JimmyMcGligarSewersIdle_15:
	goto JimmyMcGligarSewersIdle_14

JimmyMcGligarSewersIdle_16:
# 34 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set ! betrayedconcordconartist, JimmyMcGligarSewersIdle_15
	goto JimmyMcGligarSewersIdle_14

JimmyMcGligarSewersIdle_17:
# 34 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set conartistescaped, JimmyMcGligarSewersIdle_16
	goto JimmyMcGligarSewersIdle_14

JimmyMcGligarSewersIdle_21:
# 20 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_3
	goto JimmyMcGligarSewersIdle_1

JimmyMcGligarSewersIdle_24:
	goto JimmyMcGligarSewersIdle_23

JimmyMcGligarSewersIdle_25:
# 38 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set helpedconcordconartist, JimmyMcGligarSewersIdle_24
	goto JimmyMcGligarSewersIdle_23

JimmyMcGligarSewersIdle_26:
# 38 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set conartistescaped, JimmyMcGligarSewersIdle_25
	goto JimmyMcGligarSewersIdle_23

JimmyMcGligarSewersIdle_31:
	goto JimmyMcGligarSewersIdle_30

JimmyMcGligarSewersIdle_32:
# 42 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set betrayedconcordconartist, JimmyMcGligarSewersIdle_31
	goto JimmyMcGligarSewersIdle_30

JimmyMcGligarSewersIdle_33:
# 42 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set conartistescaped, JimmyMcGligarSewersIdle_32
	goto JimmyMcGligarSewersIdle_30

JimmyMcGligarSewersIdle_37:
	return


JimmyMcGligarSewersIdle_Text_0:
# 12 "data/maps/JimmyEggStore/scripts.pory"
	.string "Welcome to Jimmy's Egg Store - where\n"
	.string "happiness hatches!\p"
	.string "What can I do for you?$"

JimmyMcGligarSewersIdle_Text_1:
# 15 "data/maps/JimmyEggStore/scripts.pory"
	.string "Buy an egg$"

JimmyMcGligarSewersIdle_Text_2:
# 15 "data/maps/JimmyEggStore/scripts.pory"
	.string "Explanation$"

JimmyMcGligarSewersIdle_Text_3:
# 20 "data/maps/JimmyEggStore/scripts.pory"
	.string "Why, I think it's rather\n"
	.string "self-explanatory - but I'm happy to\l"
	.string "tell you a bit more.\p"
	.string "These days, only Devon Breeders are\n"
	.string "legally allowed to breed Pokémon.\l"
	.string "Anyone else who gets caught doing it...\p"
	.string "It's a heavy fine in the best of cases,\n"
	.string "and Dewford Prison for the worst.\p"
	.string "Devon Co. only want Safemon inhabiting\n"
	.string "routes, and regular Pokémon\l"
	.string "reproduction goes against their goal.\p"
	.string "But you know Pokémon - and hell, humans\n"
	.string "too. They're going to screw no matter\l"
	.string "what.$"
