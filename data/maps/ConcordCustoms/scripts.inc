# 1 "data/maps/ConcordCustoms/scripts.pory"

# 2 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustoms_MapScripts::
# 3 "data/maps/ConcordCustoms/scripts.pory"
	.byte 0

ConcordWageSlaveAtPhone::
# 9 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 10 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 11 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset concordwageslave, ConcordWageSlaveAtPhone_2
ConcordWageSlaveAtPhone_1:
# 45 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_set concordwageslave, ConcordWageSlaveAtPhone_5
ConcordWageSlaveAtPhone_4:
# 52 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordWageSlaveAtPhone_2:
# 13 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_lt ConcordWageSlaveAtPhone_8
# 18 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_1
ConcordWageSlaveAtPhone_7:
# 20 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 2, ConcordWageSlaveAtPhone_Movement_0
# 21 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 22 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_2
# 23 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 24 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_3
# 25 "data/maps/ConcordCustoms/scripts.pory"
	playbgm MUS_HELP, TRUE
# 26 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_EXPLOSION
# 27 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8004, 2
# 28 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8005, 6
# 29 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8006, 4
# 30 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8007, 4
# 31 "data/maps/ConcordCustoms/scripts.pory"
	special ShakeCamera
# 33 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_4
# 34 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 2, ConcordWageSlaveAtPhone_Movement_1
# 35 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_5
# 36 "data/maps/ConcordCustoms/scripts.pory"
	trainerbattle_no_intro TRAINER_CONCORDWAGESLAVE, ConcordWageSlave_Outro
# 37 "data/maps/ConcordCustoms/scripts.pory"
	setflag concordwageslave
	goto ConcordWageSlaveAtPhone_1

ConcordWageSlaveAtPhone_5:
# 48 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_6
	goto ConcordWageSlaveAtPhone_4

ConcordWageSlaveAtPhone_8:
# 15 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_0
	goto ConcordWageSlaveAtPhone_7


ConcordFemaleDevon::
# 59 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 60 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 61 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 3, ConcordWageSlaveAtPhone_Movement_1
# 62 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset conartistescaped, ConcordFemaleDevon_2
# 69 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordFemaleDevon_Text_1
ConcordFemaleDevon_1:
# 74 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordFemaleDevon_2:
# 64 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordFemaleDevon_Text_0
	goto ConcordFemaleDevon_1


ConcordCustomsClerk::
# 78 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 79 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 80 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerk_Text_0
# 82 "data/maps/ConcordCustoms/scripts.pory"
	release
	return


ConcordCustomsWaterDude::
# 87 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 88 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 89 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 4, ConcordWageSlaveAtPhone_Movement_1
# 90 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsWaterDude_Text_0
# 92 "data/maps/ConcordCustoms/scripts.pory"
	release
	return


ConcordCustomsClerkStops0::
# 98 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 99 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 101 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 102 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops0_2
ConcordCustomsClerkStops0_1:
# 105 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops0_5
ConcordCustomsClerkStops0_4:
# 109 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops0_Movement_0
# 110 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 111 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_2
# 114 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops0_2:
# 103 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops0_1

ConcordCustomsClerkStops0_5:
# 106 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
	goto ConcordCustomsClerkStops0_4


ConcordCustomsClerkStops1::
# 119 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 120 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 122 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 123 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops1_2
ConcordCustomsClerkStops1_1:
# 126 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops1_5
ConcordCustomsClerkStops1_4:
# 130 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops1_Movement_0
# 131 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 132 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_2
# 135 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops1_2:
# 124 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops1_1

ConcordCustomsClerkStops1_5:
# 127 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops1_4


ConcordCustomsClerkStops2::
# 139 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 140 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 142 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 143 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops2_2
ConcordCustomsClerkStops2_1:
# 146 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops2_5
ConcordCustomsClerkStops2_4:
# 150 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops2_Movement_0
# 151 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 152 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_2
# 155 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops2_2:
# 144 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops2_1

ConcordCustomsClerkStops2_5:
# 147 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops2_4


