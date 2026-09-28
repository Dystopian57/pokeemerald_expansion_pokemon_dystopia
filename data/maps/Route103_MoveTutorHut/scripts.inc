# 1 "data/maps/Route103_MoveTutorHut/scripts.pory"


Route103_MoveTutorHut_MapScripts::
# 11 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightNPC
# 14 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLightTutorHut
# 17 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicTutorHut
	.byte 0


DayNightMusicTutorHut::
# 24 "data/maps/Route103_MoveTutorHut/scripts.pory"
	gettimeofday
# 25 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicTutorHut_2
DayNightMusicTutorHut_1:
# 28 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicTutorHut_5
DayNightMusicTutorHut_4:
# 31 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicTutorHut_8
DayNightMusicTutorHut_7:
# 34 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicTutorHut_11
DayNightMusicTutorHut_10:
# 38 "data/maps/Route103_MoveTutorHut/scripts.pory"
enddaynightmusicmovetutorhut:
	return

DayNightMusicTutorHut_2:
# 26 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto enddaynightmusicmovetutorhut
	goto DayNightMusicTutorHut_1

DayNightMusicTutorHut_5:
# 29 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto enddaynightmusicmovetutorhut
	goto DayNightMusicTutorHut_4

DayNightMusicTutorHut_8:
# 32 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto enddaynightmusicmovetutorhut
	goto DayNightMusicTutorHut_7

DayNightMusicTutorHut_11:
# 35 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playbgm MUS_TAKARASUSHI, TRUE
# 36 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto enddaynightmusicmovetutorhut
	goto DayNightMusicTutorHut_10


DayNightAmbientLightTutorHut::
# 42 "data/maps/Route103_MoveTutorHut/scripts.pory"
	gettimeofday
# 43 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightAmbientLightTutorHut_2
DayNightAmbientLightTutorHut_1:
# 46 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightAmbientLightTutorHut_5
DayNightAmbientLightTutorHut_4:
# 49 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightAmbientLightTutorHut_8
DayNightAmbientLightTutorHut_7:
# 52 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightAmbientLightTutorHut_11
DayNightAmbientLightTutorHut_10:
# 55 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return

DayNightAmbientLightTutorHut_2:
# 44 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setweather WEATHER_NONE
	goto DayNightAmbientLightTutorHut_1

DayNightAmbientLightTutorHut_5:
# 47 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setweather WEATHER_NONE
	goto DayNightAmbientLightTutorHut_4

DayNightAmbientLightTutorHut_8:
# 50 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setweather WEATHER_NONE
	goto DayNightAmbientLightTutorHut_7

DayNightAmbientLightTutorHut_11:
# 53 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setweather WEATHER_SHADE
	goto DayNightAmbientLightTutorHut_10


MoveTutor103Rope::
# 60 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 61 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_unset movetutorbinitem, MoveTutor103Rope_2
# 65 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Rope_Text_1
MoveTutor103Rope_1:
# 67 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return

MoveTutor103Rope_2:
# 62 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Rope_Text_0
# 63 "data/maps/Route103_MoveTutorHut/scripts.pory"
	giveitem ITEM_BINDING_BAND
	goto MoveTutor103Rope_1


MoveTutor103Night::
# 75 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 76 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 77 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_M_SNORE
# 78 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Night_Text_0
# 80 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Night_Text_1
# 81 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return


MoveTutor103::
# 87 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 88 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
	applymovement 1, MoveTutor103_Movement_0
# 91 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_unset movetutorintro, MoveTutor103_1
# 246 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto movetutorchoice
	return

MoveTutor103_1:
# 93 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_0
# 100 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag movetutorintro
# 101 "data/maps/Route103_MoveTutorHut/scripts.pory"
movetutorchoice:
# 102 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_1
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_2, MoveTutor103_Text_3, MoveTutor103_Text_4
# 106 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_5
MoveTutor103_4:
# 194 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_8
MoveTutor103_7:
# 234 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_14
MoveTutor103_13:
# 240 "data/maps/Route103_MoveTutorHut/scripts.pory"
endtutorscript:
# 241 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_18
# 242 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
# 243 "data/maps/Route103_MoveTutorHut/scripts.pory"
exittutorscript:
# 244 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

MoveTutor103_5:
# 108 "data/maps/Route103_MoveTutorHut/scripts.pory"
	checkmoney 100
# 109 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MoveTutor103_11
MoveTutor103_10:
# 187 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor103_19
	goto MoveTutor103_4

MoveTutor103_8:
# 196 "data/maps/Route103_MoveTutorHut/scripts.pory"
	checkmoney 100
# 197 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MoveTutor103_17
MoveTutor103_16:
# 225 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor103_24
	goto MoveTutor103_7

MoveTutor103_11:
# 111 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_5
# 112 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_6, MoveTutor103_Text_7, MoveTutor103_Text_8, MoveTutor103_Text_9, MoveTutor103_Text_4
# 113 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_22
MoveTutor103_21:
# 130 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_30
MoveTutor103_29:
# 148 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_35
MoveTutor103_34:
# 165 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MoveTutor103_38
MoveTutor103_37:
# 182 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MoveTutor103_40
	goto MoveTutor103_10

