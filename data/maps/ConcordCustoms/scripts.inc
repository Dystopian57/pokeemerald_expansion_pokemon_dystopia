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
# 43 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_set concordwageslave, ConcordWageSlaveAtPhone_5
ConcordWageSlaveAtPhone_4:
# 50 "data/maps/ConcordCustoms/scripts.pory"
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
# 38 "data/maps/ConcordCustoms/scripts.pory"
	playbgm MUS_UNOVAROUTEGATE, TRUE
	goto ConcordWageSlaveAtPhone_1

ConcordWageSlaveAtPhone_5:
# 46 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_6
	goto ConcordWageSlaveAtPhone_4

ConcordWageSlaveAtPhone_8:
# 15 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordWageSlaveAtPhone_Text_0
	goto ConcordWageSlaveAtPhone_7


ConcordFemaleDevon::
# 57 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 58 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 59 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 3, ConcordWageSlaveAtPhone_Movement_1
# 60 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset conartistescaped, ConcordFemaleDevon_2
# 67 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordFemaleDevon_Text_1
ConcordFemaleDevon_1:
# 72 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordFemaleDevon_2:
# 62 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordFemaleDevon_Text_0
	goto ConcordFemaleDevon_1


ConcordCustomsClerk::
# 76 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 77 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 78 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerk_Text_0
# 80 "data/maps/ConcordCustoms/scripts.pory"
	release
	return


ConcordCustomsWaterDude::
# 85 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 86 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 87 "data/maps/ConcordCustoms/scripts.pory"
	applymovement 4, ConcordWageSlaveAtPhone_Movement_1
# 88 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsWaterDude_Text_0
# 90 "data/maps/ConcordCustoms/scripts.pory"
	release
	return


ConcordCustomsClerkStops0::
# 96 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 97 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 99 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 100 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops0_2
ConcordCustomsClerkStops0_1:
# 103 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops0_5
ConcordCustomsClerkStops0_4:
# 107 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops0_Movement_0
# 108 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 109 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_2
# 112 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops0_2:
# 101 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops0_1

ConcordCustomsClerkStops0_5:
# 104 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
	goto ConcordCustomsClerkStops0_4


ConcordCustomsClerkStops1::
# 117 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 118 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 120 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 121 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops1_2
ConcordCustomsClerkStops1_1:
# 124 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops1_5
ConcordCustomsClerkStops1_4:
# 128 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops1_Movement_0
# 129 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 130 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_2
# 133 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops1_2:
# 122 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops1_1

ConcordCustomsClerkStops1_5:
# 125 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
	goto ConcordCustomsClerkStops1_4


ConcordCustomsClerkStops2::
# 137 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 138 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 140 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 141 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops2_2
ConcordCustomsClerkStops2_1:
# 144 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops2_5
ConcordCustomsClerkStops2_4:
# 148 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops2_Movement_0
# 149 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 150 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_2
# 153 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops2_2:
# 142 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops2_1

ConcordCustomsClerkStops2_5:
# 145 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
	goto ConcordCustomsClerkStops2_4


ConcordCustomsClerkStops3::
# 157 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 158 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 160 "data/maps/ConcordCustoms/scripts.pory"
	checkplayergender
# 161 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ConcordCustomsClerkStops3_2
ConcordCustomsClerkStops3_1:
# 164 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ConcordCustomsClerkStops3_5
ConcordCustomsClerkStops3_4:
# 168 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordCustomsClerkStops3_Movement_0
# 169 "data/maps/ConcordCustoms/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 170 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_2
# 173 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkStops3_2:
# 162 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_0
	goto ConcordCustomsClerkStops3_1

ConcordCustomsClerkStops3_5:
# 165 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkStops0_Text_1
	goto ConcordCustomsClerkStops3_4


ConcordCustomsBookshelf::
# 180 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 181 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsBookshelf_Text_0
# 182 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return


ConcordCustomsPoster::
# 186 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 187 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPoster_Text_0
# 188 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return


ConcordCustomsPhone::
# 192 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 193 "data/maps/ConcordCustoms/scripts.pory"
	showmoneybox 18, 0
