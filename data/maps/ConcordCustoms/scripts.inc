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
	goto_if_unset conartistescaped, ConcordFemaleDevon_1
# 62 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordFemaleDevon_Text_1
	return

ConcordFemaleDevon_1:
# 57 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordFemaleDevon_Text_0
	return


ConcordCustomsClerk::
# 69 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 70 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 71 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerk_Text_0
# 73 "data/maps/ConcordCustoms/scripts.pory"
	release
	return


ConcordCustomsWaterDude::
# 78 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 79 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 80 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 4, ConcordWageSlaveAtPhone_Movement_1
# 81 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsWaterDude_Text_0
# 83 "data/maps/ConcordCustoms/scripts.pory"
	release
	return


ConcordCustomsClerkStops0::
# 89 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 90 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 92 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 93 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops0_2
ConcordCustomsClerkStops0_1:
# 96 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops0_5
ConcordCustomsClerkStops0_4:
# 100 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops0_Movement_0
# 101 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 102 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
# 105 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops0_2:
# 94 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops0_1

ConcordCustomsClerkStops0_5:
# 97 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops0_4


ConcordCustomsClerkStops1::
# 110 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 111 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 113 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 114 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops1_2
ConcordCustomsClerkStops1_1:
# 117 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops1_5
ConcordCustomsClerkStops1_4:
# 121 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops1_Movement_0
# 122 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 123 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
# 126 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops1_2:
# 115 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops1_1

ConcordCustomsClerkStops1_5:
# 118 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops1_4


ConcordCustomsClerkStops2::
# 130 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 131 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 133 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 134 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops2_2
ConcordCustomsClerkStops2_1:
# 137 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops2_5
ConcordCustomsClerkStops2_4:
# 141 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops2_Movement_0
# 142 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 143 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
# 146 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops2_2:
# 135 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops2_1

ConcordCustomsClerkStops2_5:
# 138 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops2_4


ConcordCustomsClerkStops3::
# 150 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 151 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 153 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 154 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops3_2
ConcordCustomsClerkStops3_1:
# 157 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops3_5
ConcordCustomsClerkStops3_4:
# 161 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops3_Movement_0
# 162 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 163 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
# 166 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops3_2:
# 155 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops3_1

ConcordCustomsClerkStops3_5:
# 158 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops3_4


ConcordCustomsBookshelf::
# 173 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 174 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsBookshelf_Text_0
# 175 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return


ConcordCustomsPoster::
# 179 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 180 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPoster_Text_0
# 181 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return


ConcordCustomsPhone::
# 185 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 186 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_0
# 187 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return


ConcordVendingMachine::
# 192 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 193 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_0
# 194 "data/maps/ConcordCustoms/scripts.pory"
	showmoneybox 18, 0
# 195 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_1, ConcordVendingMachine_Text_2, ConcordVendingMachine_Text_3, ConcordVendingMachine_Text_4
# 198 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_2
ConcordVendingMachine_1:
# 251 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_5
ConcordVendingMachine_4:
# 304 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordVendingMachine_11
ConcordVendingMachine_10:
# 356 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ConcordVendingMachine_22
ConcordVendingMachine_21:
# 359 "data/maps/ConcordCustoms/scripts.pory"
cendvendingmachine:
# 360 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 361 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return

ConcordVendingMachine_2:
# 199 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 50
# 200 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_8
ConcordVendingMachine_7:
# 245 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_16
	goto ConcordVendingMachine_1

ConcordVendingMachine_5:
# 252 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 70
# 253 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_14
ConcordVendingMachine_13:
# 298 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_27
	goto ConcordVendingMachine_4

ConcordVendingMachine_8:
# 201 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 202 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 203 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 205 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 206 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cfreshwatergotstuck
# 207 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotfreshwater
# 209 "data/maps/ConcordCustoms/scripts.pory"
cgotfreshwater:
# 210 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 211 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 212 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 213 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_5
# 214 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 215 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 217 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 218 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 219 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrafreshwater
# 221 "data/maps/ConcordCustoms/scripts.pory"
cgotextrafreshwater:
# 222 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_6
# 223 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 224 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 225 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 227 "data/maps/ConcordCustoms/scripts.pory"
cfreshwatergotstuck:
# 228 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 229 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 230 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 231 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_7
# 233 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_8, ConcordVendingMachine_Text_4
# 234 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_19
ConcordVendingMachine_18:
# 239 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_32
	goto ConcordVendingMachine_7

ConcordVendingMachine_11:
# 305 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 80
# 306 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_25
ConcordVendingMachine_24:
# 351 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_34
	goto ConcordVendingMachine_10

