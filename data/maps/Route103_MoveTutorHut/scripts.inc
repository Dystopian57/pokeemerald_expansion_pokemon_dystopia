# 1 "data/maps/Route103_MoveTutorHut/scripts.pory"


Route103_MoveTutorHut_MapScripts::
# 10 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_MoveTutorHutMapscriptbundle
# 11 "data/maps/Route103_MoveTutorHut/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_MoveTutorHutMapscriptbundle
	.byte 0


Route103_MoveTutorHutMapscriptbundle::
# 17 "data/maps/Route103_MoveTutorHut/scripts.pory"
	gettimeofday
# 18 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq Route103_MoveTutorHutMapscriptbundle_2
Route103_MoveTutorHutMapscriptbundle_1:
# 21 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq Route103_MoveTutorHutMapscriptbundle_5
Route103_MoveTutorHutMapscriptbundle_4:
# 24 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq Route103_MoveTutorHutMapscriptbundle_8
Route103_MoveTutorHutMapscriptbundle_7:
# 27 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq Route103_MoveTutorHutMapscriptbundle_11
Route103_MoveTutorHutMapscriptbundle_10:
# 30 "data/maps/Route103_MoveTutorHut/scripts.pory"
	gettimeofday
# 31 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq Route103_MoveTutorHutMapscriptbundle_14
Route103_MoveTutorHutMapscriptbundle_13:
# 34 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq Route103_MoveTutorHutMapscriptbundle_17
Route103_MoveTutorHutMapscriptbundle_16:
# 37 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq Route103_MoveTutorHutMapscriptbundle_20
Route103_MoveTutorHutMapscriptbundle_19:
# 40 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq Route103_MoveTutorHutMapscriptbundle_23
Route103_MoveTutorHutMapscriptbundle_22:
# 44 "data/maps/Route103_MoveTutorHut/scripts.pory"
enddaynightmusicmovetutorhut:
# 46 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto DayNightNPC
	return

Route103_MoveTutorHutMapscriptbundle_2:
# 19 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setweather WEATHER_NONE
	goto Route103_MoveTutorHutMapscriptbundle_1

Route103_MoveTutorHutMapscriptbundle_5:
# 22 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setweather WEATHER_NONE
	goto Route103_MoveTutorHutMapscriptbundle_4

Route103_MoveTutorHutMapscriptbundle_8:
# 25 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setweather WEATHER_NONE
	goto Route103_MoveTutorHutMapscriptbundle_7

Route103_MoveTutorHutMapscriptbundle_11:
# 28 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setweather WEATHER_SHADE
	goto Route103_MoveTutorHutMapscriptbundle_10

Route103_MoveTutorHutMapscriptbundle_14:
# 32 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto enddaynightmusicmovetutorhut
	goto Route103_MoveTutorHutMapscriptbundle_13

Route103_MoveTutorHutMapscriptbundle_17:
# 35 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto enddaynightmusicmovetutorhut
	goto Route103_MoveTutorHutMapscriptbundle_16

Route103_MoveTutorHutMapscriptbundle_20:
# 38 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto enddaynightmusicmovetutorhut
	goto Route103_MoveTutorHutMapscriptbundle_19

Route103_MoveTutorHutMapscriptbundle_23:
# 41 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playbgm MUS_TAKARASUSHI, TRUE
# 42 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto enddaynightmusicmovetutorhut
	goto Route103_MoveTutorHutMapscriptbundle_22


DayNightAmbientLightTutorHut::
# 53 "data/maps/Route103_MoveTutorHut/scripts.pory"
	gettimeofday
# 54 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightAmbientLightTutorHut_2
DayNightAmbientLightTutorHut_1:
# 57 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightAmbientLightTutorHut_5
DayNightAmbientLightTutorHut_4:
# 60 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightAmbientLightTutorHut_8
DayNightAmbientLightTutorHut_7:
# 63 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightAmbientLightTutorHut_11
DayNightAmbientLightTutorHut_10:
# 66 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return

