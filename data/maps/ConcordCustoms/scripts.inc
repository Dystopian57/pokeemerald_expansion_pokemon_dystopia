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
# 38 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_set concordwageslave, ConcordWageSlaveAtPhone_5
ConcordWageSlaveAtPhone_4:
# 45 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordWageSlaveAtPhone_2:
# 15 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_0
# 17 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 2, ConcordWageSlaveAtPhone_Movement_0
# 18 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 19 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_1
# 20 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 21 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_2
# 22 "data/maps/ConcordCustoms/scripts.pory"
	playbgm MUS_HELP, TRUE
# 23 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_EXPLOSION
# 24 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8004, 2
# 25 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8005, 6
# 26 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8006, 4
# 27 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8007, 4
# 28 "data/maps/ConcordCustoms/scripts.pory"
	special ShakeCamera
# 30 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_3
# 31 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 2, ConcordWageSlaveAtPhone_Movement_1
# 32 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_4
# 33 "data/maps/ConcordCustoms/scripts.pory"
	trainerbattle_no_intro TRAINER_CONCORDWAGESLAVE, ConcordWageSlave_Outro
# 34 "data/maps/ConcordCustoms/scripts.pory"
	setflag concordwageslave
	goto ConcordWageSlaveAtPhone_1

ConcordWageSlaveAtPhone_5:
# 41 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_5
	goto ConcordWageSlaveAtPhone_4


ConcordFemaleDevon::
# 52 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 53 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 54 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 3, ConcordWageSlaveAtPhone_Movement_1
# 55 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset conartistescaped, ConcordFemaleDevon_2
# 62 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordFemaleDevon_Text_1
ConcordFemaleDevon_1:
# 67 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordFemaleDevon_2:
# 57 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordFemaleDevon_Text_0
	goto ConcordFemaleDevon_1


ConcordCustomsClerk::
# 71 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 72 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 73 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerk_Text_0
# 75 "data/maps/ConcordCustoms/scripts.pory"
	release
	return


ConcordCustomsWaterDude::
# 80 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 81 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 82 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 4, ConcordWageSlaveAtPhone_Movement_1
# 83 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsWaterDude_Text_0
# 85 "data/maps/ConcordCustoms/scripts.pory"
	release
	return


ConcordCustomsClerkStops0::
# 91 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 92 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 94 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 95 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops0_2
ConcordCustomsClerkStops0_1:
# 98 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops0_5
ConcordCustomsClerkStops0_4:
# 102 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops0_Movement_0
# 103 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 104 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_2
# 107 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops0_2:
# 96 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops0_1

ConcordCustomsClerkStops0_5:
# 99 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
	goto ConcordCustomsClerkStops0_4


ConcordCustomsClerkStops1::
# 112 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 113 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 115 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 116 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops1_2
ConcordCustomsClerkStops1_1:
# 119 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops1_5
ConcordCustomsClerkStops1_4:
# 123 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops1_Movement_0
# 124 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 125 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_2
# 128 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops1_2:
# 117 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops1_1

ConcordCustomsClerkStops1_5:
# 120 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops1_4


ConcordCustomsClerkStops2::
# 132 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 133 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 135 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 136 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops2_2
ConcordCustomsClerkStops2_1:
# 139 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops2_5
ConcordCustomsClerkStops2_4:
# 143 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops2_Movement_0
# 144 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 145 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_2
# 148 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops2_2:
# 137 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops2_1

ConcordCustomsClerkStops2_5:
# 140 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops2_4


ConcordCustomsClerkStops3::
# 152 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 153 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 155 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 156 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops3_2
ConcordCustomsClerkStops3_1:
# 159 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops3_5
ConcordCustomsClerkStops3_4:
# 163 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops3_Movement_0
# 164 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 165 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_2
# 168 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops3_2:
# 157 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops3_1

ConcordCustomsClerkStops3_5:
# 160 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops3_4