# 194 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_0
# 195 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_1, ConcordCustomsPhone_Text_2
# 197 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_2
ConcordCustomsPhone_1:
# 342 "data/maps/ConcordCustoms/scripts.pory"
endofpayphone:
# 343 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 344 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsPhone_2:
# 198 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 50
# 200 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordCustomsPhone_5
ConcordCustomsPhone_4:
# 205 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordCustomsPhone_8
ConcordCustomsPhone_7:
# 328 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ConcordCustomsPhone_10
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_5:
# 201 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_3
# 202 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_4

ConcordCustomsPhone_8:
# 206 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 207 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 208 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 209 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 210 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_CLICK
# 211 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 212 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 213 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_4
# 214 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_5, ConcordCustomsPhone_Text_6, ConcordCustomsPhone_Text_7, ConcordCustomsPhone_Text_8, ConcordCustomsPhone_Text_9
# 215 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_13
ConcordCustomsPhone_12:
# 226 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_16
ConcordCustomsPhone_15:
# 236 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordCustomsPhone_19
ConcordCustomsPhone_18:
# 274 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ConcordCustomsPhone_22
ConcordCustomsPhone_21:
# 322 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 323 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 325 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_7

ConcordCustomsPhone_10:
# 329 "data/maps/ConcordCustoms/scripts.pory"
returnmoney:
# 330 "data/maps/ConcordCustoms/scripts.pory"
	addmoney 50
# 331 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 332 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_CLICK
# 333 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 334 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_PAY_DAY
# 335 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_30
# 336 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 337 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_13:
# 216 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 217 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 218 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_10
# 222 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 223 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_12

ConcordCustomsPhone_16:
# 227 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 228 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 229 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_11
# 232 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 233 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_15

ConcordCustomsPhone_19:
# 237 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 238 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 239 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_12
# 240 "data/maps/ConcordCustoms/scripts.pory"
citizenservicesoptions:
# 241 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_13, ConcordCustomsPhone_Text_14, ConcordCustomsPhone_Text_15
# 242 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_25
ConcordCustomsPhone_24:
# 246 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_31
ConcordCustomsPhone_30:
# 249 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_37
ConcordCustomsPhone_36:
# 261 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_45
ConcordCustomsPhone_44:
# 266 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordCustomsPhone_48
ConcordCustomsPhone_47:
# 270 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 271 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_18

ConcordCustomsPhone_22:
# 275 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_24
# 276 "data/maps/ConcordCustoms/scripts.pory"
	special EnterCode
# 277 "data/maps/ConcordCustoms/scripts.pory"
	waitstate
# 278 "data/maps/ConcordCustoms/scripts.pory"
	special GetCodeFeedback
# 281 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordCustomsPhone_28
ConcordCustomsPhone_27:
# 293 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_34
ConcordCustomsPhone_33:
# 303 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_39
# 314 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 315 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 316 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_29
# 317 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 318 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_21

ConcordCustomsPhone_25:
# 242 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_16
# 244 "data/maps/ConcordCustoms/scripts.pory"
	goto citizenservicesoptions
	goto ConcordCustomsPhone_24

ConcordCustomsPhone_28:
# 282 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 283 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 284 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_25
# 288 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_YELLOW_SHARD
# 289 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 290 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_27

ConcordCustomsPhone_31:
# 247 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_17
# 248 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_18, ConcordCustomsPhone_Text_19
	goto ConcordCustomsPhone_30

ConcordCustomsPhone_34:
# 294 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset sentdemomysterygift, ConcordCustomsPhone_42
	goto ConcordCustomsPhone_33

ConcordCustomsPhone_37:
# 249 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_20
# 259 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_21
# 260 "data/maps/ConcordCustoms/scripts.pory"
	goto citizenservicesoptions
	goto ConcordCustomsPhone_36

ConcordCustomsPhone_39:
# 304 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 305 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 306 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_27
# 307 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_28
# 308 "data/maps/ConcordCustoms/scripts.pory"
	setflag sentdemomysterygift
# 309 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 310 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_21

ConcordCustomsPhone_42:
# 295 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 296 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 298 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_26
# 300 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 301 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_33

ConcordCustomsPhone_45:
# 262 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_22
# 264 "data/maps/ConcordCustoms/scripts.pory"
	goto citizenservicesoptions
	goto ConcordCustomsPhone_44

ConcordCustomsPhone_48:
# 267 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_23
	goto ConcordCustomsPhone_47


