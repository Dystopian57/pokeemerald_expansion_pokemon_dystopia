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
# 34 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_set concordwageslave, ConcordWageSlaveAtPhone_5
ConcordWageSlaveAtPhone_4:
# 41 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordWageSlaveAtPhone_2:
# 15 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_0
# 19 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_EXPLOSION
# 20 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8004, 2
# 21 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8005, 6
# 22 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8006, 4
# 23 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8007, 4
# 24 "data/maps/ConcordCustoms/scripts.pory"
	special ShakeCamera
# 26 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_1
# 27 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 2, ConcordWageSlaveAtPhone_Movement_0
# 28 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_2
# 29 "data/maps/ConcordCustoms/scripts.pory"
	trainerbattle_no_intro TRAINER_CONCORDWAGESLAVE, ConcordWageSlave_Outro
	goto ConcordWageSlaveAtPhone_1

ConcordWageSlaveAtPhone_5:
# 37 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_3
	goto ConcordWageSlaveAtPhone_4


ConcordFemaleDevon::
# 48 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 49 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 50 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 3, ConcordWageSlaveAtPhone_Movement_0
# 51 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset conartistescaped, ConcordFemaleDevon_1
# 58 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordFemaleDevon_Text_1
	return

ConcordFemaleDevon_1:
# 53 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordFemaleDevon_Text_0
	return


ConcordCustomsClerk::
# 65 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 66 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 67 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerk_Text_0
# 69 "data/maps/ConcordCustoms/scripts.pory"
	release
	return


ConcordCustomsWaterDude::
# 74 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 75 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 76 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 4, ConcordWageSlaveAtPhone_Movement_0
# 77 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsWaterDude_Text_0
# 79 "data/maps/ConcordCustoms/scripts.pory"
	release
	return


ConcordCustomsClerkStops0::
# 85 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 86 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 88 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 89 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops0_2
ConcordCustomsClerkStops0_1:
# 92 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops0_5
ConcordCustomsClerkStops0_4:
# 96 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops0_Movement_0
# 97 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 98 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
# 101 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops0_2:
# 90 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops0_1

ConcordCustomsClerkStops0_5:
# 93 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops0_4


ConcordCustomsClerkStops1::
# 106 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 107 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 109 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 110 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops1_2
ConcordCustomsClerkStops1_1:
# 113 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops1_5
ConcordCustomsClerkStops1_4:
# 117 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops1_Movement_0
# 118 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 119 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
# 122 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops1_2:
# 111 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops1_1

ConcordCustomsClerkStops1_5:
# 114 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops1_4


ConcordCustomsClerkStops2::
# 126 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 127 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 129 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 130 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops2_2
ConcordCustomsClerkStops2_1:
# 133 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops2_5
ConcordCustomsClerkStops2_4:
# 137 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops2_Movement_0
# 138 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 139 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
# 142 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops2_2:
# 131 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops2_1

ConcordCustomsClerkStops2_5:
# 134 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops2_4


ConcordCustomsClerkStops3::
# 146 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 147 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 149 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 150 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops3_2
ConcordCustomsClerkStops3_1:
# 153 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops3_5
ConcordCustomsClerkStops3_4:
# 157 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops3_Movement_0
# 158 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 159 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
# 162 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops3_2:
# 151 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops3_1

ConcordCustomsClerkStops3_5:
# 154 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops3_4


ConcordCustomsBookshelf::
# 169 "data/maps/ConcordCustoms/scripts.pory"
	lockall
# 170 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsBookshelf_Text_0
# 171 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return


ConcordCustomsPoster::
# 175 "data/maps/ConcordCustoms/scripts.pory"
	lockall
# 176 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPoster_Text_0
# 177 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return


ConcordCustomsPhone::
# 181 "data/maps/ConcordCustoms/scripts.pory"
	lockall
# 182 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_0
# 183 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return


ConcordVendingMachine::
# 188 "data/maps/ConcordCustoms/scripts.pory"
	lockall
# 189 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_0
# 190 "data/maps/ConcordCustoms/scripts.pory"
	showmoneybox 18, 0
# 191 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_1, ConcordVendingMachine_Text_2, ConcordVendingMachine_Text_3
# 194 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_2
ConcordVendingMachine_1:
# 247 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_5
ConcordVendingMachine_4:
# 300 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordVendingMachine_11
ConcordVendingMachine_10:
# 352 "data/maps/ConcordCustoms/scripts.pory"
cendvendingmachine:
# 353 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 354 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return

