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
# 323 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_5
ConcordCustomsPhone_4:
# 326 "data/maps/ConcordCustoms/scripts.pory"
endofpayphone:
# 327 "data/maps/ConcordCustoms/scripts.pory"
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
# 324 "data/maps/ConcordCustoms/scripts.pory"
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
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_4, ConcordCustomsPhone_Text_5, ConcordCustomsPhone_Text_6, ConcordCustomsPhone_Text_7, ConcordCustomsPhone_Text_8
# 209 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_10
ConcordCustomsPhone_9:
# 221 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_13
ConcordCustomsPhone_12:
# 232 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordCustomsPhone_16
ConcordCustomsPhone_15:
# 271 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ConcordCustomsPhone_19
ConcordCustomsPhone_18:
# 311 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ConcordCustomsPhone_24
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_10:
# 210 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 211 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 212 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 213 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_9
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
	msgbox ConcordCustomsPhone_Text_10
# 228 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 229 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_12

ConcordCustomsPhone_16:
# 233 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 234 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 235 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 236 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_11
# 237 "data/maps/ConcordCustoms/scripts.pory"
citizenservicesoptions:
# 238 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_12, ConcordCustomsPhone_Text_13, ConcordCustomsPhone_Text_14
# 239 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_22
ConcordCustomsPhone_21:
# 243 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_30
ConcordCustomsPhone_29:
# 246 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_36
ConcordCustomsPhone_35:
# 258 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_43
ConcordCustomsPhone_42:
# 263 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordCustomsPhone_46
ConcordCustomsPhone_45:
# 267 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 268 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_15

ConcordCustomsPhone_19:
# 272 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 273 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_23
# 274 "data/maps/ConcordCustoms/scripts.pory"
	special EnterCode
# 275 "data/maps/ConcordCustoms/scripts.pory"
	waitstate
# 276 "data/maps/ConcordCustoms/scripts.pory"
	special GetCodeFeedback
# 277 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsPhone_27
ConcordCustomsPhone_26:
# 305 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 306 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 308 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_18

ConcordCustomsPhone_22:
# 239 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_15
# 241 "data/maps/ConcordCustoms/scripts.pory"
	goto citizenservicesoptions
	goto ConcordCustomsPhone_21

ConcordCustomsPhone_24:
# 312 "data/maps/ConcordCustoms/scripts.pory"
returnmoney:
# 313 "data/maps/ConcordCustoms/scripts.pory"
	addmoney 50
# 314 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 315 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_CLICK
# 316 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 317 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_28
# 318 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 319 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_1

ConcordCustomsPhone_27:
# 278 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset sentdemomysterygift, ConcordCustomsPhone_33
ConcordCustomsPhone_32:
# 286 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsPhone_39
# 297 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 298 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 299 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_27
ConcordCustomsPhone_38:
# 300 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 301 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_26

ConcordCustomsPhone_30:
# 244 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_16
# 245 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsPhone_Text_17, ConcordCustomsPhone_Text_18
	goto ConcordCustomsPhone_29

ConcordCustomsPhone_33:
# 279 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 280 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 281 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_24
# 283 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 284 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_32

ConcordCustomsPhone_36:
# 246 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_19
# 256 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_20
# 257 "data/maps/ConcordCustoms/scripts.pory"
	goto citizenservicesoptions
	goto ConcordCustomsPhone_35

ConcordCustomsPhone_39:
# 287 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_CALL
# 288 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 289 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_25
# 290 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_26
# 291 "data/maps/ConcordCustoms/scripts.pory"
	setflag sentdemomysterygift
# 292 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 293 "data/maps/ConcordCustoms/scripts.pory"
	goto endofpayphone
	goto ConcordCustomsPhone_38

ConcordCustomsPhone_43:
# 259 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_21
# 261 "data/maps/ConcordCustoms/scripts.pory"
	goto citizenservicesoptions
	goto ConcordCustomsPhone_42

