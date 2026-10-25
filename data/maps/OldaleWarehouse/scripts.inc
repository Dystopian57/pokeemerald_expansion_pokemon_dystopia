# 1 "data/maps/OldaleWarehouse/scripts.pory"


OldaleWarehouse_MapScripts::
# 6 "data/maps/OldaleWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 7 "data/maps/OldaleWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 8 "data/maps/OldaleWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
	.byte 0


OldaleWarehouseRebel1::
# 13 "data/maps/OldaleWarehouse/scripts.pory"
	trainerbattle_single TRAINER_REBELGRUNT_OLDALEWAREHOUSE_1, WarehouseRebel1_Intro, WarehouseRebel1_Outro
# 14 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseRebel1_Text_0
# 16 "data/maps/OldaleWarehouse/scripts.pory"
	release
	end


OldaleWarehouseRebel2::
# 28 "data/maps/OldaleWarehouse/scripts.pory"
	trainerbattle_single TRAINER_REBELGRUNT_OLDALEWAREHOUSE_2, WarehouseRebel2_Intro, WarehouseRebel2_Outro
# 29 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseRebel2_Text_0
# 30 "data/maps/OldaleWarehouse/scripts.pory"
	release
	end


OldaleWarehouseManchine::
# 42 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 43 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_unset warehousemanchine, OldaleWarehouseManchine_2
# 72 "data/maps/OldaleWarehouse/scripts.pory"
	release
OldaleWarehouseManchine_1:
# 73 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return

OldaleWarehouseManchine_2:
# 45 "data/maps/OldaleWarehouse/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 46 "data/maps/OldaleWarehouse/scripts.pory"
	playse SE_PIN
# 47 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 5, OldaleWarehouseManchine_Movement_0
# 48 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseManchine_Text_0
# 49 "data/maps/OldaleWarehouse/scripts.pory"
	waitmessage
# 50 "data/maps/OldaleWarehouse/scripts.pory"
	setwildbattle SPECIES_MANCHINE, 5
# 51 "data/maps/OldaleWarehouse/scripts.pory"
	dowildbattle
# 52 "data/maps/OldaleWarehouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 53 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq OldaleWarehouseManchine_5
# 58 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OldaleWarehouseManchine_6
# 63 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq OldaleWarehouseManchine_7
# 67 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq OldaleWarehouseManchine_8
	goto OldaleWarehouseManchine_1

OldaleWarehouseManchine_5:
# 54 "data/maps/OldaleWarehouse/scripts.pory"
	removeobject 5
# 55 "data/maps/OldaleWarehouse/scripts.pory"
	setflag warehousemanchine
# 56 "data/maps/OldaleWarehouse/scripts.pory"
	goto finishwarehousemanchine
	goto OldaleWarehouseManchine_1

OldaleWarehouseManchine_6:
# 59 "data/maps/OldaleWarehouse/scripts.pory"
	removeobject 5
# 60 "data/maps/OldaleWarehouse/scripts.pory"
	setflag warehousemanchine
# 61 "data/maps/OldaleWarehouse/scripts.pory"
	goto finishwarehousemanchine
	goto OldaleWarehouseManchine_1

OldaleWarehouseManchine_7:
# 65 "data/maps/OldaleWarehouse/scripts.pory"
	goto finishwarehousemanchine
	goto OldaleWarehouseManchine_1

OldaleWarehouseManchine_8:
# 68 "data/maps/OldaleWarehouse/scripts.pory"
	goto finishwarehousemanchine
	goto OldaleWarehouseManchine_1


OldaleWarehouseManchineTrigger::
# 77 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 78 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_unset warehousemanchine, OldaleWarehouseManchineTrigger_2
# 117 "data/maps/OldaleWarehouse/scripts.pory"
	release
OldaleWarehouseManchineTrigger_1:
# 118 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return

OldaleWarehouseManchineTrigger_2:
# 80 "data/maps/OldaleWarehouse/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 81 "data/maps/OldaleWarehouse/scripts.pory"
	playse SE_PIN
# 82 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 5, OldaleWarehouseManchine_Movement_0
# 83 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseManchine_Text_0
# 84 "data/maps/OldaleWarehouse/scripts.pory"
	waitmessage
# 85 "data/maps/OldaleWarehouse/scripts.pory"
	setwildbattle SPECIES_MANCHINE, 5
