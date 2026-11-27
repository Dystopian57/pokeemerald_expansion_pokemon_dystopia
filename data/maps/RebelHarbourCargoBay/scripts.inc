# 1 "data/maps/RebelHarbourCargoBay/scripts.pory"


RebelHarbourCargoBay_MapScripts::
# 5 "data/maps/RebelHarbourCargoBay/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RebelHarbourCargoBayMapscriptBundle
# 6 "data/maps/RebelHarbourCargoBay/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RebelHarbourCargoBayMapscriptBundle
# 7 "data/maps/RebelHarbourCargoBay/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RebelHarbourCargoBayMapscriptBundle
	.byte 0


RebelHarbourCargoBayMapscriptBundle::
# 13 "data/maps/RebelHarbourCargoBay/scripts.pory"
	gettimeofday
# 14 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq RebelHarbourCargoBayMapscriptBundle_2
RebelHarbourCargoBayMapscriptBundle_1:
# 17 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq RebelHarbourCargoBayMapscriptBundle_5
RebelHarbourCargoBayMapscriptBundle_4:
# 20 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq RebelHarbourCargoBayMapscriptBundle_8
RebelHarbourCargoBayMapscriptBundle_7:
# 23 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq RebelHarbourCargoBayMapscriptBundle_11
RebelHarbourCargoBayMapscriptBundle_10:
# 28 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestdailydone, RebelHarbourCargoBayMapscriptBundle_14
RebelHarbourCargoBayMapscriptBundle_13:
# 34 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto DayNightNPC
	return

RebelHarbourCargoBayMapscriptBundle_2:
# 15 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setweather WEATHER_NONE
	goto RebelHarbourCargoBayMapscriptBundle_1

RebelHarbourCargoBayMapscriptBundle_5:
# 18 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setweather WEATHER_NONE
	goto RebelHarbourCargoBayMapscriptBundle_4

RebelHarbourCargoBayMapscriptBundle_8:
# 21 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setweather WEATHER_NONE
	goto RebelHarbourCargoBayMapscriptBundle_7

RebelHarbourCargoBayMapscriptBundle_11:
# 24 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setweather WEATHER_SHADE
	goto RebelHarbourCargoBayMapscriptBundle_10

RebelHarbourCargoBayMapscriptBundle_14:
# 30 "data/maps/RebelHarbourCargoBay/scripts.pory"
	clearflag rebelharborbox1
# 31 "data/maps/RebelHarbourCargoBay/scripts.pory"
	clearflag rebelharborboxs
# 32 "data/maps/RebelHarbourCargoBay/scripts.pory"
	clearflag rebelharborboxt
	goto RebelHarbourCargoBayMapscriptBundle_13


RebelHarborCartQuestPlayerLeaves::
# 37 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 38 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestPlayerLeaves_Text_0
# 41 "data/maps/RebelHarbourCargoBay/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborCartQuestPlayerLeaves_Text_1, RebelHarborCartQuestPlayerLeaves_Text_2
# 45 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RebelHarborCartQuestPlayerLeaves_2
RebelHarborCartQuestPlayerLeaves_1:
# 70 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RebelHarborCartQuestPlayerLeaves_5
RebelHarborCartQuestPlayerLeaves_4:
# 76 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborCartQuestPlayerLeaves_2:
# 47 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 0
	goto_if_eq RebelHarborCartQuestPlayerLeaves_8
RebelHarborCartQuestPlayerLeaves_7:
# 61 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 0
	goto_if_gt RebelHarborCartQuestPlayerLeaves_10
	goto RebelHarborCartQuestPlayerLeaves_1

RebelHarborCartQuestPlayerLeaves_5:
# 71 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestPlayerLeaves_Text_5
# 72 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborCartQuestPlayerLeaves_Movement_0
# 73 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto RebelHarborCartQuestPlayerLeaves_4

RebelHarborCartQuestPlayerLeaves_8:
# 49 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestPlayerLeaves_Text_3
# 51 "data/maps/RebelHarbourCargoBay/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 52 "data/maps/RebelHarbourCargoBay/scripts.pory"
	clearflag harborcartquestaccepted
# 53 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 54 "data/maps/RebelHarbourCargoBay/scripts.pory"
	clearflag harborexampletrolley
# 55 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 5
# 56 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setvar VAR_HARBORCANTEXITWITHTROLLEY, 0
# 57 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setvar VAR_HARBORDELIVEREDBOXCOUNT, 0
# 58 "data/maps/RebelHarbourCargoBay/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto RebelHarborCartQuestPlayerLeaves_7

