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
# 202 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborCartQuestWorker_8
RebelHarborCartQuestWorker_7:
# 316 "data/maps/RebelHarbourCargoBay/scripts.pory"
endofharborcartquestworker:
# 317 "data/maps/RebelHarbourCargoBay/scripts.pory"
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
# 142 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RebelHarborCartQuestWorker_16
	goto RebelHarborCartQuestWorker_4

RebelHarborCartQuestWorker_8:
# 205 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_19
# 207 "data/maps/RebelHarbourCargoBay/scripts.pory"
harborquestchoice:
# 209 "data/maps/RebelHarbourCargoBay/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborCartQuestPlayerLeaves_Text_1, RebelHarborCartQuestPlayerLeaves_Text_2, RebelHarborCartQuestWorker_Text_20
# 215 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RebelHarborCartQuestWorker_14
RebelHarborCartQuestWorker_13:
# 269 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RebelHarborCartQuestWorker_22
RebelHarborCartQuestWorker_21:
# 274 "data/maps/RebelHarbourCargoBay/scripts.pory"
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
	goto_if_eq RebelHarborCartQuestWorker_60
RebelHarborCartQuestWorker_59:
# 133 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 3
	goto_if_eq RebelHarborCartQuestWorker_63
RebelHarborCartQuestWorker_62:
# 136 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setvar VAR_HARBORCARTBOXCOUNT, 0
# 137 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofharborcartquestworker
	goto RebelHarborCartQuestWorker_10

RebelHarborCartQuestWorker_14:
# 216 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestintro, RebelHarborCartQuestWorker_25
# 247 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_26
RebelHarborCartQuestWorker_24:
# 249 "data/maps/RebelHarbourCargoBay/scripts.pory"
giventrolley:
# 250 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidefollower
# 251 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag harborexampletrolley
# 252 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 5
# 253 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 1
# 254 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 1, 6, 22
# 255 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 1, RebelHarborCartQuestWorker_Movement_0
# 256 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_EMPTYCART, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
# 257 "data/maps/RebelHarbourCargoBay/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 258 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_27
# 260 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_28
# 263 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag harborcartquestaccepted
# 264 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setvar VAR_HARBORCANTEXITWITHTROLLEY, 1
# 265 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofharborcartquestworker
	goto RebelHarborCartQuestWorker_13

RebelHarborCartQuestWorker_16:
# 143 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_11
# 144 "data/maps/RebelHarbourCargoBay/scripts.pory"
	showmoneybox 18, 0
# 146 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 0
	goto_if_eq RebelHarborCartQuestWorker_29
RebelHarborCartQuestWorker_28:
# 155 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 1
	goto_if_eq RebelHarborCartQuestWorker_37
RebelHarborCartQuestWorker_36:
# 166 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 2
	goto_if_eq RebelHarborCartQuestWorker_46
RebelHarborCartQuestWorker_45:
# 177 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORDELIVEREDBOXCOUNT, 3
	goto_if_eq RebelHarborCartQuestWorker_54
RebelHarborCartQuestWorker_53:
# 188 "data/maps/RebelHarbourCargoBay/scripts.pory"
	clearflag harborcartquestaccepted
# 189 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 190 "data/maps/RebelHarbourCargoBay/scripts.pory"
	clearflag harborexampletrolley
# 191 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 5
# 192 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setvar VAR_HARBORDELIVEREDBOXCOUNT, 0
# 193 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setvar VAR_HARBORCANTEXITWITHTROLLEY, 0
# 194 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag harborcartquestdailydone
# 196 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofharborcartquestworker
	goto RebelHarborCartQuestWorker_4

RebelHarborCartQuestWorker_19:
# 100 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_4
# 101 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofharborcartquestworker
	goto RebelHarborCartQuestWorker_18

RebelHarborCartQuestWorker_22:
# 270 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_29
# 271 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofharborcartquestworker
	goto RebelHarborCartQuestWorker_21

