# 1 "data/maps/OldaleWarehouseUpper/scripts.pory"


OldaleWarehouseUpper_MapScripts::
# 6 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 7 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, WarehouseUpperEventMusic
# 8 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 9 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
	.byte 0


WarehouseUpperEventMusic::
# 14 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_PYRITETOWN, TRUE
	return


OldaleWarehouseUpperRebelEventEntrance::
# 18 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 19 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 20 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 21 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 22 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_0
# 23 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_0
# 24 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 25 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_1
# 27 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 28 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 30 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 31 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 32 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_2
OldaleWarehouseUpperRebelEventEntrance_1:
# 33 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_5
OldaleWarehouseUpperRebelEventEntrance_4:
# 34 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker NULL
# 37 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 38 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_METRONOME
# 39 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 40 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_5
# 41 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 42 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 43 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_8
OldaleWarehouseUpperRebelEventEntrance_7:
# 44 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_11
OldaleWarehouseUpperRebelEventEntrance_10:
# 46 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 47 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_5
# 48 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 49 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_6
# 50 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_7
# 51 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_8
# 52 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_7
# 54 "data/maps/OldaleWarehouseUpper/scripts.pory"
	trainerbattle_two_trainers TRAINER_REBELGRUNT_OLDALEWAREHOUSE_3, RebelGruntMWareHouseUpperOutro, TRAINER_REBELGRUNT_OLDALEWAREHOUSE_4, RebelGruntFWareHouseUpperOutro
# 55 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 56 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_8
# 57 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 60 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 63 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_10
# 64 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_11
# 65 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 66 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_9
# 68 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 69 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_12
# 70 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_10
# 71 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_12
# 72 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 73 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_11
# 74 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 76 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_12
# 78 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 79 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 80 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_15
# 81 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_15
# 82 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_12
# 84 "data/maps/OldaleWarehouseUpper/scripts.pory"
	trainerbattle_no_intro TRAINER_REBELADMIN_OLDALEWAREHOUSE, RebelAdminWareHouseUpperOutro
# 86 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 87 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_13
# 88 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_16
# 89 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_17
# 91 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_18
# 93 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_14
# 94 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 95 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TAKE_DOWN
# 96 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_19
# 97 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 98 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TAKE_DOWN
# 99 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_19
# 100 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 102 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 103 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 104 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 106 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 107 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 108 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 110 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 111 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 112 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 114 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 115 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 116 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 5
# 118 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 119 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 120 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 6
# 122 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 123 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_15
# 125 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 126 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_14
OldaleWarehouseUpperRebelEventEntrance_13:
# 127 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_17
OldaleWarehouseUpperRebelEventEntrance_16:
# 128 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker NULL
# 131 "data/maps/OldaleWarehouseUpper/scripts.pory"
repeatwarehousetaurostackle:
# 132 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_18
# 137 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseUpperRebelEventEntrance_Text_19, OldaleWarehouseUpperRebelEventEntrance_Text_20
# 141 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_20
OldaleWarehouseUpperRebelEventEntrance_19:
# 160 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_23
OldaleWarehouseUpperRebelEventEntrance_22:
# 407 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	end

OldaleWarehouseUpperRebelEventEntrance_2:
# 32 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_1
	goto OldaleWarehouseUpperRebelEventEntrance_1

OldaleWarehouseUpperRebelEventEntrance_5:
# 33 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_2
	goto OldaleWarehouseUpperRebelEventEntrance_4

OldaleWarehouseUpperRebelEventEntrance_8:
# 43 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_3
	goto OldaleWarehouseUpperRebelEventEntrance_7

OldaleWarehouseUpperRebelEventEntrance_11:
# 44 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_4
	goto OldaleWarehouseUpperRebelEventEntrance_10

OldaleWarehouseUpperRebelEventEntrance_14:
# 126 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_16
	goto OldaleWarehouseUpperRebelEventEntrance_13

OldaleWarehouseUpperRebelEventEntrance_17:
# 127 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_17
	goto OldaleWarehouseUpperRebelEventEntrance_16