ConcordVendingMachine_14:
# 254 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 255 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 256 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 258 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 259 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, csodagotstuck
# 260 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotsoda
# 262 "data/maps/ConcordCustoms/scripts.pory"
cgotsoda:
# 263 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 264 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 265 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 70
# 266 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_11
# 267 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 268 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_SODA_POP
# 270 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 271 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 272 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrasoda
# 274 "data/maps/ConcordCustoms/scripts.pory"
cgotextrasoda:
# 275 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_12
# 276 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 277 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_SODA_POP
# 278 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 280 "data/maps/ConcordCustoms/scripts.pory"
csodagotstuck:
# 281 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 282 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 283 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 284 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_13
# 286 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_8, ConcordVendingMachine_Text_4
# 287 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_30
ConcordVendingMachine_29:
# 292 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_39
	goto ConcordVendingMachine_13

ConcordVendingMachine_16:
# 246 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_10
	goto ConcordVendingMachine_1

ConcordVendingMachine_19:
# 235 "data/maps/ConcordCustoms/scripts.pory"
	call cMachineShake
# 236 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotfreshwater
	goto ConcordVendingMachine_18

ConcordVendingMachine_22:
# 357 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
	goto ConcordVendingMachine_21

ConcordVendingMachine_25:
# 307 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 308 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 309 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 311 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 312 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, ccoffeegotstuck
# 313 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotcoffee
# 315 "data/maps/ConcordCustoms/scripts.pory"
cgotcoffee:
# 316 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 317 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 318 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 319 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_15
# 320 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 321 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 323 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 324 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 325 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextracoffee
# 327 "data/maps/ConcordCustoms/scripts.pory"
cgotextracoffee:
# 328 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_16
# 329 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 330 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 331 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 333 "data/maps/ConcordCustoms/scripts.pory"
ccoffeegotstuck:
# 334 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 335 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 336 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 337 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_17
# 339 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_8, ConcordVendingMachine_Text_4
# 340 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_37
ConcordVendingMachine_36:
# 345 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_41
	goto ConcordVendingMachine_24

ConcordVendingMachine_27:
# 299 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_10
	goto ConcordVendingMachine_4

ConcordVendingMachine_30:
# 288 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 289 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotsoda
	goto ConcordVendingMachine_29

ConcordVendingMachine_32:
# 240 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_7

ConcordVendingMachine_34:
# 352 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_10
	goto ConcordVendingMachine_10

ConcordVendingMachine_37:
# 341 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 342 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotcoffee
	goto ConcordVendingMachine_36

ConcordVendingMachine_39:
# 293 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_14
	goto ConcordVendingMachine_13

ConcordVendingMachine_41:
# 346 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_18
	goto ConcordVendingMachine_24


cMachineShake::
# 366 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_REVERSAL
# 367 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8004, 2
# 368 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8005, 6
# 369 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8006, 4
# 370 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8007, 4
# 371 "data/maps/ConcordCustoms/scripts.pory"
	special ShakeCamera
	return


ConcordCustomsClerkBAD::
# 382 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 383 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 384 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset FLAG_SAFE_FOLLOWER_MOVEMENT, ConcordCustomsClerkBAD_1
# 405 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_6
	return

ConcordCustomsClerkBAD_1:
# 386 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_0
	checkitem ITEM_FRESH_WATER
# 0 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordCustomsClerkBAD_4
	return

ConcordCustomsClerkBAD_4:
# 390 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_1
# 392 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsClerkBAD_Text_2, ConcordCustomsClerkBAD_Text_3
# 393 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsClerkBAD_7
ConcordCustomsClerkBAD_6:
# 398 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsClerkBAD_9
	return

ConcordCustomsClerkBAD_7:
# 394 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_4
	goto ConcordCustomsClerkBAD_6

ConcordCustomsClerkBAD_9:
# 399 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_5
	return


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

# 100 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops0_Movement_0:
# 100 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 100 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 121 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops1_Movement_0:
# 121 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 121 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 121 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 141 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops2_Movement_0:
# 141 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 141 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 141 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 141 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 161 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops3_Movement_0:
# 161 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 161 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 161 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 161 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 161 "data/maps/ConcordCustoms/scripts.pory"
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
# 71 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm sorry, I can't let you through\n"
	.string "unless you have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}.\p"
	.string "Applications for visas are currently\n"
	.string "closed to the general public, but us at\l"
	.string "Devon Co. will inform as promptly as\l"
	.string "they are open anew.$"