RebelHarborCartQuestPlayerLeaves_10:
# 63 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestPlayerLeaves_Text_4
# 65 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborCartQuestPlayerLeaves_Movement_0
# 66 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto RebelHarborCartQuestPlayerLeaves_1


RebelHarborCartQuestWorker::
# 80 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 82 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_set harborcartquestdailydone, RebelHarborCartQuestWorker_2
RebelHarborCartQuestWorker_1:
# 88 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_set harborcartquestaccepted, RebelHarborCartQuestWorker_5
RebelHarborCartQuestWorker_4:
# 248 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborCartQuestWorker_8
RebelHarborCartQuestWorker_7:
# 362 "data/maps/RebelHarbourCargoBay/scripts.pory"
endofharborcartquestworker:
# 363 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborCartQuestWorker_2:
# 83 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_0
# 84 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofharborcartquestworker
	goto RebelHarborCartQuestWorker_1

RebelHarborCartQuestWorker_5:
# 90 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_1
# 92 "data/maps/RebelHarbourCargoBay/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborCartQuestWorker_Text_2, RebelHarborCartQuestWorker_Text_3
# 96 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RebelHarborCartQuestWorker_11
RebelHarborCartQuestWorker_10:
# 143 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RebelHarborCartQuestWorker_16
	goto RebelHarborCartQuestWorker_4

RebelHarborCartQuestWorker_8:
# 251 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_26
# 253 "data/maps/RebelHarbourCargoBay/scripts.pory"
harborquestchoice:
# 255 "data/maps/RebelHarbourCargoBay/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborCartQuestPlayerLeaves_Text_1, RebelHarborCartQuestPlayerLeaves_Text_2, RebelHarborCartQuestWorker_Text_27
# 261 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RebelHarborCartQuestWorker_14
RebelHarborCartQuestWorker_13:
# 315 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RebelHarborCartQuestWorker_22
RebelHarborCartQuestWorker_21:
# 320 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RebelHarborCartQuestWorker_34
	goto RebelHarborCartQuestWorker_7

RebelHarborCartQuestWorker_11:
# 98 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborCartQuestWorker_19
RebelHarborCartQuestWorker_18:
# 104 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborCartQuestWorker_32
RebelHarborCartQuestWorker_31:
# 109 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborCartQuestWorker_40
RebelHarborCartQuestWorker_39:
# 114 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborCartQuestWorker_49
RebelHarborCartQuestWorker_48:
# 119 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 120 "data/maps/RebelHarbourCargoBay/scripts.pory"
	clearflag rebelharborcart
# 121 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 1
# 122 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 1, RebelHarborCartQuestWorker_Movement_0
# 123 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 1, 6, 22
# 124 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_EMPTYCART, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
# 126 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 1
	goto_if_eq RebelHarborCartQuestWorker_57
RebelHarborCartQuestWorker_56:
# 130 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 2
	goto_if_eq RebelHarborCartQuestWorker_63
RebelHarborCartQuestWorker_62:
# 133 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 3
	goto_if_eq RebelHarborCartQuestWorker_69
RebelHarborCartQuestWorker_68:
# 136 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setvar VAR_HARBORCARTBOXCOUNT, 0
# 138 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofharborcartquestworker
	goto RebelHarborCartQuestWorker_10

RebelHarborCartQuestWorker_14:
# 262 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestintro, RebelHarborCartQuestWorker_25
# 293 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_33
RebelHarborCartQuestWorker_24:
# 295 "data/maps/RebelHarbourCargoBay/scripts.pory"
giventrolley:
# 296 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidefollower
# 297 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag harborexampletrolley
# 298 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 5
# 299 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 1
# 300 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 1, 6, 22
# 301 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 1, RebelHarborCartQuestWorker_Movement_0
# 302 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_EMPTYCART, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
# 303 "data/maps/RebelHarbourCargoBay/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 304 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_34
# 306 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_35
# 309 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag harborcartquestaccepted
# 310 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setvar VAR_HARBORCANTEXITWITHTROLLEY, 1
# 311 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofharborcartquestworker
	goto RebelHarborCartQuestWorker_13

RebelHarborCartQuestWorker_16:
# 144 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_11
# 145 "data/maps/RebelHarbourCargoBay/scripts.pory"
	showmoneybox 18, 0
# 147 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 0
	goto_if_eq RebelHarborCartQuestWorker_29
RebelHarborCartQuestWorker_28:
# 156 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 1
	goto_if_eq RebelHarborCartQuestWorker_37
RebelHarborCartQuestWorker_36:
# 167 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 2
	goto_if_eq RebelHarborCartQuestWorker_46