DayNightAmbientLightTutorHut_2:
# 55 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setweather WEATHER_NONE
	goto DayNightAmbientLightTutorHut_1

DayNightAmbientLightTutorHut_5:
# 58 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setweather WEATHER_NONE
	goto DayNightAmbientLightTutorHut_4

DayNightAmbientLightTutorHut_8:
# 61 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setweather WEATHER_NONE
	goto DayNightAmbientLightTutorHut_7

DayNightAmbientLightTutorHut_11:
# 64 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setweather WEATHER_SHADE
	goto DayNightAmbientLightTutorHut_10


MoveTutor103Rope::
# 71 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 72 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_unset movetutorbinitem, MoveTutor103Rope_2
# 76 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Rope_Text_1
MoveTutor103Rope_1:
# 78 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return

MoveTutor103Rope_2:
# 73 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Rope_Text_0
# 74 "data/maps/Route103_MoveTutorHut/scripts.pory"
	giveitem ITEM_BINDING_BAND
	goto MoveTutor103Rope_1


MoveTutor103Night::
# 86 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 87 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 88 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_M_SNORE
# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Night_Text_0
# 91 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Night_Text_1
# 92 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return


MoveTutor103::
# 98 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 99 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 100 "data/maps/Route103_MoveTutorHut/scripts.pory"
	applymovement 1, MoveTutor103_Movement_0
# 102 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_unset movetutorintro, MoveTutor103_1
# 257 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto movetutorchoice
	return

MoveTutor103_1:
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_0
# 111 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setflag movetutorintro
# 112 "data/maps/Route103_MoveTutorHut/scripts.pory"
movetutorchoice:
# 113 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_1
# 115 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_2, MoveTutor103_Text_3, MoveTutor103_Text_4
# 117 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_5
MoveTutor103_4:
# 205 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_8
MoveTutor103_7:
# 245 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_14
MoveTutor103_13:
# 251 "data/maps/Route103_MoveTutorHut/scripts.pory"
endtutorscript:
# 252 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_18
# 253 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
# 254 "data/maps/Route103_MoveTutorHut/scripts.pory"
exittutorscript:
# 255 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

MoveTutor103_5:
# 119 "data/maps/Route103_MoveTutorHut/scripts.pory"
	checkmoney 100
# 120 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MoveTutor103_11
MoveTutor103_10:
# 198 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor103_19
	goto MoveTutor103_4

MoveTutor103_8:
# 207 "data/maps/Route103_MoveTutorHut/scripts.pory"
	checkmoney 100
# 208 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MoveTutor103_17
MoveTutor103_16:
# 236 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor103_24
	goto MoveTutor103_7

MoveTutor103_11:
# 122 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_5
# 123 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_6, MoveTutor103_Text_7, MoveTutor103_Text_8, MoveTutor103_Text_9, MoveTutor103_Text_4
# 124 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_22
MoveTutor103_21:
# 141 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_30
MoveTutor103_29:
# 159 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoveTutor103_35
MoveTutor103_34:
# 176 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MoveTutor103_38
MoveTutor103_37:
# 193 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MoveTutor103_40
	goto MoveTutor103_10

MoveTutor103_14:
# 247 "data/maps/Route103_MoveTutorHut/scripts.pory"
canceltutor:
# 248 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_17
# 249 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto exittutorscript
	goto MoveTutor103_13

MoveTutor103_17:
# 210 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_13
# 211 "data/maps/Route103_MoveTutorHut/scripts.pory"
selectdifferentmonforrelearn:
# 212 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveRelearner
# 213 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 214 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 215 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special IsSelectedMonEgg
# 216 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CantTeachEgg
# 217 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8005, 0, NoMoveToTeachMon
# 218 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special TeachMoveRelearnerMove
# 219 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 220 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, 0, cancelledmoverelearnforamon
# 221 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 222 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 223 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 224 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 225 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 227 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
# 229 "data/maps/Route103_MoveTutorHut/scripts.pory"
cancelledmoverelearnforamon:
# 230 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_14
# 231 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_15, MoveTutor103_Text_16
# 232 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor103_27
MoveTutor103_26:
# 233 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoveTutor103_32
	goto MoveTutor103_16

