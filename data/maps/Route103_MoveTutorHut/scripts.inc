# 1 "data/maps/Route103_MoveTutorHut/scripts.pory"

# 2 "data/maps/Route103_MoveTutorHut/scripts.pory"
Route103_MoveTutorHut_MapScripts::
# 3 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.byte 0

MoveTutor103Night::
# 12 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 13 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 14 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_M_SNORE
# 15 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Night_Text_0
# 17 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Night_Text_1
	return


MoveTutor103::
# 24 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 25 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 26 "data/maps/Route103_MoveTutorHut/scripts.pory"
	applymovement 1, MoveTutor103_Movement_0
# 28 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_unset movetutorintro, MoveTutor103_1
# 132 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto movetutorchoice
	return

MoveTutor103_1:
# 30 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_0
# 37 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag movetutorintro
# 38 "data/maps/Route103_MoveTutorHut/scripts.pory"
movetutorchoice:
# 39 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_1
# 41 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_2, MoveTutor103_Text_3, MoveTutor103_Text_4
# 43 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_5
MoveTutor103_4:
# 90 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_8
MoveTutor103_7:
# 120 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_14
MoveTutor103_13:
# 126 "data/maps/Route103_MoveTutorHut/scripts.pory"
endtutorscript:
# 127 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_14
# 128 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
# 129 "data/maps/Route103_MoveTutorHut/scripts.pory"
exittutorscript:
# 130 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

MoveTutor103_5:
# 45 "data/maps/Route103_MoveTutorHut/scripts.pory"
	checkmoney 100
# 46 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MoveTutor103_11
MoveTutor103_10:
# 83 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor103_19
	goto MoveTutor103_4

MoveTutor103_8:
# 92 "data/maps/Route103_MoveTutorHut/scripts.pory"
	checkmoney 100
# 93 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MoveTutor103_17
MoveTutor103_16:
# 111 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor103_24
	goto MoveTutor103_7

MoveTutor103_11:
# 48 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_5
# 49 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_6, MoveTutor103_Text_7, MoveTutor103_Text_8
# 50 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_22
MoveTutor103_21:
# 68 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_27
MoveTutor103_26:
# 75 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_29
	goto MoveTutor103_10

MoveTutor103_14:
# 122 "data/maps/Route103_MoveTutorHut/scripts.pory"
canceltutor:
# 123 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_13
# 124 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto exittutorscript
	goto MoveTutor103_13

MoveTutor103_17:
# 95 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 96 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveRelearner
# 97 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 98 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special IsSelectedMonEgg
# 100 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CantTeachEgg
# 101 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8005, 0, NoMoveToTeachMon
# 102 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 103 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 105 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 106 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 108 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_16

MoveTutor103_19:
# 84 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 85 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 87 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
	goto MoveTutor103_4

MoveTutor103_22:
# 51 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_9
# 52 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 53 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 54 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 55 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 59 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 60 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 61 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 62 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 63 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 64 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_21

MoveTutor103_24:
# 112 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 113 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 115 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
	goto MoveTutor103_7

MoveTutor103_27:
# 69 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_9
# 70 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 71 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 72 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_26

MoveTutor103_29:
# 76 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_9
# 77 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 78 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 79 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto exittutorscript
	goto MoveTutor103_10


NoMoveToTeachMon::
# 137 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox NoMoveToTeachMon_Text_0
	return


CantTeachEgg::
# 141 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox CantTeachEgg_Text_0
# 143 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return


MoveTutor103Sink::
# 147 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 148 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Sink_Text_0
# 149 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Bookshelf::
# 152 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 153 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Bookshelf_Text_0
# 154 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Drawer::
# 157 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 158 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Drawer_Text_0
# 159 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Wardrobe::
# 162 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 163 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Wardrobe_Text_0
# 164 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103BookPile::
# 167 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 168 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103BookPile_Text_0
# 169 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Kotatsu::
# 172 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 173 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Kotatsu_Text_0
# 174 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103OpenBox::
# 177 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 178 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103OpenBox_Text_0
# 180 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103SealedBox::
# 183 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 184 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103SealedBox_Text_0
# 185 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103ToolBox::
# 188 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 189 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103ToolBox_Text_0
# 190 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