RebelHarborCartQuestWorker_45:
# 178 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 3
	goto_if_eq RebelHarborCartQuestWorker_54
RebelHarborCartQuestWorker_53:
# 189 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 4
	goto_if_eq RebelHarborCartQuestWorker_60
RebelHarborCartQuestWorker_59:
# 200 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 5
	goto_if_eq RebelHarborCartQuestWorker_66
RebelHarborCartQuestWorker_65:
# 211 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 6
	goto_if_eq RebelHarborCartQuestWorker_72
RebelHarborCartQuestWorker_71:
# 222 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 7
	goto_if_eq RebelHarborCartQuestWorker_75
RebelHarborCartQuestWorker_74:
# 234 "data/maps/RebelHarbourCargoBay/scripts.pory"
	clearflag harborcartquestaccepted
# 235 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 236 "data/maps/RebelHarbourCargoBay/scripts.pory"
	clearflag harborexampletrolley
# 237 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 5
# 238 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setvar VAR_HARBORDELIVEREDBOXCOUNT, 0
# 239 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setvar VAR_HARBORCANTEXITWITHTROLLEY, 0
# 240 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag harborcartquestdailydone
# 242 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofharborcartquestworker
	goto RebelHarborCartQuestWorker_4

RebelHarborCartQuestWorker_19:
# 100 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_4
# 101 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofharborcartquestworker
	goto RebelHarborCartQuestWorker_18

RebelHarborCartQuestWorker_22:
# 316 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_36
# 317 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofharborcartquestworker
	goto RebelHarborCartQuestWorker_21

RebelHarborCartQuestWorker_25:
# 263 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_28
# 265 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_29
# 269 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborCartQuestWorker_Movement_1
# 271 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, RebelHarborCartQuestWorker_Movement_1
# 272 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 274 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_30
# 277 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborCartQuestWorker_Movement_2
# 279 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, RebelHarborCartQuestWorker_Movement_2
# 280 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 282 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 3, RebelHarborCartQuestWorker_Movement_0
# 283 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement 3
# 284 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_31
# 286 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 3, RebelHarborCartQuestWorker_Movement_3
# 287 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement 3
# 288 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_32
# 289 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag harborcartquestintro
# 290 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto giventrolley
	goto RebelHarborCartQuestWorker_24

RebelHarborCartQuestWorker_29:
# 149 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_12
# 151 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidemoneybox
# 153 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_13
	goto RebelHarborCartQuestWorker_28

RebelHarborCartQuestWorker_32:
# 106 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_5
# 107 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORDELIVEREDBOXCOUNT, + 1
	goto RebelHarborCartQuestWorker_31

RebelHarborCartQuestWorker_34:
# 322 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestintro, RebelHarborCartQuestWorker_43
RebelHarborCartQuestWorker_42:
# 351 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_set harborcartquestintro, RebelHarborCartQuestWorker_51
	goto RebelHarborCartQuestWorker_7

RebelHarborCartQuestWorker_37:
# 157 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_14
# 158 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addmoney 200
# 159 "data/maps/RebelHarbourCargoBay/scripts.pory"
	updatemoneybox
# 160 "data/maps/RebelHarbourCargoBay/scripts.pory"
	playse SE_RG_SHOP
# 161 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitse
# 162 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidemoneybox
# 163 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_15
	goto RebelHarborCartQuestWorker_36

RebelHarborCartQuestWorker_40:
# 111 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_6
# 112 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORDELIVEREDBOXCOUNT, + 2
	goto RebelHarborCartQuestWorker_39

RebelHarborCartQuestWorker_43:
# 323 "data/maps/RebelHarbourCargoBay/scripts.pory"
explainharborcartquest:
# 324 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_29
# 328 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborCartQuestWorker_Movement_1
# 330 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, RebelHarborCartQuestWorker_Movement_1
# 331 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 333 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_30
# 336 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborCartQuestWorker_Movement_2
# 338 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, RebelHarborCartQuestWorker_Movement_2
# 339 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 341 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 3, RebelHarborCartQuestWorker_Movement_0
# 342 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement 3
# 343 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_31
# 345 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_37
# 347 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag harborcartquestintro
# 348 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto harborquestchoice
	goto RebelHarborCartQuestWorker_42

RebelHarborCartQuestWorker_46:
# 168 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_16
# 169 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addmoney 400
# 170 "data/maps/RebelHarbourCargoBay/scripts.pory"
	updatemoneybox
# 171 "data/maps/RebelHarbourCargoBay/scripts.pory"
	playse SE_RG_SHOP
# 172 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitse
# 173 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidemoneybox
# 174 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_15
	goto RebelHarborCartQuestWorker_45