OldaleWarehouseUpperRebelEventEntrance_20:
# 142 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 143 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 144 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_21
# 145 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 146 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_21
# 147 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 148 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 149 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 150 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_22
# 151 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_22
# 153 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_23
# 154 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 155 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_23
# 156 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto repeatwarehousetaurostackle
	goto OldaleWarehouseUpperRebelEventEntrance_19

OldaleWarehouseUpperRebelEventEntrance_23:
# 161 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 162 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 163 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 164 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_21
# 165 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 166 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_21
# 167 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 168 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_JUMP_KICK
# 169 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_24
# 170 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_25
# 171 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 172 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_15
# 173 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 174 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 175 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 176 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_24
# 179 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 180 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 181 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_25
# 183 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_27
# 184 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_SWAGGER2
# 185 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_26
# 187 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 188 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_27
# 190 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_28
# 191 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 192 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TAKE_DOWN
# 194 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_28
# 197 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseUpperRebelEventEntrance_Text_29, OldaleWarehouseUpperRebelEventEntrance_Text_20
# 199 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_26
OldaleWarehouseUpperRebelEventEntrance_25:
# 266 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_28
	goto OldaleWarehouseUpperRebelEventEntrance_22

OldaleWarehouseUpperRebelEventEntrance_26:
# 200 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 201 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_29
# 202 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 203 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 204 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 206 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 207 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 209 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 210 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_31
OldaleWarehouseUpperRebelEventEntrance_30:
# 214 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_36
OldaleWarehouseUpperRebelEventEntrance_35:
# 218 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadeoutbgm 2
# 219 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_28
# 220 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_32
# 222 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 223 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 224 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 226 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 227 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 230 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 231 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 232 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 234 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 235 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 238 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 239 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 240 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 6
# 242 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 243 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_33
# 244 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_27
# 245 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_34
# 246 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_7
# 247 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_35
# 249 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_30
# 250 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 1
# 251 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 252 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_31
# 254 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadenewbgm 1
# 255 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_UNDERPIZZA, TRUE
# 257 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_32
# 258 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 259 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_36
# 260 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 261 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 263 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto rebelsleaveupperwarehouse
	goto OldaleWarehouseUpperRebelEventEntrance_25

OldaleWarehouseUpperRebelEventEntrance_28:
# 267 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 268 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_29
# 269 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement
# 270 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 271 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 272 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 273 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_28
# 274 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_BIND
# 275 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 276 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_37
# 279 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 1, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseUpperRebelEventEntrance_Text_38
# 281 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_33
	goto OldaleWarehouseUpperRebelEventEntrance_22

OldaleWarehouseUpperRebelEventEntrance_31:
# 211 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_30
	goto OldaleWarehouseUpperRebelEventEntrance_30

OldaleWarehouseUpperRebelEventEntrance_33:
# 282 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_HEADBUTT
# 283 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 284 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_28
# 285 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 286 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 287 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 288 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 289 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 290 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 291 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_32
# 292 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_33
# 293 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 294 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_34
# 296 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 297 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_39
OldaleWarehouseUpperRebelEventEntrance_38:
# 298 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_42
OldaleWarehouseUpperRebelEventEntrance_41:
# 300 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_35
# 301 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 302 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_36
# 303 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_31
# 304 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_METRONOME
# 305 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_37
# 307 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_41
# 308 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_38
# 309 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 310 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 1
# 312 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 313 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_BELLY_DRUM
# 314 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 315 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 316 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_VITAL_THROW2
# 317 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 318 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 319 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_EXPLOSION
# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 322 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadeoutbgm 1
# 324 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_39
# 325 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 326 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_42
# 327 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TWISTER
# 328 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_43
# 331 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_32
# 332 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 333 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_44
# 334 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 335 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 336 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 338 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 339 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_45
OldaleWarehouseUpperRebelEventEntrance_44:
# 340 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_48
OldaleWarehouseUpperRebelEventEntrance_47:
# 342 "data/maps/OldaleWarehouseUpper/scripts.pory"
rebelsleaveupperwarehouse:
# 343 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 344 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_40
# 345 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 346 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 3
# 347 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 350 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_41
# 351 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 352 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 353 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 2
# 354 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 357 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_42
# 358 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 359 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 360 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_43
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_40
# 362 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 363 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 364 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 4
# 365 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_44
# 368 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 369 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 6
# 370 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 6
# 371 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_45
# 375 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 376 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 5
# 377 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 5
# 378 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 381 "data/maps/OldaleWarehouseUpper/scripts.pory"
	addobject 2