MoveTutor103_19:
# 199 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 200 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 202 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
	goto MoveTutor103_4

MoveTutor103_22:
# 125 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 126 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 127 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 128 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 129 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 130 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 131 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, canceltutor
# 132 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 133 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 134 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 135 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 136 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 137 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_21

MoveTutor103_24:
# 237 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 238 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_12
# 240 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemoneybox
	goto MoveTutor103_7

MoveTutor103_27:
# 232 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto selectdifferentmonforrelearn
	goto MoveTutor103_26

MoveTutor103_30:
# 142 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 143 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
# 144 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 145 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 146 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 147 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 148 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 149 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 150 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 151 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 152 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 153 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_29

MoveTutor103_32:
# 233 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto canceltutor
	goto MoveTutor103_16

MoveTutor103_35:
# 160 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 161 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 162 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 163 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 164 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 165 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 166 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 167 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 168 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 169 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 170 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 171 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_34

MoveTutor103_38:
# 177 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_10
# 178 "data/maps/Route103_MoveTutorHut/scripts.pory"
	setvar VAR_0x8005, MOVE_METRONOME
# 179 "data/maps/Route103_MoveTutorHut/scripts.pory"
	special ChooseMonForMoveTutor
# 180 "data/maps/Route103_MoveTutorHut/scripts.pory"
	waitstate
# 181 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, canceltutor
# 182 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, canceltutor
# 183 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmoneybox 0, 0
# 184 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103_Text_11
# 185 "data/maps/Route103_MoveTutorHut/scripts.pory"
	playse SE_SHOP
# 186 "data/maps/Route103_MoveTutorHut/scripts.pory"
	removemoney 100
# 187 "data/maps/Route103_MoveTutorHut/scripts.pory"
	updatemoneybox
# 188 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endtutorscript
	goto MoveTutor103_37

MoveTutor103_40:
# 194 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto canceltutor
	goto MoveTutor103_10


NoMoveToTeachMon::
# 262 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox NoMoveToTeachMon_Text_0
	return


CantTeachEgg::
# 266 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox CantTeachEgg_Text_0
# 268 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return


MoveTutor103Sink::
# 272 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 273 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Sink_Text_0
# 274 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


KantonianWarHistoryVol3103TutorHut::
# 278 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 279 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox KantonianWarHistoryVol3103TutorHut_Text_0
# 281 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_15, KantonianWarHistoryVol3103TutorHut_Text_1
# 283 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KantonianWarHistoryVol3103TutorHut_2
KantonianWarHistoryVol3103TutorHut_1:
# 293 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KantonianWarHistoryVol3103TutorHut_5
KantonianWarHistoryVol3103TutorHut_4:
# 295 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	return

KantonianWarHistoryVol3103TutorHut_2:
# 285 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox KantonianWarHistoryVol3103TutorHut_Text_2
	goto KantonianWarHistoryVol3103TutorHut_1

KantonianWarHistoryVol3103TutorHut_5:
# 293 "data/maps/Route103_MoveTutorHut/scripts.pory"
	release
	goto KantonianWarHistoryVol3103TutorHut_4


MoveTutor103Bookshelf::
# 299 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 300 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Bookshelf_Text_0
# 301 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Scroll::
# 305 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 306 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Scroll_Text_0
# 307 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Blanket::
# 310 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 311 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Blanket_Text_0
# 312 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Drawer::
# 316 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 317 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Drawer_Text_0
# 318 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Wardrobe::
# 321 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 322 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Wardrobe_Text_0
# 323 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103BookPile::
# 326 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 327 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103BookPile_Text_0
# 328 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103Kotatsu::
# 331 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 332 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103Kotatsu_Text_0
# 333 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103OpenBox::
# 336 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 337 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto_if_unset movetutoropenboxitem, MoveTutor103OpenBox_2
# 341 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103OpenBox_Text_1
MoveTutor103OpenBox_1:
# 342 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