ConcordCustomsBookshelf::
# 175 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 176 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsBookshelf_Text_0
# 177 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return


ConcordCustomsPoster::
# 181 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 182 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPoster_Text_0
# 183 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return


ConcordCustomsPhone::
# 187 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 188 "data/maps/ConcordCustoms/scripts.pory"
	showmoneybox 18, 0
# 189 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_0
# 190 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_1, ConcordCustomsPhone_Text_2
# 192 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_2
ConcordCustomsPhone_1:
# 209 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_5
ConcordCustomsPhone_4:
# 212 "data/maps/ConcordCustoms/scripts.pory"
endofpayphone:
# 213 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsPhone_2:
# 193 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 50
# 194 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordCustomsPhone_7
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_5:
	goto ConcordCustomsPhone_4

ConcordCustomsPhone_7:
# 195 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 196 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 197 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 198 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 199 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_CLICK
# 200 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_3
# 201 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_4
# 202 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_9
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_9:
# 203 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 204 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 205 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_5
# 206 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 207 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_1


ConcordVendingMachine::
# 218 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 219 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_0
# 220 "data/maps/ConcordCustoms/scripts.pory"
	showmoneybox 18, 0
# 221 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_1, ConcordVendingMachine_Text_2, ConcordVendingMachine_Text_3, ConcordCustomsPhone_Text_2
# 224 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_2
ConcordVendingMachine_1:
# 277 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_5
ConcordVendingMachine_4:
# 330 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordVendingMachine_11
ConcordVendingMachine_10:
# 382 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ConcordVendingMachine_22
ConcordVendingMachine_21:
# 385 "data/maps/ConcordCustoms/scripts.pory"
cendvendingmachine:
# 386 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 387 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return

ConcordVendingMachine_2:
# 225 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 50
# 226 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_8
ConcordVendingMachine_7:
# 271 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_16
	goto ConcordVendingMachine_1

ConcordVendingMachine_5:
# 278 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 70
# 279 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_14
ConcordVendingMachine_13:
# 324 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_27
	goto ConcordVendingMachine_4

ConcordVendingMachine_8:
# 227 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 228 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 229 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 231 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 232 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cfreshwatergotstuck
# 233 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotfreshwater
# 235 "data/maps/ConcordCustoms/scripts.pory"
cgotfreshwater:
# 236 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 237 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 238 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 239 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_4
# 240 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 241 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 243 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 244 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 245 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrafreshwater
# 247 "data/maps/ConcordCustoms/scripts.pory"
cgotextrafreshwater:
# 248 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_5
# 249 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 250 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 251 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 253 "data/maps/ConcordCustoms/scripts.pory"
cfreshwatergotstuck:
# 254 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 255 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 256 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 257 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_6
# 259 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 260 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_19
ConcordVendingMachine_18:
# 265 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_32
	goto ConcordVendingMachine_7

ConcordVendingMachine_11:
# 331 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 80
# 332 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_25
ConcordVendingMachine_24:
# 377 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_34
	goto ConcordVendingMachine_10

ConcordVendingMachine_14:
# 280 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 281 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 282 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 284 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 285 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, csodagotstuck
# 286 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotsoda
# 288 "data/maps/ConcordCustoms/scripts.pory"
cgotsoda:
# 289 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 290 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 291 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 70
# 292 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_10
# 293 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 294 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_SODA_POP
# 296 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 297 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 298 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrasoda
# 300 "data/maps/ConcordCustoms/scripts.pory"
cgotextrasoda:
# 301 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_11
# 302 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 303 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_SODA_POP
# 304 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 306 "data/maps/ConcordCustoms/scripts.pory"
csodagotstuck:
# 307 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 308 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 309 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 310 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_12
# 312 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 313 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_30
ConcordVendingMachine_29:
# 318 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_39
	goto ConcordVendingMachine_13

ConcordVendingMachine_16:
# 272 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_1

ConcordVendingMachine_19:
# 261 "data/maps/ConcordCustoms/scripts.pory"
	call cMachineShake