ConcordVendingMachine_2:
# 195 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 50
# 196 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_8
ConcordVendingMachine_7:
# 241 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_16
	goto ConcordVendingMachine_1

ConcordVendingMachine_5:
# 248 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 70
# 249 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_14
ConcordVendingMachine_13:
# 294 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_24
	goto ConcordVendingMachine_4

ConcordVendingMachine_8:
# 197 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 198 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 199 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 201 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 202 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cfreshwatergotstuck
# 203 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotfreshwater
# 205 "data/maps/ConcordCustoms/scripts.pory"
cgotfreshwater:
# 206 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 207 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 208 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 209 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_4
# 210 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 211 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 213 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 214 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 215 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrafreshwater
# 217 "data/maps/ConcordCustoms/scripts.pory"
cgotextrafreshwater:
# 218 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_5
# 219 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 220 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 221 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 223 "data/maps/ConcordCustoms/scripts.pory"
cfreshwatergotstuck:
# 224 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordVendingMachine_Movement_0
# 225 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 226 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 227 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_6
# 229 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordVendingMachine_Text_8
# 230 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_19
ConcordVendingMachine_18:
# 235 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_29
	goto ConcordVendingMachine_7

ConcordVendingMachine_11:
# 301 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 80
# 302 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_22
ConcordVendingMachine_21:
# 347 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_31
	goto ConcordVendingMachine_10

ConcordVendingMachine_14:
# 250 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 251 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 252 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 254 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 255 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, csodagotstuck
# 256 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotsoda
# 258 "data/maps/ConcordCustoms/scripts.pory"
cgotsoda:
# 259 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 260 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 261 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 70
# 262 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_11
# 263 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 264 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_SODA_POP
# 266 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 267 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 268 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrasoda
# 270 "data/maps/ConcordCustoms/scripts.pory"
cgotextrasoda:
# 271 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_12
# 272 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 273 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_SODA_POP
# 274 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 276 "data/maps/ConcordCustoms/scripts.pory"
csodagotstuck:
# 277 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordVendingMachine_Movement_0
# 278 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 279 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 280 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_13
# 282 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordVendingMachine_Text_8
# 283 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_27
ConcordVendingMachine_26:
# 288 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_36
	goto ConcordVendingMachine_13

ConcordVendingMachine_16:
# 242 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_10
	goto ConcordVendingMachine_1

ConcordVendingMachine_19:
# 231 "data/maps/ConcordCustoms/scripts.pory"
	call cMachineShake
# 232 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotfreshwater
	goto ConcordVendingMachine_18

ConcordVendingMachine_22:
# 303 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 304 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 305 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 307 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 308 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, ccoffeegotstuck
# 309 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotcoffee
# 311 "data/maps/ConcordCustoms/scripts.pory"
cgotcoffee:
# 312 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 313 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 314 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 315 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_15
# 316 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 317 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 319 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 320 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 321 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextracoffee
# 323 "data/maps/ConcordCustoms/scripts.pory"
cgotextracoffee:
# 324 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_16
# 325 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 326 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 327 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 329 "data/maps/ConcordCustoms/scripts.pory"
ccoffeegotstuck:
# 330 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordVendingMachine_Movement_0
# 331 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 332 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 333 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_17
# 335 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordVendingMachine_Text_8
# 336 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_34
ConcordVendingMachine_33:
# 341 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_38
	goto ConcordVendingMachine_21

ConcordVendingMachine_24:
# 295 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_10
	goto ConcordVendingMachine_4

ConcordVendingMachine_27:
# 284 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 285 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotsoda
	goto ConcordVendingMachine_26

ConcordVendingMachine_29:
# 236 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_7

ConcordVendingMachine_31:
# 348 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_10
	goto ConcordVendingMachine_10

ConcordVendingMachine_34:
# 337 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 338 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotcoffee
	goto ConcordVendingMachine_33

ConcordVendingMachine_36:
# 289 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_14
	goto ConcordVendingMachine_13

ConcordVendingMachine_38:
# 342 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_18
	goto ConcordVendingMachine_21


cMachineShake::
# 359 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_REVERSAL
# 360 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8004, 2
# 361 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8005, 6
# 362 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8006, 4
# 363 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8007, 4
# 364 "data/maps/ConcordCustoms/scripts.pory"
	special ShakeCamera
	return


ConcordCustomsClerkBAD::
# 375 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 376 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 377 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset FLAG_SAFE_FOLLOWER_MOVEMENT, ConcordCustomsClerkBAD_1
# 398 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_6
	return