# 382 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setobjectxy 2, 2, 1
# 383 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_46
# 384 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 385 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 386 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_47
# 387 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker NULL
# 388 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_40
# 389 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 390 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 2
# 391 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 394 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadeoutbgm 1
# 395 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_UNDERPIZZA, TRUE
# 397 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag oldalewarehouserebelscleared
# 398 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleWarehouseUpperRebelEventEntrance_22

OldaleWarehouseUpperRebelEventEntrance_36:
# 215 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_31
	goto OldaleWarehouseUpperRebelEventEntrance_35

OldaleWarehouseUpperRebelEventEntrance_39:
# 297 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_39
	goto OldaleWarehouseUpperRebelEventEntrance_38

OldaleWarehouseUpperRebelEventEntrance_42:
# 298 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_40
	goto OldaleWarehouseUpperRebelEventEntrance_41

OldaleWarehouseUpperRebelEventEntrance_45:
# 339 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_45
	goto OldaleWarehouseUpperRebelEventEntrance_44

OldaleWarehouseUpperRebelEventEntrance_48:
# 340 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_46
	goto OldaleWarehouseUpperRebelEventEntrance_47


WarehouseRebelAdminShake::
# 421 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8004, 2
# 422 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8005, 6
# 423 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8006, 4
# 424 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8007, 4
# 425 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_STRENGTH
# 426 "data/maps/OldaleWarehouseUpper/scripts.pory"
	special ShakeCamera
	return


WarehouseRebelAdminBigShake::
# 430 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8004, 4
# 431 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8005, 8
# 432 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8006, 8
# 433 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8007, 4
# 434 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_BRICK_BREAK
# 435 "data/maps/OldaleWarehouseUpper/scripts.pory"
	special ShakeCamera
	return


# 22 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_0:
# 22 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_exclamation_mark
# 22 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 25 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_1:
# 25 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_exclamation_mark
# 25 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 27 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_2:
# 27 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_right
	step_end

# 37 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_3:
# 37 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 37 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 37 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 39 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_4:
# 39 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 40 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_5:
# 40 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_question_mark
# 40 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 46 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_6:
# 46 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
	step_end

# 50 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_7:
# 50 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 51 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_8:
# 51 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 51 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
	step_end

# 60 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_9:
# 60 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_diag_northwest
# 60 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_down
	step_end

# 63 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_10:
# 63 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 63 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 63 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_right
	step_end

# 64 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_11:
# 64 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 64 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 64 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 69 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_12:
# 69 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_left
	step_end

# 78 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_13:
# 78 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_left
	step_end

# 79 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_14:
# 79 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_down
	step_end

# 80 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_15:
# 80 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_up
	step_end

# 88 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_16:
# 88 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_right
	step_end

# 89 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_17:
# 89 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_up
	step_end

# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_18:
# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 96 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_19:
# 96 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_slow_left
	step_end

# 103 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_20:
# 103 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_exclamation_mark
	step_end

# 146 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_21:
# 146 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 146 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 146 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 146 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
	step_end

# 150 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_22:
# 150 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_2_left
# 150 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_2_right
	step_end

# 155 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_23:
# 155 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 155 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 155 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 155 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
	step_end

# 169 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_24:
# 169 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_down
# 169 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 170 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_25:
# 170 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 170 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 170 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
	step_end

# 175 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_26:
# 175 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 175 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 183 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_27:
# 183 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_down
	step_end

# 190 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_28:
# 190 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_slow_right
	step_end

# 201 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_29:
# 201 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
	step_end

# 249 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_30:
# 249 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_diag_northeast
# 249 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
	step_end

# 252 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_31:
# 252 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_right
# 252 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_left
	step_end

# 257 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_32:
# 257 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 257 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 257 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
	step_end