ConcordCustomsPhone_46:
# 264 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsPhone_Text_22
	goto ConcordCustomsPhone_45


ConcordVendingMachine::
# 332 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 333 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_0
# 334 "data/maps/ConcordCustoms/scripts.pory"
	showmoneybox 18, 0
# 335 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_1, ConcordVendingMachine_Text_2, ConcordVendingMachine_Text_3, ConcordCustomsPhone_Text_2
# 338 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_2
ConcordVendingMachine_1:
# 391 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordVendingMachine_5
ConcordVendingMachine_4:
# 444 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConcordVendingMachine_11
ConcordVendingMachine_10:
# 496 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ConcordVendingMachine_22
ConcordVendingMachine_21:
# 499 "data/maps/ConcordCustoms/scripts.pory"
cendvendingmachine:
# 500 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 501 "data/maps/ConcordCustoms/scripts.pory"
	releaseall
	return

ConcordVendingMachine_2:
# 339 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 50
# 340 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_8
ConcordVendingMachine_7:
# 385 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_16
	goto ConcordVendingMachine_1

ConcordVendingMachine_5:
# 392 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 70
# 393 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_14
ConcordVendingMachine_13:
# 438 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_27
	goto ConcordVendingMachine_4

ConcordVendingMachine_8:
# 341 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 342 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 343 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 345 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 346 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cfreshwatergotstuck
# 347 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotfreshwater
# 349 "data/maps/ConcordCustoms/scripts.pory"
cgotfreshwater:
# 350 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 351 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 352 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 50
# 353 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_4
# 354 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 355 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 357 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 358 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 359 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrafreshwater
# 361 "data/maps/ConcordCustoms/scripts.pory"
cgotextrafreshwater:
# 362 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_5
# 363 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 364 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 365 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 367 "data/maps/ConcordCustoms/scripts.pory"
cfreshwatergotstuck:
# 368 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 369 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 370 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 371 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_6
# 373 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 374 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_19
ConcordVendingMachine_18:
# 379 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_32
	goto ConcordVendingMachine_7

ConcordVendingMachine_11:
# 445 "data/maps/ConcordCustoms/scripts.pory"
	checkmoney 80
# 446 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordVendingMachine_25
ConcordVendingMachine_24:
# 491 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ConcordVendingMachine_34
	goto ConcordVendingMachine_10

ConcordVendingMachine_14:
# 394 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 395 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 396 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
# 398 "data/maps/ConcordCustoms/scripts.pory"
	random 4
# 399 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, csodagotstuck
# 400 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotsoda
# 402 "data/maps/ConcordCustoms/scripts.pory"
cgotsoda:
# 403 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_VEND
# 404 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 405 "data/maps/ConcordCustoms/scripts.pory"
	removemoney 70
# 406 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_10
# 407 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 408 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_SODA_POP
# 410 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 411 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 412 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextrasoda
# 414 "data/maps/ConcordCustoms/scripts.pory"
cgotextrasoda:
# 415 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_11
# 416 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 417 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_SODA_POP
# 418 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 420 "data/maps/ConcordCustoms/scripts.pory"
csodagotstuck:
# 421 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 422 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 423 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 424 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_12
# 426 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 427 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_30
ConcordVendingMachine_29:
# 432 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_39
	goto ConcordVendingMachine_13

ConcordVendingMachine_16:
# 386 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_1

ConcordVendingMachine_19:
# 375 "data/maps/ConcordCustoms/scripts.pory"
	call cMachineShake
# 376 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotfreshwater
	goto ConcordVendingMachine_18

ConcordVendingMachine_22:
# 497 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
	goto ConcordVendingMachine_21

ConcordVendingMachine_25:
# 447 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_SHOP
# 448 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 449 "data/maps/ConcordCustoms/scripts.pory"
	updatemoneybox
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
	removemoney 50
