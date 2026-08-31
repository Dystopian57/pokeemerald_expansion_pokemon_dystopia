# 1 "data/maps/Route103_MoveTutorHut/scripts.pory"


Route103_MoveTutorHut_MapScripts::
# 10 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightNPC
# 11 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightNPC
# 12 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightNPC
# 14 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLightTutorHut
# 17 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicTutorHut
# 18 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicTutorHut
# 19 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightMusicTutorHut
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


MoveTutor103Night::
# 62 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 63 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 64 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_M_SNORE
# 65 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Night_Text_0
# 67 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Night_Text_1
# 68 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return


MoveTutor103::
# 74 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 75 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 76 "data/maps/Route103_MoveTutorHut/scripts.pory"
	applymovement 1, MoveTutor103_Movement_0
# 78 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_unset movetutorintro, MoveTutor103_1
# 233 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto movetutorchoice
	return

MoveTutor103_1:
# 80 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_0
# 87 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag movetutorintro
# 88 "data/maps/Route103_MoveTutorHut/scripts.pory"
movetutorchoice:
# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_1
# 91 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_2, MoveTutor103_Text_3, MoveTutor103_Text_4
# 93 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_5
MoveTutor103_4:
# 181 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_8
MoveTutor103_7:
# 221 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_14
MoveTutor103_13:
# 227 "data/maps/Route103_MoveTutorHut/scripts.pory"
endtutorscript:
# 228 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_18
# 229 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
# 230 "data/maps/Route103_MoveTutorHut/scripts.pory"
exittutorscript:
# 231 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

MoveTutor103_5:
# 95 "data/maps/Route103_MoveTutorHut/scripts.pory"
	checkmoney 100
# 96 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MoveTutor103_11
MoveTutor103_10:
# 174 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor103_19
	goto MoveTutor103_4

MoveTutor103_8:
# 183 "data/maps/Route103_MoveTutorHut/scripts.pory"
	checkmoney 100
# 184 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MoveTutor103_17
MoveTutor103_16:
# 212 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor103_24
	goto MoveTutor103_7

MoveTutor103_11:
# 98 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_5
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_6, MoveTutor103_Text_7, MoveTutor103_Text_8, MoveTutor103_Text_9, MoveTutor103_Text_4
# 100 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_22
MoveTutor103_21:
# 117 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_30
MoveTutor103_29:
# 135 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_35
MoveTutor103_34:
# 152 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MoveTutor103_38
MoveTutor103_37:
# 169 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MoveTutor103_40
	goto MoveTutor103_10

MoveTutor103_14:
# 223 "data/maps/Route103_MoveTutorHut/scripts.pory"
canceltutor:
# 224 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_17
# 225 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto exittutorscript
	goto MoveTutor103_13

MoveTutor103_17:
# 186 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_13
# 187 "data/maps/Route103_MoveTutorHut/scripts.pory"
selectdifferentmonforrelearn:
# 188 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveRelearner
# 189 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 190 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 191 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special IsSelectedMonEgg
# 192 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CantTeachEgg
# 193 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8005, 0, NoMoveToTeachMon
# 194 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special TeachMoveRelearnerMove
# 195 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 196 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, 0, cancelledmoverelearnforamon
# 197 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 198 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 199 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 200 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 201 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 203 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
# 205 "data/maps/Route103_MoveTutorHut/scripts.pory"
cancelledmoverelearnforamon:
# 206 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_14
# 207 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_15, MoveTutor103_Text_16
# 208 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_27
MoveTutor103_26:
# 209 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_32
	goto MoveTutor103_16

MoveTutor103_19:
# 175 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 176 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 178 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
	goto MoveTutor103_4

MoveTutor103_22:
# 101 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 102 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 103 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 105 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 106 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 107 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, canceltutor
# 108 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 109 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 110 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 111 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 112 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 113 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_21

MoveTutor103_24:
# 213 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 214 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 216 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
	goto MoveTutor103_7

MoveTutor103_27:
# 208 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto selectdifferentmonforrelearn
	goto MoveTutor103_26

MoveTutor103_30:
# 118 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 119 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
# 120 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 121 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 122 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 123 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 124 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 125 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 126 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 127 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 128 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 129 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_29

MoveTutor103_32:
# 209 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto canceltutor
	goto MoveTutor103_16

MoveTutor103_35:
# 136 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 137 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 138 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 139 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 140 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 141 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 142 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 143 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 144 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 145 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 146 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 147 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_34

MoveTutor103_38:
# 153 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 154 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_METRONOME
# 155 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 156 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 157 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 158 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 159 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 160 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 161 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 162 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 163 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 164 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_37

MoveTutor103_40:
# 170 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto canceltutor
	goto MoveTutor103_10


NoMoveToTeachMon::
# 238 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox NoMoveToTeachMon_Text_0
	return


CantTeachEgg::
# 242 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox CantTeachEgg_Text_0
# 244 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return


MoveTutor103Sink::
# 248 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 249 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Sink_Text_0
# 250 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Bookshelf::
# 253 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 254 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Bookshelf_Text_0
# 255 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Drawer::
# 258 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 259 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Drawer_Text_0
# 260 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Wardrobe::
# 263 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 264 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Wardrobe_Text_0
# 265 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103BookPile::
# 268 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 269 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103BookPile_Text_0
# 270 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Kotatsu::
# 273 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 274 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Kotatsu_Text_0
# 275 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103OpenBox::
# 278 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 279 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103OpenBox_Text_0
# 281 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103SealedBox::
# 284 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 285 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103SealedBox_Text_0
# 286 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103ToolBox::
# 289 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 290 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103ToolBox_Text_0
# 291 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


