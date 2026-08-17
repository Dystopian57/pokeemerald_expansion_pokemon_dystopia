# 1 "data/maps/Route103_MoveTutorHut/scripts.pory"


Route103_MoveTutorHut_MapScripts::
# 10 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightNPC
# 11 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicTutorHut
# 12 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightNPC
# 13 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicTutorHut
	.byte 0


DayNightMusicTutorHut::
# 18 "data/maps/Route103_MoveTutorHut/scripts.pory"
	gettimeofday
# 19 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicTutorHut_2
DayNightMusicTutorHut_1:
# 22 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicTutorHut_5
DayNightMusicTutorHut_4:
# 25 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicTutorHut_8
DayNightMusicTutorHut_7:
# 28 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicTutorHut_11
DayNightMusicTutorHut_10:
# 32 "data/maps/Route103_MoveTutorHut/scripts.pory"
enddaynightmusicmovetutorhut:
	return

DayNightMusicTutorHut_2:
# 20 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto enddaynightmusicmovetutorhut
	goto DayNightMusicTutorHut_1

DayNightMusicTutorHut_5:
# 23 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto enddaynightmusicmovetutorhut
	goto DayNightMusicTutorHut_4

DayNightMusicTutorHut_8:
# 26 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto enddaynightmusicmovetutorhut
	goto DayNightMusicTutorHut_7

DayNightMusicTutorHut_11:
# 29 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playbgm MUS_TAKARASUSHI, TRUE
# 30 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto enddaynightmusicmovetutorhut
	goto DayNightMusicTutorHut_10


MoveTutor103Night::
# 39 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 40 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 41 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_M_SNORE
# 42 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Night_Text_0
# 44 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Night_Text_1
# 45 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return


MoveTutor103::
# 51 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 52 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 53 "data/maps/Route103_MoveTutorHut/scripts.pory"
	applymovement 1, MoveTutor103_Movement_0
# 55 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_unset movetutorintro, MoveTutor103_1
# 197 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto movetutorchoice
	return

MoveTutor103_1:
# 57 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_0
# 64 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag movetutorintro
# 65 "data/maps/Route103_MoveTutorHut/scripts.pory"
movetutorchoice:
# 66 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_1
# 68 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_2, MoveTutor103_Text_3, MoveTutor103_Text_4
# 70 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_5
MoveTutor103_4:
# 154 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_8
MoveTutor103_7:
# 185 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_14
MoveTutor103_13:
# 191 "data/maps/Route103_MoveTutorHut/scripts.pory"
endtutorscript:
# 192 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_15
# 193 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
# 194 "data/maps/Route103_MoveTutorHut/scripts.pory"
exittutorscript:
# 195 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

MoveTutor103_5:
# 72 "data/maps/Route103_MoveTutorHut/scripts.pory"
	checkmoney 100
# 73 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MoveTutor103_11
MoveTutor103_10:
# 147 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor103_19
	goto MoveTutor103_4

MoveTutor103_8:
# 156 "data/maps/Route103_MoveTutorHut/scripts.pory"
	checkmoney 100
# 157 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MoveTutor103_17
MoveTutor103_16:
# 176 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor103_24
	goto MoveTutor103_7

MoveTutor103_11:
# 75 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_5
# 76 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_6, MoveTutor103_Text_7, MoveTutor103_Text_8, MoveTutor103_Text_9
# 77 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_22
MoveTutor103_21:
# 94 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_27
MoveTutor103_26:
# 112 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_30
MoveTutor103_29:
# 129 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MoveTutor103_32
	goto MoveTutor103_10

MoveTutor103_14:
# 187 "data/maps/Route103_MoveTutorHut/scripts.pory"
canceltutor:
# 188 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_14
# 189 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto exittutorscript
	goto MoveTutor103_13

MoveTutor103_17:
# 159 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_13
# 160 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveRelearner
# 161 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 162 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 163 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special IsSelectedMonEgg
# 164 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CantTeachEgg
# 165 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8005, 0, NoMoveToTeachMon
# 166 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special TeachMoveRelearnerMove
# 167 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 168 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 169 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 170 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 171 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 173 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_16

MoveTutor103_19:
# 148 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 149 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 151 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
	goto MoveTutor103_4

MoveTutor103_22:
# 78 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 79 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 80 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 81 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 82 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 83 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 84 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, canceltutor
# 85 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 86 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 87 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 88 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 90 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_21

MoveTutor103_24:
# 177 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 178 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 180 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
	goto MoveTutor103_7

MoveTutor103_27:
# 95 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 96 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
# 97 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 98 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 100 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 101 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 102 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 103 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 105 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 106 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_26