# 262 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotfreshwater
	goto ConcordVendingMachine_18

ConcordVendingMachine_22:
# 383 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
	goto ConcordVendingMachine_21

ConcordVendingMachine_25:
# 333 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 334 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 335 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 337 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 338 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, ccoffeegotstuck
# 339 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotcoffee
# 341 "data/maps/ConcordCustoms/scripts.pory"
cgotcoffee:
# 342 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 343 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 344 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 345 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_14
# 346 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 347 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 349 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 350 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 351 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextracoffee
# 353 "data/maps/ConcordCustoms/scripts.pory"
cgotextracoffee:
# 354 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_15
# 355 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 356 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 357 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 359 "data/maps/ConcordCustoms/scripts.pory"
ccoffeegotstuck:
# 360 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 361 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 362 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 363 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_16
# 365 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 366 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_37
ConcordVendingMachine_36:
# 371 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_41
	goto ConcordVendingMachine_24

ConcordVendingMachine_27:
# 325 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_4

ConcordVendingMachine_30:
# 314 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 315 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotsoda
	goto ConcordVendingMachine_29

ConcordVendingMachine_32:
# 266 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_8
	goto ConcordVendingMachine_7

ConcordVendingMachine_34:
# 378 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_10

ConcordVendingMachine_37:
# 367 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 368 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotcoffee
	goto ConcordVendingMachine_36

ConcordVendingMachine_39:
# 319 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_13
	goto ConcordVendingMachine_13

ConcordVendingMachine_41:
# 372 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_17
	goto ConcordVendingMachine_24


cMachineShake::
# 392 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_REVERSAL
# 393 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8004, 2
# 394 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8005, 6
# 395 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8006, 4
# 396 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8007, 4
# 397 "data/maps/ConcordCustoms/scripts.pory"
	special ShakeCamera
	return


ConcordCustomsClerkBAD::
# 408 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 409 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 410 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset FLAG_SAFE_FOLLOWER_MOVEMENT, ConcordCustomsClerkBAD_2
# 431 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_6
# 434 "data/maps/ConcordCustoms/scripts.pory"
	release
ConcordCustomsClerkBAD_1:
# 436 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkBAD_2:
# 412 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_0
	checkitem ITEM_FRESH_WATER
# 0 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordCustomsClerkBAD_5
	goto ConcordCustomsClerkBAD_1

ConcordCustomsClerkBAD_5:
# 416 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_1
# 418 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsClerkBAD_Text_2, ConcordCustomsClerkBAD_Text_3
# 419 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsClerkBAD_8
ConcordCustomsClerkBAD_7:
# 424 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsClerkBAD_10
	goto ConcordCustomsClerkBAD_1

ConcordCustomsClerkBAD_8:
# 420 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_4
	goto ConcordCustomsClerkBAD_7

ConcordCustomsClerkBAD_10:
# 425 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_5
	goto ConcordCustomsClerkBAD_1


# 17 "data/maps/ConcordCustoms/scripts.pory"
ConcordWageSlaveAtPhone_Movement_0:
# 17 "data/maps/ConcordCustoms/scripts.pory"
	emote_exclamation_mark
	step_end

# 31 "data/maps/ConcordCustoms/scripts.pory"
ConcordWageSlaveAtPhone_Movement_1:
# 31 "data/maps/ConcordCustoms/scripts.pory"
	face_player
	step_end

# 102 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops0_Movement_0:
# 102 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 102 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 123 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops1_Movement_0:
# 123 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 123 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 123 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 143 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops2_Movement_0:
# 143 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 143 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 143 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 143 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 163 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops3_Movement_0:
# 163 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 163 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 163 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 163 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 163 "data/maps/ConcordCustoms/scripts.pory"
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
# 19 "data/maps/ConcordCustoms/scripts.pory"
	.string "... I... I'm fired? B-but sir...! Please be\n"
	.string "reasonable, I...!$"