# 86 "data/maps/OldaleWarehouse/scripts.pory"
	dowildbattle
# 87 "data/maps/OldaleWarehouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 88 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq OldaleWarehouseManchineTrigger_6
# 93 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OldaleWarehouseManchineTrigger_7
# 98 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq OldaleWarehouseManchineTrigger_8
# 102 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq OldaleWarehouseManchineTrigger_9
OldaleWarehouseManchineTrigger_5:
# 106 "data/maps/OldaleWarehouse/scripts.pory"
EscapedManchine:
# 107 "data/maps/OldaleWarehouse/scripts.pory"
	special SpawnCameraObject
# 108 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleWarehouseManchineTrigger_Movement_0
# 109 "data/maps/OldaleWarehouse/scripts.pory"
	waitmovement 0
# 110 "data/maps/OldaleWarehouse/scripts.pory"
	special RemoveCameraObject
# 111 "data/maps/OldaleWarehouse/scripts.pory"
	setobjectxy 5, 2, 8
# 112 "data/maps/OldaleWarehouse/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 3, 8
# 113 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 5, OldaleWarehouseManchineTrigger_Movement_1
# 114 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseManchineTrigger_Movement_2
# 115 "data/maps/OldaleWarehouse/scripts.pory"
finishwarehousemanchine:
	goto OldaleWarehouseManchineTrigger_1

OldaleWarehouseManchineTrigger_6:
# 89 "data/maps/OldaleWarehouse/scripts.pory"
	removeobject 5
# 90 "data/maps/OldaleWarehouse/scripts.pory"
	setflag warehousemanchine
# 91 "data/maps/OldaleWarehouse/scripts.pory"
	goto finishwarehousemanchine
	goto OldaleWarehouseManchineTrigger_5

OldaleWarehouseManchineTrigger_7:
# 94 "data/maps/OldaleWarehouse/scripts.pory"
	removeobject 5
# 95 "data/maps/OldaleWarehouse/scripts.pory"
	setflag warehousemanchine
# 96 "data/maps/OldaleWarehouse/scripts.pory"
	goto finishwarehousemanchine
	goto OldaleWarehouseManchineTrigger_5

OldaleWarehouseManchineTrigger_8:
# 100 "data/maps/OldaleWarehouse/scripts.pory"
	goto EscapedManchine
	goto OldaleWarehouseManchineTrigger_5

OldaleWarehouseManchineTrigger_9:
# 103 "data/maps/OldaleWarehouse/scripts.pory"
	goto EscapedManchine
	goto OldaleWarehouseManchineTrigger_5


OldaleWarehouseHelipip::
# 127 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 128 "data/maps/OldaleWarehouse/scripts.pory"
	playmoncry SPECIES_HELIPIP, CRY_MODE_WEAK
# 129 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseHelipip_Text_0
# 130 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleWarehouseHelipip_2
OldaleWarehouseHelipip_1:
# 132 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return

OldaleWarehouseHelipip_2:
# 131 "data/maps/OldaleWarehouse/scripts.pory"
	setseenmon SPECIES_HELIPIP
	goto OldaleWarehouseHelipip_1


OldaleWarehouseLoadtad::
# 136 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 138 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_unset devonreturnstooldale, OldaleWarehouseLoadtad_2
# 144 "data/maps/OldaleWarehouse/scripts.pory"
	playmoncry SPECIES_LOADTAD, CRY_MODE_NORMAL
# 145 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseLoadtad_Text_1
OldaleWarehouseLoadtad_1:
# 147 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return

OldaleWarehouseLoadtad_2:
# 140 "data/maps/OldaleWarehouse/scripts.pory"
	playmoncry SPECIES_LOADTAD, CRY_MODE_WEAK
# 141 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseLoadtad_Text_0
	goto OldaleWarehouseLoadtad_1


OldaleWarehouseForklift::
# 151 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 152 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseForklift_Text_0
# 153 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return


OldaleWarehouseSealedbox::
# 157 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 158 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseSealedbox_Text_0
# 159 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return


OldaleWarehouseToColdStorageSign::
# 163 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 164 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseToColdStorageSign_Text_0
# 165 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return


OldaleWarehouseToApplianceStorageSign::
# 169 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 170 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseToApplianceStorageSign_Text_0
# 171 "data/maps/OldaleWarehouse/scripts.pory"
	releaseall
	return