# 292 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_33:
# 292 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_down
# 292 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_left
# 292 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_up
# 292 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_right
	step_end

# 294 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_34:
# 294 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_down
# 294 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_left
# 294 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_up
	step_end

# 300 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_35:
# 300 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_up
# 300 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_left
# 300 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_up
	step_end

# 302 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_36:
# 302 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_right
	step_end

# 305 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_37:
# 305 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_question_mark
	step_end

# 308 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_38:
# 308 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_up
	step_end

# 324 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_39:
# 324 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 324 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_up
	step_end

# 344 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_40:
# 344 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 350 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_41:
# 350 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 350 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 350 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 350 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 350 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 350 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 357 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_42:
# 357 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 357 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 360 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_43:
# 360 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_2_right
	step_end

# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_44:
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_45:
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 383 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_46:
# 383 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_down
	step_end

OldaleWarehouseUpperRebelEventEntrance_Text_0:
# 23 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hm? Who the hells are you?$"

OldaleWarehouseUpperRebelEventEntrance_Text_1:
# 32 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hey! It's him! That's the Littleroot\n"
	.string "chump! GET HIM!$"

OldaleWarehouseUpperRebelEventEntrance_Text_2:
# 33 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hey! It's her! That's the Littleroot\n"
	.string "chump! GET HER!$"

OldaleWarehouseUpperRebelEventEntrance_Text_3:
# 43 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "That's the guy...? Pfft! You're such a\n"
	.string "loser, Calvin!$"

OldaleWarehouseUpperRebelEventEntrance_Text_4:
# 44 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "That the girl...? Pfft! You're such a\n"
	.string "loser, Calvin!$"

OldaleWarehouseUpperRebelEventEntrance_Text_5:
# 47 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Wait... you beat Rick and Lola\n"
	.string "downstairs?\p"
	.string "Heh... perhaps this'll be fun.$"

OldaleWarehouseUpperRebelEventEntrance_Text_6:
# 49 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Jani, back me up! Let's do our COMBO!$"

OldaleWarehouseUpperRebelEventEntrance_Text_7:
# 52 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I told you, if you pull that crap one\n"
	.string "more time...!$"

OldaleWarehouseUpperRebelEventEntrance_Text_8:
# 56 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Stand aside, you punks!$"

OldaleWarehouseUpperRebelEventEntrance_Text_9:
# 66 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "You ain't gonna beat this one like that.\n"
	.string "The way you battle...\p"
	.string "You're an ex-soldier, aren't you? What,\n"
	.string "you're a merc sent by Devon?\p"
	.string "Eh, all the same. We'll use you to send a\n"
	.string "message to this town...$"

OldaleWarehouseUpperRebelEventEntrance_Text_10:
# 70 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "NO ONE...$"

OldaleWarehouseUpperRebelEventEntrance_Text_11:
# 73 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "MESSES...$"

OldaleWarehouseUpperRebelEventEntrance_Text_12:
# 82 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "WITH REBELS!$"

OldaleWarehouseUpperRebelEventEntrance_Text_13:
# 87 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Alright, you chump... if this were the old\n"
	.string "days, you'd have won already.$"

OldaleWarehouseUpperRebelEventEntrance_Text_14:
# 93 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Unlucky you, they ain't!!$"

OldaleWarehouseUpperRebelEventEntrance_Text_15:
# 123 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "T-that's the boss special! The TAUROS\n"
	.string "TAKE-DOWN!$"

OldaleWarehouseUpperRebelEventEntrance_Text_16:
# 126 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "This guy is done for!$"

OldaleWarehouseUpperRebelEventEntrance_Text_17:
# 127 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "This girl is done for!$"

OldaleWarehouseUpperRebelEventEntrance_Text_18:
# 132 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} prepares to tackle with all of\n"
	.string "his strength... what to do?$"

OldaleWarehouseUpperRebelEventEntrance_Text_19:
# 137 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Block$"

OldaleWarehouseUpperRebelEventEntrance_Text_20:
# 137 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Dodge$"

OldaleWarehouseUpperRebelEventEntrance_Text_21:
# 144 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Going to splat you flat! ORYAAAAH!$"

