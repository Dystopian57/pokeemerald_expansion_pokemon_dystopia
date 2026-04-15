# 1 "data/maps/Route103_MoveTutorHut/scripts.pory"

# 2 "data/maps/Route103_MoveTutorHut/scripts.pory"
Route103_MoveTutorHut_MapScripts::
# 3 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.byte 0

MoveTutor103::
# 7 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 8 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 9 "data/maps/Route103_MoveTutorHut/scripts.pory"
	applymovement 1, MoveTutor103_Movement_0
# 10 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_0
# 18 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_1
# 20 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_2, MoveTutor103_Text_3, MoveTutor103_Text_4
# 22 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_2
MoveTutor103_1:
# 45 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_5
MoveTutor103_4:
# 53 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_11
MoveTutor103_10:
# 58 "data/maps/Route103_MoveTutorHut/scripts.pory"
endtutorscript:
# 59 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 60 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

MoveTutor103_2:
# 23 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_5
# 24 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_6, MoveTutor103_Text_7, MoveTutor103_Text_8
# 25 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_8
MoveTutor103_7:
# 32 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_14
MoveTutor103_13:
# 38 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_16
	goto MoveTutor103_1

MoveTutor103_5:
# 47 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 48 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveRelearner
# 49 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 50 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_4

MoveTutor103_8:
# 26 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_9
# 27 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 28 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 29 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_7

MoveTutor103_11:
# 55 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 56 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_10

MoveTutor103_14:
# 33 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_9
# 34 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 35 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
	goto MoveTutor103_13

MoveTutor103_16:
# 39 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_9
# 40 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 41 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
	goto MoveTutor103_1


MoveTutor103Sink::
# 63 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 64 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Sink_Text_0
# 65 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Bookshelf::
# 68 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 69 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Bookshelf_Text_0
# 70 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Drawer::
# 73 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 74 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Drawer_Text_0
# 75 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Wardrobe::
# 78 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 79 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Wardrobe_Text_0
# 80 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103BookPile::
# 83 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 84 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103BookPile_Text_0
# 85 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Kotatsu::
# 88 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Kotatsu_Text_0
# 90 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103OpenBox::
# 93 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 94 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103OpenBox_Text_0
# 95 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103SealedBox::
# 98 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103SealedBox_Text_0
# 100 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103ToolBox::
# 103 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103ToolBox_Text_0
# 105 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


# 9 "data/maps/Route103_MoveTutorHut/scripts.pory"
MoveTutor103_Movement_0:
# 9 "data/maps/Route103_MoveTutorHut/scripts.pory"
	face_player
	step_end

MoveTutor103_Text_0:
# 10 "data/maps/Route103_MoveTutorHut/scripts.pory"
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
# 18 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "So? What will it be?$"

MoveTutor103_Text_2:
# 20 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Tutor a move$"

MoveTutor103_Text_3:
# 20 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Relearn a move$"

MoveTutor103_Text_4:
# 20 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Nevermind$"

MoveTutor103_Text_5:
# 23 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I could teach your Pokémon these\n"
	.string "moves.$"

MoveTutor103_Text_6:
# 24 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Swagger$"

MoveTutor103_Text_7:
# 24 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Move 2$"

MoveTutor103_Text_8:
# 24 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Move 3$"

MoveTutor103_Text_9:
# 26 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I teach?$"

MoveTutor103_Text_10:
# 47 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I have\n"
	.string "remember a move?$"

MoveTutor103_Text_11:
# 55 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Fair enough. You can come back if you\n"
	.string "need my skills sometime.$"

MoveTutor103_Text_12:
# 59 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Good. Come back if you need my skills\n"
	.string "some other time.$"

MoveTutor103Sink_Text_0:
# 64 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's just a regular sink.$"

MoveTutor103Bookshelf_Text_0:
# 69 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's full of books about Pokémon\n"
	.string "learning patterns.$"

MoveTutor103Drawer_Text_0:
# 74 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It looks like a regular drawer. I should\n"
	.string "leave this alone.$"

MoveTutor103Wardrobe_Text_0:
# 79 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a fitted wardrobe. There's no real\n"
	.string "reason to open it.$"

MoveTutor103BookPile_Text_0:
# 84 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a pile of books about Pokémon\n"
	.string "moves.$"

MoveTutor103Kotatsu_Text_0:
# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A cozy kotatsu. It makes one want to\n"
	.string "stay home.$"

MoveTutor103OpenBox_Text_0:
# 94 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The label on the box reads 'to throw\n"
	.string "away'. It should be fine to peek...$"

MoveTutor103SealedBox_Text_0:
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

MoveTutor103ToolBox_Text_0:
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A toolbox full of tools worn with use.$"
