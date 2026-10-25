# 1 "data/maps/Hermit_Tree/scripts.pory"


Hermit_Tree_MapScripts::
	.byte 0


Playertriestoleaverightafterresearcherdefeat::
# 12 "data/maps/Hermit_Tree/scripts.pory"
	lock
# 14 "data/maps/Hermit_Tree/scripts.pory"
	applymovement 1, Playertriestoleaverightafterresearcherdefeat_Movement_0
# 16 "data/maps/Hermit_Tree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Playertriestoleaverightafterresearcherdefeat_Movement_1
# 17 "data/maps/Hermit_Tree/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 19 "data/maps/Hermit_Tree/scripts.pory"
	msgbox Playertriestoleaverightafterresearcherdefeat_Text_0
# 22 "data/maps/Hermit_Tree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Playertriestoleaverightafterresearcherdefeat_Movement_2
# 23 "data/maps/Hermit_Tree/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 24 "data/maps/Hermit_Tree/scripts.pory"
	goto afterhermittellstocome
	return


SanctumHermitIdle::
# 29 "data/maps/Hermit_Tree/scripts.pory"
	lock
# 30 "data/maps/Hermit_Tree/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 31 "data/maps/Hermit_Tree/scripts.pory"
	applymovement 1, SanctumHermitIdle_Movement_0
# 32 "data/maps/Hermit_Tree/scripts.pory"
	waitmovement 1
# 34 "data/maps/Hermit_Tree/scripts.pory"
	compare VAR_102_SCIENTIST, 4
	goto_if_eq SanctumHermitIdle_2
SanctumHermitIdle_1:
# 49 "data/maps/Hermit_Tree/scripts.pory"
	compare VAR_102_SCIENTIST, 5
	goto_if_eq SanctumHermitIdle_5
# 61 "data/maps/Hermit_Tree/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, SanctumHermitIdle_11
# 120 "data/maps/Hermit_Tree/scripts.pory"
	compare VAR_102_SCIENTIST, 10
	goto_if_eq SanctumHermitIdle_18
SanctumHermitIdle_17:
# 122 "data/maps/Hermit_Tree/scripts.pory"
	compare VAR_102_SCIENTIST, 11
	goto_if_eq SanctumHermitIdle_24
SanctumHermitIdle_23:
# 126 "data/maps/Hermit_Tree/scripts.pory"
	compare VAR_HERMIT_DEFEATED_COUNT, 1
	goto_if_eq SanctumHermitIdle_30
SanctumHermitIdle_29:
# 131 "data/maps/Hermit_Tree/scripts.pory"
	compare VAR_HERMIT_DEFEATED_COUNT, 2
	goto_if_eq SanctumHermitIdle_36
SanctumHermitIdle_35:
# 136 "data/maps/Hermit_Tree/scripts.pory"
	compare VAR_HERMIT_DEFEATED_COUNT, 3
	goto_if_eq SanctumHermitIdle_42
SanctumHermitIdle_41:
# 143 "data/maps/Hermit_Tree/scripts.pory"
	compare VAR_HERMIT_DEFEATED_COUNT, 4
	goto_if_eq SanctumHermitIdle_45
SanctumHermitIdle_44:
# 147 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_23
SanctumHermitIdle_4:
# 152 "data/maps/Hermit_Tree/scripts.pory"
endofsanctumhermitidle:
# 153 "data/maps/Hermit_Tree/scripts.pory"
	applymovement 1, SanctumHermitIdle_Movement_1
# 154 "data/maps/Hermit_Tree/scripts.pory"
	waitmovement 1
# 155 "data/maps/Hermit_Tree/scripts.pory"
	release
	return

SanctumHermitIdle_2:
# 35 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_0
# 36 "data/maps/Hermit_Tree/scripts.pory"
afterhermittellstocome:
# 37 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_1
# 41 "data/maps/Hermit_Tree/scripts.pory"
	goto_if_unset receivedcuthm, SanctumHermitIdle_9