ConcordVendingMachine::
# 349 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 350 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_0
# 351 "data/maps/ConcordCustoms/scripts.pory"
	showmoneybox 18, 0
# 352 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_1, ConcordVendingMachine_Text_2, ConcordVendingMachine_Text_3, ConcordCustomsPhone_Text_2
# 355 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_2
ConcordVendingMachine_1:
# 409 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_5
ConcordVendingMachine_4:
# 462 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordVendingMachine_11
ConcordVendingMachine_10:
# 514 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ConcordVendingMachine_22
ConcordVendingMachine_21:
# 517 "data/maps/ConcordCustoms/scripts.pory"
cendvendingmachine:
# 518 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 519 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return

ConcordVendingMachine_2:
# 356 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 50
# 357 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_8
ConcordVendingMachine_7:
# 403 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_16
	goto ConcordVendingMachine_1

ConcordVendingMachine_5:
# 410 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 70
# 411 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_14
ConcordVendingMachine_13:
# 456 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_27
	goto ConcordVendingMachine_4

ConcordVendingMachine_8:
# 358 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 359 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 360 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 361 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 367 "data/maps/ConcordCustoms/scripts.pory"
cgotfreshwater:
# 368 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 369 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 371 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_4
# 372 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 373 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 375 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 376 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 377 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrafreshwater
# 379 "data/maps/ConcordCustoms/scripts.pory"
cgotextrafreshwater:
# 380 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_5
# 381 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 382 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 383 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 385 "data/maps/ConcordCustoms/scripts.pory"
cfreshwatergotstuck:
# 386 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 387 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 388 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 389 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_6
# 391 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 392 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_19
ConcordVendingMachine_18:
# 397 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_32
	goto ConcordVendingMachine_7

ConcordVendingMachine_11:
# 463 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 80
# 464 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_25
ConcordVendingMachine_24:
# 509 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_34
	goto ConcordVendingMachine_10

ConcordVendingMachine_14:
# 412 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 70
# 413 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 414 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 415 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 417 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 418 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cenergybargotstuck
# 419 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotenergybar
# 421 "data/maps/ConcordCustoms/scripts.pory"
cgotenergybar:
# 422 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 423 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 424 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
# 425 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 426 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
# 428 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 429 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 430 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextraenergybar
# 432 "data/maps/ConcordCustoms/scripts.pory"
cgotextraenergybar:
# 433 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_10
# 434 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 435 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
# 436 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 438 "data/maps/ConcordCustoms/scripts.pory"
cenergybargotstuck:
# 439 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 440 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 441 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 442 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_11
# 444 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 445 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_30
ConcordVendingMachine_29:
# 450 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_39
	goto ConcordVendingMachine_13

ConcordVendingMachine_16:
# 404 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_3
	goto ConcordVendingMachine_1

ConcordVendingMachine_19:
# 393 "data/maps/ConcordCustoms/scripts.pory"
	call cMachineShake
# 394 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotfreshwater
	goto ConcordVendingMachine_18

ConcordVendingMachine_22:
# 515 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
	goto ConcordVendingMachine_21

ConcordVendingMachine_25:
# 465 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 80
# 466 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 467 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 468 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 470 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 471 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, ccoffeegotstuck
# 472 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotcoffee
# 474 "data/maps/ConcordCustoms/scripts.pory"
cgotcoffee:
# 475 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 476 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 477 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_13
# 478 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 479 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 481 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 482 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 483 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextracoffee
# 485 "data/maps/ConcordCustoms/scripts.pory"
cgotextracoffee:
# 486 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_14
# 487 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 488 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 489 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 491 "data/maps/ConcordCustoms/scripts.pory"
ccoffeegotstuck:
# 492 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 493 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 494 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 495 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_15
# 497 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 498 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_37
ConcordVendingMachine_36:
# 503 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_41
	goto ConcordVendingMachine_24

ConcordVendingMachine_27:
# 457 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_3
	goto ConcordVendingMachine_4

ConcordVendingMachine_30:
# 446 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 447 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotenergybar
	goto ConcordVendingMachine_29

ConcordVendingMachine_32:
# 398 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_8
	goto ConcordVendingMachine_7

ConcordVendingMachine_34:
# 510 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_3
	goto ConcordVendingMachine_10