MoveTutor103_30:
# 113 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 114 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 115 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 116 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 117 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 118 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 119 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 120 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 121 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 122 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 123 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 124 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_29

MoveTutor103_32:
# 130 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 131 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_METRONOME
# 132 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 133 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 134 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 135 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 136 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 137 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 138 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 139 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 140 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 141 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_10


NoMoveToTeachMon::
# 202 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox NoMoveToTeachMon_Text_0
	return


CantTeachEgg::
# 206 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox CantTeachEgg_Text_0
# 208 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return


MoveTutor103Sink::
# 212 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 213 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Sink_Text_0
# 214 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Bookshelf::
# 217 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 218 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Bookshelf_Text_0
# 219 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Drawer::
# 222 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 223 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Drawer_Text_0
# 224 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Wardrobe::
# 227 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 228 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Wardrobe_Text_0
# 229 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103BookPile::
# 232 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 233 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103BookPile_Text_0
# 234 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Kotatsu::
# 237 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 238 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Kotatsu_Text_0
# 239 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103OpenBox::
# 242 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 243 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103OpenBox_Text_0
# 245 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103SealedBox::
# 248 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 249 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103SealedBox_Text_0
# 250 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103ToolBox::
# 253 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 254 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103ToolBox_Text_0
# 255 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


# 53 "data/maps/Route103_MoveTutorHut/scripts.pory"
MoveTutor103_Movement_0:
# 53 "data/maps/Route103_MoveTutorHut/scripts.pory"
	face_player
	step_end

MoveTutor103Night_Text_0:
# 42 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "ZZZZZZ...$"

MoveTutor103Night_Text_1:
# 44 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "He is fast asleep. It would be better to\n"
	.string "return during daytime.$"

MoveTutor103_Text_0:
# 57 "data/maps/Route103_MoveTutorHut/scripts.pory"
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
# 66 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Do any of your Pokémon need teaching?$"

MoveTutor103_Text_2:
# 68 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Tutor a move$"

MoveTutor103_Text_3:
# 68 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Relearn a move$"

MoveTutor103_Text_4:
# 68 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Nevermind$"

MoveTutor103_Text_5:
# 75 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I could teach your Pokémon these\n"
	.string "moves.$"

MoveTutor103_Text_6:
# 76 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Swagger$"

MoveTutor103_Text_7:
# 76 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Double Edge$"

MoveTutor103_Text_8:
# 76 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Explosion$"

MoveTutor103_Text_9:
# 76 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Metronome$"

MoveTutor103_Text_10:
# 78 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I teach?$"

MoveTutor103_Text_11:
# 86 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Very well. I'll collect your 100¥ now...$"

MoveTutor103_Text_12:
# 149 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I'm sorry... you seem a bit short on the\n"
	.string "100¥. We'll have to do this later.$"

MoveTutor103_Text_13:
# 159 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I have\n"
	.string "remember a move?$"

MoveTutor103_Text_14:
# 188 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Changed your mind? Well, I'll be here if\n"
	.string "you need me.$"

MoveTutor103_Text_15:
# 192 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Come back if you need my skills some\n"
	.string "other time.$"

NoMoveToTeachMon_Text_0:
# 202 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "This Pokémon... I don't think it has\n"
	.string "forgotten any moves. Ah, to be young\l"
	.string "again...$"

CantTeachEgg_Text_0:
# 206 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "That looks like a healthy egg... come\n"
	.string "back when it's hatched, and I may have\l"
	.string "some moves to teach it.$"

MoveTutor103Sink_Text_0:
# 213 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's just a regular sink.$"

MoveTutor103Bookshelf_Text_0:
# 218 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's full of books about Pokémon\n"
	.string "learning patterns.$"

MoveTutor103Drawer_Text_0:
# 223 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It looks like a regular drawer. I should\n"
	.string "leave this alone.$"

MoveTutor103Wardrobe_Text_0:
# 228 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a fitted wardrobe. There's no real\n"
	.string "reason to open it.$"

MoveTutor103BookPile_Text_0:
# 233 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a pile of books about Pokémon\n"
	.string "moves.$"

MoveTutor103Kotatsu_Text_0:
# 238 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A cozy kotatsu. It makes one want to\n"
	.string "stay home.$"

MoveTutor103OpenBox_Text_0:
# 243 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The label on the box reads 'to throw\n"
	.string "away'. It should be fine to peek...$"

MoveTutor103SealedBox_Text_0:
# 249 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

MoveTutor103ToolBox_Text_0:
# 254 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A toolbox full of tools worn with use.$"
