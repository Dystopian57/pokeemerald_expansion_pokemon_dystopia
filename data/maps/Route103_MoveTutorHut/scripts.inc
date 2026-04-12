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
# 19 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 20 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 21 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Bookshelf::
# 24 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 25 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Bookshelf_Text_0
# 26 "data/maps/Route103_MoveTutorHut/scripts.pory"
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
	.string "sorry about the mess\p"
	.string "My name is Colton, and I'm a Move Tutor -\n"
	.string "or used to.\p"
	.string "Devon began a campaign to discredit\n"
	.string "Move Tutors, on account of us teaching\l"
	.string "'dangerous moves' to Pokémon.\p"
	.string "People bought into it, and began to\n"
	.string "treat us like criminals. It's ridiculous.\p"
	.string "I'm sorry... you didn't come here to\n"
	.string "listen to my rant. You want to teach\l"
	.string "some moves to your Pokémon, right? Or\l"
	.string "have them remember old ones.\p"
	.string "I'll do it for only 100¥ per move. I used\n"
	.string "to collect Heart Scales, but a man\l"
	.string "needs to eat.$"

MoveTutor103_Text_1:
# 18 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "So? What will it be?$"

MoveTutor103Bookshelf_Text_0:
# 25 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's full of books about Pokémon moves.$"