ConcordCustomsClerkStops3::
# 159 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 160 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 162 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 163 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops3_2
ConcordCustomsClerkStops3_1:
# 166 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops3_5
ConcordCustomsClerkStops3_4:
# 170 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops3_Movement_0
# 171 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 172 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_2
# 175 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops3_2:
# 164 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops3_1

ConcordCustomsClerkStops3_5:
# 167 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops3_4


ConcordCustomsBookshelf::
# 182 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 183 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsBookshelf_Text_0
# 184 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return


ConcordCustomsPoster::
# 188 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 189 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPoster_Text_0
# 190 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return


ConcordCustomsPhone::
# 194 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 195 "data/maps/ConcordCustoms/scripts.pory"
	showmoneybox 18, 0
# 196 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_0
# 197 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_1, ConcordCustomsPhone_Text_2
# 199 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_2
ConcordCustomsPhone_1:
# 274 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_5
ConcordCustomsPhone_4:
# 277 "data/maps/ConcordCustoms/scripts.pory"
endofpayphone:
# 278 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsPhone_2:
# 200 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 50
# 201 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordCustomsPhone_7
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_5:
# 275 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_4

ConcordCustomsPhone_7:
# 202 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 203 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 204 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 205 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 206 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_CLICK
# 207 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_3
# 208 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_4, ConcordCustomsPhone_Text_5, ConcordCustomsPhone_Text_6, ConcordCustomsPhone_Text_7
# 209 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_10
ConcordCustomsPhone_9:
# 221 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_13
ConcordCustomsPhone_12:
# 232 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ConcordCustomsPhone_16
ConcordCustomsPhone_15:
# 238 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordCustomsPhone_18
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_10:
# 210 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 211 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 212 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 213 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_8
# 217 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 218 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_9

ConcordCustomsPhone_13:
# 222 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 223 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 224 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 225 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_9
# 228 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 229 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_12

ConcordCustomsPhone_16:
# 233 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 234 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 235 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_15

ConcordCustomsPhone_18:
# 239 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 240 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_10
# 241 "data/maps/ConcordCustoms/scripts.pory"
	special EnterCode
# 242 "data/maps/ConcordCustoms/scripts.pory"
	waitstate
# 243 "data/maps/ConcordCustoms/scripts.pory"
	special GetCodeFeedback
# 244 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_21
ConcordCustomsPhone_20:
# 252 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_24
ConcordCustomsPhone_23:
# 263 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 268 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 269 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_21:
# 245 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 246 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 247 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_11
# 249 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 250 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_20

ConcordCustomsPhone_24:
# 253 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 254 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 255 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_12
# 256 "data/maps/ConcordCustoms/scripts.pory"
	givemon SPECIES_SNOVER, 5, ITEM_MIRACLE_SEED, ITEM_CHERISH_BALL, NATURE_QUIRKY, 1, MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BLIZZARD
# 258 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 259 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_23


ConcordVendingMachine::
# 283 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 284 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_0
# 285 "data/maps/ConcordCustoms/scripts.pory"
	showmoneybox 18, 0
# 286 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_1, ConcordVendingMachine_Text_2, ConcordVendingMachine_Text_3, ConcordCustomsPhone_Text_2
# 289 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_2
ConcordVendingMachine_1:
# 342 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_5
ConcordVendingMachine_4:
# 395 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordVendingMachine_11
ConcordVendingMachine_10:
# 447 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ConcordVendingMachine_22
ConcordVendingMachine_21:
# 450 "data/maps/ConcordCustoms/scripts.pory"
cendvendingmachine:
# 451 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 452 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return

ConcordVendingMachine_2:
# 290 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 50
# 291 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_8
ConcordVendingMachine_7:
# 336 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_16
	goto ConcordVendingMachine_1

ConcordVendingMachine_5:
# 343 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 70
# 344 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_14
ConcordVendingMachine_13:
# 389 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_27
	goto ConcordVendingMachine_4

