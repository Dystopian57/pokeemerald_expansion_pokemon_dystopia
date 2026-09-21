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
# 320 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_5
ConcordCustomsPhone_4:
# 323 "data/maps/ConcordCustoms/scripts.pory"
endofpayphone:
# 324 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 325 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsPhone_2:
# 198 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 50
# 199 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordCustomsPhone_7
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_5:
# 321 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_4

ConcordCustomsPhone_7:
# 200 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 201 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 202 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 203 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 204 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_CLICK
# 205 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 206 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 207 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_3
# 208 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_4, ConcordCustomsPhone_Text_5, ConcordCustomsPhone_Text_6, ConcordCustomsPhone_Text_7, ConcordCustomsPhone_Text_8
# 209 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_10
ConcordCustomsPhone_9:
# 220 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_13
ConcordCustomsPhone_12:
# 230 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordCustomsPhone_16
ConcordCustomsPhone_15:
# 268 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ConcordCustomsPhone_19
ConcordCustomsPhone_18:
# 307 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ConcordCustomsPhone_24
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_10:
# 210 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 211 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 212 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_9
# 216 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 217 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_9

ConcordCustomsPhone_13:
# 221 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 222 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 223 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_10
# 226 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 227 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_12

ConcordCustomsPhone_16:
# 231 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 232 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 233 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_11
# 234 "data/maps/ConcordCustoms/scripts.pory"
citizenservicesoptions:
# 235 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_12, ConcordCustomsPhone_Text_13, ConcordCustomsPhone_Text_14
# 236 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_22
ConcordCustomsPhone_21:
# 240 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_30
ConcordCustomsPhone_29:
# 243 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_36
ConcordCustomsPhone_35:
# 255 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_43
ConcordCustomsPhone_42:
# 260 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordCustomsPhone_46
ConcordCustomsPhone_45:
# 264 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 265 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_15

ConcordCustomsPhone_19:
# 269 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_23
# 270 "data/maps/ConcordCustoms/scripts.pory"
	special EnterCode
# 271 "data/maps/ConcordCustoms/scripts.pory"
	waitstate
# 272 "data/maps/ConcordCustoms/scripts.pory"
	special GetCodeFeedback
# 273 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_27
ConcordCustomsPhone_26:
# 301 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 302 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 304 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_18

ConcordCustomsPhone_22:
# 236 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_15
# 238 "data/maps/ConcordCustoms/scripts.pory"
	goto citizenservicesoptions
	goto ConcordCustomsPhone_21

ConcordCustomsPhone_24:
# 308 "data/maps/ConcordCustoms/scripts.pory"
returnmoney:
# 309 "data/maps/ConcordCustoms/scripts.pory"
	addmoney 10
# 310 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 311 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_CLICK
# 312 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 313 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_PAY_DAY
# 314 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_28
# 315 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 316 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_27:
# 274 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset sentdemomysterygift, ConcordCustomsPhone_33
ConcordCustomsPhone_32:
# 282 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_39
# 293 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 294 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 295 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_27
ConcordCustomsPhone_38:
# 296 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 297 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_26

ConcordCustomsPhone_30:
# 241 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_16
# 242 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_17, ConcordCustomsPhone_Text_18
	goto ConcordCustomsPhone_29

ConcordCustomsPhone_33:
# 275 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 276 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 277 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_24
# 279 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 280 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_32

ConcordCustomsPhone_36:
# 243 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_19
# 253 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_20
# 254 "data/maps/ConcordCustoms/scripts.pory"
	goto citizenservicesoptions
	goto ConcordCustomsPhone_35

ConcordCustomsPhone_39:
# 283 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 284 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 285 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_25
# 286 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_26
# 287 "data/maps/ConcordCustoms/scripts.pory"
	setflag sentdemomysterygift
# 288 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 289 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_38

ConcordCustomsPhone_43:
# 256 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_21
# 258 "data/maps/ConcordCustoms/scripts.pory"
	goto citizenservicesoptions
	goto ConcordCustomsPhone_42

ConcordCustomsPhone_46:
# 261 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_22
	goto ConcordCustomsPhone_45


ConcordVendingMachine::
# 330 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 331 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_0
# 332 "data/maps/ConcordCustoms/scripts.pory"
	showmoneybox 18, 0
# 333 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_1, ConcordVendingMachine_Text_2, ConcordVendingMachine_Text_3, ConcordCustomsPhone_Text_2
# 336 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_2
ConcordVendingMachine_1:
# 390 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_5
ConcordVendingMachine_4:
# 443 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordVendingMachine_11
ConcordVendingMachine_10:
# 495 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ConcordVendingMachine_22
ConcordVendingMachine_21:
# 498 "data/maps/ConcordCustoms/scripts.pory"
cendvendingmachine:
# 499 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 500 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return