RebelHarborCartQuestWorker_49:
# 116 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_7
# 117 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORDELIVEREDBOXCOUNT, + 3
	goto RebelHarborCartQuestWorker_48

RebelHarborCartQuestWorker_51:
# 352 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_38
# 353 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto explainharborcartquest
	goto RebelHarborCartQuestWorker_7

RebelHarborCartQuestWorker_54:
# 179 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_17
# 180 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addmoney 600
# 181 "data/maps/RebelHarbourCargoBay/scripts.pory"
	updatemoneybox
# 182 "data/maps/RebelHarbourCargoBay/scripts.pory"
	playse SE_RG_SHOP
# 183 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitse
# 184 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidemoneybox
# 185 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_18
	goto RebelHarborCartQuestWorker_53

RebelHarborCartQuestWorker_57:
# 128 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_8
	goto RebelHarborCartQuestWorker_56

RebelHarborCartQuestWorker_60:
# 190 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_19
# 191 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addmoney 800
# 192 "data/maps/RebelHarbourCargoBay/scripts.pory"
	updatemoneybox
# 193 "data/maps/RebelHarbourCargoBay/scripts.pory"
	playse SE_RG_SHOP
# 194 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitse
# 195 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidemoneybox
# 196 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_20
	goto RebelHarborCartQuestWorker_59

RebelHarborCartQuestWorker_63:
# 131 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_9
	goto RebelHarborCartQuestWorker_62

RebelHarborCartQuestWorker_66:
# 201 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_21
# 202 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addmoney 800
# 203 "data/maps/RebelHarbourCargoBay/scripts.pory"
	updatemoneybox
# 204 "data/maps/RebelHarbourCargoBay/scripts.pory"
	playse SE_RG_SHOP
# 205 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitse
# 206 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidemoneybox
# 207 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_20
	goto RebelHarborCartQuestWorker_65

RebelHarborCartQuestWorker_69:
# 134 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_10
	goto RebelHarborCartQuestWorker_68

RebelHarborCartQuestWorker_72:
# 212 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_22
# 213 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addmoney 800
# 214 "data/maps/RebelHarbourCargoBay/scripts.pory"
	updatemoneybox
# 215 "data/maps/RebelHarbourCargoBay/scripts.pory"
	playse SE_RG_SHOP
# 216 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitse
# 217 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidemoneybox
# 218 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_23
	goto RebelHarborCartQuestWorker_71

RebelHarborCartQuestWorker_75:
# 223 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_24
# 224 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addmoney 800
# 225 "data/maps/RebelHarbourCargoBay/scripts.pory"
	updatemoneybox
# 226 "data/maps/RebelHarbourCargoBay/scripts.pory"
	playse SE_RG_SHOP
# 227 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitse
# 228 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidemoneybox
# 229 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_25
	goto RebelHarborCartQuestWorker_74


RebelHarborCartFollow::
# 368 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 372 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborCartFollow_2
RebelHarborCartFollow_1:
# 377 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborCartFollow_5
RebelHarborCartFollow_4:
# 382 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborCartFollow_8
RebelHarborCartFollow_7:
# 387 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborCartFollow_11
RebelHarborCartFollow_10:
# 393 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborCartFollow_2:
# 374 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartFollow_Text_0
	goto RebelHarborCartFollow_1

RebelHarborCartFollow_5:
# 379 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartFollow_Text_1
	goto RebelHarborCartFollow_4

RebelHarborCartFollow_8:
# 384 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartFollow_Text_2
	goto RebelHarborCartFollow_7

RebelHarborCartFollow_11:
# 389 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartFollow_Text_3
	goto RebelHarborCartFollow_10


RebelHarborLoadBox1::
# 400 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 403 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborLoadBox1_2
# 411 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborLoadBox1_6
RebelHarborLoadBox1_5:
# 422 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborLoadBox1_9
RebelHarborLoadBox1_8:
# 433 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborLoadBox1_12
RebelHarborLoadBox1_11:
# 444 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborLoadBox1_15
RebelHarborLoadBox1_14:
# 450 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORCARTBOXCOUNT, + 1
RebelHarborLoadBox1_1:
# 453 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborLoadBox1_2:
# 405 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_0
	goto RebelHarborLoadBox1_1

RebelHarborLoadBox1_6:
# 413 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 6
# 414 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborbox1
# 415 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 2
# 416 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 2, RebelHarborCartQuestWorker_Movement_3
# 417 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 2, 2, 12
# 418 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 419 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX1, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox1_5