OldaleWarehouseCarRebel2::
# 177 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_unset carrebelwarehouse, OldaleWarehouseCarRebel2_1
	return

OldaleWarehouseCarRebel2_1:
# 178 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 179 "data/maps/OldaleWarehouse/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 180 "data/maps/OldaleWarehouse/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 181 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseCarRebel2_Text_0
# 182 "data/maps/OldaleWarehouse/scripts.pory"
	playse SE_FLEE
# 183 "data/maps/OldaleWarehouse/scripts.pory"
	addobject 6
# 184 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 6, OldaleWarehouseCarRebel2_Movement_0
# 185 "data/maps/OldaleWarehouse/scripts.pory"
	waitmovement 6
# 186 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseCarRebel2_Text_1
# 187 "data/maps/OldaleWarehouse/scripts.pory"
	playse SE_BALL_OPEN
# 188 "data/maps/OldaleWarehouse/scripts.pory"
	addobject 7
# 189 "data/maps/OldaleWarehouse/scripts.pory"
	setobjectxy 7, 7, 7
# 190 "data/maps/OldaleWarehouse/scripts.pory"
	goto continuewarehousecarrrebel
	return


OldaleWarehouseCarRebel::
# 195 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_unset carrebelwarehouse, OldaleWarehouseCarRebel_2
# 262 "data/maps/OldaleWarehouse/scripts.pory"
	release
OldaleWarehouseCarRebel_1:
# 264 "data/maps/OldaleWarehouse/scripts.pory"
	release
	return

OldaleWarehouseCarRebel_2:
# 196 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 197 "data/maps/OldaleWarehouse/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 198 "data/maps/OldaleWarehouse/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 199 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseCarRebel2_Text_0
# 200 "data/maps/OldaleWarehouse/scripts.pory"
	closemessage
# 201 "data/maps/OldaleWarehouse/scripts.pory"
	playse SE_FLEE
# 202 "data/maps/OldaleWarehouse/scripts.pory"
	addobject 6
# 203 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 6, OldaleWarehouseCarRebel_Movement_0
# 204 "data/maps/OldaleWarehouse/scripts.pory"
	waitmovement 6
# 205 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseCarRebel2_Text_1
# 206 "data/maps/OldaleWarehouse/scripts.pory"
	closemessage
# 207 "data/maps/OldaleWarehouse/scripts.pory"
	playse SE_BALL_OPEN
# 208 "data/maps/OldaleWarehouse/scripts.pory"
	addobject 7
# 209 "data/maps/OldaleWarehouse/scripts.pory"
	setobjectxy 7, 6, 7
# 210 "data/maps/OldaleWarehouse/scripts.pory"
continuewarehousecarrrebel:
# 211 "data/maps/OldaleWarehouse/scripts.pory"
	waitse
# 212 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 7, OldaleWarehouseCarRebel_Movement_1
# 213 "data/maps/OldaleWarehouse/scripts.pory"
	playmoncry SPECIES_ELECTRIKE, CRY_MODE_HIGH_PITCH
# 214 "data/maps/OldaleWarehouse/scripts.pory"
	waitmovement 7
# 215 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseCarRebel_Text_0
# 216 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleWarehouseCarRebel_6
OldaleWarehouseCarRebel_5:
# 218 "data/maps/OldaleWarehouse/scripts.pory"
	closemessage
# 219 "data/maps/OldaleWarehouse/scripts.pory"
	fadeoutbgm 3
# 220 "data/maps/OldaleWarehouse/scripts.pory"
	playse SE_M_TWISTER
# 221 "data/maps/OldaleWarehouse/scripts.pory"
	waitse
# 222 "data/maps/OldaleWarehouse/scripts.pory"
	playse SE_M_METRONOME
# 223 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 6, OldaleWarehouseCarRebel_Movement_2
# 224 "data/maps/OldaleWarehouse/scripts.pory"
	waitse
# 225 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseCarRebel_Text_1
# 226 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 6, OldaleWarehouseCarRebel_Movement_3
# 227 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseCarRebel_Text_2
# 229 "data/maps/OldaleWarehouse/scripts.pory"
	playmoncry SPECIES_ELECTRIKE, CRY_MODE_WEAK