ConcordVendingMachine_2:
# 337 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 50
# 338 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_8
ConcordVendingMachine_7:
# 384 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_16
	goto ConcordVendingMachine_1

ConcordVendingMachine_5:
# 391 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 70
# 392 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_14
ConcordVendingMachine_13:
# 437 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_27
	goto ConcordVendingMachine_4

ConcordVendingMachine_8:
# 339 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 340 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 341 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 342 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 348 "data/maps/ConcordCustoms/scripts.pory"
cgotfreshwater:
# 349 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 350 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 352 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_4
# 353 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 354 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 356 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 357 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 358 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrafreshwater
# 360 "data/maps/ConcordCustoms/scripts.pory"
cgotextrafreshwater:
# 361 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_5
# 362 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 363 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 364 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 366 "data/maps/ConcordCustoms/scripts.pory"
cfreshwatergotstuck:
# 367 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 368 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 369 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 370 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_6
# 372 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 373 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_19
ConcordVendingMachine_18:
# 378 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_32
	goto ConcordVendingMachine_7

ConcordVendingMachine_11:
# 444 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 80
# 445 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_25
ConcordVendingMachine_24:
# 490 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_34
	goto ConcordVendingMachine_10

ConcordVendingMachine_14:
# 393 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 70
# 394 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 395 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 396 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 398 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 399 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cenergybargotstuck
# 400 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotenergybar
# 402 "data/maps/ConcordCustoms/scripts.pory"
cgotenergybar:
# 403 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 404 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 405 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_10
# 406 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 407 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
# 409 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 410 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 411 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextraenergybar
# 413 "data/maps/ConcordCustoms/scripts.pory"
cgotextraenergybar:
# 414 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_11
# 415 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 416 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
# 417 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 419 "data/maps/ConcordCustoms/scripts.pory"
cenergybargotstuck:
# 420 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 421 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 422 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 423 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_12
# 425 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 426 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_30
ConcordVendingMachine_29:
# 431 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_39
	goto ConcordVendingMachine_13

ConcordVendingMachine_16:
# 385 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_1

ConcordVendingMachine_19:
# 374 "data/maps/ConcordCustoms/scripts.pory"
	call cMachineShake
# 375 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotfreshwater
	goto ConcordVendingMachine_18

ConcordVendingMachine_22:
# 496 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
	goto ConcordVendingMachine_21

ConcordVendingMachine_25:
# 446 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 80
# 447 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 448 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 449 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 451 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 452 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, ccoffeegotstuck
# 453 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotcoffee
# 455 "data/maps/ConcordCustoms/scripts.pory"
cgotcoffee:
# 456 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 457 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 458 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_14
# 459 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 460 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 462 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 463 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 464 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextracoffee
# 466 "data/maps/ConcordCustoms/scripts.pory"
cgotextracoffee:
# 467 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_15
# 468 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 469 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 470 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 472 "data/maps/ConcordCustoms/scripts.pory"
ccoffeegotstuck:
# 473 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 474 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 475 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 476 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_16
# 478 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 479 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_37
ConcordVendingMachine_36:
# 484 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_41
	goto ConcordVendingMachine_24

ConcordVendingMachine_27:
# 438 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_4

ConcordVendingMachine_30:
# 427 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 428 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotenergybar
	goto ConcordVendingMachine_29

ConcordVendingMachine_32:
# 379 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_8
	goto ConcordVendingMachine_7

ConcordVendingMachine_34:
# 491 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_10

ConcordVendingMachine_37:
# 480 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 481 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotcoffee
	goto ConcordVendingMachine_36

ConcordVendingMachine_39:
# 432 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_13
	goto ConcordVendingMachine_13

ConcordVendingMachine_41:
# 485 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_17
	goto ConcordVendingMachine_24


cMachineShake::
# 505 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_REVERSAL
# 506 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8004, 2
# 507 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8005, 6
# 508 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8006, 4
# 509 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8007, 4
# 510 "data/maps/ConcordCustoms/scripts.pory"
	special ShakeCamera
	return


ConcordCustomsClerkBAD::
# 521 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 522 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 523 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset FLAG_SAFE_FOLLOWER_MOVEMENT, ConcordCustomsClerkBAD_2
# 544 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_6
# 547 "data/maps/ConcordCustoms/scripts.pory"
	release