MoveTutor103OpenBox_2:
# 338 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103OpenBox_Text_0
# 339 "data/maps/Route103_MoveTutorHut/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
	goto MoveTutor103OpenBox_1


MoveTutor103SealedBox::
# 345 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 346 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103SealedBox_Text_0
# 347 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


MoveTutor103ToolBox::
# 350 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lockall
# 351 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox MoveTutor103ToolBox_Text_0
# 352 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return


KantonianWarHistoryVol3TutorHut::
# 356 "data/maps/Route103_MoveTutorHut/scripts.pory"
	lock
# 357 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox KantonianWarHistoryVol3TutorHut_Text_0
# 359 "data/maps/Route103_MoveTutorHut/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor103_Text_15, KantonianWarHistoryVol3103TutorHut_Text_1
# 361 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KantonianWarHistoryVol3TutorHut_2
KantonianWarHistoryVol3TutorHut_1:
# 370 "data/maps/Route103_MoveTutorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KantonianWarHistoryVol3TutorHut_5
KantonianWarHistoryVol3TutorHut_4:
# 373 "data/maps/Route103_MoveTutorHut/scripts.pory"
endkantonianwar3:
# 374 "data/maps/Route103_MoveTutorHut/scripts.pory"
	hidemonpic
# 375 "data/maps/Route103_MoveTutorHut/scripts.pory"
	releaseall
	return

KantonianWarHistoryVol3TutorHut_2:
# 362 "data/maps/Route103_MoveTutorHut/scripts.pory"
	showmonpic SPECIES_PIKACHU_HOENN, 10, 3
# 363 "data/maps/Route103_MoveTutorHut/scripts.pory"
	msgbox KantonianWarHistoryVol3TutorHut_Text_1
# 369 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endkantonianwar3
	goto KantonianWarHistoryVol3TutorHut_1

KantonianWarHistoryVol3TutorHut_5:
# 371 "data/maps/Route103_MoveTutorHut/scripts.pory"
	goto endkantonianwar3
	goto KantonianWarHistoryVol3TutorHut_4


# 100 "data/maps/Route103_MoveTutorHut/scripts.pory"
MoveTutor103_Movement_0:
# 100 "data/maps/Route103_MoveTutorHut/scripts.pory"
	face_player
	step_end

MoveTutor103Rope_Text_0:
# 73 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "For some reason, a knotted piece of\n"
	.string "rope has been discarded...$"

MoveTutor103Rope_Text_1:
# 76 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The trash can is empty.$"

MoveTutor103Night_Text_0:
# 89 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "ZZZZZZ...$"

MoveTutor103Night_Text_1:
# 91 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "He is fast asleep. It would be better to\n"
	.string "return during daytime.$"

MoveTutor103_Text_0:
# 104 "data/maps/Route103_MoveTutorHut/scripts.pory"
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
# 113 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Do any of your Pokémon need teaching?$"

MoveTutor103_Text_2:
# 115 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Tutor a move$"

MoveTutor103_Text_3:
# 115 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Relearn a move$"

MoveTutor103_Text_4:
# 115 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Nevermind$"

MoveTutor103_Text_5:
# 122 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I could teach your Pokémon one of\n"
	.string "these moves.$"

MoveTutor103_Text_6:
# 123 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Swagger$"

MoveTutor103_Text_7:
# 123 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Double Edge$"

MoveTutor103_Text_8:
# 123 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Explosion$"

MoveTutor103_Text_9:
# 123 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Metronome$"

MoveTutor103_Text_10:
# 125 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I teach?$"