# 230 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 7, OldaleWarehouseCarRebel_Movement_4
# 231 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseCarRebel_Text_3
# 233 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 6, OldaleWarehouseCarRebel_Movement_3
# 234 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseCarRebel_Text_4
# 235 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 6, OldaleWarehouseCarRebel_Movement_4
# 236 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseCarRebel_Text_5
# 238 "data/maps/OldaleWarehouse/scripts.pory"
	playse SE_LEDGE
# 239 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 7, OldaleWarehouseCarRebel_Movement_5
# 240 "data/maps/OldaleWarehouse/scripts.pory"
	waitse
# 244 "data/maps/OldaleWarehouse/scripts.pory"
	playmoncry SPECIES_ELECTRIKE, CRY_MODE_NORMAL
# 245 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox OldaleWarehouseCarRebel_Text_6
# 246 "data/maps/OldaleWarehouse/scripts.pory"
	closemessage
# 247 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 6, OldaleWarehouseCarRebel_Movement_6
# 249 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 7, OldaleWarehouseCarRebel_Movement_7
# 250 "data/maps/OldaleWarehouse/scripts.pory"
	waitmovement 6
# 251 "data/maps/OldaleWarehouse/scripts.pory"
	playse SE_EXIT
# 253 "data/maps/OldaleWarehouse/scripts.pory"
	removeobject 6
# 254 "data/maps/OldaleWarehouse/scripts.pory"
	removeobject 7
# 256 "data/maps/OldaleWarehouse/scripts.pory"
	setflag carrebelwarehouse
# 257 "data/maps/OldaleWarehouse/scripts.pory"
	setflag carrebelatDC
# 258 "data/maps/OldaleWarehouse/scripts.pory"
	fadeinbgm 1
# 259 "data/maps/OldaleWarehouse/scripts.pory"
	playbgm MUS_UNDERPIZZA, TRUE
# 260 "data/maps/OldaleWarehouse/scripts.pory"
	release
	goto OldaleWarehouseCarRebel_1

OldaleWarehouseCarRebel_6:
# 217 "data/maps/OldaleWarehouse/scripts.pory"
	setseenmon SPECIES_ELECTRIKE
	goto OldaleWarehouseCarRebel_5


DevonWarehouseWorkerLoadtad::
# 268 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 269 "data/maps/OldaleWarehouse/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 270 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox DevonWarehouseWorkerLoadtad_Text_0
# 271 "data/maps/OldaleWarehouse/scripts.pory"
	release
	return


DevonWarehouseWorkerForklift::
# 276 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 277 "data/maps/OldaleWarehouse/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 278 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 10, DevonWarehouseWorkerForklift_Movement_0
# 279 "data/maps/OldaleWarehouse/scripts.pory"
	waitmovement 10
# 280 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox DevonWarehouseWorkerForklift_Text_0
# 282 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 10, DevonWarehouseWorkerForklift_Movement_1
# 283 "data/maps/OldaleWarehouse/scripts.pory"
	waitmovement 10
# 284 "data/maps/OldaleWarehouse/scripts.pory"
	release
	return


WarehouseParcelNPC::
# 289 "data/maps/OldaleWarehouse/scripts.pory"
	lock
# 290 "data/maps/OldaleWarehouse/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 291 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 11, DevonWarehouseWorkerForklift_Movement_0
# 292 "data/maps/OldaleWarehouse/scripts.pory"
	waitmovement 11
# 294 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_set dailyloadtadparcelquest, WarehouseParcelNPC_2
# 303 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_WAREHOUSEPARCELQUEST, 0
	goto_if_eq WarehouseParcelNPC_6
WarehouseParcelNPC_5:
# 355 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_WAREHOUSEPARCELQUEST, 4
	goto_if_lt WarehouseParcelNPC_10
WarehouseParcelNPC_8:
# 361 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_WAREHOUSEPARCELQUEST, 4
	goto_if_lt WarehouseParcelNPC_17
WarehouseParcelNPC_1:
# 387 "data/maps/OldaleWarehouse/scripts.pory"
endofdevonparcelquestnpc:
# 388 "data/maps/OldaleWarehouse/scripts.pory"
	applymovement 11, DevonWarehouseWorkerForklift_Movement_1
# 389 "data/maps/OldaleWarehouse/scripts.pory"
	waitmovement 11