RebelHarborCartQuestWorker_25:
# 217 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_21
# 219 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_22
# 223 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborCartQuestWorker_Movement_1
# 225 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, RebelHarborCartQuestWorker_Movement_1
# 226 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 228 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_23
# 231 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborCartQuestWorker_Movement_2
# 233 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, RebelHarborCartQuestWorker_Movement_2
# 234 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 236 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 3, RebelHarborCartQuestWorker_Movement_0
# 237 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement 3
# 238 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_24
# 240 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 3, RebelHarborCartQuestWorker_Movement_3
# 241 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement 3
# 242 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_25
# 243 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag harborcartquestintro
# 244 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto giventrolley
	goto RebelHarborCartQuestWorker_24

RebelHarborCartQuestWorker_29:
# 148 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_12
# 150 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidemoneybox
# 152 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_13
	goto RebelHarborCartQuestWorker_28

RebelHarborCartQuestWorker_32:
# 106 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_5
# 107 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORDELIVEREDBOXCOUNT, + 1
	goto RebelHarborCartQuestWorker_31

RebelHarborCartQuestWorker_34:
# 276 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestintro, RebelHarborCartQuestWorker_43
RebelHarborCartQuestWorker_42:
# 305 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_set harborcartquestintro, RebelHarborCartQuestWorker_51
	goto RebelHarborCartQuestWorker_7

RebelHarborCartQuestWorker_37:
# 156 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_14
# 157 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addmoney 100
# 158 "data/maps/RebelHarbourCargoBay/scripts.pory"
	updatemoneybox
# 159 "data/maps/RebelHarbourCargoBay/scripts.pory"
	playse SE_RG_SHOP
# 160 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitse
# 161 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidemoneybox
# 162 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_15
	goto RebelHarborCartQuestWorker_36

RebelHarborCartQuestWorker_40:
# 111 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_6
# 112 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORDELIVEREDBOXCOUNT, + 2
	goto RebelHarborCartQuestWorker_39

RebelHarborCartQuestWorker_43:
# 277 "data/maps/RebelHarbourCargoBay/scripts.pory"
explainharborcartquest:
# 278 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_22
# 282 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborCartQuestWorker_Movement_1
# 284 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, RebelHarborCartQuestWorker_Movement_1
# 285 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 287 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_23
# 290 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborCartQuestWorker_Movement_2
# 292 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, RebelHarborCartQuestWorker_Movement_2
# 293 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 295 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 3, RebelHarborCartQuestWorker_Movement_0
# 296 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitmovement 3
# 297 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_24
# 299 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_30
# 301 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag harborcartquestintro
# 302 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto harborquestchoice
	goto RebelHarborCartQuestWorker_42

RebelHarborCartQuestWorker_46:
# 167 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_16
# 168 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addmoney 200
# 169 "data/maps/RebelHarbourCargoBay/scripts.pory"
	updatemoneybox
# 170 "data/maps/RebelHarbourCargoBay/scripts.pory"
	playse SE_RG_SHOP
# 171 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitse
# 172 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidemoneybox
# 173 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_15
	goto RebelHarborCartQuestWorker_45

RebelHarborCartQuestWorker_49:
# 116 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_7
# 117 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORDELIVEREDBOXCOUNT, + 3
	goto RebelHarborCartQuestWorker_48

RebelHarborCartQuestWorker_51:
# 306 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_31
# 307 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto explainharborcartquest
	goto RebelHarborCartQuestWorker_7

RebelHarborCartQuestWorker_54:
# 178 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_17
# 179 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addmoney 300
# 180 "data/maps/RebelHarbourCargoBay/scripts.pory"
	updatemoneybox
# 181 "data/maps/RebelHarbourCargoBay/scripts.pory"
	playse SE_RG_SHOP
# 182 "data/maps/RebelHarbourCargoBay/scripts.pory"
	waitse
# 183 "data/maps/RebelHarbourCargoBay/scripts.pory"
	hidemoneybox
# 184 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_18
	goto RebelHarborCartQuestWorker_53