MoveTutor103_14:
# 236 "data/maps/Route103_MoveTutorHut/scripts.pory"
canceltutor:
# 237 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_17
# 238 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto exittutorscript
	goto MoveTutor103_13

MoveTutor103_17:
# 199 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_13
# 200 "data/maps/Route103_MoveTutorHut/scripts.pory"
selectdifferentmonforrelearn:
# 201 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveRelearner
# 202 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 203 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 204 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special IsSelectedMonEgg
# 205 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CantTeachEgg
# 206 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8005, 0, NoMoveToTeachMon
# 207 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special TeachMoveRelearnerMove
# 208 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 209 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, 0, cancelledmoverelearnforamon
# 210 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 211 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 212 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 213 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 214 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 216 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
# 218 "data/maps/Route103_MoveTutorHut/scripts.pory"
cancelledmoverelearnforamon:
# 219 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_14
# 220 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_15, MoveTutor103_Text_16
# 221 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_27
MoveTutor103_26:
# 222 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_32
	goto MoveTutor103_16

MoveTutor103_19:
# 188 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 189 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 191 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
	goto MoveTutor103_4

MoveTutor103_22:
# 114 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 115 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 116 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 117 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 118 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 119 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 120 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, canceltutor
# 121 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 122 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 123 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 124 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 125 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 126 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_21

MoveTutor103_24:
# 226 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 227 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 229 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
	goto MoveTutor103_7

MoveTutor103_27:
# 221 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto selectdifferentmonforrelearn
	goto MoveTutor103_26

MoveTutor103_30:
# 131 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 132 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
# 133 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 134 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 135 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 136 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 137 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 138 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 139 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 140 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 141 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 142 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_29

MoveTutor103_32:
# 222 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto canceltutor
	goto MoveTutor103_16

MoveTutor103_35:
# 149 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 150 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 151 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 152 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 153 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 154 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 155 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 156 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 157 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 158 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 159 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 160 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_34

MoveTutor103_38:
# 166 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 167 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_METRONOME
# 168 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 169 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 170 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 171 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 172 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 173 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 174 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 175 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 176 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 177 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_37

MoveTutor103_40:
# 183 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto canceltutor
	goto MoveTutor103_10


NoMoveToTeachMon::
# 251 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox NoMoveToTeachMon_Text_0
	return


CantTeachEgg::
# 255 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox CantTeachEgg_Text_0
# 257 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return


MoveTutor103Sink::
# 261 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 262 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Sink_Text_0
# 263 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Bookshelf::
# 266 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 267 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Bookshelf_Text_0
# 268 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Scroll::
# 272 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 273 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Scroll_Text_0
# 274 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Blanket::
# 277 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 278 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Blanket_Text_0
# 279 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Drawer::
# 283 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 284 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Drawer_Text_0
# 285 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Wardrobe::
# 288 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 289 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Wardrobe_Text_0
# 290 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103BookPile::
# 293 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 294 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103BookPile_Text_0
# 295 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Kotatsu::
# 298 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 299 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Kotatsu_Text_0
# 300 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103OpenBox::
# 303 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 304 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_unset movetutoropenboxitem, MoveTutor103OpenBox_2
# 308 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103OpenBox_Text_1
MoveTutor103OpenBox_1:
# 309 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

MoveTutor103OpenBox_2:
# 305 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103OpenBox_Text_0
# 306 "data/maps/Route103_MoveTutorHut/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
	goto MoveTutor103OpenBox_1


MoveTutor103SealedBox::
# 312 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 313 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103SealedBox_Text_0
# 314 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103ToolBox::
# 317 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 318 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103ToolBox_Text_0
# 319 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


KantonianWarHistoryVol3TutorHut::
# 323 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 324 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox KantonianWarHistoryVol3TutorHut_Text_0
# 326 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_15, KantonianWarHistoryVol3TutorHut_Text_1
# 328 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KantonianWarHistoryVol3TutorHut_2
KantonianWarHistoryVol3TutorHut_1:
# 337 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KantonianWarHistoryVol3TutorHut_5
KantonianWarHistoryVol3TutorHut_4:
# 340 "data/maps/Route103_MoveTutorHut/scripts.pory"
endkantonianwar3:
# 341 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemonpic
# 342 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

KantonianWarHistoryVol3TutorHut_2:
# 329 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmonpic SPECIES_PIKACHU_HOENN, 10, 3
# 330 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox KantonianWarHistoryVol3TutorHut_Text_2
# 336 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endkantonianwar3
	goto KantonianWarHistoryVol3TutorHut_1

KantonianWarHistoryVol3TutorHut_5:
# 338 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endkantonianwar3
	goto KantonianWarHistoryVol3TutorHut_4


# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
MoveTutor103_Movement_0:
# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
	face_player
	step_end

