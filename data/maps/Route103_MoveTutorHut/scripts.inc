# 1 "data/maps/Route103_MoveTutorHut/scripts.pory"

# 2 "data/maps/Route103_MoveTutorHut/scripts.pory"
Route103_MoveTutorHut_MapScripts::
# 3 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.byte 0

MoveTutor103::
# 10 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 11 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 12 "data/maps/Route103_MoveTutorHut/scripts.pory"
	applymovement 1, MoveTutor103_Movement_0
# 13 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_0
# 21 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_1
# 23 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_2, MoveTutor103_Text_3, MoveTutor103_Text_4
# 25 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_2
MoveTutor103_1:
# 53 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_5
MoveTutor103_4:
# 61 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_11
MoveTutor103_10:
# 66 "data/maps/Route103_MoveTutorHut/scripts.pory"
endtutorscript:
# 67 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 68 "data/maps/Route103_MoveTutorHut/scripts.pory"
exittutorscript:
# 69 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

MoveTutor103_2:
# 26 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_5
# 27 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_6, MoveTutor103_Text_7, MoveTutor103_Text_8
# 28 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_8
MoveTutor103_7:
# 38 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_14
MoveTutor103_13:
# 45 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_16
	goto MoveTutor103_1

MoveTutor103_5:
# 55 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 56 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveRelearner
# 57 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 58 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_4

MoveTutor103_8:
# 29 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_9
# 30 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 31 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 32 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 33 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, endtutorscript
# 35 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special IsSelectedMonEgg
# 36 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CantTeachEgg
	goto MoveTutor103_7

MoveTutor103_11:
# 63 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 64 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_10

MoveTutor103_14:
# 39 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_9
# 40 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 41 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 42 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_13

MoveTutor103_16:
# 46 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_9
# 47 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 48 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 49 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto exittutorscript
	goto MoveTutor103_1


CantTeachEgg::
# 73 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox CantTeachEgg_Text_0
	return


MoveTutor103Sink::
# 78 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 79 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Sink_Text_0
# 80 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Bookshelf::
# 83 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 84 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Bookshelf_Text_0
# 85 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Drawer::
# 88 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Drawer_Text_0
# 90 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Wardrobe::
# 93 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 94 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Wardrobe_Text_0
# 95 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103BookPile::
# 98 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103BookPile_Text_0
# 100 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Kotatsu::
# 103 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Kotatsu_Text_0
# 105 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103OpenBox::
# 108 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 109 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103OpenBox_Text_0
# 111 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103SealedBox::
# 114 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 115 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103SealedBox_Text_0
# 116 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103ToolBox::
# 119 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 120 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103ToolBox_Text_0
# 121 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


# 12 "data/maps/Route103_MoveTutorHut/scripts.pory"
MoveTutor103_Movement_0:
# 12 "data/maps/Route103_MoveTutorHut/scripts.pory"
	face_player
	step_end

MoveTutor103_Text_0:
# 13 "data/maps/Route103_MoveTutorHut/scripts.pory"
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
	.string "needs to eat.$"

MoveTutor103_Text_1:
# 21 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "So? What will it be?$"

MoveTutor103_Text_2:
# 23 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Tutor a move$"

MoveTutor103_Text_3:
# 23 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Relearn a move$"

MoveTutor103_Text_4:
# 23 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Nevermind$"

MoveTutor103_Text_5:
# 26 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I could teach your Pokémon these\n"
	.string "moves.$"

MoveTutor103_Text_6:
# 27 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Swagger$"

MoveTutor103_Text_7:
# 27 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Move 2$"

MoveTutor103_Text_8:
# 27 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Move 3$"

MoveTutor103_Text_9:
# 29 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I teach?$"

MoveTutor103_Text_10:
# 55 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I have\n"
	.string "remember a move?$"

MoveTutor103_Text_11:
# 63 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Fair enough. You can come back if you\n"
	.string "need my skills sometime.$"

MoveTutor103_Text_12:
# 67 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Come back if you need my skills some\n"
	.string "other time.$"

CantTeachEgg_Text_0:
# 73 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "That looks like a healthy egg... come\n"
	.string "back when it's hatched, and I may have\l"
	.string "some moves to teach it.$"

MoveTutor103Sink_Text_0:
# 79 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's just a regular sink.$"

MoveTutor103Bookshelf_Text_0:
# 84 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's full of books about Pokémon\n"
	.string "learning patterns.$"

MoveTutor103Drawer_Text_0:
# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It looks like a regular drawer. I should\n"
	.string "leave this alone.$"

MoveTutor103Wardrobe_Text_0:
# 94 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a fitted wardrobe. There's no real\n"
	.string "reason to open it.$"

MoveTutor103BookPile_Text_0:
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a pile of books about Pokémon\n"
	.string "moves.$"

MoveTutor103Kotatsu_Text_0:
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A cozy kotatsu. It makes one want to\n"
	.string "stay home.$"

MoveTutor103OpenBox_Text_0:
# 109 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The label on the box reads 'to throw\n"
	.string "away'. It should be fine to peek...$"

MoveTutor103SealedBox_Text_0:
# 115 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

MoveTutor103ToolBox_Text_0:
# 120 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A toolbox full of tools worn with use.$"