ConcordVendingMachine_8:
# 292 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 293 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 294 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 296 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 297 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cfreshwatergotstuck
# 298 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotfreshwater
# 300 "data/maps/ConcordCustoms/scripts.pory"
cgotfreshwater:
# 301 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 302 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 303 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 304 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_4
# 305 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 306 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 308 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 309 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 310 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrafreshwater
# 312 "data/maps/ConcordCustoms/scripts.pory"
cgotextrafreshwater:
# 313 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_5
# 314 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 315 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 316 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 318 "data/maps/ConcordCustoms/scripts.pory"
cfreshwatergotstuck:
# 319 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 320 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 321 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 322 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_6
# 324 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 325 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_19
ConcordVendingMachine_18:
# 330 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_32
	goto ConcordVendingMachine_7

ConcordVendingMachine_11:
# 396 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 80
# 397 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_25
ConcordVendingMachine_24:
# 442 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_34
	goto ConcordVendingMachine_10

ConcordVendingMachine_14:
# 345 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 346 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 347 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 349 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 350 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, csodagotstuck
# 351 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotsoda
# 353 "data/maps/ConcordCustoms/scripts.pory"
cgotsoda:
# 354 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 355 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 356 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 70
# 357 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_10
# 358 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 359 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_SODA_POP
# 361 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 362 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 363 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrasoda
# 365 "data/maps/ConcordCustoms/scripts.pory"
cgotextrasoda:
# 366 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_11
# 367 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 368 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_SODA_POP
# 369 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 371 "data/maps/ConcordCustoms/scripts.pory"
csodagotstuck:
# 372 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 373 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 374 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 375 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_12
# 377 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 378 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_30
ConcordVendingMachine_29:
# 383 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_39
	goto ConcordVendingMachine_13

ConcordVendingMachine_16:
# 337 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_1

ConcordVendingMachine_19:
# 326 "data/maps/ConcordCustoms/scripts.pory"
	call cMachineShake
# 327 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotfreshwater
	goto ConcordVendingMachine_18

ConcordVendingMachine_22:
# 448 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
	goto ConcordVendingMachine_21

ConcordVendingMachine_25:
# 398 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 399 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 400 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 402 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 403 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, ccoffeegotstuck
# 404 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotcoffee
# 406 "data/maps/ConcordCustoms/scripts.pory"
cgotcoffee:
# 407 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 408 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 409 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 410 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_14
# 411 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 412 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 414 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 415 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 416 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextracoffee
# 418 "data/maps/ConcordCustoms/scripts.pory"
cgotextracoffee:
# 419 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_15
# 420 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 421 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 422 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 424 "data/maps/ConcordCustoms/scripts.pory"
ccoffeegotstuck:
# 425 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 426 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 427 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 428 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_16
# 430 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 431 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_37
ConcordVendingMachine_36:
# 436 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_41
	goto ConcordVendingMachine_24

ConcordVendingMachine_27:
# 390 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_4

ConcordVendingMachine_30:
# 379 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 380 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotsoda
	goto ConcordVendingMachine_29

ConcordVendingMachine_32:
# 331 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_8
	goto ConcordVendingMachine_7

ConcordVendingMachine_34:
# 443 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_10

ConcordVendingMachine_37:
# 432 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 433 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotcoffee
	goto ConcordVendingMachine_36

ConcordVendingMachine_39:
# 384 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_13
	goto ConcordVendingMachine_13

ConcordVendingMachine_41:
# 437 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_17
	goto ConcordVendingMachine_24


cMachineShake::
# 457 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_REVERSAL
# 458 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8004, 2
# 459 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8005, 6
# 460 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8006, 4
# 461 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8007, 4
# 462 "data/maps/ConcordCustoms/scripts.pory"
	special ShakeCamera
	return


ConcordCustomsClerkBAD::
# 473 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 474 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 475 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset FLAG_SAFE_FOLLOWER_MOVEMENT, ConcordCustomsClerkBAD_2
# 496 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_6
# 499 "data/maps/ConcordCustoms/scripts.pory"
	release
ConcordCustomsClerkBAD_1:
# 501 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkBAD_2:
# 477 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_0
	checkitem ITEM_FRESH_WATER
# 0 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordCustomsClerkBAD_5
	goto ConcordCustomsClerkBAD_1

