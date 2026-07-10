# 1 "data/maps/Route103_MoveTutorHut/scripts.pory"


Route103_MoveTutorHut_MapScripts::
# 10 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightNPC
# 11 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightNPC
	.byte 0


MoveTutor103Night::
# 21 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 22 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 23 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_M_SNORE
# 24 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Night_Text_0
# 26 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Night_Text_1
# 27 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return


MoveTutor103::
# 33 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 34 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 35 "data/maps/Route103_MoveTutorHut/scripts.pory"
	applymovement 1, MoveTutor103_Movement_0
# 37 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_unset movetutorintro, MoveTutor103_1
# 186 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto movetutorchoice
	return

MoveTutor103_1:
# 39 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_0
# 46 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag movetutorintro
# 47 "data/maps/Route103_MoveTutorHut/scripts.pory"
movetutorchoice:
# 48 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_1
# 50 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_2, MoveTutor103_Text_3, MoveTutor103_Text_4
# 52 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_5
MoveTutor103_4:
# 143 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_8
MoveTutor103_7:
# 174 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_14
MoveTutor103_13:
# 180 "data/maps/Route103_MoveTutorHut/scripts.pory"
endtutorscript:
# 181 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_15
# 182 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
# 183 "data/maps/Route103_MoveTutorHut/scripts.pory"
exittutorscript:
# 184 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

MoveTutor103_5:
# 54 "data/maps/Route103_MoveTutorHut/scripts.pory"
	checkmoney 100
# 55 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MoveTutor103_11
MoveTutor103_10:
# 136 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor103_19
	goto MoveTutor103_4

MoveTutor103_8:
# 145 "data/maps/Route103_MoveTutorHut/scripts.pory"
	checkmoney 100
# 146 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MoveTutor103_17
MoveTutor103_16:
# 165 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor103_24
	goto MoveTutor103_7

MoveTutor103_11:
# 57 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_5
# 58 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_6, MoveTutor103_Text_7, MoveTutor103_Text_8, MoveTutor103_Text_9
# 59 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_22
MoveTutor103_21:
# 77 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_27
MoveTutor103_26:
# 97 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_30
MoveTutor103_29:
# 116 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MoveTutor103_32
	goto MoveTutor103_10

MoveTutor103_14:
# 176 "data/maps/Route103_MoveTutorHut/scripts.pory"
canceltutor:
# 177 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_14
# 178 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto exittutorscript
	goto MoveTutor103_13

MoveTutor103_17:
# 148 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_13
# 149 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveRelearner
# 150 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 151 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 152 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special IsSelectedMonEgg
# 153 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CantTeachEgg
# 154 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8005, 0, NoMoveToTeachMon
# 155 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special TeachMoveRelearnerMove
# 156 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 157 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 158 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 159 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 160 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 162 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_16

MoveTutor103_19:
# 137 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 138 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 140 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
	goto MoveTutor103_4

MoveTutor103_22:
# 60 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 61 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 62 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 63 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 64 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 65 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 68 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 69 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 70 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 71 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 72 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 73 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_21

MoveTutor103_24:
# 166 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 167 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 169 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
	goto MoveTutor103_7

MoveTutor103_27:
# 78 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 79 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 80 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 81 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
# 82 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 83 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 86 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 87 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 88 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 90 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 91 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_26

MoveTutor103_30:
# 98 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 100 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 101 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 102 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 103 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 106 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 107 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 108 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 109 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 110 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 111 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_29

MoveTutor103_32:
# 117 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 118 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 119 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 120 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_METRONOME
# 121 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 122 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 125 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 126 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 127 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 128 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 129 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 130 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_10


NoMoveToTeachMon::
# 191 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox NoMoveToTeachMon_Text_0
	return


CantTeachEgg::
# 195 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox CantTeachEgg_Text_0
# 197 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return