RebelHarborLoadBox1_9:
# 424 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 6
# 425 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborbox1
# 426 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 8
# 427 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 8, RebelHarborCartQuestWorker_Movement_3
# 428 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 8, 2, 12
# 429 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 430 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX2, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox1_8

RebelHarborLoadBox1_12:
# 435 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 6
# 436 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborbox1
# 437 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 9
# 438 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 9, RebelHarborCartQuestWorker_Movement_3
# 439 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 9, 2, 12
# 440 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 441 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX3, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox1_11

RebelHarborLoadBox1_15:
# 446 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_1
# 447 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofloadbox2
	goto RebelHarborLoadBox1_14


RebelHarborLoadBox2::
# 458 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 461 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborLoadBox2_2
# 469 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborLoadBox2_6
RebelHarborLoadBox2_5:
# 480 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborLoadBox2_9
RebelHarborLoadBox2_8:
# 491 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborLoadBox2_12
RebelHarborLoadBox2_11:
# 502 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborLoadBox2_15
RebelHarborLoadBox2_14:
# 508 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORCARTBOXCOUNT, + 1
# 509 "data/maps/RebelHarbourCargoBay/scripts.pory"
endofloadbox2:
RebelHarborLoadBox2_1:
# 512 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborLoadBox2_2:
# 463 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_0
	goto RebelHarborLoadBox2_1

RebelHarborLoadBox2_6:
# 471 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 14
# 472 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxs
# 473 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 2
# 474 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 2, RebelHarborCartQuestWorker_Movement_0
# 475 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 2, 8, 12
# 476 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 477 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX1, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox2_5

RebelHarborLoadBox2_9:
# 482 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 14
# 483 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxs
# 484 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 8
# 485 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 8, RebelHarborCartQuestWorker_Movement_0
# 486 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 8, 8, 12
# 487 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 488 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX2, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox2_8

RebelHarborLoadBox2_12:
# 493 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 14
# 494 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxs
# 495 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 9
# 496 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 9, RebelHarborCartQuestWorker_Movement_0
# 497 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 9, 8, 12
# 498 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 499 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX3, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox2_11

RebelHarborLoadBox2_15:
# 504 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_1
# 505 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofloadbox2
	goto RebelHarborLoadBox2_14


RebelHarborLoadBox3::
# 517 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 520 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborLoadBox3_2
# 529 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborLoadBox3_6
RebelHarborLoadBox3_5:
# 540 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborLoadBox3_9
RebelHarborLoadBox3_8:
# 551 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborLoadBox3_12
RebelHarborLoadBox3_11:
# 562 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborLoadBox3_15
RebelHarborLoadBox3_14:
# 568 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORCARTBOXCOUNT, + 1
RebelHarborLoadBox3_1:
# 572 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborLoadBox3_2:
# 522 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_0
	goto RebelHarborLoadBox3_1

RebelHarborLoadBox3_6:
# 531 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 7
# 532 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxt
# 533 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 2
# 534 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 2, RebelHarborCartQuestWorker_Movement_0
# 535 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 2, 6, 15
# 536 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 537 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX1, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox3_5

RebelHarborLoadBox3_9:
# 542 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 7
# 543 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxt
# 544 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 8
# 545 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 8, RebelHarborCartQuestWorker_Movement_0
# 546 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 8, 6, 15
# 547 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 548 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX2, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox3_8

RebelHarborLoadBox3_12:
# 553 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 7
# 554 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxt
# 555 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 9
# 556 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 9, RebelHarborCartQuestWorker_Movement_0
# 557 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 9, 6, 15
# 558 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 559 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX3, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox3_11

RebelHarborLoadBox3_15:
# 564 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_1
# 565 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofloadbox2
	goto RebelHarborLoadBox3_14


RebelHarborLoadBox4::
# 578 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 581 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborLoadBox4_2
# 590 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborLoadBox4_6
RebelHarborLoadBox4_5:
# 601 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborLoadBox4_9
RebelHarborLoadBox4_8:
# 612 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborLoadBox4_12
RebelHarborLoadBox4_11:
# 623 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborLoadBox4_15
RebelHarborLoadBox4_14:
# 629 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORCARTBOXCOUNT, + 1
RebelHarborLoadBox4_1:
# 633 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborLoadBox4_2:
# 583 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_0
	goto RebelHarborLoadBox4_1

RebelHarborLoadBox4_6:
# 592 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 11
# 593 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxf
# 594 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 2
# 595 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 2, RebelHarborCartQuestWorker_Movement_3
# 596 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 2, 3, 15
# 597 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 598 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX1, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox4_5