ConcordCustomsClerkBAD_5:
# 481 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_1
# 483 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsClerkBAD_Text_2, ConcordCustomsClerkBAD_Text_3
# 484 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsClerkBAD_8
ConcordCustomsClerkBAD_7:
# 489 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsClerkBAD_10
	goto ConcordCustomsClerkBAD_1

ConcordCustomsClerkBAD_8:
# 485 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_4
	goto ConcordCustomsClerkBAD_7

ConcordCustomsClerkBAD_10:
# 490 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_5
	goto ConcordCustomsClerkBAD_1


# 20 "data/maps/ConcordCustoms/scripts.pory"
ConcordWageSlaveAtPhone_Movement_0:
# 20 "data/maps/ConcordCustoms/scripts.pory"
	emote_exclamation_mark
	step_end

# 34 "data/maps/ConcordCustoms/scripts.pory"
ConcordWageSlaveAtPhone_Movement_1:
# 34 "data/maps/ConcordCustoms/scripts.pory"
	face_player
	step_end

# 109 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops0_Movement_0:
# 109 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 109 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 130 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops1_Movement_0:
# 130 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 130 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 130 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 150 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops2_Movement_0:
# 150 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 150 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 150 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 150 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 170 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops3_Movement_0:
# 170 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 170 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 170 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 170 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 170 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

ConcordWageSlaveAtPhone_Text_0:
# 15 "data/maps/ConcordCustoms/scripts.pory"
	.string "I-I'm sorry sir... they're not letting our\n"
	.string "trucks through - Concord Bridge is\l"
	.string "closed...\p"
	.string "N-no, there's nothing I can do, sir...\n"
	.string "Yes, I already aske-...$"

ConcordWageSlaveAtPhone_Text_1:
# 18 "data/maps/ConcordCustoms/scripts.pory"
	.string "I-I'm sorry sir... I know there was a\n"
	.string "delay, but Concord Bridge was closed\l"
	.string "until recently, and...\p"
	.string "B-but sir, it was out of my control - the\n"
	.string "customs guards...!$"

ConcordWageSlaveAtPhone_Text_2:
# 22 "data/maps/ConcordCustoms/scripts.pory"
	.string "... I... I'm fired? B-but sir...! Please be\n"
	.string "reasonable, I...!$"

ConcordWageSlaveAtPhone_Text_3:
# 24 "data/maps/ConcordCustoms/scripts.pory"
	.string "Sir...? Hello? SIR!?\p"
	.string "...$"

ConcordWageSlaveAtPhone_Text_4:
# 33 "data/maps/ConcordCustoms/scripts.pory"
	.string "THAT FILTHY PIG! What am I supposed to\n"
	.string "do now!? MY FAMILY DEPENDS ON ME!$"

ConcordWageSlaveAtPhone_Text_5:
# 35 "data/maps/ConcordCustoms/scripts.pory"
	.string "And what do YOU want!? Screw you too!!$"

ConcordWageSlaveAtPhone_Text_6:
# 48 "data/maps/ConcordCustoms/scripts.pory"
	.string "I shouldn't have snapped at you like\n"
	.string "that. I was just really frustrated.\p"
	.string "I don't know what I'm going to do now. I\n"
	.string "guess I'll wait here to figure it out.$"

ConcordFemaleDevon_Text_0:
# 64 "data/maps/ConcordCustoms/scripts.pory"
	.string "This is not a place to idle. If you're not\n"
	.string "going to cross the customs, you should\l"
	.string "leave.$"

ConcordFemaleDevon_Text_1:
# 69 "data/maps/ConcordCustoms/scripts.pory"
	.string "We appreciate your help when we dealt\n"
	.string "with that con artist.\p"
	.string "He makes a profit off smuggling\n"
	.string "Pokémon eggs, in and out the Rebel\l"
	.string "Zone.\p"
	.string "If he shows his mug around here again,\n"
	.string "we'll catch him for sure!$"

ConcordCustomsClerk_Text_0:
# 80 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm sorry, I can't let you through\n"
	.string "unless you have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}.\p"
	.string "Applications for visas are currently\n"
	.string "closed to the general public, but us at\l"
	.string "Devon Co. will inform as promptly as\l"
	.string "they are open anew.$"