MoveTutor103Rope_Text_0:
# 62 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "For some reason, a knotted piece of\n"
	.string "rope has been discarded...$"

MoveTutor103Rope_Text_1:
# 65 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The trash can is empty.$"

MoveTutor103Night_Text_0:
# 78 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "ZZZZZZ...$"

MoveTutor103Night_Text_1:
# 80 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "He is fast asleep. It would be better to\n"
	.string "return during daytime.$"

MoveTutor103_Text_0:
# 93 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Oh, hello. I don't get many visitors - I'm\n"
	.string "sorry about the mess.\p"
	.string "My name is Colton, and I'm a Move Tutor -\n"
	.string "or used to be...\p"
	.string "Devon began a campaign to discredit\n"
	.string "Move Tutors, on account of us teaching\l"
	.string "“dangerous moves” to Pokémon.\p"
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
# 102 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Do any of your Pokémon need teaching?$"

MoveTutor103_Text_2:
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Tutor a move$"

MoveTutor103_Text_3:
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Relearn a move$"

MoveTutor103_Text_4:
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Nevermind$"

MoveTutor103_Text_5:
# 111 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I could teach your Pokémon one of\n"
	.string "these moves.$"

MoveTutor103_Text_6:
# 112 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Swagger$"

MoveTutor103_Text_7:
# 112 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Double Edge$"

MoveTutor103_Text_8:
# 112 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Explosion$"

MoveTutor103_Text_9:
# 112 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Metronome$"

MoveTutor103_Text_10:
# 114 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I teach?$"

MoveTutor103_Text_11:
# 122 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Very well. I'll collect your 100¥ now...$"

MoveTutor103_Text_12:
# 189 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I'm sorry... you seem a bit short on the\n"
	.string "100¥. We'll have to do this later.$"

MoveTutor103_Text_13:
# 199 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I have\n"
	.string "remember a move?$"

MoveTutor103_Text_14:
# 219 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Hm? Would you rather have a different\n"
	.string "Pokémon relearn a move?$"

MoveTutor103_Text_15:
# 220 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Yes$"

MoveTutor103_Text_16:
# 220 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Actually, nevermind$"

MoveTutor103_Text_17:
# 237 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Changed your mind? Well, I'll be here if\n"
	.string "you need me.$"

MoveTutor103_Text_18:
# 241 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Come back if you need my skills some\n"
	.string "other time.$"

NoMoveToTeachMon_Text_0:
# 251 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "This Pokémon... I don't think it has\n"
	.string "forgotten any moves. Ah, to be young\l"
	.string "again...$"

CantTeachEgg_Text_0:
# 255 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "That looks like a healthy egg... come\n"
	.string "back when it's hatched, and I may have\l"
	.string "some moves to teach it.$"

MoveTutor103Sink_Text_0:
# 262 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's just a regular sink.$"

MoveTutor103Bookshelf_Text_0:
# 267 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's full of books about Pokémon\n"
	.string "learning patterns.$"

MoveTutor103Scroll_Text_0:
# 273 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The scroll's contents are written in\n"
	.string "braille. Can't read it.$"

MoveTutor103Blanket_Text_0:
# 278 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A large futon blanket.$"

MoveTutor103Drawer_Text_0:
# 284 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It looks like a regular drawer. Should\n"
	.string "leave this alone.$"

MoveTutor103Wardrobe_Text_0:
# 289 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a fitted wardrobe. There's no real\n"
	.string "reason to open it.$"

MoveTutor103BookPile_Text_0:
# 294 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a pile of books about Pokémon\n"
	.string "moves.$"

MoveTutor103Kotatsu_Text_0:
# 299 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A cozy kotatsu. It makes one want to\n"
	.string "stay home.$"

MoveTutor103OpenBox_Text_0:
# 305 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The box's label says “To throw out”. It\n"
	.string "should be alright to peek...$"

MoveTutor103OpenBox_Text_1:
# 308 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The box is empty.$"

MoveTutor103SealedBox_Text_0:
# 313 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

MoveTutor103ToolBox_Text_0:
# 318 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A toolbox full of tools worn with use.$"

KantonianWarHistoryVol3TutorHut_Text_0:
# 324 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The book's cover reads “History of the\n"
	.string "Kantonian War, Volume 3.”\p"
	.string "Read it?$"

KantonianWarHistoryVol3TutorHut_Text_1:
# 326 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "No$"

KantonianWarHistoryVol3TutorHut_Text_2:
# 330 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "May, 2006: Team Rocket has spent the\n"
	.string "last decade using Silph Co. as a proxy\l"
	.string "for their criminal activities, primarily\l"
	.string "that of Pokémon trafficking.\p"
	.string "The Kantonian citizens are outraged,\n"
	.string "but authorities are kept at bay\l"
	.string "through bribery.\p"
	.string "In a curious move, the company acquires\n"
	.string "Cinnabar's Laboratory to invest in the\l"
	.string "research of Pokémon Fossils.$"