RebelHarborLoadBox4_9:
# 603 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 11
# 604 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxf
# 605 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 8
# 606 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 8, RebelHarborCartQuestWorker_Movement_3
# 607 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 8, 3, 15
# 608 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 609 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX2, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox4_8

RebelHarborLoadBox4_12:
# 614 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 11
# 615 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxf
# 616 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 9
# 617 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 9, RebelHarborCartQuestWorker_Movement_3
# 618 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 9, 3, 15
# 619 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 620 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX3, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox4_11

RebelHarborLoadBox4_15:
# 625 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_1
# 626 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofloadbox2
	goto RebelHarborLoadBox4_14


RebelHarborLoadBox5::
# 638 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 641 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborLoadBox5_2
# 650 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborLoadBox5_6
RebelHarborLoadBox5_5:
# 661 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborLoadBox5_9
RebelHarborLoadBox5_8:
# 672 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborLoadBox5_12
RebelHarborLoadBox5_11:
# 683 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborLoadBox5_15
RebelHarborLoadBox5_14:
# 689 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORCARTBOXCOUNT, + 1
RebelHarborLoadBox5_1:
# 693 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborLoadBox5_2:
# 643 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_0
	goto RebelHarborLoadBox5_1

RebelHarborLoadBox5_6:
# 652 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 10
# 653 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxv
# 654 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 2
# 655 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 2, RebelHarborCartQuestWorker_Movement_3
# 656 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 2, 4, 22
# 657 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 658 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX1, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox5_5

RebelHarborLoadBox5_9:
# 663 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 10
# 664 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxv
# 665 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 8
# 666 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 8, RebelHarborCartQuestWorker_Movement_3
# 667 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 8, 4, 22
# 668 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 669 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX2, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox5_8

RebelHarborLoadBox5_12:
# 674 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 10
# 675 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxv
# 676 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 9
# 677 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 9, RebelHarborCartQuestWorker_Movement_3
# 678 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 9, 4, 22
# 679 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 680 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX3, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox5_11

RebelHarborLoadBox5_15:
# 685 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_1
# 686 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofloadbox2
	goto RebelHarborLoadBox5_14


RebelHarborLoadBox6::
# 697 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 700 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborLoadBox6_2
# 709 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborLoadBox6_6
RebelHarborLoadBox6_5:
# 720 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborLoadBox6_9
RebelHarborLoadBox6_8:
# 731 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborLoadBox6_12
RebelHarborLoadBox6_11:
# 742 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborLoadBox6_15
RebelHarborLoadBox6_14:
# 748 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORCARTBOXCOUNT, + 1
RebelHarborLoadBox6_1:
# 752 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborLoadBox6_2:
# 702 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_0
	goto RebelHarborLoadBox6_1

RebelHarborLoadBox6_6:
# 711 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 12
# 712 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxx
# 713 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 2
# 714 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 2, RebelHarborCartQuestWorker_Movement_3
# 715 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 2, 3, 25
# 716 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 717 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX1, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox6_5

RebelHarborLoadBox6_9:
# 722 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 12
# 723 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxx
# 724 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 8
# 725 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 8, RebelHarborCartQuestWorker_Movement_3
# 726 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 8, 3, 25
# 727 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 728 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX2, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox6_8

RebelHarborLoadBox6_12:
# 733 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 12
# 734 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxx
# 735 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 9
# 736 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 9, RebelHarborCartQuestWorker_Movement_3
# 737 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 9, 3, 25
# 738 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 739 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX3, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox6_11

RebelHarborLoadBox6_15:
# 744 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_1
# 745 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofloadbox2
	goto RebelHarborLoadBox6_14


RebelHarborLoadBox7::
# 756 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 759 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborLoadBox7_2
# 768 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborLoadBox7_6
RebelHarborLoadBox7_5:
# 779 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborLoadBox7_9
RebelHarborLoadBox7_8:
# 790 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborLoadBox7_12
RebelHarborLoadBox7_11:
# 801 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborLoadBox7_15
RebelHarborLoadBox7_14:
# 807 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORCARTBOXCOUNT, + 1
RebelHarborLoadBox7_1:
# 811 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborLoadBox7_2:
# 761 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_0
	goto RebelHarborLoadBox7_1

RebelHarborLoadBox7_6:
# 770 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 13
# 771 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxx
# 772 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 2
# 773 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 2, RebelHarborCartQuestWorker_Movement_0
# 774 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 2, 8, 24
# 775 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 776 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX1, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox7_5

RebelHarborLoadBox7_9:
# 781 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 13
# 782 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxx
# 783 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 8
# 784 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 8, RebelHarborCartQuestWorker_Movement_0
# 785 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 8, 8, 24
# 786 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 787 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX2, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox7_8