SanctumHermitIdle_8:
# 46 "data/maps/Hermit_Tree/scripts.pory"
	setvar VAR_102_SCIENTIST, 5
# 47 "data/maps/Hermit_Tree/scripts.pory"
	goto endofsanctumhermitidle
	goto SanctumHermitIdle_1

SanctumHermitIdle_5:
# 51 "data/maps/Hermit_Tree/scripts.pory"
	lock
# 52 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_3
# 54 "data/maps/Hermit_Tree/scripts.pory"
	goto endofsanctumhermitidle
	goto SanctumHermitIdle_4

SanctumHermitIdle_9:
# 43 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_2
	goto SanctumHermitIdle_8

SanctumHermitIdle_11:
# 65 "data/maps/Hermit_Tree/scripts.pory"
	compare VAR_102_SCIENTIST, 10
	goto_if_eq SanctumHermitIdle_15
SanctumHermitIdle_14:
# 73 "data/maps/Hermit_Tree/scripts.pory"
	compare VAR_102_SCIENTIST, 11
	goto_if_eq SanctumHermitIdle_21
SanctumHermitIdle_20:
# 81 "data/maps/Hermit_Tree/scripts.pory"
	goto_if_unset hermitmovesexplained, SanctumHermitIdle_27
SanctumHermitIdle_26:
# 86 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_7
# 91 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_8
# 93 "data/maps/Hermit_Tree/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SanctumHermitIdle_Text_9, SanctumHermitIdle_Text_10
# 94 "data/maps/Hermit_Tree/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SanctumHermitIdle_33
SanctumHermitIdle_32:
# 98 "data/maps/Hermit_Tree/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SanctumHermitIdle_39
SanctumHermitIdle_38:
# 102 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_13
# 105 "data/maps/Hermit_Tree/scripts.pory"
	trainerbattle_no_intro TRAINER_PAXTON, TreeHermit_Outro
# 107 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_14
# 108 "data/maps/Hermit_Tree/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 109 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_15
# 110 "data/maps/Hermit_Tree/scripts.pory"
	setflag FLAG_BADGE01_GET
# 111 "data/maps/Hermit_Tree/scripts.pory"
	giveitem ITEM_HM01
# 112 "data/maps/Hermit_Tree/scripts.pory"
	setflag hermitmovesexplained
# 113 "data/maps/Hermit_Tree/scripts.pory"
	addvar VAR_HERMIT_DEFEATED_COUNT, + 1
# 114 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_16
	goto SanctumHermitIdle_4

SanctumHermitIdle_15:
# 67 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_4
	goto SanctumHermitIdle_14

SanctumHermitIdle_18:
# 121 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_17
	goto SanctumHermitIdle_17

SanctumHermitIdle_21:
# 75 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_5
	goto SanctumHermitIdle_20

SanctumHermitIdle_24:
# 123 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_18
	goto SanctumHermitIdle_23

SanctumHermitIdle_27:
# 82 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_6
	goto SanctumHermitIdle_26

SanctumHermitIdle_30:
# 127 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_19
	goto SanctumHermitIdle_29

SanctumHermitIdle_33:
# 95 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_11
	goto SanctumHermitIdle_32

SanctumHermitIdle_36:
# 132 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_20
	goto SanctumHermitIdle_35

SanctumHermitIdle_39:
# 99 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_12
	goto SanctumHermitIdle_38

SanctumHermitIdle_42:
# 137 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_21
	goto SanctumHermitIdle_41

SanctumHermitIdle_45:
# 144 "data/maps/Hermit_Tree/scripts.pory"
	msgbox SanctumHermitIdle_Text_22
	goto SanctumHermitIdle_44


HermitTreeFlowers::
# 164 "data/maps/Hermit_Tree/scripts.pory"
	lock
# 165 "data/maps/Hermit_Tree/scripts.pory"
	msgbox HermitTreeFlowers_Text_0