ConcordCustomsClerkBAD_1:
# 379 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_0
	checkitem ITEM_FRESH_WATER
# 0 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordCustomsClerkBAD_4
	return

ConcordCustomsClerkBAD_4:
# 383 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_1
# 385 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsClerkBAD_Text_2, ConcordCustomsClerkBAD_Text_3
# 386 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsClerkBAD_7
ConcordCustomsClerkBAD_6:
# 391 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsClerkBAD_9
	return

ConcordCustomsClerkBAD_7:
# 387 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_4
	goto ConcordCustomsClerkBAD_6

ConcordCustomsClerkBAD_9:
# 392 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_5
	return


# 27 "data/maps/ConcordCustoms/scripts.pory"
ConcordWageSlaveAtPhone_Movement_0:
# 27 "data/maps/ConcordCustoms/scripts.pory"
	face_player
	step_end

# 96 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops0_Movement_0:
# 96 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 96 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 117 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops1_Movement_0:
# 117 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 117 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 117 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 137 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops2_Movement_0:
# 137 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 137 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 137 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 137 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 157 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops3_Movement_0:
# 157 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 157 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 157 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 157 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 157 "data/maps/ConcordCustoms/scripts.pory"
	face_up
	step_end

# 224 "data/maps/ConcordCustoms/scripts.pory"
ConcordVendingMachine_Movement_0:
# 224 "data/maps/ConcordCustoms/scripts.pory"
	emote_exclamation_mark
	step_end

ConcordWageSlaveAtPhone_Text_0:
# 15 "data/maps/ConcordCustoms/scripts.pory"
	.string "I-I'm sorry sir... yes sir... they're not\n"
	.string "letting our trucks through - Concord\l"
	.string "Bridge is closed...\p"
	.string "N-no, there's nothing I can do, sir...\n"
	.string "Yes, I already aske-...\p"
	.string "... I... I'm fired? B-but sir...! Please be\n"
	.string "reasonable, I...!\p"
	.string "Sir...? Hello? SIR!?\p"
	.string "...$"

ConcordWageSlaveAtPhone_Text_1:
# 26 "data/maps/ConcordCustoms/scripts.pory"
	.string "THAT FILTHY PIG! What am I supposed to\n"
	.string "do now!? MY FAMILY DEPENDS ON ME!$"

ConcordWageSlaveAtPhone_Text_2:
# 28 "data/maps/ConcordCustoms/scripts.pory"
	.string "And what do YOU want!? Screw you too!!$"

ConcordWageSlaveAtPhone_Text_3:
# 37 "data/maps/ConcordCustoms/scripts.pory"
	.string "I shouldn't have snapped at you like\n"
	.string "that. I was just really frustrated.\p"
	.string "I don't know what I'm going to do now. I\n"
	.string "guess wait here a bit to figure it out.$"

ConcordFemaleDevon_Text_0:
# 53 "data/maps/ConcordCustoms/scripts.pory"
	.string "This is not a place to idle. If you're not\n"
	.string "going to cross the customs, you should\l"
	.string "leave.$"

ConcordFemaleDevon_Text_1:
# 58 "data/maps/ConcordCustoms/scripts.pory"
	.string "We appreciate your help when we dealt\n"
	.string "with that con artist.\p"
	.string "He makes a profit off smuggling\n"
	.string "Pokémon eggs, in and out the\l"
	.string "Internment Zone.\p"
	.string "If he shows his mug around here again,\n"
	.string "we'll catch him for sure!$"

ConcordCustomsClerk_Text_0:
# 67 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm sorry, I can't let you through\n"
	.string "unless you have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}.\p"
	.string "Applications for visas are currently\n"
	.string "closed to the general public, but us at\l"
	.string "Devon Co. will inform as promptly as\l"
	.string "they are open anew.$"

ConcordCustomsWaterDude_Text_0:
# 77 "data/maps/ConcordCustoms/scripts.pory"
	.string "I just tried to bribe the customs\n"
	.string "officer to let me through... with some\l"
	.string "{COLOR BLUE}Fresh Water{COLOR DARK_GRAY}.\p"
	.string "He looked at me as if I was crazy.\p"
	.string "I don't know why I thought that would\n"
	.string "work, it was kinda stupid, haha...$"

ConcordCustomsClerkStops0_Text_0:
# 90 "data/maps/ConcordCustoms/scripts.pory"
	.string "Excuse me, sir. Would you be so kind as\n"
	.string "to approach the counter?$"