ConcordCustomsWaterDude_Text_0:
# 81 "data/maps/ConcordCustoms/scripts.pory"
	.string "I just tried to bribe the customs\n"
	.string "officer to let me through... with some\l"
	.string "{COLOR BLUE}Fresh Water{COLOR DARK_GRAY}.\p"
	.string "He looked at me as if I was crazy.\p"
	.string "I don't know why I thought that would\n"
	.string "work, it was kinda stupid, haha...$"

ConcordCustomsClerkStops0_Text_0:
# 94 "data/maps/ConcordCustoms/scripts.pory"
	.string "Excuse me, sir. Would you be so kind as\n"
	.string "to approach the counter?$"

ConcordCustomsClerkStops0_Text_1:
# 102 "data/maps/ConcordCustoms/scripts.pory"
	.string "Hmm... you don't have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, do\n"
	.string "you?\p"
	.string "If that's the case, I'm afraid I can't\n"
	.string "let you through.\p"
	.string "Applications for visas are currently\n"
	.string "closed to the general public, but us at\l"
	.string "Devon Co. will inform as promptly as\l"
	.string "they are open anew.$"

ConcordCustomsBookshelf_Text_0:
# 174 "data/maps/ConcordCustoms/scripts.pory"
	.string "The shelf is full of travel brochures.$"

ConcordCustomsPoster_Text_0:
# 180 "data/maps/ConcordCustoms/scripts.pory"
	.string "Devon Visa - your ticket to freedom\n"
	.string "across Hoenn.\l"
	.string "Applications reopening soon!$"

ConcordCustomsPhone_Text_0:
# 186 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a paid phone for people without\n"
	.string "Devon Navs.$"

ConcordVendingMachine_Text_0:
# 193 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a vending machine.$"

ConcordVendingMachine_Text_1:
# 195 "data/maps/ConcordCustoms/scripts.pory"
	.string "Fresh Water - 50¥$"

ConcordVendingMachine_Text_2:
# 195 "data/maps/ConcordCustoms/scripts.pory"
	.string "Soda Pop - 70¥$"

ConcordVendingMachine_Text_3:
# 195 "data/maps/ConcordCustoms/scripts.pory"
	.string "Strong Coffee - 80¥$"

ConcordVendingMachine_Text_4:
# 195 "data/maps/ConcordCustoms/scripts.pory"
	.string "Leave$"

ConcordVendingMachine_Text_5:
# 213 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_6:
# 222 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_7:
# 231 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

ConcordVendingMachine_Text_8:
# 233 "data/maps/ConcordCustoms/scripts.pory"
	.string "Shake the machine$"

ConcordVendingMachine_Text_9:
# 240 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordVendingMachine_Text_10:
# 246 "data/maps/ConcordCustoms/scripts.pory"
	.string "Not enough money...$"

ConcordVendingMachine_Text_11:
# 266 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

ConcordVendingMachine_Text_12:
# 275 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

ConcordVendingMachine_Text_13:
# 284 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

ConcordVendingMachine_Text_14:
# 293 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

ConcordVendingMachine_Text_15:
# 319 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_16:
# 328 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_17:
# 337 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

ConcordVendingMachine_Text_18:
# 346 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordCustomsClerkBAD_Text_0:
# 386 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm so thirsty... what I wouldn't do for\n"
	.string "some {COLOR BLUE}Fresh Water!{COLOR DARK_GRAY}\p"
	.string "But I don't have any coins for the\n"
	.string "vending machine. {COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ConcordCustomsClerkBAD_Text_1:
# 390 "data/maps/ConcordCustoms/scripts.pory"
	.string "Wait... you've got a bottle! Please, I'm\n"
	.string "dying of thirst here!$"

ConcordCustomsClerkBAD_Text_2:
# 392 "data/maps/ConcordCustoms/scripts.pory"
	.string "Give Fresh Water$"

ConcordCustomsClerkBAD_Text_3:
# 392 "data/maps/ConcordCustoms/scripts.pory"
	.string "Sorry, I need this$"

ConcordCustomsClerkBAD_Text_4:
# 394 "data/maps/ConcordCustoms/scripts.pory"
	.string "Thank you so much! {COLOR BLUE}Gulp gulp gulp...{COLOR DARK_GRAY}\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Aaah...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "That hit the spot. Thank you. Hm? Why\n"
	.string "are you staring like that?\p"
	.string "I appreciate the water, but if you don't\n"
	.string "have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, I can't let you\l"
	.string "through.$"

ConcordCustomsClerkBAD_Text_5:
# 399 "data/maps/ConcordCustoms/scripts.pory"
	.string "Ah... you are a cold fellow, you know\n"
	.string "that?$"

ConcordCustomsClerkBAD_Text_6:
# 405 "data/maps/ConcordCustoms/scripts.pory"
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