ConcordVendingMachine_37:
# 499 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 500 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotcoffee
	goto ConcordVendingMachine_36

ConcordVendingMachine_39:
# 451 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_12
	goto ConcordVendingMachine_13

ConcordVendingMachine_41:
# 504 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_16
	goto ConcordVendingMachine_24


cMachineShake::
# 524 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_REVERSAL
# 525 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8004, 2
# 526 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8005, 6
# 527 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8006, 4
# 528 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8007, 4
# 529 "data/maps/ConcordCustoms/scripts.pory"
	special ShakeCamera
	return


ConcordCustomsClerkBAD::
# 540 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 541 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 542 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset FLAG_SAFE_FOLLOWER_MOVEMENT, ConcordCustomsClerkBAD_2
# 563 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_6
# 566 "data/maps/ConcordCustoms/scripts.pory"
	release
ConcordCustomsClerkBAD_1:
# 568 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkBAD_2:
# 544 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_0
	checkitem ITEM_FRESH_WATER
# 0 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordCustomsClerkBAD_5
	goto ConcordCustomsClerkBAD_1

ConcordCustomsClerkBAD_5:
# 548 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_1
# 550 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsClerkBAD_Text_2, ConcordCustomsClerkBAD_Text_3
# 551 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsClerkBAD_8
ConcordCustomsClerkBAD_7:
# 556 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsClerkBAD_10
	goto ConcordCustomsClerkBAD_1

ConcordCustomsClerkBAD_8:
# 552 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_4
	goto ConcordCustomsClerkBAD_7

ConcordCustomsClerkBAD_10:
# 557 "data/maps/ConcordCustoms/scripts.pory"
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

# 107 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops0_Movement_0:
# 107 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 107 "data/maps/ConcordCustoms/scripts.pory"
	walk_in_place_up
	step_end

# 128 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops1_Movement_0:
# 128 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 128 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 128 "data/maps/ConcordCustoms/scripts.pory"
	walk_in_place_up
	step_end

# 148 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops2_Movement_0:
# 148 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 148 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 148 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 148 "data/maps/ConcordCustoms/scripts.pory"
	walk_in_place_up
	step_end

# 168 "data/maps/ConcordCustoms/scripts.pory"
ConcordCustomsClerkStops3_Movement_0:
# 168 "data/maps/ConcordCustoms/scripts.pory"
	walk_left
# 168 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 168 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 168 "data/maps/ConcordCustoms/scripts.pory"
	walk_up
# 168 "data/maps/ConcordCustoms/scripts.pory"
	walk_in_place_up
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
	.string "THAT FILTHY GRUMPIG! What am I\n"
	.string "supposed to do now!? MY FAMILY DEPENDS\l"
	.string "ON ME!$"

ConcordWageSlaveAtPhone_Text_5:
# 35 "data/maps/ConcordCustoms/scripts.pory"
	.string "And what do YOU want!? Screw you too!!$"

ConcordWageSlaveAtPhone_Text_6:
# 46 "data/maps/ConcordCustoms/scripts.pory"
	.string "I shouldn't have snapped at you like\n"
	.string "that. I was just really frustrated.\p"
	.string "I don't know what I'm going to do now. I\n"
	.string "guess I'll wait here to figure it out.$"

ConcordFemaleDevon_Text_0:
# 62 "data/maps/ConcordCustoms/scripts.pory"
	.string "This is not a place to idle. If you're not\n"
	.string "going to cross the customs, you should\l"
	.string "leave.$"

ConcordFemaleDevon_Text_1:
# 67 "data/maps/ConcordCustoms/scripts.pory"
	.string "We appreciate your help when we dealt\n"
	.string "with that con artist.\p"
	.string "He makes a profit off smuggling\n"
	.string "Pokémon eggs, in and out the {COLOR GREEN}Rebel\l"
	.string "Zone{COLOR DARK_GRAY}.\p"
	.string "If he shows his mug around here again,\n"
	.string "we'll catch him for sure!$"

ConcordCustomsClerk_Text_0:
# 78 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm sorry, I can't let you through\n"
	.string "unless you have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}.\p"
	.string "Applications for visas are currently\n"
	.string "closed to the general public, but us at\l"
	.string "Devon Co. will inform as promptly as\l"
	.string "they are open anew.$"