MoveTutor103_Text_11:
# 133 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Very well. I'll collect your 100¥ now...$"

MoveTutor103_Text_12:
# 200 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "I'm sorry... you seem a bit short on the\n"
	.string "100¥. We'll have to do this later.$"

MoveTutor103_Text_13:
# 210 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Which of your Pokémon should I have\n"
	.string "remember a move?$"

MoveTutor103_Text_14:
# 230 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Hm? Would you rather have a different\n"
	.string "Pokémon relearn a move?$"

MoveTutor103_Text_15:
# 231 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Yes$"

MoveTutor103_Text_16:
# 231 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Actually, nevermind$"

MoveTutor103_Text_17:
# 248 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Changed your mind? Well, I'll be here if\n"
	.string "you need me.$"

MoveTutor103_Text_18:
# 252 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "Come back if you need my skills some\n"
	.string "other time.$"

NoMoveToTeachMon_Text_0:
# 262 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "This Pokémon... I don't think it has\n"
	.string "forgotten any moves. Ah, to be young\l"
	.string "again...$"

CantTeachEgg_Text_0:
# 266 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "That looks like a healthy egg... come\n"
	.string "back when it's hatched, and I may have\l"
	.string "some moves to teach it.$"

MoveTutor103Sink_Text_0:
# 273 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's just a regular sink.$"

KantonianWarHistoryVol3103TutorHut_Text_0:
# 279 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A book's cover reads “History of the\n"
	.string "Kantonian War, Volume 3”.\p"
	.string "Read it?$"

KantonianWarHistoryVol3103TutorHut_Text_1:
# 281 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "No$"

KantonianWarHistoryVol3103TutorHut_Text_2:
# 285 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "May, 2006. Team Rocket has spent the\n"
	.string "last decade using Silph Co. as a proxy\l"
	.string "for their criminal activities, primarily\l"
	.string "that of Pokémon trafficking.\p"
	.string "The Kantonian citizens are outraged,\n"
	.string "but authorities are kept at bay\l"
	.string "through bribery.\p"
	.string "In a curious move, the company acquires\n"
	.string "Cinnabar's Laboratory to invest in the\l"
	.string "study of Pokémon Fossils.$"

MoveTutor103Bookshelf_Text_0:
# 300 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's full of books about Pokémon\n"
	.string "learning patterns.$"

MoveTutor103Scroll_Text_0:
# 306 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's an old scroll about Pokémon\n"
	.string "learning patterns.$"

MoveTutor103Blanket_Text_0:
# 311 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A large futon blanket.$"

MoveTutor103Drawer_Text_0:
# 317 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It looks like a regular drawer. Should\n"
	.string "leave this alone.$"

MoveTutor103Wardrobe_Text_0:
# 322 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a fitted wardrobe. There's no real\n"
	.string "reason to open it.$"

MoveTutor103BookPile_Text_0:
# 327 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a pile of books about Pokémon\n"
	.string "moves.$"

MoveTutor103Kotatsu_Text_0:
# 332 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A cozy kotatsu. It makes one want to\n"
	.string "stay home.$"

MoveTutor103OpenBox_Text_0:
# 338 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The box's label says “To throw out”. It\n"
	.string "should be alright to peek...$"

MoveTutor103OpenBox_Text_1:
# 341 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The box is empty.$"

MoveTutor103SealedBox_Text_0:
# 346 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

MoveTutor103ToolBox_Text_0:
# 351 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "A toolbox full of tools worn with use.$"

KantonianWarHistoryVol3TutorHut_Text_0:
# 357 "data/maps/Route103_MoveTutorHut/scripts.pory"
	.string "The book's cover reads “History of the\n"
	.string "Kantonian War, Volume 3.”\p"
	.string "Read it?$"

KantonianWarHistoryVol3TutorHut_Text_1:
# 363 "data/maps/Route103_MoveTutorHut/scripts.pory"
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