MoveTutor103Sink::
# 201 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 202 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Sink_Text_0
# 203 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Bookshelf::
# 206 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 207 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Bookshelf_Text_0
# 208 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Drawer::
# 211 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 212 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Drawer_Text_0
# 213 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Wardrobe::
# 216 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 217 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Wardrobe_Text_0
# 218 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103BookPile::
# 221 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 222 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103BookPile_Text_0
# 223 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Kotatsu::
# 226 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 227 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Kotatsu_Text_0
# 228 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103OpenBox::
# 231 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 232 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103OpenBox_Text_0
# 234 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103SealedBox::
# 237 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 238 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103SealedBox_Text_0
# 239 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103ToolBox::
# 242 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 243 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103ToolBox_Text_0
# 244 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


# 35 "data/maps/Route103_MoveTutorHut/scripts.pory"
MoveTutor103_Movement_0:
# 35 "data/maps/Route103_MoveTutorHut/scripts.pory"
	face_player
	step_end

MoveTutor103Night_Text_0:
# 24 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "ZZZZZZ...$"

MoveTutor103Night_Text_1:
# 26 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "He is fast asleep. It would be better to\n"
	.string "return during daytime.$"

MoveTutor103_Text_0:
# 39 "data/maps/Route103_MoveTutorHut/scripts.pory"
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
# 48 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Do any of your Pokémon need teaching?$"

MoveTutor103_Text_2:
# 50 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Tutor a move$"

MoveTutor103_Text_3:
# 50 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Relearn a move$"

MoveTutor103_Text_4:
# 50 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Nevermind$"

MoveTutor103_Text_5:
# 57 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I could teach your Pokémon these\n"
	.string "moves.$"

MoveTutor103_Text_6:
# 58 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Swagger$"

MoveTutor103_Text_7:
# 58 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Double Edge$"

MoveTutor103_Text_8:
# 58 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Explosion$"

MoveTutor103_Text_9:
# 58 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Metronome$"

MoveTutor103_Text_10:
# 60 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I teach?$"

MoveTutor103_Text_11:
# 69 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Very well. I'll collect your 100¥ now...$"

MoveTutor103_Text_12:
# 138 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I'm sorry... you seem a bit short on the\n"
	.string "100¥. We'll have to do this later.$"

MoveTutor103_Text_13:
# 148 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I have\n"
	.string "remember a move?$"

MoveTutor103_Text_14:
# 177 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Changed your mind? Well, I'll be here if\n"
	.string "you need me.$"

MoveTutor103_Text_15:
# 181 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Come back if you need my skills some\n"
	.string "other time.$"

NoMoveToTeachMon_Text_0:
# 191 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "This Pokémon... I don't think it has\n"
	.string "forgotten any moves. Ah, to be young\l"
	.string "again...$"

CantTeachEgg_Text_0:
# 195 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "That looks like a healthy egg... come\n"
	.string "back when it's hatched, and I may have\l"
	.string "some moves to teach it.$"

MoveTutor103Sink_Text_0:
# 202 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's just a regular sink.$"

MoveTutor103Bookshelf_Text_0:
# 207 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's full of books about Pokémon\n"
	.string "learning patterns.$"

MoveTutor103Drawer_Text_0:
# 212 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It looks like a regular drawer. I should\n"
	.string "leave this alone.$"

MoveTutor103Wardrobe_Text_0:
# 217 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a fitted wardrobe. There's no real\n"
	.string "reason to open it.$"

MoveTutor103BookPile_Text_0:
# 222 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a pile of books about Pokémon\n"
	.string "moves.$"

MoveTutor103Kotatsu_Text_0:
# 227 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A cozy kotatsu. It makes one want to\n"
	.string "stay home.$"

MoveTutor103OpenBox_Text_0:
# 232 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The label on the box reads 'to throw\n"
	.string "away'. It should be fine to peek...$"

MoveTutor103SealedBox_Text_0:
# 238 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

MoveTutor103ToolBox_Text_0:
# 243 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A toolbox full of tools worn with use.$"