# 390 "data/maps/OldaleWarehouse/scripts.pory"
	release
	return

WarehouseParcelNPC_2:
# 295 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_0
# 297 "data/maps/OldaleWarehouse/scripts.pory"
	goto endofdevonparcelquestnpc
	goto WarehouseParcelNPC_1

WarehouseParcelNPC_6:
# 305 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_set devondailyparcelquestexplained, WarehouseParcelNPC_14
WarehouseParcelNPC_13:
# 308 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_unset devondailyparcelquestexplained, WarehouseParcelNPC_21
WarehouseParcelNPC_20:
# 312 "data/maps/OldaleWarehouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, WarehouseParcelNPC_Text_3, WarehouseParcelNPC_Text_4
# 313 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WarehouseParcelNPC_28
WarehouseParcelNPC_27:
# 348 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WarehouseParcelNPC_32
	goto WarehouseParcelNPC_5

WarehouseParcelNPC_9:
# 357 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_12
# 358 "data/maps/OldaleWarehouse/scripts.pory"
	goto endofdevonparcelquestnpc
	goto WarehouseParcelNPC_8

WarehouseParcelNPC_10:
	checkitem ITEM_PARCEL
# 0 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq WarehouseParcelNPC_9
	goto WarehouseParcelNPC_8

WarehouseParcelNPC_14:
# 306 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_1
	goto WarehouseParcelNPC_13

WarehouseParcelNPC_16:
# 364 "data/maps/OldaleWarehouse/scripts.pory"
gotparcelforparcelquest:
# 365 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_13
# 367 "data/maps/OldaleWarehouse/scripts.pory"
	addvar VAR_WAREHOUSEPARCELQUEST, + 1
# 368 "data/maps/OldaleWarehouse/scripts.pory"
	removeitem ITEM_PARCEL
# 369 "data/maps/OldaleWarehouse/scripts.pory"
	random 2
# 370 "data/maps/OldaleWarehouse/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 372 "data/maps/OldaleWarehouse/scripts.pory"
	switch VAR_RESULT
# 373 "data/maps/OldaleWarehouse/scripts.pory"
	case 0, WarehouseParcelNPC_25
# 375 "data/maps/OldaleWarehouse/scripts.pory"
	case 1, WarehouseParcelNPC_26
WarehouseParcelNPC_23:
# 380 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_WAREHOUSEPARCELQUEST, 4
	goto_if_eq WarehouseParcelNPC_30
	goto WarehouseParcelNPC_1

WarehouseParcelNPC_17:
	checkitem ITEM_PARCEL
# 0 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WarehouseParcelNPC_16
	goto WarehouseParcelNPC_1

WarehouseParcelNPC_21:
# 309 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_2
	goto WarehouseParcelNPC_20

WarehouseParcelNPC_25:
# 373 "data/maps/OldaleWarehouse/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 5
# 374 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_14
	goto WarehouseParcelNPC_23

WarehouseParcelNPC_26:
# 375 "data/maps/OldaleWarehouse/scripts.pory"
	giveitem ITEM_MAX_POTION
# 376 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_15
# 377 "data/maps/OldaleWarehouse/scripts.pory"
	goto endofdevonparcelquestnpc
	goto WarehouseParcelNPC_23

WarehouseParcelNPC_28:
# 314 "data/maps/OldaleWarehouse/scripts.pory"
	setvar VAR_WAREHOUSEPARCELQUEST, 1
# 315 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_unset devondailyparcelquestexplained, WarehouseParcelNPC_35
WarehouseParcelNPC_34:
# 341 "data/maps/OldaleWarehouse/scripts.pory"
	goto_if_set devondailyparcelquestexplained, WarehouseParcelNPC_37
	goto WarehouseParcelNPC_27

WarehouseParcelNPC_30:
# 381 "data/maps/OldaleWarehouse/scripts.pory"
	setvar VAR_WAREHOUSEPARCELQUEST, 0
# 382 "data/maps/OldaleWarehouse/scripts.pory"
	setflag dailyloadtadparcelquest
# 383 "data/maps/OldaleWarehouse/scripts.pory"
	goto endofdevonparcelquestnpc
	goto WarehouseParcelNPC_1

WarehouseParcelNPC_32:
# 349 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_10
# 350 "data/maps/OldaleWarehouse/scripts.pory"
	goto endofdevonparcelquestnpc
	goto WarehouseParcelNPC_5