ConcordCustomsClerkBAD_1:
# 549 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkBAD_2:
# 525 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_0
	checkitem ITEM_FRESH_WATER
# 0 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordCustomsClerkBAD_5
	goto ConcordCustomsClerkBAD_1

ConcordCustomsClerkBAD_5:
# 529 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_1
# 531 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsClerkBAD_Text_2, ConcordCustomsClerkBAD_Text_3
# 532 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsClerkBAD_8
ConcordCustomsClerkBAD_7:
# 537 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsClerkBAD_10
	goto ConcordCustomsClerkBAD_1

ConcordCustomsClerkBAD_8:
# 533 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_4
	goto ConcordCustomsClerkBAD_7

ConcordCustomsClerkBAD_10:
# 538 "data/maps/ConcordCustoms/scripts.pory"
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
	.string "THAT FILTHY PIG! What am I supposed to\n"
	.string "do now!? MY FAMILY DEPENDS ON ME!$"

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
	.string "Citizen Services$"

ConcordCustomsPhone_Text_7:
# 208 "data/maps/ConcordCustoms/scripts.pory"
	.string "Dial Manually$"

ConcordCustomsPhone_Text_8:
# 208 "data/maps/ConcordCustoms/scripts.pory"
	.string "None$"

ConcordCustomsPhone_Text_9:
# 212 "data/maps/ConcordCustoms/scripts.pory"
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

ConcordCustomsPhone_Text_10:
# 223 "data/maps/ConcordCustoms/scripts.pory"
	.string "Norman: Hello. You have reached the\n"
	.string "voice mail of Petalburg Dojo.\p"
	.string "If you're calling to schedule a gym\n"
	.string "fight, I'm afraid this gym is no longer\l"
	.string "part of the Hoenn Pokémon League\l"
	.string "Challenge.\p"
	.string "If it's you, {PLAYER}... I'll call you as\n"
	.string "soon as I can.\p"
	.string "And if it's you, Sidney... stop calling me!$"

ConcordCustomsPhone_Text_11:
# 233 "data/maps/ConcordCustoms/scripts.pory"
	.string "You have reached Devon Co.'s Citizen\n"
	.string "Services. What can we do for you?$"

ConcordCustomsPhone_Text_12:
# 235 "data/maps/ConcordCustoms/scripts.pory"
	.string "Devon Visa Application$"

ConcordCustomsPhone_Text_13:
# 235 "data/maps/ConcordCustoms/scripts.pory"
	.string "Pokémon Retrieval$"

ConcordCustomsPhone_Text_14:
# 235 "data/maps/ConcordCustoms/scripts.pory"
	.string "Nothing$"

ConcordCustomsPhone_Text_15:
# 236 "data/maps/ConcordCustoms/scripts.pory"
	.string "We are very sorry. We are not processing\n"
	.string "visa applications at this time.\p"
	.string "Is there anything else we can do for\n"
	.string "you?$"

ConcordCustomsPhone_Text_16:
# 241 "data/maps/ConcordCustoms/scripts.pory"
	.string "Of course. For this request, I must ask\n"
	.string "you for your Devon Card's ID number. Is\l"
	.string "that okay?$"

ConcordCustomsPhone_Text_17:
# 242 "data/maps/ConcordCustoms/scripts.pory"
	.string "Tell number$"

ConcordCustomsPhone_Text_18:
# 242 "data/maps/ConcordCustoms/scripts.pory"
	.string "Nevermind$"

ConcordCustomsPhone_Text_19:
# 243 "data/maps/ConcordCustoms/scripts.pory"
	.string "Thank you. Let's see... {PLAYER}, is it?\p"
	.string "Devon Co. is currently in possession of\n"
	.string "one of your Pokémon.\p"
	.string "Species... Primeape.\p"
	.string "This Pokémon was taken from you upon\n"
	.string "termination of your military service.\p"
	.string "This was done because your Primeape\n"
	.string "met the criteria established by Devon\l"
	.string "Co's Wildlife Protocol 57: 'Pokémon for\l"
	.string "Urgent Safening'.\p"
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

ConcordCustomsPhone_Text_20:
# 253 "data/maps/ConcordCustoms/scripts.pory"
	.string "Is there anything else we can do for\n"
	.string "you?$"

ConcordCustomsPhone_Text_21:
# 256 "data/maps/ConcordCustoms/scripts.pory"
	.string "I see. We respect your right to privacy,\n"
	.string "but I'm afraid we cannot process this\l"
	.string "request without your ID number.\p"
	.string "Is there anything else we can do for\n"
	.string "you?$"