RebelHarborCartQuestWorker_57:
# 128 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_8
	goto RebelHarborCartQuestWorker_56

RebelHarborCartQuestWorker_60:
# 131 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_9
	goto RebelHarborCartQuestWorker_59

RebelHarborCartQuestWorker_63:
# 134 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartQuestWorker_Text_10
	goto RebelHarborCartQuestWorker_62


RebelHarborCartFollow::
# 322 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 326 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborCartFollow_2
RebelHarborCartFollow_1:
# 331 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborCartFollow_5
RebelHarborCartFollow_4:
# 336 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborCartFollow_8
RebelHarborCartFollow_7:
# 341 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborCartFollow_11
RebelHarborCartFollow_10:
# 347 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborCartFollow_2:
# 328 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartFollow_Text_0
	goto RebelHarborCartFollow_1

RebelHarborCartFollow_5:
# 333 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartFollow_Text_1
	goto RebelHarborCartFollow_4

RebelHarborCartFollow_8:
# 338 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartFollow_Text_2
	goto RebelHarborCartFollow_7

RebelHarborCartFollow_11:
# 343 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartFollow_Text_3
	goto RebelHarborCartFollow_10


RebelHarborLoadBox1::
# 354 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 357 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborLoadBox1_2
# 363 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 6
# 364 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborbox1
# 366 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborLoadBox1_6
RebelHarborLoadBox1_5:
# 375 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborLoadBox1_9
RebelHarborLoadBox1_8:
# 384 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborLoadBox1_12
RebelHarborLoadBox1_11:
# 393 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborLoadBox1_15
RebelHarborLoadBox1_14:
# 399 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORCARTBOXCOUNT, + 1
RebelHarborLoadBox1_1:
# 402 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborLoadBox1_2:
# 359 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_0
	goto RebelHarborLoadBox1_1

RebelHarborLoadBox1_6:
# 368 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 2
# 369 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 2, RebelHarborCartQuestWorker_Movement_3
# 370 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 2, 2, 12
# 371 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 372 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX1, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox1_5

RebelHarborLoadBox1_9:
# 377 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 8
# 378 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 8, RebelHarborCartQuestWorker_Movement_3
# 379 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 8, 2, 12
# 380 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 381 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX2, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox1_8

RebelHarborLoadBox1_12:
# 386 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 9
# 387 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 9, RebelHarborCartQuestWorker_Movement_3
# 388 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 9, 2, 12
# 389 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 390 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX3, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox1_11

RebelHarborLoadBox1_15:
# 395 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_1
# 396 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofloadbox2
	goto RebelHarborLoadBox1_14


RebelHarborLoadBox2::
# 407 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 410 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborLoadBox2_2
# 416 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 14
# 417 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxs
# 419 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborLoadBox2_6
RebelHarborLoadBox2_5:
# 428 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborLoadBox2_9
RebelHarborLoadBox2_8:
# 437 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborLoadBox2_12
RebelHarborLoadBox2_11:
# 446 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborLoadBox2_15
RebelHarborLoadBox2_14:
# 452 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORCARTBOXCOUNT, + 1
# 453 "data/maps/RebelHarbourCargoBay/scripts.pory"
endofloadbox2:
RebelHarborLoadBox2_1:
# 456 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborLoadBox2_2:
# 412 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_0
	goto RebelHarborLoadBox2_1

RebelHarborLoadBox2_6:
# 421 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 2
# 422 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 2, RebelHarborCartQuestWorker_Movement_0
# 423 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 2, 8, 12
# 424 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 425 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX1, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox2_5

RebelHarborLoadBox2_9:
# 430 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 8
# 431 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 8, RebelHarborCartQuestWorker_Movement_0
# 432 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 8, 8, 12
# 433 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 434 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX2, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox2_8

RebelHarborLoadBox2_12:
# 439 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 9
# 440 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 9, RebelHarborCartQuestWorker_Movement_0
# 441 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 9, 8, 12
# 442 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 443 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX3, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox2_11