WarehouseParcelNPC_35:
# 317 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_5
# 324 "data/maps/OldaleWarehouse/scripts.pory"
	setflag devondailyparcelquestexplained
# 326 "data/maps/OldaleWarehouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, WarehouseParcelNPC_Text_6, WarehouseParcelNPC_Text_7
# 327 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WarehouseParcelNPC_40
WarehouseParcelNPC_39:
# 332 "data/maps/OldaleWarehouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WarehouseParcelNPC_42
	goto WarehouseParcelNPC_34

WarehouseParcelNPC_37:
# 342 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_11
# 344 "data/maps/OldaleWarehouse/scripts.pory"
	goto endofdevonparcelquestnpc
	goto WarehouseParcelNPC_27

WarehouseParcelNPC_40:
# 329 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_8
	goto WarehouseParcelNPC_39

WarehouseParcelNPC_42:
# 333 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_9
# 335 "data/maps/OldaleWarehouse/scripts.pory"
	msgbox WarehouseParcelNPC_Text_10
# 337 "data/maps/OldaleWarehouse/scripts.pory"
	goto endofdevonparcelquestnpc
	goto WarehouseParcelNPC_34


# 47 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseManchine_Movement_0:
# 47 "data/maps/OldaleWarehouse/scripts.pory"
	emote_exclamation_mark
# 47 "data/maps/OldaleWarehouse/scripts.pory"
	face_player
	step_end

# 108 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseManchineTrigger_Movement_0:
# 108 "data/maps/OldaleWarehouse/scripts.pory"
	walk_right
	step_end

# 113 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseManchineTrigger_Movement_1:
# 113 "data/maps/OldaleWarehouse/scripts.pory"
	face_right
	step_end

# 114 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseManchineTrigger_Movement_2:
# 114 "data/maps/OldaleWarehouse/scripts.pory"
	face_left
	step_end

# 184 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseCarRebel2_Movement_0:
# 184 "data/maps/OldaleWarehouse/scripts.pory"
	walk_fast_right
# 184 "data/maps/OldaleWarehouse/scripts.pory"
	walk_fast_up
# 184 "data/maps/OldaleWarehouse/scripts.pory"
	walk_fast_up
# 184 "data/maps/OldaleWarehouse/scripts.pory"
	walk_fast_up
# 184 "data/maps/OldaleWarehouse/scripts.pory"
	walk_fast_up
# 184 "data/maps/OldaleWarehouse/scripts.pory"
	walk_fast_up
	step_end

# 203 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseCarRebel_Movement_0:
# 203 "data/maps/OldaleWarehouse/scripts.pory"
	walk_fast_up
# 203 "data/maps/OldaleWarehouse/scripts.pory"
	walk_fast_up
# 203 "data/maps/OldaleWarehouse/scripts.pory"
	walk_fast_up
# 203 "data/maps/OldaleWarehouse/scripts.pory"
	walk_fast_up
# 203 "data/maps/OldaleWarehouse/scripts.pory"
	walk_fast_up
	step_end

# 212 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseCarRebel_Movement_1:
# 212 "data/maps/OldaleWarehouse/scripts.pory"
	walk_in_place_fast_up
# 212 "data/maps/OldaleWarehouse/scripts.pory"
	walk_in_place_fast_up
# 212 "data/maps/OldaleWarehouse/scripts.pory"
	walk_in_place_fast_up
# 212 "data/maps/OldaleWarehouse/scripts.pory"
	walk_in_place_fast_up
# 212 "data/maps/OldaleWarehouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 223 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseCarRebel_Movement_2:
# 223 "data/maps/OldaleWarehouse/scripts.pory"
	emote_question_mark
# 223 "data/maps/OldaleWarehouse/scripts.pory"
	walk_in_place_right
# 223 "data/maps/OldaleWarehouse/scripts.pory"
	walk_in_place_left
# 223 "data/maps/OldaleWarehouse/scripts.pory"
	walk_in_place_right
# 223 "data/maps/OldaleWarehouse/scripts.pory"
	walk_in_place_left
# 223 "data/maps/OldaleWarehouse/scripts.pory"
	walk_in_place_down
	step_end

# 226 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseCarRebel_Movement_3:
# 226 "data/maps/OldaleWarehouse/scripts.pory"
	walk_in_place_up
	step_end