ConcordWageSlaveAtPhone_Text_2:
# 21 "data/maps/ConcordCustoms/scripts.pory"
	.string "Sir...? Hello? SIR!?\p"
	.string "...$"

ConcordWageSlaveAtPhone_Text_3:
# 30 "data/maps/ConcordCustoms/scripts.pory"
	.string "THAT FILTHY PIG! What am I supposed to\n"
	.string "do now!? MY FAMILY DEPENDS ON ME!$"

ConcordWageSlaveAtPhone_Text_4:
# 32 "data/maps/ConcordCustoms/scripts.pory"
	.string "And what do YOU want!? Screw you too!!$"

ConcordWageSlaveAtPhone_Text_5:
# 41 "data/maps/ConcordCustoms/scripts.pory"
	.string "I shouldn't have snapped at you like\n"
	.string "that. I was just really frustrated.\p"
	.string "I don't know what I'm going to do now. I\n"
	.string "guess I'll wait here to figure it out.$"

ConcordFemaleDevon_Text_0:
# 57 "data/maps/ConcordCustoms/scripts.pory"
	.string "This is not a place to idle. If you're not\n"
	.string "going to cross the customs, you should\l"
	.string "leave.$"

ConcordFemaleDevon_Text_1:
# 62 "data/maps/ConcordCustoms/scripts.pory"
	.string "We appreciate your help when we dealt\n"
	.string "with that con artist.\p"
	.string "He makes a profit off smuggling\n"
	.string "Pokémon eggs, in and out the Rebel\l"
	.string "Zone.\p"
	.string "If he shows his mug around here again,\n"
	.string "we'll catch him for sure!$"

ConcordCustomsClerk_Text_0:
# 73 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm sorry, I can't let you through\n"
	.string "unless you have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}.\p"
	.string "Applications for visas are currently\n"
	.string "closed to the general public, but us at\l"
	.string "Devon Co. will inform as promptly as\l"
	.string "they are open anew.$"

ConcordCustomsWaterDude_Text_0:
# 83 "data/maps/ConcordCustoms/scripts.pory"
	.string "I just tried to bribe the customs\n"
	.string "officer to let me through... with some\l"
	.string "{COLOR BLUE}Fresh Water{COLOR DARK_GRAY}.\p"
	.string "He looked at me as if I was crazy.\p"
	.string "I don't know why I thought that would\n"
	.string "work, it was kinda stupid, haha...$"

ConcordCustomsClerkStops0_Text_0:
# 96 "data/maps/ConcordCustoms/scripts.pory"
	.string "Excuse me, sir. Would you be so kind as\n"
	.string "to approach the counter?$"

ConcordCustomsClerkStops0_Text_1:
# 99 "data/maps/ConcordCustoms/scripts.pory"
	.string "Excuse me, miss. Would you be so kind as\n"
	.string "to approach the counter?$"

ConcordCustomsClerkStops0_Text_2:
# 104 "data/maps/ConcordCustoms/scripts.pory"
	.string "Hmm... you don't have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, do\n"
	.string "you?\p"
	.string "If that's the case, I'm afraid I can't\n"
	.string "let you through.\p"
	.string "Applications for visas are currently\n"
	.string "closed to the general public, but us at\l"
	.string "Devon Co. will inform as promptly as\l"
	.string "they are open anew.$"

ConcordCustomsBookshelf_Text_0:
# 176 "data/maps/ConcordCustoms/scripts.pory"
	.string "The shelf is full of travel brochures.$"

ConcordCustomsPoster_Text_0:
# 182 "data/maps/ConcordCustoms/scripts.pory"
	.string "Devon Visa - your ticket to freedom\n"
	.string "across Hoenn.\l"
	.string "Applications reopening soon!$"

ConcordCustomsPhone_Text_0:
# 189 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a paid phone. The cost is 50¥.$"

ConcordCustomsPhone_Text_1:
# 190 "data/maps/ConcordCustoms/scripts.pory"
	.string "Insert coin$"