RebelHarborLoadBox2_15:
# 448 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_1
# 449 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofloadbox2
	goto RebelHarborLoadBox2_14


RebelHarborLoadBox3::
# 461 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 464 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborLoadBox3_2
# 470 "data/maps/RebelHarbourCargoBay/scripts.pory"
	removeobject 7
# 471 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setflag rebelharborboxt
# 474 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 0
	goto_if_eq RebelHarborLoadBox3_6
RebelHarborLoadBox3_5:
# 483 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 1
	goto_if_eq RebelHarborLoadBox3_9
RebelHarborLoadBox3_8:
# 492 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 2
	goto_if_eq RebelHarborLoadBox3_12
RebelHarborLoadBox3_11:
# 501 "data/maps/RebelHarbourCargoBay/scripts.pory"
	compare VAR_HARBORCARTBOXCOUNT, 3
	goto_if_eq RebelHarborLoadBox3_15
RebelHarborLoadBox3_14:
# 507 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addvar VAR_HARBORCARTBOXCOUNT, + 1
RebelHarborLoadBox3_1:
# 511 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborLoadBox3_2:
# 466 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_0
	goto RebelHarborLoadBox3_1

RebelHarborLoadBox3_6:
# 476 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 2
# 477 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 2, RebelHarborCartQuestWorker_Movement_0
# 478 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 2, 6, 15
# 479 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 480 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX1, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox3_5

RebelHarborLoadBox3_9:
# 485 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 8
# 486 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 8, RebelHarborCartQuestWorker_Movement_0
# 487 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 8, 6, 15
# 488 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 489 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX2, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox3_8

RebelHarborLoadBox3_12:
# 494 "data/maps/RebelHarbourCargoBay/scripts.pory"
	addobject 9
# 495 "data/maps/RebelHarbourCargoBay/scripts.pory"
	applymovement 9, RebelHarborCartQuestWorker_Movement_0
# 496 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setobjectxy 9, 6, 15
# 497 "data/maps/RebelHarbourCargoBay/scripts.pory"
	destroyfollowernpc
# 498 "data/maps/RebelHarbourCargoBay/scripts.pory"
	setfollowernpc LOCALID_REBELHARBOR_CARTBOX3, FNPC_ALL, RebelHarborCartFollow, PARTNER_RIVAL_FEMALE
	goto RebelHarborLoadBox3_11

RebelHarborLoadBox3_15:
# 503 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborLoadBox1_Text_1
# 504 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto endofloadbox2
	goto RebelHarborLoadBox3_14


RebelHarborCartGrab::
# 536 "data/maps/RebelHarbourCargoBay/scripts.pory"
	lock
# 538 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_unset harborcartquestaccepted, RebelHarborCartGrab_2
RebelHarborCartGrab_1:
# 543 "data/maps/RebelHarbourCargoBay/scripts.pory"
	goto_if_set harborcartquestaccepted, RebelHarborCartGrab_5
RebelHarborCartGrab_4:
# 550 "data/maps/RebelHarbourCargoBay/scripts.pory"
	release
	return

RebelHarborCartGrab_2:
# 540 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartGrab_Text_0
	goto RebelHarborCartGrab_1

RebelHarborCartGrab_5:
# 545 "data/maps/RebelHarbourCargoBay/scripts.pory"
	msgbox RebelHarborCartGrab_Text_1
# 546 "data/maps/RebelHarbourCargoBay/scripts.pory"
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

# 223 "data/maps/RebelHarbourCargoBay/scripts.pory"
RebelHarborCartQuestWorker_Movement_1:
# 223 "data/maps/RebelHarbourCargoBay/scripts.pory"
	walk_in_place_left
	step_end

# 231 "data/maps/RebelHarbourCargoBay/scripts.pory"
RebelHarborCartQuestWorker_Movement_2:
# 231 "data/maps/RebelHarbourCargoBay/scripts.pory"
	walk_in_place_right
	step_end