# 166 "data/maps/Hermit_Tree/scripts.pory"
	release
	return


HermitTreeTriTree::
# 170 "data/maps/Hermit_Tree/scripts.pory"
	lock
# 171 "data/maps/Hermit_Tree/scripts.pory"
	msgbox HermitTreeTriTree_Text_0
# 172 "data/maps/Hermit_Tree/scripts.pory"
	release
	return


HermitTreeLushTree::
# 176 "data/maps/Hermit_Tree/scripts.pory"
	lock
# 177 "data/maps/Hermit_Tree/scripts.pory"
	msgbox HermitTreeLushTree_Text_0
# 178 "data/maps/Hermit_Tree/scripts.pory"
	release
	return


HermitTreePalmTree::
# 182 "data/maps/Hermit_Tree/scripts.pory"
	lock
# 183 "data/maps/Hermit_Tree/scripts.pory"
	msgbox HermitTreePalmTree_Text_0
# 184 "data/maps/Hermit_Tree/scripts.pory"
	release
	return


HermitTreeLeafDesk::
# 188 "data/maps/Hermit_Tree/scripts.pory"
	lock
# 189 "data/maps/Hermit_Tree/scripts.pory"
	msgbox HermitTreeLeafDesk_Text_0
# 190 "data/maps/Hermit_Tree/scripts.pory"
	release
	return


HermitTreeTrunk::
# 194 "data/maps/Hermit_Tree/scripts.pory"
	lock
# 195 "data/maps/Hermit_Tree/scripts.pory"
	msgbox HermitTreeTrunk_Text_0
# 197 "data/maps/Hermit_Tree/scripts.pory"
	release
	return


HermitTreeItem::
# 201 "data/maps/Hermit_Tree/scripts.pory"
	lock
# 202 "data/maps/Hermit_Tree/scripts.pory"
	finditem ITEM_TM_SUNNY_DAY
# 203 "data/maps/Hermit_Tree/scripts.pory"
	releaseall
	return


# 14 "data/maps/Hermit_Tree/scripts.pory"
Playertriestoleaverightafterresearcherdefeat_Movement_0:
# 14 "data/maps/Hermit_Tree/scripts.pory"
	walk_in_place_down
	step_end

# 16 "data/maps/Hermit_Tree/scripts.pory"
Playertriestoleaverightafterresearcherdefeat_Movement_1:
# 16 "data/maps/Hermit_Tree/scripts.pory"
	walk_in_place_up
	step_end

# 22 "data/maps/Hermit_Tree/scripts.pory"
Playertriestoleaverightafterresearcherdefeat_Movement_2:
# 22 "data/maps/Hermit_Tree/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/Hermit_Tree/scripts.pory"
SanctumHermitIdle_Movement_0:
# 31 "data/maps/Hermit_Tree/scripts.pory"
	face_player
	step_end

# 153 "data/maps/Hermit_Tree/scripts.pory"
SanctumHermitIdle_Movement_1:
# 153 "data/maps/Hermit_Tree/scripts.pory"
	face_down
	step_end

Playertriestoleaverightafterresearcherdefeat_Text_0:
# 19 "data/maps/Hermit_Tree/scripts.pory"
	.string "Leaving so soon? You may be a bit\n"
	.string "disoriented still...\p"
	.string "Please, let's exchange a few words.$"

SanctumHermitIdle_Text_0:
# 35 "data/maps/Hermit_Tree/scripts.pory"
	.string "Don't alarm yourself. You are safe here.$"

SanctumHermitIdle_Text_1:
# 37 "data/maps/Hermit_Tree/scripts.pory"
	.string "You may not remember, since you were in\n"
	.string "a panic just now...\p"
	.string "But I restored your Pokémon back to\n"
	.string "health.\p"
	.string "I heard your talk with the man outside...\p"
	.string "You have a difficult choice ahead of\n"
	.string "you.\p"
	.string "Will you side with Pokémon, or with\n"
	.string "people...?$"