# 459 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_14
# 460 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 461 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 463 "data/maps/ConcordCustoms/scripts.pory"
	random 20
# 464 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_ne VAR_RESULT, 0, cendvendingmachine
# 465 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, cgotextracoffee
# 467 "data/maps/ConcordCustoms/scripts.pory"
cgotextracoffee:
# 468 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_15
# 469 "data/maps/ConcordCustoms/scripts.pory"
	hidemoneybox
# 470 "data/maps/ConcordCustoms/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 471 "data/maps/ConcordCustoms/scripts.pory"
	goto cendvendingmachine
# 473 "data/maps/ConcordCustoms/scripts.pory"
ccoffeegotstuck:
# 474 "data/maps/ConcordCustoms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ConcordWageSlaveAtPhone_Movement_0
# 475 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_PIN
# 476 "data/maps/ConcordCustoms/scripts.pory"
	waitse
# 477 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_16
# 479 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConcordVendingMachine_Text_7, ConcordCustomsPhone_Text_2
# 480 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_37
ConcordVendingMachine_36:
# 485 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordVendingMachine_41
	goto ConcordVendingMachine_24

ConcordVendingMachine_27:
# 439 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_4

ConcordVendingMachine_30:
# 428 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 429 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotsoda
	goto ConcordVendingMachine_29

ConcordVendingMachine_32:
# 380 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_8
	goto ConcordVendingMachine_7

ConcordVendingMachine_34:
# 492 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_9
	goto ConcordVendingMachine_10

ConcordVendingMachine_37:
# 481 "data/maps/ConcordCustoms/scripts.pory"
	call MachineShake
# 482 "data/maps/ConcordCustoms/scripts.pory"
	goto cgotcoffee
	goto ConcordVendingMachine_36

ConcordVendingMachine_39:
# 433 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_13
	goto ConcordVendingMachine_13

ConcordVendingMachine_41:
# 486 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordVendingMachine_Text_17
	goto ConcordVendingMachine_24


cMachineShake::
# 506 "data/maps/ConcordCustoms/scripts.pory"
	playse SE_M_REVERSAL
# 507 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8004, 2
# 508 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8005, 6
# 509 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8006, 4
# 510 "data/maps/ConcordCustoms/scripts.pory"
	setvar VAR_0x8007, 4
# 511 "data/maps/ConcordCustoms/scripts.pory"
	special ShakeCamera
	return


ConcordCustomsClerkBAD::
# 522 "data/maps/ConcordCustoms/scripts.pory"
	lock
# 523 "data/maps/ConcordCustoms/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 524 "data/maps/ConcordCustoms/scripts.pory"
	goto_if_unset FLAG_SAFE_FOLLOWER_MOVEMENT, ConcordCustomsClerkBAD_2
# 545 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_6
# 548 "data/maps/ConcordCustoms/scripts.pory"
	release
ConcordCustomsClerkBAD_1:
# 550 "data/maps/ConcordCustoms/scripts.pory"
	release
	return

ConcordCustomsClerkBAD_2:
# 526 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_0
	checkitem ITEM_FRESH_WATER
# 0 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ConcordCustomsClerkBAD_5
	goto ConcordCustomsClerkBAD_1

ConcordCustomsClerkBAD_5:
# 530 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_1
# 532 "data/maps/ConcordCustoms/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConcordCustomsClerkBAD_Text_2, ConcordCustomsClerkBAD_Text_3
# 533 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConcordCustomsClerkBAD_8
ConcordCustomsClerkBAD_7:
# 538 "data/maps/ConcordCustoms/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConcordCustomsClerkBAD_10
	goto ConcordCustomsClerkBAD_1

ConcordCustomsClerkBAD_8:
# 534 "data/maps/ConcordCustoms/scripts.pory"
	msgbox ConcordCustomsClerkBAD_Text_4
	goto ConcordCustomsClerkBAD_7