ConcordCustomsWaterDude_Text_0:
# 90 "data/maps/ConcordCustoms/scripts.pory"
	.string "I just tried to bribe the customs\n"
	.string "officer to let me through... with some\l"
	.string "{COLOR BLUE}Fresh Water{COLOR DARK_GRAY}.\p"
	.string "He looked at me as if I was crazy.\p"
	.string "I don't know why I thought that would\n"
	.string "work, it was kinda stupid, haha...$"

ConcordCustomsClerkStops0_Text_0:
# 103 "data/maps/ConcordCustoms/scripts.pory"
	.string "Excuse me, sir. Would you be so kind as\n"
	.string "to approach the counter?$"

ConcordCustomsClerkStops0_Text_1:
# 106 "data/maps/ConcordCustoms/scripts.pory"
	.string "Excuse me, miss. Would you be so kind as\n"
	.string "to approach the counter?$"

ConcordCustomsClerkStops0_Text_2:
# 111 "data/maps/ConcordCustoms/scripts.pory"
	.string "Hmm... you don't have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, do\n"
	.string "you?\p"
	.string "If that's the case, I'm afraid I can't\n"
	.string "let you through.\p"
	.string "Applications for visas are currently\n"
	.string "closed to the general public, but us at\l"
	.string "Devon Co. will inform as promptly as\l"
	.string "they are open anew.$"

ConcordCustomsBookshelf_Text_0:
# 183 "data/maps/ConcordCustoms/scripts.pory"
	.string "The shelf is full of travel brochures.$"

ConcordCustomsPoster_Text_0:
# 189 "data/maps/ConcordCustoms/scripts.pory"
	.string "Devon Visa - your ticket to freedom\n"
	.string "across Hoenn.\l"
	.string "Applications reopening soon!$"

ConcordCustomsPhone_Text_0:
# 196 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a paid phone. The cost is 50¥.$"

ConcordCustomsPhone_Text_1:
# 197 "data/maps/ConcordCustoms/scripts.pory"
	.string "Insert coin$"

ConcordCustomsPhone_Text_2:
# 197 "data/maps/ConcordCustoms/scripts.pory"
	.string "Leave$"

ConcordCustomsPhone_Text_3:
# 207 "data/maps/ConcordCustoms/scripts.pory"
	.string "Which number to dial?$"

ConcordCustomsPhone_Text_4:
# 208 "data/maps/ConcordCustoms/scripts.pory"
	.string "Littleroot Lab$"

ConcordCustomsPhone_Text_5:
# 208 "data/maps/ConcordCustoms/scripts.pory"
	.string "Petalburg Gym$"

ConcordCustomsPhone_Text_6:
# 208 "data/maps/ConcordCustoms/scripts.pory"
	.string "Dial Manually$"

ConcordCustomsPhone_Text_7:
# 208 "data/maps/ConcordCustoms/scripts.pory"
	.string "No one$"

ConcordCustomsPhone_Text_8:
# 213 "data/maps/ConcordCustoms/scripts.pory"
	.string "Prof. Balsam: Hm? Who's this? Oh,\n"
	.string "{PLAYER}?\p"
	.string "Why are you calling from a public phone?\n"
	.string "Did you lose the Devon Nav I gave you?\p"
	.string "Well, if you want to talk to me... you'll\n"
	.string "have to get a new one, or come to the\l"
	.string "lab.\p"
	.string "I don't like speaking with public phones\n"
	.string "involved. You never know who is\l"
	.string "listening...\p"
	.string "Well, that's all from me. Later.$"

ConcordCustomsPhone_Text_9:
# 225 "data/maps/ConcordCustoms/scripts.pory"
	.string "Norman: Hello. You have reached the\n"
	.string "voice mail of Petalburg Dojo.\p"
	.string "If you're calling to schedule a gym\n"
	.string "fight, I'm afraid this center is no\l"
	.string "longer part of the Hoenn Pokémon\l"
	.string "League.\p"
	.string "If it's you, {PLAYER}... I'll call you as\n"
	.string "soon as I can.\p"
	.string "And if it's you, Sidney... stop calling me!$"