ConcordCustomsWaterDude_Text_0:
# 88 "data/maps/ConcordCustoms/scripts.pory"
	.string "I just tried to bribe the customs\n"
	.string "officer to let me through... with some\l"
	.string "{COLOR BLUE}Fresh Water{COLOR DARK_GRAY}.\p"
	.string "He looked at me as if I was crazy.\p"
	.string "I don't know why I thought that would\n"
	.string "work, it was kinda stupid, haha...$"

ConcordCustomsClerkStops0_Text_0:
# 101 "data/maps/ConcordCustoms/scripts.pory"
	.string "Excuse me, sir. Would you be so kind as\n"
	.string "to approach the counter?$"

ConcordCustomsClerkStops0_Text_1:
# 104 "data/maps/ConcordCustoms/scripts.pory"
	.string "Excuse me, miss. Would you be so kind as\n"
	.string "to approach the counter?$"

ConcordCustomsClerkStops0_Text_2:
# 109 "data/maps/ConcordCustoms/scripts.pory"
	.string "Hmm... you don't have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, do\n"
	.string "you?\p"
	.string "If that's the case, I'm afraid I can't\n"
	.string "let you through.\p"
	.string "Applications for visas are currently\n"
	.string "closed to the general public, but us at\l"
	.string "Devon Co. will inform as promptly as\l"
	.string "they are open anew.$"

ConcordCustomsBookshelf_Text_0:
# 181 "data/maps/ConcordCustoms/scripts.pory"
	.string "The shelf is full of travel brochures.$"

ConcordCustomsPoster_Text_0:
# 187 "data/maps/ConcordCustoms/scripts.pory"
	.string "Devon Visa - your ticket to freedom\n"
	.string "across Hoenn.\l"
	.string "Applications reopening soon!$"

ConcordCustomsPhone_Text_0:
# 194 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a public Devon Phone. The cost is\n"
	.string "50¥.$"

ConcordCustomsPhone_Text_1:
# 195 "data/maps/ConcordCustoms/scripts.pory"
	.string "Insert coin$"

ConcordCustomsPhone_Text_2:
# 195 "data/maps/ConcordCustoms/scripts.pory"
	.string "Leave$"

ConcordCustomsPhone_Text_3:
# 201 "data/maps/ConcordCustoms/scripts.pory"
	.string "Not enough money...$"

ConcordCustomsPhone_Text_4:
# 213 "data/maps/ConcordCustoms/scripts.pory"
	.string "Which number to dial?$"

ConcordCustomsPhone_Text_5:
# 214 "data/maps/ConcordCustoms/scripts.pory"
	.string "Littleroot Lab$"

ConcordCustomsPhone_Text_6:
# 214 "data/maps/ConcordCustoms/scripts.pory"
	.string "Petalburg Gym$"

ConcordCustomsPhone_Text_7:
# 214 "data/maps/ConcordCustoms/scripts.pory"
	.string "Citizen Services$"

ConcordCustomsPhone_Text_8:
# 214 "data/maps/ConcordCustoms/scripts.pory"
	.string "Dial Manually$"

ConcordCustomsPhone_Text_9:
# 214 "data/maps/ConcordCustoms/scripts.pory"
	.string "None$"

ConcordCustomsPhone_Text_10:
# 218 "data/maps/ConcordCustoms/scripts.pory"
	.string "Prof. Balsam: Hm? Who's this? Oh,\n"
	.string "{PLAYER}?\p"
	.string "Why are you calling from a public phone?\n"
	.string "Did you lose the Devonav I gave you?\p"
	.string "Well, if you want to talk to me... you'll\n"
	.string "have to get a new one, or come to the\l"
	.string "lab.\p"
	.string "I don't like speaking with public phones\n"
	.string "involved. You never know who is\l"
	.string "listening...\p"
	.string "Well, that's all from me. Later.$"

ConcordCustomsPhone_Text_11:
# 229 "data/maps/ConcordCustoms/scripts.pory"
	.string "Norman: Hello. You have reached the\n"
	.string "voice mail of Petalburg Dojo.\p"
	.string "If you're calling to schedule a gym\n"
	.string "fight, I'm afraid this gym is no longer\l"
	.string "part of the Hoenn Pokémon League\l"
	.string "Challenge.\p"
	.string "If it's you, {PLAYER}... I'll call you as\n"
	.string "soon as I can.\p"
	.string "And if it's you, Sidney... stop calling me!$"