RebelHarborLoadBox7_12:
# 792 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 13
# 793 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxx
# 794 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 9
# 795 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 9, RebelHarborCartQuestWorker_Movement_0
# 796 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 9, 8, 24
# 797 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 798 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX3, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox7_11

RebelHarborLoadBox7_15:
# 803 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_1
# 804 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofloadbox2
	goto RebelHarborLoadBox7_14


RebelHarborCartGrab::
# 830 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 832 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborCartGrab_2
RebelHarborCartGrab_1:
# 837 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_set harborcartquestaccepted, RebelHarborCartGrab_5
RebelHarborCartGrab_4:
# 844 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborCartGrab_2:
# 834 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartGrab_Text_0
	goto RebelHarborCartGrab_1

RebelHarborCartGrab_5:
# 839 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartGrab_Text_1
# 840 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_EMPTYCART, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborCartGrab_4


# 65 "data/maps/RebelHarbourCargoBay/scripts.pory"
RebelHarborCartQuestPlayerLeaves_Movement_0:
# 65 "data/maps/RebelHarbourCargoBay/scripts.pory"
	walk_right
	step_end

# 122 "data/maps/RebelHarbourCargoBay/scripts.pory"
RebelHarborCartQuestWorker_Movement_0:
# 122 "data/maps/RebelHarbourCargoBay/scripts.pory"
	face_right
	step_end

# 269 "data/maps/RebelHarbourCargoBay/scripts.pory"
RebelHarborCartQuestWorker_Movement_1:
# 269 "data/maps/RebelHarbourCargoBay/scripts.pory"
	walk_in_place_left
	step_end

# 277 "data/maps/RebelHarbourCargoBay/scripts.pory"
RebelHarborCartQuestWorker_Movement_2:
# 277 "data/maps/RebelHarbourCargoBay/scripts.pory"
	walk_in_place_right
	step_end

# 286 "data/maps/RebelHarbourCargoBay/scripts.pory"
RebelHarborCartQuestWorker_Movement_3:
# 286 "data/maps/RebelHarbourCargoBay/scripts.pory"
	face_left
	step_end

RebelHarborCartQuestPlayerLeaves_Text_0:
# 38 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Hey, where are you going!? There's no\n"
	.string "boxes over there.\p"
	.string "Unless you want to call it quits?$"

RebelHarborCartQuestPlayerLeaves_Text_1:
# 42 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Yes$"

RebelHarborCartQuestPlayerLeaves_Text_2:
# 43 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "No$"

RebelHarborCartQuestPlayerLeaves_Text_3:
# 49 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Well, you haven't delivered anything, so\n"
	.string "there's no money for you.\p"
	.string "Just leave that trolley over there.\n"
	.string "Someone will get more use off it.$"

RebelHarborCartQuestPlayerLeaves_Text_4:
# 63 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Well, you've done some work, so come\n"
	.string "here so I can tally it and give you your\l"
	.string "pay.$"

RebelHarborCartQuestPlayerLeaves_Text_5:
# 71 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Then get back to work. You can take a\n"
	.string "break once you're done!$"

RebelHarborCartQuestWorker_Text_0:
# 83 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Come back tomorrow - we'll likely need\n"
	.string "some help again.$"

RebelHarborCartQuestWorker_Text_1:
# 90 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Yeah?$"

RebelHarborCartQuestWorker_Text_2:
# 93 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Deliver boxes$"

RebelHarborCartQuestWorker_Text_3:
# 94 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Call it quits$"

RebelHarborCartQuestWorker_Text_4:
# 100 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "... the trolley is empty. Are you okay?$"

RebelHarborCartQuestWorker_Text_5:
# 106 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Hm, one box. Taking it easy, hey?$"

RebelHarborCartQuestWorker_Text_6:
# 111 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Two boxes? Let's see...$"

RebelHarborCartQuestWorker_Text_7:
# 116 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Three boxes? Now that's a hard worker.$"

RebelHarborCartQuestWorker_Text_8:
# 128 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "That's your first box delivered. Still\n"
	.string "many to go!$"

RebelHarborCartQuestWorker_Text_9:
# 131 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "That's two boxes delivered. Keep at it.$"

RebelHarborCartQuestWorker_Text_10:
# 134 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "That's three boxes delivered. Getting\n"
	.string "there!$"

RebelHarborCartQuestWorker_Text_11:
# 144 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Alright, let's tally how much work you've\n"
	.string "done...$"

RebelHarborCartQuestWorker_Text_12:
# 149 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "... absolutely none. Are you just fooling\n"
	.string "around!?$"