OldaleWarehouseUpperRebelEventEntrance_Text_22:
# 151 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The blow was impossible to block... and\n"
	.string "it was supereffective!$"

OldaleWarehouseUpperRebelEventEntrance_Text_23:
# 153 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Calvin was right - you're quite sturdy!\n"
	.string "But one more ought to do it!$"

OldaleWarehouseUpperRebelEventEntrance_Text_24:
# 176 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} can't stop his momentum, and\n"
	.string "slams himself against the wall!$"

OldaleWarehouseUpperRebelEventEntrance_Text_25:
# 181 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "B-boss! Are you alright!?$"

OldaleWarehouseUpperRebelEventEntrance_Text_26:
# 185 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Shut up, idiot! This is nothing, I just\n"
	.string "slipped! Ugh...$"

OldaleWarehouseUpperRebelEventEntrance_Text_27:
# 188 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "You... you're going to have it now! See if\n"
	.string "you can dodge this!$"

OldaleWarehouseUpperRebelEventEntrance_Text_28:
# 194 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} extends his arms for a wide,\n"
	.string "short-distance ram!$"

OldaleWarehouseUpperRebelEventEntrance_Text_29:
# 197 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Strike$"

OldaleWarehouseUpperRebelEventEntrance_Text_30:
# 211 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} receives a crutch strike in\n"
	.string "his wide-open chest!$"

OldaleWarehouseUpperRebelEventEntrance_Text_31:
# 215 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} receives a kick in his\n"
	.string "wide-open chest!$"

OldaleWarehouseUpperRebelEventEntrance_Text_32:
# 220 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "G-gah...!$"

OldaleWarehouseUpperRebelEventEntrance_Text_33:
# 243 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Heh... you're a tough merch. Tsk...$"

OldaleWarehouseUpperRebelEventEntrance_Text_34:
# 245 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "You want this place so badly? Whatever.\n"
	.string "We're done with it anyway.$"

OldaleWarehouseUpperRebelEventEntrance_Text_35:
# 247 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "PACK IT UP, REBELS! We're going back to\n"
	.string "{COLOR GREEN}PETALBURG!$"

OldaleWarehouseUpperRebelEventEntrance_Text_36:
# 259 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Y-you heard the boss! Back to base!$"

OldaleWarehouseUpperRebelEventEntrance_Text_37:
# 276 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} has {PLAYER} in a wrestling\n"
	.string "grapple!$"

OldaleWarehouseUpperRebelEventEntrance_Text_38:
# 279 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Headbutt!$"

OldaleWarehouseUpperRebelEventEntrance_Text_39:
# 297 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "L-let me at him... where's the...\n"
	.string "t-werp...!?$"

OldaleWarehouseUpperRebelEventEntrance_Text_40:
# 298 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "L-let me at her... where's the...\n"
	.string "t-werp...!?$"

OldaleWarehouseUpperRebelEventEntrance_Text_41:
# 307 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Uhm... boss? You're going to Tauros\n"
	.string "Tackle from downstairs?$"

OldaleWarehouseUpperRebelEventEntrance_Text_42:
# 326 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Oouuch...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleWarehouseUpperRebelEventEntrance_Text_43:
# 328 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "...$"

OldaleWarehouseUpperRebelEventEntrance_Text_44:
# 333 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A-as the second in command, I say...$"

OldaleWarehouseUpperRebelEventEntrance_Text_45:
# 339 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I told you this guy was too strong!\n"
	.string "RUUUUN!$"

OldaleWarehouseUpperRebelEventEntrance_Text_46:
# 340 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I told you this girl was too strong!\n"
	.string "RUUUUN!$"

OldaleWarehouseUpperRebelEventEntrance_Text_47:
# 386 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "T-this is not over yet! You'll regret\n"
	.string "getting on our bad side, twerp!$"

RebelGruntMWareHouseUpperOutro::
# 411 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "If Cheerorb could use Self-Destruct... \nwe would have won!$"

RebelGruntFWareHouseUpperOutro::
# 414 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "... you're paying for my Devon Center\nfee.$"

RebelAdminWareHouseUpperOutro::
# 417 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Heh... this isn't over.$"