# 230 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseCarRebel_Movement_4:
# 230 "data/maps/OldaleWarehouse/scripts.pory"
	walk_in_place_down
	step_end

# 239 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseCarRebel_Movement_5:
# 239 "data/maps/OldaleWarehouse/scripts.pory"
	jump_in_place_down
	step_end

# 247 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseCarRebel_Movement_6:
# 247 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 247 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 247 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 247 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 247 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 247 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 247 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
	step_end

# 249 "data/maps/OldaleWarehouse/scripts.pory"
OldaleWarehouseCarRebel_Movement_7:
# 249 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 249 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 249 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 249 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 249 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 249 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 249 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
# 249 "data/maps/OldaleWarehouse/scripts.pory"
	walk_down
	step_end

# 278 "data/maps/OldaleWarehouse/scripts.pory"
DevonWarehouseWorkerForklift_Movement_0:
# 278 "data/maps/OldaleWarehouse/scripts.pory"
	face_player
	step_end

# 282 "data/maps/OldaleWarehouse/scripts.pory"
DevonWarehouseWorkerForklift_Movement_1:
# 282 "data/maps/OldaleWarehouse/scripts.pory"
	face_down
	step_end

OldaleWarehouseRebel1_Text_0:
# 14 "data/maps/OldaleWarehouse/scripts.pory"
	.string "When society goes to shit, it's easier\n"
	.string "to complain than to do something about\l"
	.string "it.\p"
	.string "We {COLOR RED}Rebels{COLOR DARK_GRAY} ARE doing something. So why\n"
	.string "are you getting in the way!?$"

OldaleWarehouseRebel2_Text_0:
# 29 "data/maps/OldaleWarehouse/scripts.pory"
	.string "You should just quit while you still can.\n"
	.string "Our {COLOR RED}Admin{COLOR DARK_GRAY} is going to wreck you.$"

OldaleWarehouseManchine_Text_0:
# 48 "data/maps/OldaleWarehouse/scripts.pory"
	.string "The haywire Manchine spots you and\n"
	.string "attacks!$"

OldaleWarehouseHelipip_Text_0:
# 129 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Piiiip...\p"
	.string "The Helipip is just blank staring ahead.$"

OldaleWarehouseLoadtad_Text_0:
# 141 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Tad-tad...!\p"
	.string "With no guidance, the Loadtad is\n"
	.string "aimlessly carrying a crate around.$"

OldaleWarehouseLoadtad_Text_1:
# 145 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Tad-tad...!\p"
	.string "The Loadtad has calmed down.$"

OldaleWarehouseForklift_Text_0:
# 152 "data/maps/OldaleWarehouse/scripts.pory"
	.string "The forklift shows signs of misuse.$"

OldaleWarehouseSealedbox_Text_0:
# 158 "data/maps/OldaleWarehouse/scripts.pory"
	.string "A sealed box. Better not to open it.$"

OldaleWarehouseToColdStorageSign_Text_0:
# 164 "data/maps/OldaleWarehouse/scripts.pory"
	.string "To Cold Storage.$"

OldaleWarehouseToApplianceStorageSign_Text_0:
# 170 "data/maps/OldaleWarehouse/scripts.pory"
	.string "To Appliance Storage.$"

OldaleWarehouseCarRebel2_Text_0:
# 181 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Hey, YOU!$"

OldaleWarehouseCarRebel2_Text_1:
# 186 "data/maps/OldaleWarehouse/scripts.pory"
	.string "You're in deep trouble now! My Electrike\n"
	.string "is in TOP SHAPE!$"

OldaleWarehouseCarRebel_Text_0:
# 215 "data/maps/OldaleWarehouse/scripts.pory"
	.string "IIIIIKE!$"

OldaleWarehouseCarRebel_Text_1:
# 225 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Wait... where's everyone?$"

OldaleWarehouseCarRebel_Text_2:
# 227 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Oh... you beat them? And they just...\n"
	.string "left? Without telling me?$"

OldaleWarehouseCarRebel_Text_3:
# 231 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Iiike...$"

OldaleWarehouseCarRebel_Text_4:
# 234 "data/maps/OldaleWarehouse/scripts.pory"
	.string "... wow, what a bunch of losers - right,\n"
	.string "Ike?$"