ConcordCustomsPhone_Text_12:
# 239 "data/maps/ConcordCustoms/scripts.pory"
	.string "You have reached Devon Co.'s Citizen\n"
	.string "Services. What can we do for you?$"

ConcordCustomsPhone_Text_13:
# 241 "data/maps/ConcordCustoms/scripts.pory"
	.string "Devon Visa Application$"

ConcordCustomsPhone_Text_14:
# 241 "data/maps/ConcordCustoms/scripts.pory"
	.string "Pokémon Retrieval$"

ConcordCustomsPhone_Text_15:
# 241 "data/maps/ConcordCustoms/scripts.pory"
	.string "Nothing$"

ConcordCustomsPhone_Text_16:
# 242 "data/maps/ConcordCustoms/scripts.pory"
	.string "We are very sorry. We are not processing\n"
	.string "visa applications at this time.\p"
	.string "Is there anything else we can do for\n"
	.string "you?$"

ConcordCustomsPhone_Text_17:
# 247 "data/maps/ConcordCustoms/scripts.pory"
	.string "Of course. For this request, I must ask\n"
	.string "you for your Devon Card's ID number. Is\l"
	.string "that okay?$"

ConcordCustomsPhone_Text_18:
# 248 "data/maps/ConcordCustoms/scripts.pory"
	.string "Tell number$"

ConcordCustomsPhone_Text_19:
# 248 "data/maps/ConcordCustoms/scripts.pory"
	.string "Nevermind$"

ConcordCustomsPhone_Text_20:
# 249 "data/maps/ConcordCustoms/scripts.pory"
	.string "Thank you. Let's see... {PLAYER}, is it?\p"
	.string "Devon Co. is currently in possession of\n"
	.string "one of your Pokémon.\p"
	.string "Species... Primeape.\p"
	.string "This Pokémon was taken from you upon\n"
	.string "termination of your military service.\p"
	.string "This was done because your Primeape\n"
	.string "met the criteria established by Devon\l"
	.string "Co's Wildlife Protocol 57: “Pokémon for\l"
	.string "Urgent Safening”.\p"
	.string "In short, your Pokémon grew too strong\n"
	.string "- a likely consequence of Pokémon\l"
	.string "trained to fight in the Kantonian war.\p"
	.string "Consequently, Devon Co. cannot return\n"
	.string "it to you until it has been turned into a\l"
	.string "Safemon.\p"
	.string "You will be notified as soon as this has\n"
	.string "been done, and a retrieval meeting will\l"
	.string "be scheduled.\p"
	.string "Thank you for your patience!$"

ConcordCustomsPhone_Text_21:
# 259 "data/maps/ConcordCustoms/scripts.pory"
	.string "Is there anything else we can do for\n"
	.string "you?$"

ConcordCustomsPhone_Text_22:
# 262 "data/maps/ConcordCustoms/scripts.pory"
	.string "I see. We respect your right to privacy,\n"
	.string "but I'm afraid we cannot process this\l"
	.string "request without your ID number.\p"
	.string "Is there anything else we can do for\n"
	.string "you?$"

ConcordCustomsPhone_Text_23:
# 267 "data/maps/ConcordCustoms/scripts.pory"
	.string "Very well. Stay safe!$"

ConcordCustomsPhone_Text_24:
# 275 "data/maps/ConcordCustoms/scripts.pory"
	.string "Let's dial a number...$"

ConcordCustomsPhone_Text_25:
# 284 "data/maps/ConcordCustoms/scripts.pory"
	.string "Hello - you have reached Dystopian's\n"
	.string "number!\p"
	.string "Thank you for watching this far. Now,\n"
	.string "there's ONE MORE THING.\p"
	.string "Ready? Drum roll, please...\p"
	.string "... you really tried that code from the\n"
	.string "reddit post huh?\p"
	.string "Well, for your trouble, I guess I'l give\n"
	.string "you this.$"

ConcordCustomsPhone_Text_26:
# 298 "data/maps/ConcordCustoms/scripts.pory"
	.string "You have reached the Devon Call\n"
	.string "Logistics Center.\p"
	.string "The number you have just called is not\n"
	.string "assigned to any Hoenn citizen.\p"
	.string "Please try again.$"