ConcordCustomsClerkStops0_Text_1:
# 98 "data/maps/ConcordCustoms/scripts.pory"
	.string "Hmm... you don't have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, do\n"
	.string "you?\p"
	.string "If that's the case, I'm afraid I can't\n"
	.string "let you through.\p"
	.string "Applications for visas are currently\n"
	.string "closed to the general public, but us at\l"
	.string "Devon Co. will inform as promptly as\l"
	.string "they are open anew.$"

ConcordCustomsBookshelf_Text_0:
# 170 "data/maps/ConcordCustoms/scripts.pory"
	.string "The shelf is full of travel brochures.$"

ConcordCustomsPoster_Text_0:
# 176 "data/maps/ConcordCustoms/scripts.pory"
	.string "Devon Visa - your ticket to freedom\n"
	.string "across Hoenn.\l"
	.string "Applications reopening soon!$"

ConcordCustomsPhone_Text_0:
# 182 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a paid phone for people without\n"
	.string "Devon Navs.$"

ConcordVendingMachine_Text_0:
# 189 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a vending machine.$"

ConcordVendingMachine_Text_1:
# 191 "data/maps/ConcordCustoms/scripts.pory"
	.string "Fresh Water - 50¥$"

ConcordVendingMachine_Text_2:
# 191 "data/maps/ConcordCustoms/scripts.pory"
	.string "Soda Pop - 70¥$"

ConcordVendingMachine_Text_3:
# 191 "data/maps/ConcordCustoms/scripts.pory"
	.string "Strong Coffee - 80¥$"

ConcordVendingMachine_Text_4:
# 209 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_5:
# 218 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_6:
# 227 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

ConcordVendingMachine_Text_7:
# 229 "data/maps/ConcordCustoms/scripts.pory"
	.string "Shake the machine$"

ConcordVendingMachine_Text_8:
# 229 "data/maps/ConcordCustoms/scripts.pory"
	.string "Leave$"

ConcordVendingMachine_Text_9:
# 236 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordVendingMachine_Text_10:
# 242 "data/maps/ConcordCustoms/scripts.pory"
	.string "Not enough money...$"

ConcordVendingMachine_Text_11:
# 262 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

ConcordVendingMachine_Text_12:
# 271 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

ConcordVendingMachine_Text_13:
# 280 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

ConcordVendingMachine_Text_14:
# 289 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

ConcordVendingMachine_Text_15:
# 315 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_16:
# 324 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_17:
# 333 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

ConcordVendingMachine_Text_18:
# 342 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordCustomsClerkBAD_Text_0:
# 379 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm so thirsty... what I wouldn't do for\n"
	.string "some {COLOR BLUE}Fresh Water!{COLOR DARK_GRAY}\p"
	.string "But I don't have any coins for the\n"
	.string "vending machine. {COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ConcordCustomsClerkBAD_Text_1:
# 383 "data/maps/ConcordCustoms/scripts.pory"
	.string "Wait... you've got a bottle! Please, I'm\n"
	.string "dying of thirst here!$"

ConcordCustomsClerkBAD_Text_2:
# 385 "data/maps/ConcordCustoms/scripts.pory"
	.string "Give Fresh Water$"

ConcordCustomsClerkBAD_Text_3:
# 385 "data/maps/ConcordCustoms/scripts.pory"
	.string "Sorry, I need this$"

ConcordCustomsClerkBAD_Text_4:
# 387 "data/maps/ConcordCustoms/scripts.pory"
	.string "Thank you so much! {COLOR BLUE}Gulp gulp gulp...{COLOR DARK_GRAY}\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Aaah...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "That hit the spot. Thank you. Hm? Why\n"
	.string "are you staring like that?\p"
	.string "I appreciate the water, but if you don't\n"
	.string "have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, I can't let you\l"
	.string "through.$"

ConcordCustomsClerkBAD_Text_5:
# 392 "data/maps/ConcordCustoms/scripts.pory"
	.string "Ah... you are a cold fellow, you know\n"
	.string "that?$"

ConcordCustomsClerkBAD_Text_6:
# 398 "data/maps/ConcordCustoms/scripts.pory"
	.string "We appreciate your help when we dealt\n"
	.string "with that scammer.\p"
	.string "He makes a profit off smuggling\n"
	.string "Pokémon eggs, in and out the\l"
	.string "Internment Zone.\p"
	.string "If he shows his mug around here again,\n"
	.string "we'll catch him for sure!$"

ConcordWageSlave_Outro::
# 43 "data/maps/ConcordCustoms/scripts.pory"
	.string "Ooof... I... I'm sorry...$"