ConcordCustomsPhone_Text_22:
# 261 "data/maps/ConcordCustoms/scripts.pory"
	.string "Very well. Stay safe!$"

ConcordCustomsPhone_Text_23:
# 269 "data/maps/ConcordCustoms/scripts.pory"
	.string "Let's dial a number...$"

ConcordCustomsPhone_Text_24:
# 277 "data/maps/ConcordCustoms/scripts.pory"
	.string "You have reached the Devon Call\n"
	.string "Logistics Center.\p"
	.string "The number you have just called is not\n"
	.string "assigned to any Hoenn citizen.\p"
	.string "Please try again.$"

ConcordCustomsPhone_Text_25:
# 285 "data/maps/ConcordCustoms/scripts.pory"
	.string "...$"

ConcordCustomsPhone_Text_26:
# 286 "data/maps/ConcordCustoms/scripts.pory"
	.string "We've sent a package to your mailbox.\n"
	.string "Check it.$"

ConcordCustomsPhone_Text_27:
# 295 "data/maps/ConcordCustoms/scripts.pory"
	.string "We have already made this delivery. Only\n"
	.string "one per customer.$"

ConcordCustomsPhone_Text_28:
# 314 "data/maps/ConcordCustoms/scripts.pory"
	.string "The phone returns the coin.$"

ConcordVendingMachine_Text_0:
# 331 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a vending machine.$"

ConcordVendingMachine_Text_1:
# 333 "data/maps/ConcordCustoms/scripts.pory"
	.string "Fresh Water - 50¥$"

ConcordVendingMachine_Text_2:
# 333 "data/maps/ConcordCustoms/scripts.pory"
	.string "Energy Bar - 70¥$"

ConcordVendingMachine_Text_3:
# 333 "data/maps/ConcordCustoms/scripts.pory"
	.string "Strong Coffee - 80¥$"

ConcordVendingMachine_Text_4:
# 352 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_5:
# 361 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_6:
# 370 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

ConcordVendingMachine_Text_7:
# 372 "data/maps/ConcordCustoms/scripts.pory"
	.string "Shake the machine$"

ConcordVendingMachine_Text_8:
# 379 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordVendingMachine_Text_9:
# 385 "data/maps/ConcordCustoms/scripts.pory"
	.string "Not enough money...$"

ConcordVendingMachine_Text_10:
# 405 "data/maps/ConcordCustoms/scripts.pory"
	.string "An Energy Bar dropped on the machine's\n"
	.string "tray.$"

ConcordVendingMachine_Text_11:
# 414 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Energy Bar can dropped on the\n"
	.string "machine's tray!$"

ConcordVendingMachine_Text_12:
# 423 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Energy\n"
	.string "Bar can enough for it to fall...$"

ConcordVendingMachine_Text_13:
# 432 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Energy Bar can just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordVendingMachine_Text_14:
# 458 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_15:
# 467 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_16:
# 476 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

ConcordVendingMachine_Text_17:
# 485 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordCustomsClerkBAD_Text_0:
# 525 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm so thirsty... what I wouldn't do for\n"
	.string "some {COLOR BLUE}Fresh Water!{COLOR DARK_GRAY}\p"
	.string "But I don't have any coins for the\n"
	.string "vending machine. {COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ConcordCustomsClerkBAD_Text_1:
# 529 "data/maps/ConcordCustoms/scripts.pory"
	.string "Wait... you've got a bottle! Please, I'm\n"
	.string "dying of thirst here!$"

ConcordCustomsClerkBAD_Text_2:
# 531 "data/maps/ConcordCustoms/scripts.pory"
	.string "Give Fresh Water$"

ConcordCustomsClerkBAD_Text_3:
# 531 "data/maps/ConcordCustoms/scripts.pory"
	.string "Sorry, I need this$"

ConcordCustomsClerkBAD_Text_4:
# 533 "data/maps/ConcordCustoms/scripts.pory"
	.string "Thank you so much! {COLOR BLUE}Gulp gulp gulp...{COLOR DARK_GRAY}\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Aaah...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "That hit the spot. Thank you. Hm? Why\n"
	.string "are you staring like that?\p"
	.string "I appreciate the water, but if you don't\n"
	.string "have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, I can't let you\l"
	.string "through.$"

ConcordCustomsClerkBAD_Text_5:
# 538 "data/maps/ConcordCustoms/scripts.pory"
	.string "Ah... you are a cold fellow, you know\n"
	.string "that?$"

ConcordCustomsClerkBAD_Text_6:
# 544 "data/maps/ConcordCustoms/scripts.pory"
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