ConcordCustomsPhone_Text_27:
# 306 "data/maps/ConcordCustoms/scripts.pory"
	.string "...$"

ConcordCustomsPhone_Text_28:
# 307 "data/maps/ConcordCustoms/scripts.pory"
	.string "We've sent a package to your mailbox.\n"
	.string "Check it.$"

ConcordCustomsPhone_Text_29:
# 316 "data/maps/ConcordCustoms/scripts.pory"
	.string "We have already made this delivery. Only\n"
	.string "one per customer.$"

ConcordCustomsPhone_Text_30:
# 335 "data/maps/ConcordCustoms/scripts.pory"
	.string "The phone returns the coin.$"

ConcordVendingMachine_Text_0:
# 350 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a vending machine.$"

ConcordVendingMachine_Text_1:
# 352 "data/maps/ConcordCustoms/scripts.pory"
	.string "Fresh Water - 50¥$"

ConcordVendingMachine_Text_2:
# 352 "data/maps/ConcordCustoms/scripts.pory"
	.string "Energy Bar - 70¥$"

ConcordVendingMachine_Text_3:
# 352 "data/maps/ConcordCustoms/scripts.pory"
	.string "Strong Coffee - 80¥$"

ConcordVendingMachine_Text_4:
# 371 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_5:
# 380 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_6:
# 389 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

ConcordVendingMachine_Text_7:
# 391 "data/maps/ConcordCustoms/scripts.pory"
	.string "Shake the machine$"

ConcordVendingMachine_Text_8:
# 398 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordVendingMachine_Text_9:
# 424 "data/maps/ConcordCustoms/scripts.pory"
	.string "An Energy Bar dropped on the machine's\n"
	.string "tray.$"

ConcordVendingMachine_Text_10:
# 433 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Energy Bar can dropped on the\n"
	.string "machine's tray!$"

ConcordVendingMachine_Text_11:
# 442 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Energy\n"
	.string "Bar can enough for it to fall...$"

ConcordVendingMachine_Text_12:
# 451 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Energy Bar can just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordVendingMachine_Text_13:
# 477 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_14:
# 486 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_15:
# 495 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

ConcordVendingMachine_Text_16:
# 504 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordCustomsClerkBAD_Text_0:
# 544 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm so thirsty... what I wouldn't do for\n"
	.string "some {COLOR BLUE}Fresh Water!{COLOR DARK_GRAY}\p"
	.string "But I don't have any coins for the\n"
	.string "vending machine. {COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ConcordCustomsClerkBAD_Text_1:
# 548 "data/maps/ConcordCustoms/scripts.pory"
	.string "Wait... you've got a bottle! Please, I'm\n"
	.string "dying of thirst here!$"

ConcordCustomsClerkBAD_Text_2:
# 550 "data/maps/ConcordCustoms/scripts.pory"
	.string "Give Fresh Water$"

ConcordCustomsClerkBAD_Text_3:
# 550 "data/maps/ConcordCustoms/scripts.pory"
	.string "Sorry, I need this$"

ConcordCustomsClerkBAD_Text_4:
# 552 "data/maps/ConcordCustoms/scripts.pory"
	.string "Thank you so much! {COLOR BLUE}Gulp gulp gulp...{COLOR DARK_GRAY}\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Aaah...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "That hit the spot. Thank you. Hm? Why\n"
	.string "are you staring like that?\p"
	.string "I appreciate the water, but if you don't\n"
	.string "have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, I can't let you\l"
	.string "through.$"

ConcordCustomsClerkBAD_Text_5:
# 557 "data/maps/ConcordCustoms/scripts.pory"
	.string "Ah... you are a cold fellow, you know\n"
	.string "that?$"

ConcordCustomsClerkBAD_Text_6:
# 563 "data/maps/ConcordCustoms/scripts.pory"
	.string "We appreciate your help when we dealt\n"
	.string "with that scammer.\p"
	.string "He makes a profit off smuggling\n"
	.string "Pokémon eggs, in and out the\l"
	.string "Internment Zone.\p"
	.string "If he shows his mug around here again,\n"
	.string "we'll catch him for sure!$"

ConcordWageSlave_Outro::
# 52 "data/maps/ConcordCustoms/scripts.pory"
	.string "Ooof... I... I'm sorry...$"