# 240 "data/maps/RebelHarbourCargoBay/scripts.pory"
RebelHarborCartQuestWorker_Movement_3:
# 240 "data/maps/RebelHarbourCargoBay/scripts.pory"
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
# 143 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Alright, let's tally how much work you've\n"
	.string "done...$"

RebelHarborCartQuestWorker_Text_12:
# 148 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "... absolutely none. Are you just fooling\n"
	.string "around!?$"

RebelHarborCartQuestWorker_Text_13:
# 152 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Give me that back, and come back when\n"
	.string "you grow up.$"

RebelHarborCartQuestWorker_Text_14:
# 156 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "One box delivered. That's 100¥.$"

RebelHarborCartQuestWorker_Text_15:
# 162 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "I expected better. If you come again, I\n"
	.string "hope you work a bit longer!$"

RebelHarborCartQuestWorker_Text_16:
# 167 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Two boxes delivered. That's 200¥.$"

RebelHarborCartQuestWorker_Text_17:
# 178 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Three boxes delivered. That's 300¥.$"

RebelHarborCartQuestWorker_Text_18:
# 184 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "You were a little help, I guess.\p"
	.string "If you come again, I hope you work a bit\n"
	.string "longer!$"

RebelHarborCartQuestWorker_Text_19:
# 205 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Hey kid. Interested in some part-time\n"
	.string "work?$"

RebelHarborCartQuestWorker_Text_20:
# 212 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "What kind of work?$"

RebelHarborCartQuestWorker_Text_21:
# 217 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "That's the spirit - and they say folks\n"
	.string "your age are lazy!$"

RebelHarborCartQuestWorker_Text_22:
# 219 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "It's simple. You see, unlike in Devon\n"
	.string "facilities like Oldale Warehouse...\p"
	.string "We don't have Pokémon specialized in\n"
	.string "carrying stuff here.$"

RebelHarborCartQuestWorker_Text_23:
# 228 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "We normally use that forklift over\n"
	.string "there - but it's broken now.$"

RebelHarborCartQuestWorker_Text_24:
# 238 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "I need you to use this trolley and bring\n"
	.string "some of the white boxes around.$"

RebelHarborCartQuestWorker_Text_25:
# 242 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Alright, here's the trolley!$"

RebelHarborCartQuestWorker_Text_26:
# 247 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Good - you know how it works. Here's the\n"
	.string "trolley!$"

RebelHarborCartQuestWorker_Text_27:
# 258 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} is now using a Transport\n"
	.string "Trolley!$"

RebelHarborCartQuestWorker_Text_28:
# 260 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Load the boxes on that and bring them\n"
	.string "to me.\p"
	.string "It's 100¥ per delivered box,\n"
	.string "non-negotiable! Get on with it!$"

RebelHarborCartQuestWorker_Text_29:
# 270 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Too bad. Clear the area then.$"

RebelHarborCartQuestWorker_Text_30:
# 299 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "So, you in?\n"
	.string "It's 100¥ per box delivered.$"

RebelHarborCartQuestWorker_Text_31:
# 306 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "I already explained it...$"

RebelHarborCartFollow_Text_0:
# 328 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "The Platform Trolley is empty.$"

RebelHarborCartFollow_Text_1:
# 333 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "There's a single box in the Platform\n"
	.string "Trolley.$"

RebelHarborCartFollow_Text_2:
# 338 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "There's two boxes in the Platform\n"
	.string "Trolley.$"

RebelHarborCartFollow_Text_3:
# 343 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "There's three boxes in the Platform\n"
	.string "Trolley. Can't carry any more.$"

RebelHarborLoadBox1_Text_0:
# 359 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "The box seems a little out of place.$"

RebelHarborLoadBox1_Text_1:
# 395 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "Can't carry any more boxes... should\n"
	.string "bring them back to the boss.$"

RebelHarborCartGrab_Text_0:
# 540 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "It's a platform trolley.$"

RebelHarborCartGrab_Text_1:
# 545 "data/maps/RebelHarbourCargoBay/scripts.pory"
	.string "{PLAYER} is using the platform\n"
	.string "trolley.$"