SanctumHermitIdle_Text_2:
# 43 "data/maps/Hermit_Tree/scripts.pory"
	.string "Whatever your choice, come back after\n"
	.string "you make it.$"

SanctumHermitIdle_Text_3:
# 52 "data/maps/Hermit_Tree/scripts.pory"
	.string "I have much to tell you, you who have\n"
	.string "found this place...\p"
	.string "But I believe you should speak with\n"
	.string "that gentleman outside first.\p"
	.string "I fear he may come in if you do not, and\n"
	.string "do something rash.$"

SanctumHermitIdle_Text_4:
# 67 "data/maps/Hermit_Tree/scripts.pory"
	.string "Greetings, traveller. I witnessed you\n"
	.string "helping that researcher before...\p"
	.string "Some would deem you a hero for it.\n"
	.string "Others would regard you as selfish.\p"
	.string "Me, I wish to know more about you\n"
	.string "before I cast such judgement.\p"
	.string "But allow me to introduce myself first...$"

SanctumHermitIdle_Text_5:
# 75 "data/maps/Hermit_Tree/scripts.pory"
	.string "Greetings, traveller. I witnessed you\n"
	.string "refusing that researcher before...\p"
	.string "Some would deem you a hero for it.\n"
	.string "Others would regard you as selfish.\p"
	.string "Me, I wish to know more about you\n"
	.string "before I cast such judgement.\p"
	.string "But allow me to introduce myself first...$"

SanctumHermitIdle_Text_6:
# 82 "data/maps/Hermit_Tree/scripts.pory"
	.string "I am one of the Eight Hermits. My\n"
	.string "brothers and I keep the lore of the\l"
	.string "Hermit Moves.\p"
	.string "We do not grant this lore just to\n"
	.string "anyone - in these times of strife, much\l"
	.string "damage can be done with them, for they\l"
	.string "have the power to shape the land.$"

SanctumHermitIdle_Text_7:
# 86 "data/maps/Hermit_Tree/scripts.pory"
	.string "Let me pose a dilemma to you...\p"
	.string "Your Pokémon has been gravely injured\n"
	.string "in a remote, thick forest.\p"
	.string "Your other Pokémon can Cut trees, and\n"
	.string "open a path to reach the Pokémon\l"
	.string "Center quickly.\p"
	.string "You may instead spare the forest, and\n"
	.string "go around it.\p"
	.string "But your Pokémon may not survive such\n"
	.string "lengthy journey.$"

SanctumHermitIdle_Text_8:
# 91 "data/maps/Hermit_Tree/scripts.pory"
	.string "What would you do?$"

SanctumHermitIdle_Text_9:
# 93 "data/maps/Hermit_Tree/scripts.pory"
	.string "Cut through the forest$"

SanctumHermitIdle_Text_10:
# 93 "data/maps/Hermit_Tree/scripts.pory"
	.string "Go around the forest$"

SanctumHermitIdle_Text_11:
# 95 "data/maps/Hermit_Tree/scripts.pory"
	.string "I see... you would do all you can to save\n"
	.string "your companion.\p"
	.string "Even if that means destroying the\n"
	.string "homes of other Pokémon, and\l"
	.string "potentially causing their death.$"

SanctumHermitIdle_Text_12:
# 99 "data/maps/Hermit_Tree/scripts.pory"
	.string "I see... so you would spare nature and\n"
	.string "the habitats of other Pokémon.\p"
	.string "Even if that means further risking your\n"
	.string "Pokémon's life.$"

SanctumHermitIdle_Text_13:
# 102 "data/maps/Hermit_Tree/scripts.pory"
	.string "I glimpse the nature of your\n"
	.string "relationship with Pokémon.\p"
	.string "But let me learn some more, by seeing\n"
	.string "how you battle with them.$"

SanctumHermitIdle_Text_14:
# 107 "data/maps/Hermit_Tree/scripts.pory"
	.string "I deem you worthy of having this.$"

