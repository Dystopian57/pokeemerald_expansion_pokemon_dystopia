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
# 283 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_5
ConcordCustomsPhone_4:
# 286 "data/maps/ConcordCustoms/scripts.pory"
endofpayphone:
# 287 "data/maps/ConcordCustoms/scripts.pory"
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
# 284 "data/maps/ConcordCustoms/scripts.pory"
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
# 272 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 277 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 278 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_21:
# 245 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset sentdemomysterygift, ConcordCustomsPhone_24
ConcordCustomsPhone_23:
# 253 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_27
# 264 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 265 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 266 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_14
ConcordCustomsPhone_26:
# 267 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 268 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_20

ConcordCustomsPhone_24:
# 246 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 247 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 248 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_11
# 250 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 251 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_23

ConcordCustomsPhone_27:
# 254 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 255 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 256 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_12
# 257 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_13
# 258 "data/maps/ConcordCustoms/scripts.pory"
	setflag sentdemomysterygift
# 259 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 260 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_26


ConcordVendingMachine::
# 292 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 293 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_0
# 294 "data/maps/ConcordCustoms/scripts.pory"
	showmoneybox 18, 0
# 295 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_1, ConcordVendingMachine_Text_2, ConcordVendingMachine_Text_3, ConcordCustomsPhone_Text_2
# 298 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_2
ConcordVendingMachine_1:
# 351 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_5
ConcordVendingMachine_4:
# 404 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordVendingMachine_11
ConcordVendingMachine_10:
# 456 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ConcordVendingMachine_22
ConcordVendingMachine_21:
# 459 "data/maps/ConcordCustoms/scripts.pory"
cendvendingmachine:
# 460 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 461 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return

ConcordVendingMachine_2:
# 299 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 50
# 300 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_8
ConcordVendingMachine_7:
# 345 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_16
	goto ConcordVendingMachine_1

ConcordVendingMachine_5:
# 352 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 70
# 353 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_14
ConcordVendingMachine_13:
# 398 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_27
	goto ConcordVendingMachine_4

ConcordVendingMachine_8:
# 301 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 302 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 303 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 305 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 306 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cfreshwatergotstuck
# 307 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotfreshwater
# 309 "data/maps/ConcordCustoms/scripts.pory"
cgotfreshwater:
# 310 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 311 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 312 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 313 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_4
# 314 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 315 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 317 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 318 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 319 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrafreshwater
# 321 "data/maps/ConcordCustoms/scripts.pory"
cgotextrafreshwater:
# 322 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_5
# 323 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 324 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 325 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 327 "data/maps/ConcordCustoms/scripts.pory"
cfreshwatergotstuck:
# 328 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 329 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 330 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 331 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_6
# 333 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 334 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_19
ConcordVendingMachine_18:
# 339 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_32
	goto ConcordVendingMachine_7

ConcordVendingMachine_11:
# 405 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 80
# 406 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_25
ConcordVendingMachine_24:
# 451 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_34
	goto ConcordVendingMachine_10

ConcordVendingMachine_14:
# 354 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 355 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 356 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 358 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 359 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, csodagotstuck
# 360 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotsoda
# 362 "data/maps/ConcordCustoms/scripts.pory"
cgotsoda:
# 363 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 364 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 365 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 70
# 366 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_10
# 367 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 368 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_SODA_POP
# 370 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 371 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 372 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrasoda
# 374 "data/maps/ConcordCustoms/scripts.pory"
cgotextrasoda:
# 375 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_11
# 376 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 377 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_SODA_POP
# 378 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 380 "data/maps/ConcordCustoms/scripts.pory"
csodagotstuck:
# 381 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 382 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 383 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 384 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_12
# 386 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 387 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_30
ConcordVendingMachine_29:
# 392 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_39
	goto ConcordVendingMachine_13

ConcordVendingMachine_16:
# 346 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_1

ConcordVendingMachine_19:
# 335 "data/maps/ConcordCustoms/scripts.pory"
	call cMachineShake
# 336 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotfreshwater
	goto ConcordVendingMachine_18

ConcordVendingMachine_22:
# 457 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
	goto ConcordVendingMachine_21

ConcordVendingMachine_25:
# 407 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 408 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 409 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 411 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 412 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, ccoffeegotstuck
# 413 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotcoffee
# 415 "data/maps/ConcordCustoms/scripts.pory"
cgotcoffee:
# 416 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 417 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 418 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 419 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_14
# 420 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 421 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 423 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 424 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 425 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextracoffee
# 427 "data/maps/ConcordCustoms/scripts.pory"
cgotextracoffee:
# 428 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_15
# 429 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 430 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 431 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 433 "data/maps/ConcordCustoms/scripts.pory"
ccoffeegotstuck:
# 434 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 435 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 436 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 437 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_16
# 439 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 440 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_37
ConcordVendingMachine_36:
# 445 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_41
	goto ConcordVendingMachine_24

ConcordVendingMachine_27:
# 399 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_4

ConcordVendingMachine_30:
# 388 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 389 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotsoda
	goto ConcordVendingMachine_29

ConcordVendingMachine_32:
# 340 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_8
	goto ConcordVendingMachine_7

ConcordVendingMachine_34:
# 452 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_10

ConcordVendingMachine_37:
# 441 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 442 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotcoffee
	goto ConcordVendingMachine_36