RebelHarborCartQuestWorker_Text_13:
# 153 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Give me that back, and come back when\n"
	.string "you grow up.$"

RebelHarborCartQuestWorker_Text_14:
# 157 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "One box delivered. That's 200¥.$"

RebelHarborCartQuestWorker_Text_15:
# 163 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "I expected better. If you come again, I\n"
	.string "hope you work a bit longer!$"

RebelHarborCartQuestWorker_Text_16:
# 168 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Two boxes delivered. That's 400¥.$"

RebelHarborCartQuestWorker_Text_17:
# 179 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Three boxes delivered. That's 600¥.$"

RebelHarborCartQuestWorker_Text_18:
# 185 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "You were a little help, I guess.\p"
	.string "If you come again, I hope you work a bit\n"
	.string "longer!$"

RebelHarborCartQuestWorker_Text_19:
# 190 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Four boxes delivered. That's 800¥.$"

RebelHarborCartQuestWorker_Text_20:
# 196 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "You left some work to do. You should be\n"
	.string "a bit more ambitious in life.$"

RebelHarborCartQuestWorker_Text_21:
# 201 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Five boxes delivered. That's 1000¥.$"

RebelHarborCartQuestWorker_Text_22:
# 212 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Six boxes delivered. That's 1200¥.$"

RebelHarborCartQuestWorker_Text_23:
# 218 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "That was a good hustle. You should come\n"
	.string "back tomorrow!$"

RebelHarborCartQuestWorker_Text_24:
# 223 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Seven boxes delivered. That's 1400¥.$"

RebelHarborCartQuestWorker_Text_25:
# 229 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Damn, I've never seen the cargo bay so\n"
	.string "organized. Way to go, kid!\p"
	.string "Come back tomorrow, we'll likely need\n"
	.string "some more help.$"

RebelHarborCartQuestWorker_Text_26:
# 251 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Hey kid. Interested in some part-time\n"
	.string "work?$"

RebelHarborCartQuestWorker_Text_27:
# 258 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "What kind of work?$"

RebelHarborCartQuestWorker_Text_28:
# 263 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "That's the spirit - and they say folks\n"
	.string "your age are lazy!$"

RebelHarborCartQuestWorker_Text_29:
# 265 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "It's simple. You see, unlike in Devon\n"
	.string "facilities like Oldale Warehouse...\p"
	.string "We don't have Pokémon specialized in\n"
	.string "carrying stuff here.$"

RebelHarborCartQuestWorker_Text_30:
# 274 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "We normally use that forklift over\n"
	.string "there - but it's broken now.$"

RebelHarborCartQuestWorker_Text_31:
# 284 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "I need you to use this trolley and bring\n"
	.string "some of the white boxes around.$"

RebelHarborCartQuestWorker_Text_32:
# 288 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Alright, here's the trolley!$"

RebelHarborCartQuestWorker_Text_33:
# 293 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Good - you know how it works. Here's the\n"
	.string "trolley!$"

RebelHarborCartQuestWorker_Text_34:
# 304 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} is now using a Transport\n"
	.string "Trolley!$"

RebelHarborCartQuestWorker_Text_35:
# 306 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Load the boxes on that and bring them\n"
	.string "to me.\p"
	.string "It's 200¥ per delivered box,\n"
	.string "non-negotiable! Get on with it!$"

RebelHarborCartQuestWorker_Text_36:
# 316 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Too bad. Clear the area then.$"

RebelHarborCartQuestWorker_Text_37:
# 345 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "So, you in?\n"
	.string "It's 200¥ per box delivered.$"

RebelHarborCartQuestWorker_Text_38:
# 352 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "I already explained it...$"

RebelHarborCartFollow_Text_0:
# 374 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "The Platform Trolley is empty.$"

RebelHarborCartFollow_Text_1:
# 379 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "There's a single box in the Platform\n"
	.string "Trolley.$"

RebelHarborCartFollow_Text_2:
# 384 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "There's two boxes in the Platform\n"
	.string "Trolley.$"

RebelHarborCartFollow_Text_3:
# 389 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "There's three boxes in the Platform\n"
	.string "Trolley. Can't carry any more.$"

RebelHarborLoadBox1_Text_0:
# 405 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "The box seems a little out of place.$"

RebelHarborLoadBox1_Text_1:
# 446 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Can't carry any more boxes... should\n"
	.string "bring them back to the boss.$"

RebelHarborCartGrab_Text_0:
# 834 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "It's a platform trolley.$"

RebelHarborCartGrab_Text_1:
# 839 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "{PLAYER} is using the platform\n"
	.string "trolley.$"