ConcordCustomsPhone_Text_10:
# 240 "data/maps/ConcordCustoms/scripts.pory"
	.string "Let's dial a number...$"

ConcordCustomsPhone_Text_11:
# 247 "data/maps/ConcordCustoms/scripts.pory"
	.string "You have reached the Devon Call\n"
	.string "Logistics Center.\p"
	.string "The number you have just called is not\n"
	.string "assigned to any Hoenn citizen.\p"
	.string "Please try again.$"

ConcordCustomsPhone_Text_12:
# 255 "data/maps/ConcordCustoms/scripts.pory"
	.string "Success.$"

ConcordVendingMachine_Text_0:
# 284 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a vending machine.$"

ConcordVendingMachine_Text_1:
# 286 "data/maps/ConcordCustoms/scripts.pory"
	.string "Fresh Water - 50¥$"

ConcordVendingMachine_Text_2:
# 286 "data/maps/ConcordCustoms/scripts.pory"
	.string "Soda Pop - 70¥$"

ConcordVendingMachine_Text_3:
# 286 "data/maps/ConcordCustoms/scripts.pory"
	.string "Strong Coffee - 80¥$"

ConcordVendingMachine_Text_4:
# 304 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_5:
# 313 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_6:
# 322 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

ConcordVendingMachine_Text_7:
# 324 "data/maps/ConcordCustoms/scripts.pory"
	.string "Shake the machine$"

ConcordVendingMachine_Text_8:
# 331 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordVendingMachine_Text_9:
# 337 "data/maps/ConcordCustoms/scripts.pory"
	.string "Not enough money...$"

ConcordVendingMachine_Text_10:
# 357 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

ConcordVendingMachine_Text_11:
# 366 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

ConcordVendingMachine_Text_12:
# 375 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

ConcordVendingMachine_Text_13:
# 384 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

ConcordVendingMachine_Text_14:
# 410 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_15:
# 419 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_16:
# 428 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

ConcordVendingMachine_Text_17:
# 437 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordCustomsClerkBAD_Text_0:
# 477 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm so thirsty... what I wouldn't do for\n"
	.string "some {COLOR BLUE}Fresh Water!{COLOR DARK_GRAY}\p"
	.string "But I don't have any coins for the\n"
	.string "vending machine. {COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ConcordCustomsClerkBAD_Text_1:
# 481 "data/maps/ConcordCustoms/scripts.pory"
	.string "Wait... you've got a bottle! Please, I'm\n"
	.string "dying of thirst here!$"

ConcordCustomsClerkBAD_Text_2:
# 483 "data/maps/ConcordCustoms/scripts.pory"
	.string "Give Fresh Water$"

ConcordCustomsClerkBAD_Text_3:
# 483 "data/maps/ConcordCustoms/scripts.pory"
	.string "Sorry, I need this$"

ConcordCustomsClerkBAD_Text_4:
# 485 "data/maps/ConcordCustoms/scripts.pory"
	.string "Thank you so much! {COLOR BLUE}Gulp gulp gulp...{COLOR DARK_GRAY}\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Aaah...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "That hit the spot. Thank you. Hm? Why\n"
	.string "are you staring like that?\p"
	.string "I appreciate the water, but if you don't\n"
	.string "have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, I can't let you\l"
	.string "through.$"

ConcordCustomsClerkBAD_Text_5:
# 490 "data/maps/ConcordCustoms/scripts.pory"
	.string "Ah... you are a cold fellow, you know\n"
	.string "that?$"

ConcordCustomsClerkBAD_Text_6:
# 496 "data/maps/ConcordCustoms/scripts.pory"
	.string "We appreciate your help when we dealt\n"
	.string "with that scammer.\p"
	.string "He makes a profit off smuggling\n"
	.string "Pokémon eggs, in and out the\l"
	.string "Internment Zone.\p"
	.string "If he shows his mug around here again,\n"
	.string "we'll catch him for sure!$"

ConcordWageSlave_Outro::
# 54 "data/maps/ConcordCustoms/scripts.pory"
	.string "Ooof... I... I'm sorry...$"