OldaleWarehouseCarRebel_Text_5:
# 236 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Let's go back to Petalburg, buddy. We'll\n"
	.string "make better pals.$"

OldaleWarehouseCarRebel_Text_6:
# 245 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Iiike!$"

DevonWarehouseWorkerLoadtad_Text_0:
# 270 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Easy now, boy... did the bad rebels scare\n"
	.string "you?$"

DevonWarehouseWorkerForklift_Text_0:
# 280 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Many forklifts have bumps all over... did\n"
	.string "they use them to race or something?\p"
	.string "Talk about childish...$"

WarehouseParcelNPC_Text_0:
# 295 "data/maps/OldaleWarehouse/scripts.pory"
	.string "The Loadtads are getting a bit nervous,\n"
	.string "so it's better to leave them alone for\l"
	.string "today.\p"
	.string "Come back tomorrow, if you want to help\n"
	.string "retrieve parcels again!$"

WarehouseParcelNPC_Text_1:
# 306 "data/maps/OldaleWarehouse/scripts.pory"
	.string "You're back! Interested in getting\n"
	.string "parcels from Loadtads?$"

WarehouseParcelNPC_Text_2:
# 309 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Hey there! You look like a resourceful\n"
	.string "trainer. Interested in a part-time job?$"

WarehouseParcelNPC_Text_3:
# 312 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Sure$"

WarehouseParcelNPC_Text_4:
# 312 "data/maps/OldaleWarehouse/scripts.pory"
	.string "No, thank you$"

WarehouseParcelNPC_Text_5:
# 317 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Great! You may have noticed, many of\n"
	.string "the Pokémon here are still hostile\l"
	.string "after the Rebel incident.\p"
	.string "It's the Loadtads in particular we need\n"
	.string "to wrangle ASAP, because they are\l"
	.string "carrying many of our parcels, and their\l"
	.string "delivery deadlines are closing in.\p"
	.string "That's where you come in. Get the\n"
	.string "parcels from the Loadtads - catch\l"
	.string "them, or snatch the parcels from them.\p"
	.string "For every parcel you give me, I'll give\n"
	.string "you a reward. Deal?$"

WarehouseParcelNPC_Text_6:
# 326 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Sounds good$"

WarehouseParcelNPC_Text_7:
# 326 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Sounds boring$"

WarehouseParcelNPC_Text_8:
# 329 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Great! Good luck with the parcel hunt!$"

WarehouseParcelNPC_Text_9:
# 333 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Boring? Buddy, work is rarely fun!\n"
	.string "That's why it's called work, and not ...\l"
	.string "play-time!$"

WarehouseParcelNPC_Text_10:
# 335 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Well, it's your loss. Come back if you\n"
	.string "change your mind!$"

WarehouseParcelNPC_Text_11:
# 342 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Great - well, you know how it goes! Get\n"
	.string "me some of the parcels the Loadtads in\l"
	.string "this floor have equipped!$"

WarehouseParcelNPC_Text_12:
# 357 "data/maps/OldaleWarehouse/scripts.pory"
	.string "What, no luck getting those parcels\n"
	.string "yet? Try a little harder!$"

WarehouseParcelNPC_Text_13:
# 365 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Hey, good job getting that parcel!\n"
	.string "Here's your reward!$"

WarehouseParcelNPC_Text_14:
# 374 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Those are very rare balls - you won't\n"
	.string "find them sold anywhere in the Rebel\l"
	.string "Zone!$"

WarehouseParcelNPC_Text_15:
# 376 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Very rare medicine - you won't find it\n"
	.string "sold anywhere in the Rebel Zone!$"

WarehouseRebel1_Intro::
# 20 "data/maps/OldaleWarehouse/scripts.pory"
	.string "“The system was not designed for\nyou to win...”\pThen we'll change the system!$"

WarehouseRebel1_Outro::
# 23 "data/maps/OldaleWarehouse/scripts.pory"
	.string "... design or not, I still lost. Tsk.$"

WarehouseRebel2_Intro::
# 34 "data/maps/OldaleWarehouse/scripts.pory"
	.string "An intruder suits me fine - was starting\nto get boring around here!$"

WarehouseRebel2_Outro::
# 37 "data/maps/OldaleWarehouse/scripts.pory"
	.string "Maybe the boredom was not so bad.$"