SanctumHermitIdle_Text_15:
# 109 "data/maps/Hermit_Tree/scripts.pory"
	.string "Obtained the Leaf Token!$"

SanctumHermitIdle_Text_16:
# 114 "data/maps/Hermit_Tree/scripts.pory"
	.string "If you gather all of the Hermit Moves\n"
	.string "from my 7 brothers... come back here.\p"
	.string "I will then guide you to our master...\n"
	.string "the Far Seer.$"

SanctumHermitIdle_Text_17:
# 121 "data/maps/Hermit_Tree/scripts.pory"
	.string "Welcome again. How many Hermit Moves\n"
	.string "have you acquired thus far?$"

SanctumHermitIdle_Text_18:
# 123 "data/maps/Hermit_Tree/scripts.pory"
	.string "Welcome again. How is little Wartz\n"
	.string "doing? But more importantly...\p"
	.string "How many Hermit Moves have you\n"
	.string "acquired thus far?$"

SanctumHermitIdle_Text_19:
# 127 "data/maps/Hermit_Tree/scripts.pory"
	.string "Only mine? Well, I daresay you should\n"
	.string "stray more from the beaten path...\p"
	.string "Four of my brothers live here in the\n"
	.string "{COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}, while the rest dwell further\l"
	.string "away.$"

SanctumHermitIdle_Text_20:
# 132 "data/maps/Hermit_Tree/scripts.pory"
	.string "Only two? Well, all great journies have a\n"
	.string "modest start.\p"
	.string "Four of my brothers live here in the\n"
	.string "{COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}, while the rest dwell further\l"
	.string "away.$"

SanctumHermitIdle_Text_21:
# 137 "data/maps/Hermit_Tree/scripts.pory"
	.string "Three? I see you are getting to know\n"
	.string "our family.\p"
	.string "You have probably noticed the striking\n"
	.string "family resemblance...\p"
	.string "Some say it is rather unnatural - ho ho\n"
	.string "ho! At any rate...\p"
	.string "Four of my brothers live here in the\n"
	.string "{COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}, while the rest dwell further\l"
	.string "away.$"

SanctumHermitIdle_Text_22:
# 144 "data/maps/Hermit_Tree/scripts.pory"
	.string "Four? You are not only a finder of\n"
	.string "secret places, but a great trainer\l"
	.string "besides, to have vanquished half of us.$"

SanctumHermitIdle_Text_23:
# 147 "data/maps/Hermit_Tree/scripts.pory"
	.string "When you obtain all of the Hermit Moves,\n"
	.string "we will deem you worthy of meeting our\l"
	.string "master, the Far Seer.$"

HermitTreeFlowers_Text_0:
# 165 "data/maps/Hermit_Tree/scripts.pory"
	.string "Flowers like these are rare nowadays...$"

HermitTreeTriTree_Text_0:
# 171 "data/maps/Hermit_Tree/scripts.pory"
	.string "It's a rare tree$"

HermitTreeLushTree_Text_0:
# 177 "data/maps/Hermit_Tree/scripts.pory"
	.string "An oak tree. It may grow into the size\n"
	.string "of the one that forms this place.$"

HermitTreePalmTree_Text_0:
# 183 "data/maps/Hermit_Tree/scripts.pory"
	.string "It's a very healthy palmtree$"

HermitTreeLeafDesk_Text_0:
# 189 "data/maps/Hermit_Tree/scripts.pory"
	.string "A table with a soft foliage cover. Feels\n"
	.string "good to the touch.$"

HermitTreeTrunk_Text_0:
# 195 "data/maps/Hermit_Tree/scripts.pory"
	.string "It's part of the huge trunk of the tree.\p"
	.string "Living proof that nature provides.$"

TreeHermit_Outro::
# 159 "data/maps/Hermit_Tree/scripts.pory"
	.string "This has been as revealing as your \nanswer...$"