# 26 "data/maps/Route103_MoveTutorHut/scripts.pory"
MoveTutor103_Movement_0:
# 26 "data/maps/Route103_MoveTutorHut/scripts.pory"
	face_player
	step_end

MoveTutor103Night_Text_0:
# 15 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "ZZZZZZ...$"

MoveTutor103Night_Text_1:
# 17 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}He is fast asleep. It would be better to\n"
	.string "return during daytime.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

MoveTutor103_Text_0:
# 30 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Oh, hello. I don't get many visitors - I'm\n"
	.string "sorry about the mess.\p"
	.string "My name is Colton, and I'm a Move Tutor -\n"
	.string "or used to be...\p"
	.string "Devon began a campaign to discredit\n"
	.string "Move Tutors, on account of us teaching\l"
	.string "'dangerous moves' to Pokémon.\p"
	.string "People bought into it, and began to\n"
	.string "treat us like criminals. It's ridiculous.\p"
	.string "I'm sorry... you didn't come here to\n"
	.string "listen to my rant.\p"
	.string "You want to teach some moves to your\n"
	.string "Pokémon, right? Or have them remember\l"
	.string "old ones.\p"
	.string "I'll do it for only 100¥ per move. I used\n"
	.string "to collect Heart Scales, but a man\l"
	.string "needs to eat. So...$"

MoveTutor103_Text_1:
# 39 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Do any of your Pokémon need teaching?$"

MoveTutor103_Text_2:
# 41 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Tutor a move$"

MoveTutor103_Text_3:
# 41 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Relearn a move$"

MoveTutor103_Text_4:
# 41 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Nevermind$"

MoveTutor103_Text_5:
# 48 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I could teach your Pokémon these\n"
	.string "moves.$"

MoveTutor103_Text_6:
# 49 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Swagger$"

MoveTutor103_Text_7:
# 49 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Move 2$"

MoveTutor103_Text_8:
# 49 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Move 3$"

MoveTutor103_Text_9:
# 51 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I teach?$"

MoveTutor103_Text_10:
# 60 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Very well. I'll collect your 100¥ now...$"

MoveTutor103_Text_11:
# 85 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I'm sorry... you seem a bit short on the\n"
	.string "100¥. We'll have to do this later.$"

MoveTutor103_Text_12:
# 95 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I have\n"
	.string "remember a move?$"

MoveTutor103_Text_13:
# 123 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Changed your mind? Well, I'll be here if\n"
	.string "you need me.$"

MoveTutor103_Text_14:
# 127 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Come back if you need my skills some\n"
	.string "other time.$"

NoMoveToTeachMon_Text_0:
# 137 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "This Pokémon... I don't think it has\n"
	.string "forgotten any moves. Ah, to be young\l"
	.string "again...$"

CantTeachEgg_Text_0:
# 141 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "That looks like a healthy egg... come\n"
	.string "back when it's hatched, and I may have\l"
	.string "some moves to teach it.$"

MoveTutor103Sink_Text_0:
# 148 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's just a regular sink.$"

MoveTutor103Bookshelf_Text_0:
# 153 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's full of books about Pokémon\n"
	.string "learning patterns.$"

MoveTutor103Drawer_Text_0:
# 158 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It looks like a regular drawer. I should\n"
	.string "leave this alone.$"

MoveTutor103Wardrobe_Text_0:
# 163 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a fitted wardrobe. There's no real\n"
	.string "reason to open it.$"

MoveTutor103BookPile_Text_0:
# 168 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a pile of books about Pokémon\n"
	.string "moves.$"

MoveTutor103Kotatsu_Text_0:
# 173 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A cozy kotatsu. It makes one want to\n"
	.string "stay home.$"

MoveTutor103OpenBox_Text_0:
# 178 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The label on the box reads 'to throw\n"
	.string "away'. It should be fine to peek...$"

MoveTutor103SealedBox_Text_0:
# 184 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

MoveTutor103ToolBox_Text_0:
# 189 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A toolbox full of tools worn with use.$"