ConcordCustomsClerkBAD_10:
# 539 "data/maps/ConcordCustoms/scripts.pory"
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
	.string "It's a public Devon Phone. The cost is\n"
	.string "50¥.$"

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
	.string "Citizen Services$"

ConcordCustomsPhone_Text_7:
# 208 "data/maps/ConcordCustoms/scripts.pory"
	.string "Dial Manually$"

ConcordCustomsPhone_Text_8:
# 208 "data/maps/ConcordCustoms/scripts.pory"
	.string "None$"

ConcordCustomsPhone_Text_9:
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

ConcordCustomsPhone_Text_10:
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

ConcordCustomsPhone_Text_11:
# 236 "data/maps/ConcordCustoms/scripts.pory"
	.string "You have reached Devon Co.'s Citizen\n"
	.string "Services. What can we do for you?$"

ConcordCustomsPhone_Text_12:
# 238 "data/maps/ConcordCustoms/scripts.pory"
	.string "Devon Visa Application$"

ConcordCustomsPhone_Text_13:
# 238 "data/maps/ConcordCustoms/scripts.pory"
	.string "Pokémon Retrieval$"

ConcordCustomsPhone_Text_14:
# 238 "data/maps/ConcordCustoms/scripts.pory"
	.string "Nothing$"

ConcordCustomsPhone_Text_15:
# 239 "data/maps/ConcordCustoms/scripts.pory"
	.string "We are very sorry. We are not processing\n"
	.string "visa applications at this time.\p"
	.string "Is there anything else we can do for\n"
	.string "you?$"

ConcordCustomsPhone_Text_16:
# 244 "data/maps/ConcordCustoms/scripts.pory"
	.string "Of course. For this request, I must ask\n"
	.string "you for your Devon Card's ID number. Is\l"
	.string "that okay?$"

ConcordCustomsPhone_Text_17:
# 245 "data/maps/ConcordCustoms/scripts.pory"
	.string "Tell number$"

ConcordCustomsPhone_Text_18:
# 245 "data/maps/ConcordCustoms/scripts.pory"
	.string "Nevermind$"

ConcordCustomsPhone_Text_19:
# 246 "data/maps/ConcordCustoms/scripts.pory"
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
	.string "trained to fight in the Kantonian war -\l"
	.string "and Devon Co. cannot return it to you\l"
	.string "until it has been turned into a Safemon.\p"
	.string "You will be notified as soon as this is\n"
	.string "the case, and a retrieval meeting will be\l"
	.string "scheduled.\p"
	.string "Thank you for your patience!$"

ConcordCustomsPhone_Text_20:
# 256 "data/maps/ConcordCustoms/scripts.pory"
	.string "Is there anything else we can do for\n"
	.string "you?$"

ConcordCustomsPhone_Text_21:
# 259 "data/maps/ConcordCustoms/scripts.pory"
	.string "I see. We respect your right to privacy,\n"
	.string "but I'm afraid we cannot process this\l"
	.string "request without your ID number.\p"
	.string "Is there anything else we can do for\n"
	.string "you?$"

ConcordCustomsPhone_Text_22:
# 264 "data/maps/ConcordCustoms/scripts.pory"
	.string "Very well. Stay safe!$"

ConcordCustomsPhone_Text_23:
# 273 "data/maps/ConcordCustoms/scripts.pory"
	.string "Let's dial a number...$"

ConcordCustomsPhone_Text_24:
# 281 "data/maps/ConcordCustoms/scripts.pory"
	.string "You have reached the Devon Call\n"
	.string "Logistics Center.\p"
	.string "The number you have just called is not\n"
	.string "assigned to any Hoenn citizen.\p"
	.string "Please try again.$"

ConcordCustomsPhone_Text_25:
# 289 "data/maps/ConcordCustoms/scripts.pory"
	.string "...$"