ConcordCustomsPhone_Text_2:
# 190 "data/maps/ConcordCustoms/scripts.pory"
	.string "Leave$"

ConcordCustomsPhone_Text_3:
# 200 "data/maps/ConcordCustoms/scripts.pory"
	.string "Call who?$"

ConcordCustomsPhone_Text_4:
# 201 "data/maps/ConcordCustoms/scripts.pory"
	.string "Balsam$"

ConcordCustomsPhone_Text_5:
# 205 "data/maps/ConcordCustoms/scripts.pory"
	.string "Balsam Call here$"

ConcordVendingMachine_Text_0:
# 219 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a vending machine.$"

ConcordVendingMachine_Text_1:
# 221 "data/maps/ConcordCustoms/scripts.pory"
	.string "Fresh Water - 50¥$"

ConcordVendingMachine_Text_2:
# 221 "data/maps/ConcordCustoms/scripts.pory"
	.string "Soda Pop - 70¥$"

ConcordVendingMachine_Text_3:
# 221 "data/maps/ConcordCustoms/scripts.pory"
	.string "Strong Coffee - 80¥$"

ConcordVendingMachine_Text_4:
# 239 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_5:
# 248 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_6:
# 257 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

ConcordVendingMachine_Text_7:
# 259 "data/maps/ConcordCustoms/scripts.pory"
	.string "Shake the machine$"

ConcordVendingMachine_Text_8:
# 266 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordVendingMachine_Text_9:
# 272 "data/maps/ConcordCustoms/scripts.pory"
	.string "Not enough money...$"

ConcordVendingMachine_Text_10:
# 292 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

ConcordVendingMachine_Text_11:
# 301 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

ConcordVendingMachine_Text_12:
# 310 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

ConcordVendingMachine_Text_13:
# 319 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

ConcordVendingMachine_Text_14:
# 345 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_15:
# 354 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_16:
# 363 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

ConcordVendingMachine_Text_17:
# 372 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordCustomsClerkBAD_Text_0:
# 412 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm so thirsty... what I wouldn't do for\n"
	.string "some {COLOR BLUE}Fresh Water!{COLOR DARK_GRAY}\p"
	.string "But I don't have any coins for the\n"
	.string "vending machine. {COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ConcordCustomsClerkBAD_Text_1:
# 416 "data/maps/ConcordCustoms/scripts.pory"
	.string "Wait... you've got a bottle! Please, I'm\n"
	.string "dying of thirst here!$"

ConcordCustomsClerkBAD_Text_2:
# 418 "data/maps/ConcordCustoms/scripts.pory"
	.string "Give Fresh Water$"

ConcordCustomsClerkBAD_Text_3:
# 418 "data/maps/ConcordCustoms/scripts.pory"
	.string "Sorry, I need this$"

ConcordCustomsClerkBAD_Text_4:
# 420 "data/maps/ConcordCustoms/scripts.pory"
	.string "Thank you so much! {COLOR BLUE}Gulp gulp gulp...{COLOR DARK_GRAY}\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Aaah...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "That hit the spot. Thank you. Hm? Why\n"
	.string "are you staring like that?\p"
	.string "I appreciate the water, but if you don't\n"
	.string "have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, I can't let you\l"
	.string "through.$"

ConcordCustomsClerkBAD_Text_5:
# 425 "data/maps/ConcordCustoms/scripts.pory"
	.string "Ah... you are a cold fellow, you know\n"
	.string "that?$"

ConcordCustomsClerkBAD_Text_6:
# 431 "data/maps/ConcordCustoms/scripts.pory"
	.string "We appreciate your help when we dealt\n"
	.string "with that scammer.\p"
	.string "He makes a profit off smuggling\n"
	.string "Pokémon eggs, in and out the\l"
	.string "Internment Zone.\p"
	.string "If he shows his mug around here again,\n"
	.string "we'll catch him for sure!$"

ConcordWageSlave_Outro::
# 47 "data/maps/ConcordCustoms/scripts.pory"
	.string "Ooof... I... I'm sorry...$"