KantonianWarHistoryVol3TutorHut::
# 295 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 296 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox KantonianWarHistoryVol3TutorHut_Text_0
# 298 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_15, KantonianWarHistoryVol3TutorHut_Text_1
# 300 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KantonianWarHistoryVol3TutorHut_2
KantonianWarHistoryVol3TutorHut_1:
# 309 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KantonianWarHistoryVol3TutorHut_5
KantonianWarHistoryVol3TutorHut_4:
# 312 "data/maps/Route103_MoveTutorHut/scripts.pory"
endkantonianwar3:
# 313 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

KantonianWarHistoryVol3TutorHut_2:
# 301 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmonpic SPECIES_PIKACHU_HOENN, 10, 3
# 302 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox KantonianWarHistoryVol3TutorHut_Text_2
# 308 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endkantonianwar3
	goto KantonianWarHistoryVol3TutorHut_1

KantonianWarHistoryVol3TutorHut_5:
# 310 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endkantonianwar3
	goto KantonianWarHistoryVol3TutorHut_4


# 76 "data/maps/Route103_MoveTutorHut/scripts.pory"
MoveTutor103_Movement_0:
# 76 "data/maps/Route103_MoveTutorHut/scripts.pory"
	face_player
	step_end

MoveTutor103Night_Text_0:
# 65 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "ZZZZZZ...$"

MoveTutor103Night_Text_1:
# 67 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "He is fast asleep. It would be better to\n"
	.string "return during daytime.$"

MoveTutor103_Text_0:
# 80 "data/maps/Route103_MoveTutorHut/scripts.pory"
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
# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Do any of your Pokémon need teaching?$"

MoveTutor103_Text_2:
# 91 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Tutor a move$"

MoveTutor103_Text_3:
# 91 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Relearn a move$"

MoveTutor103_Text_4:
# 91 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Nevermind$"

MoveTutor103_Text_5:
# 98 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I could teach your Pokémon one of\n"
	.string "these moves.$"

MoveTutor103_Text_6:
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Swagger$"

MoveTutor103_Text_7:
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Double Edge$"

MoveTutor103_Text_8:
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Explosion$"

MoveTutor103_Text_9:
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Metronome$"

MoveTutor103_Text_10:
# 101 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I teach?$"

MoveTutor103_Text_11:
# 109 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Very well. I'll collect your 100¥ now...$"

MoveTutor103_Text_12:
# 176 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I'm sorry... you seem a bit short on the\n"
	.string "100¥. We'll have to do this later.$"

MoveTutor103_Text_13:
# 186 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I have\n"
	.string "remember a move?$"

MoveTutor103_Text_14:
# 206 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Hm? Would you rather have a different\n"
	.string "Pokémon relearn a move?$"

MoveTutor103_Text_15:
# 207 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Yes$"

MoveTutor103_Text_16:
# 207 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Actually, nevermind$"

MoveTutor103_Text_17:
# 224 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Changed your mind? Well, I'll be here if\n"
	.string "you need me.$"

MoveTutor103_Text_18:
# 228 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Come back if you need my skills some\n"
	.string "other time.$"

NoMoveToTeachMon_Text_0:
# 238 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "This Pokémon... I don't think it has\n"
	.string "forgotten any moves. Ah, to be young\l"
	.string "again...$"

CantTeachEgg_Text_0:
# 242 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "That looks like a healthy egg... come\n"
	.string "back when it's hatched, and I may have\l"
	.string "some moves to teach it.$"

MoveTutor103Sink_Text_0:
# 249 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's just a regular sink.$"

MoveTutor103Bookshelf_Text_0:
# 254 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's full of books about Pokémon\n"
	.string "learning patterns.$"

MoveTutor103Drawer_Text_0:
# 259 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It looks like a regular drawer. I should\n"
	.string "leave this alone.$"

MoveTutor103Wardrobe_Text_0:
# 264 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a fitted wardrobe. There's no real\n"
	.string "reason to open it.$"

MoveTutor103BookPile_Text_0:
# 269 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a pile of books about Pokémon\n"
	.string "moves.$"

MoveTutor103Kotatsu_Text_0:
# 274 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A cozy kotatsu. It makes one want to\n"
	.string "stay home.$"

MoveTutor103OpenBox_Text_0:
# 279 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The label on the box reads 'to throw\n"
	.string "away'. It should be fine to peek...$"

MoveTutor103SealedBox_Text_0:
# 285 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

MoveTutor103ToolBox_Text_0:
# 290 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A toolbox full of tools worn with use.$"

KantonianWarHistoryVol3TutorHut_Text_0:
# 296 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The book's cover reads 'History of the\n"
	.string "Kantonian War, Volume 3.\p"
	.string "Read it?$"

KantonianWarHistoryVol3TutorHut_Text_1:
# 298 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "No$"

KantonianWarHistoryVol3TutorHut_Text_2:
# 302 "data/maps/Route103_MoveTutorHut/scripts.pory"
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