ConcordVendingMachine_39:
# 393 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_13
	goto ConcordVendingMachine_13

ConcordVendingMachine_41:
# 446 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_17
	goto ConcordVendingMachine_24


cMachineShake::
# 466 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_REVERSAL
# 467 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8004, 2
# 468 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8005, 6
# 469 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8006, 4
# 470 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8007, 4
# 471 "data/maps/ConcordCustoms/scripts.pory"
	special ShakeCamera
	return


ConcordCustomsClerkBAD::
# 482 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 483 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 484 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset FLAG_SAFE_FOLLOWER_MOVEMENT, ConcordCustomsClerkBAD_2
# 505 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_6
# 508 "data/maps/ConcordCustoms/scripts.pory"
	release
ConcordCustomsClerkBAD_1:
# 510 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkBAD_2:
# 486 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_0
	checkitem ITEM_FRESH_WATER
# 0 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordCustomsClerkBAD_5
	goto ConcordCustomsClerkBAD_1

ConcordCustomsClerkBAD_5:
# 490 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_1
# 492 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsClerkBAD_Text_2, ConcordCustomsClerkBAD_Text_3
# 493 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsClerkBAD_8
ConcordCustomsClerkBAD_7:
# 498 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsClerkBAD_10
	goto ConcordCustomsClerkBAD_1

ConcordCustomsClerkBAD_8:
# 494 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_4
	goto ConcordCustomsClerkBAD_7

ConcordCustomsClerkBAD_10:
# 499 "data/maps/ConcordCustoms/scripts.pory"
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
# 248 "data/maps/ConcordCustoms/scripts.pory"
	.string "You have reached the Devon Call\n"
	.string "Logistics Center.\p"
	.string "The number you have just called is not\n"
	.string "assigned to any Hoenn citizen.\p"
	.string "Please try again.$"

ConcordCustomsPhone_Text_12:
# 256 "data/maps/ConcordCustoms/scripts.pory"
	.string "...$"

ConcordCustomsPhone_Text_13:
# 257 "data/maps/ConcordCustoms/scripts.pory"
	.string "We've sent a package to your mailbox.\n"
	.string "Check it.$"

ConcordCustomsPhone_Text_14:
# 266 "data/maps/ConcordCustoms/scripts.pory"
	.string "We have already made this delivery. Only\n"
	.string "one per customer.$"

ConcordVendingMachine_Text_0:
# 293 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a vending machine.$"

ConcordVendingMachine_Text_1:
# 295 "data/maps/ConcordCustoms/scripts.pory"
	.string "Fresh Water - 50¥$"

ConcordVendingMachine_Text_2:
# 295 "data/maps/ConcordCustoms/scripts.pory"
	.string "Soda Pop - 70¥$"

ConcordVendingMachine_Text_3:
# 295 "data/maps/ConcordCustoms/scripts.pory"
	.string "Strong Coffee - 80¥$"

ConcordVendingMachine_Text_4:
# 313 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_5:
# 322 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_6:
# 331 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

ConcordVendingMachine_Text_7:
# 333 "data/maps/ConcordCustoms/scripts.pory"
	.string "Shake the machine$"

ConcordVendingMachine_Text_8:
# 340 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordVendingMachine_Text_9:
# 346 "data/maps/ConcordCustoms/scripts.pory"
	.string "Not enough money...$"

ConcordVendingMachine_Text_10:
# 366 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

ConcordVendingMachine_Text_11:
# 375 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

ConcordVendingMachine_Text_12:
# 384 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

ConcordVendingMachine_Text_13:
# 393 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

ConcordVendingMachine_Text_14:
# 419 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_15:
# 428 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_16:
# 437 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

ConcordVendingMachine_Text_17:
# 446 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordCustomsClerkBAD_Text_0:
# 486 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm so thirsty... what I wouldn't do for\n"
	.string "some {COLOR BLUE}Fresh Water!{COLOR DARK_GRAY}\p"
	.string "But I don't have any coins for the\n"
	.string "vending machine. {COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ConcordCustomsClerkBAD_Text_1:
# 490 "data/maps/ConcordCustoms/scripts.pory"
	.string "Wait... you've got a bottle! Please, I'm\n"
	.string "dying of thirst here!$"

ConcordCustomsClerkBAD_Text_2:
# 492 "data/maps/ConcordCustoms/scripts.pory"
	.string "Give Fresh Water$"

ConcordCustomsClerkBAD_Text_3:
# 492 "data/maps/ConcordCustoms/scripts.pory"
	.string "Sorry, I need this$"

ConcordCustomsClerkBAD_Text_4:
# 494 "data/maps/ConcordCustoms/scripts.pory"
	.string "Thank you so much! {COLOR BLUE}Gulp gulp gulp...{COLOR DARK_GRAY}\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Aaah...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "That hit the spot. Thank you. Hm? Why\n"
	.string "are you staring like that?\p"
	.string "I appreciate the water, but if you don't\n"
	.string "have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, I can't let you\l"
	.string "through.$"

ConcordCustomsClerkBAD_Text_5:
# 499 "data/maps/ConcordCustoms/scripts.pory"
	.string "Ah... you are a cold fellow, you know\n"
	.string "that?$"

ConcordCustomsClerkBAD_Text_6:
# 505 "data/maps/ConcordCustoms/scripts.pory"
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