ConcordCustomsPhone_Text_26:
# 290 "data/maps/ConcordCustoms/scripts.pory"
	.string "We've sent a package to your mailbox.\n"
	.string "Check it.$"

ConcordCustomsPhone_Text_27:
# 299 "data/maps/ConcordCustoms/scripts.pory"
	.string "We have already made this delivery. Only\n"
	.string "one per customer.$"

ConcordCustomsPhone_Text_28:
# 317 "data/maps/ConcordCustoms/scripts.pory"
	.string "The phone returns the coin.$"

ConcordVendingMachine_Text_0:
# 333 "data/maps/ConcordCustoms/scripts.pory"
	.string "It's a vending machine.$"

ConcordVendingMachine_Text_1:
# 335 "data/maps/ConcordCustoms/scripts.pory"
	.string "Fresh Water - 50¥$"

ConcordVendingMachine_Text_2:
# 335 "data/maps/ConcordCustoms/scripts.pory"
	.string "Soda Pop - 70¥$"

ConcordVendingMachine_Text_3:
# 335 "data/maps/ConcordCustoms/scripts.pory"
	.string "Strong Coffee - 80¥$"

ConcordVendingMachine_Text_4:
# 353 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_5:
# 362 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_6:
# 371 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

ConcordVendingMachine_Text_7:
# 373 "data/maps/ConcordCustoms/scripts.pory"
	.string "Shake the machine$"

ConcordVendingMachine_Text_8:
# 380 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordVendingMachine_Text_9:
# 386 "data/maps/ConcordCustoms/scripts.pory"
	.string "Not enough money...$"

ConcordVendingMachine_Text_10:
# 406 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

ConcordVendingMachine_Text_11:
# 415 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

ConcordVendingMachine_Text_12:
# 424 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

ConcordVendingMachine_Text_13:
# 433 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

ConcordVendingMachine_Text_14:
# 459 "data/maps/ConcordCustoms/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

ConcordVendingMachine_Text_15:
# 468 "data/maps/ConcordCustoms/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

ConcordVendingMachine_Text_16:
# 477 "data/maps/ConcordCustoms/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

ConcordVendingMachine_Text_17:
# 486 "data/maps/ConcordCustoms/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

ConcordCustomsClerkBAD_Text_0:
# 526 "data/maps/ConcordCustoms/scripts.pory"
	.string "I'm so thirsty... what I wouldn't do for\n"
	.string "some {COLOR BLUE}Fresh Water!{COLOR DARK_GRAY}\p"
	.string "But I don't have any coins for the\n"
	.string "vending machine. {COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ConcordCustomsClerkBAD_Text_1:
# 530 "data/maps/ConcordCustoms/scripts.pory"
	.string "Wait... you've got a bottle! Please, I'm\n"
	.string "dying of thirst here!$"

ConcordCustomsClerkBAD_Text_2:
# 532 "data/maps/ConcordCustoms/scripts.pory"
	.string "Give Fresh Water$"

ConcordCustomsClerkBAD_Text_3:
# 532 "data/maps/ConcordCustoms/scripts.pory"
	.string "Sorry, I need this$"

ConcordCustomsClerkBAD_Text_4:
# 534 "data/maps/ConcordCustoms/scripts.pory"
	.string "Thank you so much! {COLOR BLUE}Gulp gulp gulp...{COLOR DARK_GRAY}\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Aaah...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "That hit the spot. Thank you. Hm? Why\n"
	.string "are you staring like that?\p"
	.string "I appreciate the water, but if you don't\n"
	.string "have a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY}, I can't let you\l"
	.string "through.$"

ConcordCustomsClerkBAD_Text_5:
# 539 "data/maps/ConcordCustoms/scripts.pory"
	.string "Ah... you are a cold fellow, you know\n"
	.string "that?$"

ConcordCustomsClerkBAD_Text_6:
# 545 "data/maps/ConcordCustoms/scripts.pory"
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
