# 1 "data/maps/OldaleWarehouseUpper/scripts.pory"


OldaleWarehouseUpper_MapScripts::
# 6 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 8 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 9 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
# 10 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TVOn
# 11 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TVOn
# 12 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TVOn
	.byte 0


WarehouseUpperEventMusic::
# 18 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_PYRITETOWN, TRUE
	return


TVOn::
# 22 "data/maps/OldaleWarehouseUpper/scripts.pory"
	special TurnOnTVScreen
	return


OldaleWarehouseUpperRebelEventEntrance::
# 26 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 27 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 28 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 29 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 30 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_0
# 31 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_0
# 32 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 33 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_1
# 35 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 36 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 38 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 39 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 40 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_2
OldaleWarehouseUpperRebelEventEntrance_1:
# 41 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_5
OldaleWarehouseUpperRebelEventEntrance_4:
# 42 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker NULL
# 45 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 46 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_METRONOME
# 47 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 48 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_5
# 49 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 50 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 51 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_8
OldaleWarehouseUpperRebelEventEntrance_7:
# 52 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_11
OldaleWarehouseUpperRebelEventEntrance_10:
# 54 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 55 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_5
# 56 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 57 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 58 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_6
# 59 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_7
# 60 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_8
# 61 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 62 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_7
# 64 "data/maps/OldaleWarehouseUpper/scripts.pory"
	trainerbattle_two_trainers TRAINER_REBELGRUNT_OLDALEWAREHOUSE_3, RebelGruntMWareHouseUpperOutro, TRAINER_REBELGRUNT_OLDALEWAREHOUSE_4, RebelGruntFWareHouseUpperOutro
# 65 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 66 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_8
# 67 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 70 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_10
# 73 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_11
# 74 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_12
# 75 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 76 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_9
# 78 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 79 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 80 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_10
# 81 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 82 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 83 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_11
# 84 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 86 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 88 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 89 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_15
# 90 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_16
# 91 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_16
# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_17
# 93 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_12
# 95 "data/maps/OldaleWarehouseUpper/scripts.pory"
	trainerbattle_no_intro TRAINER_REBELADMIN_OLDALEWAREHOUSE, RebelAdminWareHouseUpperOutro
# 97 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 98 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_13
# 99 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 100 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_7
# 102 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 103 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_18
# 104 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_14
# 105 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 106 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TAKE_DOWN
# 107 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_19
# 108 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 109 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TAKE_DOWN
# 110 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_19
# 111 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 113 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 114 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 115 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 117 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 118 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 119 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 121 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 122 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 123 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 125 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 126 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 127 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 5
# 129 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 130 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 131 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 6
# 133 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 134 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_15
# 136 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 137 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_14
OldaleWarehouseUpperRebelEventEntrance_13:
# 138 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_17
OldaleWarehouseUpperRebelEventEntrance_16:
# 139 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker NULL
# 142 "data/maps/OldaleWarehouseUpper/scripts.pory"
repeatwarehousetaurostackle:
# 143 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_18
# 148 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseUpperRebelEventEntrance_Text_19, OldaleWarehouseUpperRebelEventEntrance_Text_20
# 152 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_20
OldaleWarehouseUpperRebelEventEntrance_19:
# 171 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_23
OldaleWarehouseUpperRebelEventEntrance_22:
# 450 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	end

OldaleWarehouseUpperRebelEventEntrance_2:
# 40 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_1
	goto OldaleWarehouseUpperRebelEventEntrance_1

OldaleWarehouseUpperRebelEventEntrance_5:
# 41 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_2
	goto OldaleWarehouseUpperRebelEventEntrance_4

OldaleWarehouseUpperRebelEventEntrance_8:
# 51 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_3
	goto OldaleWarehouseUpperRebelEventEntrance_7

OldaleWarehouseUpperRebelEventEntrance_11:
# 52 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_4
	goto OldaleWarehouseUpperRebelEventEntrance_10

OldaleWarehouseUpperRebelEventEntrance_14:
# 137 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_16
	goto OldaleWarehouseUpperRebelEventEntrance_13

OldaleWarehouseUpperRebelEventEntrance_17:
# 138 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_17
	goto OldaleWarehouseUpperRebelEventEntrance_16

OldaleWarehouseUpperRebelEventEntrance_20:
# 153 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 154 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 155 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_21
# 156 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 157 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_21
# 158 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 159 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 160 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 161 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_22
# 162 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_22
# 164 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_23
# 165 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 166 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_18
# 167 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto repeatwarehousetaurostackle
	goto OldaleWarehouseUpperRebelEventEntrance_19

OldaleWarehouseUpperRebelEventEntrance_23:
# 172 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 173 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 174 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 175 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_21
# 176 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 177 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_21
# 178 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 179 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_JUMP_KICK
# 180 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 181 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_23
# 182 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_24
# 183 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 184 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 185 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_16
# 186 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 187 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 188 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_24
# 190 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_25
# 191 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 192 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 193 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_25
# 195 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 196 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_SWAGGER2
# 197 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_26
# 199 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 200 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_27
# 201 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TAKE_DOWN
# 202 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 203 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 206 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_28
# 209 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseUpperRebelEventEntrance_Text_29, OldaleWarehouseUpperRebelEventEntrance_Text_20
# 211 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_26
OldaleWarehouseUpperRebelEventEntrance_25:
# 282 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_28
	goto OldaleWarehouseUpperRebelEventEntrance_22

OldaleWarehouseUpperRebelEventEntrance_26:
# 212 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 213 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 214 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_27
# 215 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 216 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 217 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 219 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 220 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 222 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 223 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_31
OldaleWarehouseUpperRebelEventEntrance_30:
# 227 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_36
OldaleWarehouseUpperRebelEventEntrance_35:
# 231 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadeoutbgm 2
# 232 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 233 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_32
# 235 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 236 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 237 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 239 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 240 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 243 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 244 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 245 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 247 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 248 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 251 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 252 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 253 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 6
# 255 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 256 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_33
# 257 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 258 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_34
# 259 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_7
# 260 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_35
# 261 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_28
# 262 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_29
# 263 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 264 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 1
# 265 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 270 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_30
# 271 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_31
# 272 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 273 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 274 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 275 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 276 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_36
# 277 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadenewbgm 1
# 278 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 279 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto rebelsleaveupperwarehouse
	goto OldaleWarehouseUpperRebelEventEntrance_25

OldaleWarehouseUpperRebelEventEntrance_28:
# 283 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 284 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_27
# 285 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement
# 286 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 287 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 288 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 289 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 290 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 291 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_BIND
# 292 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 293 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_37
# 296 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 1, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseUpperRebelEventEntrance_Text_38
# 298 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_33
	goto OldaleWarehouseUpperRebelEventEntrance_22

OldaleWarehouseUpperRebelEventEntrance_31:
# 224 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_30
	goto OldaleWarehouseUpperRebelEventEntrance_30

OldaleWarehouseUpperRebelEventEntrance_33:
# 299 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_HEADBUTT
# 300 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 301 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 302 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 303 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 304 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 305 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 306 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 307 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 308 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 309 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 310 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 311 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_32
# 312 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_32
# 313 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 314 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_33
# 316 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 317 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_39
OldaleWarehouseUpperRebelEventEntrance_38:
# 318 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_42
OldaleWarehouseUpperRebelEventEntrance_41:
# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_34
# 321 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 322 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_35
# 323 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_METRONOME
# 324 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_36
# 327 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_41
# 328 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_7
# 329 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_37
# 330 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 331 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 1
# 333 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 334 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_BELLY_DRUM
# 335 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 336 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 337 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_VITAL_THROW2
# 338 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 339 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 340 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_EXPLOSION
# 341 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 343 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadeoutbgm 1
# 345 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_38
# 346 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 347 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_42
# 348 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TWISTER
# 349 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_43
# 352 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_39
# 353 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 354 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_44
# 355 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 356 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 357 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 358 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 359 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 360 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_45
OldaleWarehouseUpperRebelEventEntrance_44:
# 362 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_48
OldaleWarehouseUpperRebelEventEntrance_47:
# 364 "data/maps/OldaleWarehouseUpper/scripts.pory"
rebelsleaveupperwarehouse:
# 365 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_40
# 368 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 369 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 3
# 370 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 373 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_41
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 375 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 376 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 377 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 2
# 378 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 379 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_7
# 382 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_42
# 383 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 384 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 385 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 386 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_43
# 387 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_40
# 388 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 389 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 390 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 4
# 391 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 393 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_44
# 394 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 395 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 396 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 6
# 397 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 6
# 398 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 399 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_45
# 403 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 404 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 405 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 5
# 406 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 5
# 407 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 408 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_7
# 411 "data/maps/OldaleWarehouseUpper/scripts.pory"
	addobject 2
# 412 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setobjectxy 2, 2, 1
# 413 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_46
# 414 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 415 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 416 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 417 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 418 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 419 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_47
# 420 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 421 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker NULL
# 422 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_40
# 423 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 424 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 2
# 425 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 428 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadeoutbgm 1
# 429 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_UNDERPIZZA, TRUE
# 431 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag oldalewarehouserebelscleared
# 432 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag DLCclassends
# 433 "data/maps/OldaleWarehouseUpper/scripts.pory"
	clearflag DLCrecesstarts
# 434 "data/maps/OldaleWarehouseUpper/scripts.pory"
	clearflag cigarettepop
# 435 "data/maps/OldaleWarehouseUpper/scripts.pory"
	clearflag carrebelwarehouse
# 436 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag camelianotoutsideDLC
# 437 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag sharpynotinroute103
# 438 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag conartistescaped
# 439 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag devonbridgeguardgoestoconartist
# 440 "data/maps/OldaleWarehouseUpper/scripts.pory"
	clearflag FLAG_ITEM_OLDALE_BYTRUCK
# 441 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleWarehouseUpperRebelEventEntrance_22

OldaleWarehouseUpperRebelEventEntrance_36:
# 228 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_31
	goto OldaleWarehouseUpperRebelEventEntrance_35

OldaleWarehouseUpperRebelEventEntrance_39:
# 317 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_39
	goto OldaleWarehouseUpperRebelEventEntrance_38

OldaleWarehouseUpperRebelEventEntrance_42:
# 318 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_40
	goto OldaleWarehouseUpperRebelEventEntrance_41

OldaleWarehouseUpperRebelEventEntrance_45:
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_45
	goto OldaleWarehouseUpperRebelEventEntrance_44

OldaleWarehouseUpperRebelEventEntrance_48:
# 362 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_46
	goto OldaleWarehouseUpperRebelEventEntrance_47


WarehouseRebelAdminShake::
# 464 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8004, 2
# 465 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8005, 6
# 466 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8006, 4
# 467 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8007, 4
# 468 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_STRENGTH
# 469 "data/maps/OldaleWarehouseUpper/scripts.pory"
	special ShakeCamera
	return


WarehouseRebelAdminBigShake::
# 473 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8004, 4
# 474 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8005, 8
# 475 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8006, 8
# 476 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8007, 4
# 477 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_BRICK_BREAK
# 478 "data/maps/OldaleWarehouseUpper/scripts.pory"
	special ShakeCamera
	return


WarehouseDevonBallCrate::
# 484 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 1
	goto_if_le WarehouseDevonBallCrate_2
# 503 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseDevonBallCrate_Text_4
WarehouseDevonBallCrate_1:
# 506 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

WarehouseDevonBallCrate_2:
# 486 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSEDEVONBALLS, WarehouseDevonBallCrate_5
# 499 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseDevonBallCrate_Text_3
	goto WarehouseDevonBallCrate_1

WarehouseDevonBallCrate_5:
# 487 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseDevonBallCrate_Text_0
# 488 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, WarehouseDevonBallCrate_Text_1, WarehouseDevonBallCrate_Text_2
# 490 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WarehouseDevonBallCrate_9
WarehouseDevonBallCrate_8:
# 494 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WarehouseDevonBallCrate_11
	goto WarehouseDevonBallCrate_1

WarehouseDevonBallCrate_9:
# 491 "data/maps/OldaleWarehouseUpper/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 492 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEDEVONBALLS
	goto WarehouseDevonBallCrate_8

WarehouseDevonBallCrate_11:
# 494 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	goto WarehouseDevonBallCrate_1


OldaleWarehouseUpperComputer::
# 511 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 512 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperComputer_Text_0
# 513 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperBookshelves::
# 517 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 518 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperBookshelves_Text_0
# 519 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperMicrowave::
# 523 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 524 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperMicrowave_Text_0
# 525 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSEMICROWAVE, OldaleWarehouseUpperMicrowave_2
# 528 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperMicrowave_Text_1
OldaleWarehouseUpperMicrowave_1:
# 530 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

OldaleWarehouseUpperMicrowave_2:
# 526 "data/maps/OldaleWarehouseUpper/scripts.pory"
	giveitem ITEM_AERODACTYLITE
	goto OldaleWarehouseUpperMicrowave_1


OldaleWarehouseUpperLoadtadDoll::
# 534 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 535 "data/maps/OldaleWarehouseUpper/scripts.pory"
	givedecoration DECOR_LOTAD_DOLL
# 536 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 9
# 537 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSELOTADDOLL
# 538 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperMoneyBags::
# 542 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 543 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperMoneyBags_Text_0
# 544 "data/maps/OldaleWarehouseUpper/scripts.pory"
	showmoneybox 18, 0
# 545 "data/maps/OldaleWarehouseUpper/scripts.pory"
	addmoney 1000
# 546 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_SHOP
# 547 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 548 "data/maps/OldaleWarehouseUpper/scripts.pory"
	updatemoneybox
# 549 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperMoneyBags_Text_1
# 550 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 8
# 551 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEMONEYBAGS
# 552 "data/maps/OldaleWarehouseUpper/scripts.pory"
	hidemoneybox
# 553 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperExtinguisher::
# 558 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 559 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperExtinguisher_Text_0
# 560 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperPrinter::
# 564 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 565 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperPrinter_Text_0
# 567 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperCoffee::
# 571 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 572 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperCoffee_Text_0
# 573 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSECOFFEE, OldaleWarehouseUpperCoffee_2
# 576 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperCoffee_Text_1
OldaleWarehouseUpperCoffee_1:
# 578 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

OldaleWarehouseUpperCoffee_2:
# 574 "data/maps/OldaleWarehouseUpper/scripts.pory"
	giveitem ITEM_HEAL_POWDER
	goto OldaleWarehouseUpperCoffee_1


OldaleWarehouseUpperTrashcan::
# 582 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 583 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperTrashcan_Text_0
# 584 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSETRASHCAN, OldaleWarehouseUpperTrashcan_2
# 587 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperTrashcan_Text_1
OldaleWarehouseUpperTrashcan_1:
# 589 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

OldaleWarehouseUpperTrashcan_2:
# 585 "data/maps/OldaleWarehouseUpper/scripts.pory"
	giveitem ITEM_CLEAR_AMULET
	goto OldaleWarehouseUpperTrashcan_1


OldaleWarehouseUpperSafemonNotice::
# 593 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 594 "data/maps/OldaleWarehouseUpper/scripts.pory"
	showmonpic SPECIES_LOADTAD, 10, 3
# 595 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperSafemonNotice_Text_0
# 597 "data/maps/OldaleWarehouseUpper/scripts.pory"
	hidemonpic
# 598 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


# 30 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_0:
# 30 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_exclamation_mark
# 30 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 33 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_1:
# 33 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_exclamation_mark
# 33 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 35 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_2:
# 35 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_right
	step_end

# 45 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_3:
# 45 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 45 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 45 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 47 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_4:
# 47 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 48 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_5:
# 48 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_question_mark
# 48 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 54 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_6:
# 54 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
	step_end

# 59 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_7:
# 59 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 60 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_8:
# 60 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 60 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
	step_end

# 61 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_9:
# 61 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_down
	step_end

# 70 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_10:
# 70 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_diag_northwest
# 70 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_down
	step_end

# 73 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_11:
# 73 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 73 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 73 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_right
	step_end

# 74 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_12:
# 74 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 74 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 74 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 79 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_13:
# 79 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_left
	step_end

# 88 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_14:
# 88 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_left
	step_end

# 89 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_15:
# 89 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_down
	step_end

# 90 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_16:
# 90 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_up
	step_end

# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_17:
# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_right
	step_end

# 103 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_18:
# 103 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 103 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 103 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 103 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 103 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 107 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_19:
# 107 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_slow_left
	step_end

# 114 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_20:
# 114 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_exclamation_mark
	step_end

# 157 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_21:
# 157 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 157 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 157 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 157 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
	step_end

# 161 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_22:
# 161 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_2_left
# 161 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_2_right
	step_end

# 181 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_23:
# 181 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_down
# 181 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 182 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_24:
# 182 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 182 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 182 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
	step_end

# 190 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_25:
# 190 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 190 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 202 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_26:
# 202 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_slow_right
	step_end

# 214 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_27:
# 214 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
	step_end

# 261 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_28:
# 261 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_right
# 261 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_left
	step_end

# 262 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_29:
# 262 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_diag_northeast
# 262 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
	step_end

# 270 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_30:
# 270 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 270 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 271 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_31:
# 271 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 271 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 271 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 271 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_left
	step_end

# 312 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_32:
# 312 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_down
# 312 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_left
# 312 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_up
# 312 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_right
	step_end

# 314 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_33:
# 314 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_down
# 314 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_left
# 314 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_up
	step_end

# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_34:
# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_up
# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_left
# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_up
	step_end

# 322 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_35:
# 322 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_right
	step_end

# 324 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_36:
# 324 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_right
# 324 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_left
# 324 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_question_mark
	step_end

# 329 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_37:
# 329 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_up
	step_end

# 345 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_38:
# 345 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 345 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_up
	step_end

# 352 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_39:
# 352 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 352 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 352 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
	step_end

# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_40:
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 373 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_41:
# 373 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 373 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 373 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 373 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 373 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 373 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 382 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_42:
# 382 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 382 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 386 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_43:
# 386 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_2_right
	step_end

# 393 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_44:
# 393 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 393 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 393 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 393 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 393 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 393 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 393 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_45:
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 413 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_46:
# 413 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_down
	step_end

OldaleWarehouseUpperRebelEventEntrance_Text_0:
# 31 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hm? Who the hells are you?$"

OldaleWarehouseUpperRebelEventEntrance_Text_1:
# 40 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hey! It's him! That's the Littleroot\n"
	.string "chump! GET HIM!$"

OldaleWarehouseUpperRebelEventEntrance_Text_2:
# 41 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hey! It's her! That's the Littleroot\n"
	.string "chump! GET HER!$"

OldaleWarehouseUpperRebelEventEntrance_Text_3:
# 51 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "That's the guy...? Pfft! You're such a\n"
	.string "loser, Calvin!$"

OldaleWarehouseUpperRebelEventEntrance_Text_4:
# 52 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "That the girl...? Pfft! You're such a\n"
	.string "loser, Calvin!$"

OldaleWarehouseUpperRebelEventEntrance_Text_5:
# 55 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Wait... you beat Rick and Lola\n"
	.string "downstairs?\p"
	.string "Heh... perhaps this'll be fun.$"

OldaleWarehouseUpperRebelEventEntrance_Text_6:
# 58 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Jani, back me up! Let's do our COMBO!$"

OldaleWarehouseUpperRebelEventEntrance_Text_7:
# 62 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I told you, if you pull that crap one\n"
	.string "more time...!$"

OldaleWarehouseUpperRebelEventEntrance_Text_8:
# 66 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Stand aside, you punks!$"

OldaleWarehouseUpperRebelEventEntrance_Text_9:
# 76 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "You ain't gonna beat this one like that.\n"
	.string "The way you battle...\p"
	.string "You're an ex-soldier, aren't you? What,\n"
	.string "you're a merc sent by Devon?\p"
	.string "Eh, all the same. We'll use you to send a\n"
	.string "message to this town...$"

OldaleWarehouseUpperRebelEventEntrance_Text_10:
# 80 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "NO ONE...$"

OldaleWarehouseUpperRebelEventEntrance_Text_11:
# 83 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "MESSES...$"

OldaleWarehouseUpperRebelEventEntrance_Text_12:
# 93 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "WITH REBELS!$"

OldaleWarehouseUpperRebelEventEntrance_Text_13:
# 98 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Alright, you chump... if this were the old\n"
	.string "days, you'd have won already.$"

OldaleWarehouseUpperRebelEventEntrance_Text_14:
# 104 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Unlucky you, they ain't!!$"

OldaleWarehouseUpperRebelEventEntrance_Text_15:
# 134 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "T-that's the boss special! The TAUROS\n"
	.string "TAKE-DOWN!$"

OldaleWarehouseUpperRebelEventEntrance_Text_16:
# 137 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "This guy is done for!$"

OldaleWarehouseUpperRebelEventEntrance_Text_17:
# 138 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "This girl is done for!$"

OldaleWarehouseUpperRebelEventEntrance_Text_18:
# 143 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} prepares to tackle with all of\n"
	.string "his strength... what to do?$"

OldaleWarehouseUpperRebelEventEntrance_Text_19:
# 148 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Block$"

OldaleWarehouseUpperRebelEventEntrance_Text_20:
# 148 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Dodge$"

OldaleWarehouseUpperRebelEventEntrance_Text_21:
# 155 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Going to splat you flat! ORYAAAAH!$"

OldaleWarehouseUpperRebelEventEntrance_Text_22:
# 162 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The blow was impossible to block... and\n"
	.string "it was supereffective!$"

OldaleWarehouseUpperRebelEventEntrance_Text_23:
# 164 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Calvin was right - you're quite sturdy!\n"
	.string "But one more ought to do it!$"

OldaleWarehouseUpperRebelEventEntrance_Text_24:
# 188 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} can't stop his momentum, and\n"
	.string "slams himself against the wall!$"

OldaleWarehouseUpperRebelEventEntrance_Text_25:
# 193 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "B-boss! Are you alright!?$"

OldaleWarehouseUpperRebelEventEntrance_Text_26:
# 197 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Shut up, idiot! This is nothing, I just\n"
	.string "slipped! Ugh...$"

OldaleWarehouseUpperRebelEventEntrance_Text_27:
# 200 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "You... you're going to have it now! See if\n"
	.string "you can dodge this!$"

OldaleWarehouseUpperRebelEventEntrance_Text_28:
# 206 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} extends his arms for a wide,\n"
	.string "short-distance ram!$"

OldaleWarehouseUpperRebelEventEntrance_Text_29:
# 209 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Strike$"

OldaleWarehouseUpperRebelEventEntrance_Text_30:
# 224 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} receives a crutch strike in\n"
	.string "his wide-open chest!$"

OldaleWarehouseUpperRebelEventEntrance_Text_31:
# 228 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} receives a kick in his\n"
	.string "wide-open chest!$"

OldaleWarehouseUpperRebelEventEntrance_Text_32:
# 233 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "G-gah...!$"

OldaleWarehouseUpperRebelEventEntrance_Text_33:
# 256 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Heh... you're a tough merch. Tsk...$"

OldaleWarehouseUpperRebelEventEntrance_Text_34:
# 258 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "You want this place so badly? Whatever.\n"
	.string "We're done with it anyway.$"

OldaleWarehouseUpperRebelEventEntrance_Text_35:
# 260 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "PACK IT UP, REBELS! We're going back to\n"
	.string "{COLOR GREEN}PETALBURG!$"

OldaleWarehouseUpperRebelEventEntrance_Text_36:
# 276 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Y-you heard the boss! Back to base!$"

OldaleWarehouseUpperRebelEventEntrance_Text_37:
# 293 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} has {PLAYER} in a wrestling\n"
	.string "grapple!$"

OldaleWarehouseUpperRebelEventEntrance_Text_38:
# 296 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Headbutt!$"

OldaleWarehouseUpperRebelEventEntrance_Text_39:
# 317 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "L-let me at him... where's the...\n"
	.string "t-werp...!?$"

OldaleWarehouseUpperRebelEventEntrance_Text_40:
# 318 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "L-let me at her... where's the...\n"
	.string "t-werp...!?$"

OldaleWarehouseUpperRebelEventEntrance_Text_41:
# 327 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Uhm... boss? You're going to Tauros\n"
	.string "Tackle from downstairs?$"

OldaleWarehouseUpperRebelEventEntrance_Text_42:
# 347 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Oouuch...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleWarehouseUpperRebelEventEntrance_Text_43:
# 349 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "...$"

OldaleWarehouseUpperRebelEventEntrance_Text_44:
# 354 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A-as the second in command, I say...$"

OldaleWarehouseUpperRebelEventEntrance_Text_45:
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I told you this guy was too strong!\n"
	.string "RUUUUN!$"

OldaleWarehouseUpperRebelEventEntrance_Text_46:
# 362 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I told you this girl was too strong!\n"
	.string "RUUUUN!$"

OldaleWarehouseUpperRebelEventEntrance_Text_47:
# 419 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "T-this is not over yet! You'll regret\n"
	.string "getting on our bad side, twerp!$"

WarehouseDevonBallCrate_Text_0:
# 487 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "There's a few unsealed balls in the\n"
	.string "crates. No one will miss them...$"

WarehouseDevonBallCrate_Text_1:
# 488 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Take them$"

WarehouseDevonBallCrate_Text_2:
# 488 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Leave$"

WarehouseDevonBallCrate_Text_3:
# 499 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Can't take all of the Devon Balls...$"

WarehouseDevonBallCrate_Text_4:
# 503 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A crate full of Devon Balls, still sealed.$"

OldaleWarehouseUpperComputer_Text_0:
# 512 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "The desktop's background features the\n"
	.string "warehouse's logo: a smiling Loadtad.$"

OldaleWarehouseUpperBookshelves_Text_0:
# 518 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "It's full of accounting books and\n"
	.string "company guidelines.$"

OldaleWarehouseUpperMicrowave_Text_0:
# 524 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "It's a microwave. There's some reheated\n"
	.string "food inside...$"

OldaleWarehouseUpperMicrowave_Text_1:
# 528 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "The microwave is empty.$"

OldaleWarehouseUpperMoneyBags_Text_0:
# 543 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Seems the Rebels forgot some of their\n"
	.string "loot...$"

OldaleWarehouseUpperMoneyBags_Text_1:
# 549 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Received 5000¥!$"

OldaleWarehouseUpperExtinguisher_Text_0:
# 559 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A regular fire extinguisher.$"

OldaleWarehouseUpperPrinter_Text_0:
# 565 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "There's many copies of a picture of\n"
	.string "Mister Stone.\p"
	.string "The image has been edited to make him\n"
	.string "look like a Mr. Mime.$"

OldaleWarehouseUpperCoffee_Text_0:
# 572 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "For some reason, there's a can of\n"
	.string "coffee by the coffee machine...$"

OldaleWarehouseUpperCoffee_Text_1:
# 576 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A coffee machine, Chesto brand.$"

OldaleWarehouseUpperTrashcan_Text_0:
# 583 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "There's something here with footprints\n"
	.string "all over it...$"

OldaleWarehouseUpperTrashcan_Text_1:
# 587 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "The trash can is empty.$"

OldaleWarehouseUpperSafemonNotice_Text_0:
# 595 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR BLUE}Safemon Notice{COLOR DARK_GRAY}: To assist conditioning,\n"
	.string "do not feed Loadtads until end of\l"
	.string "shift!$"

RebelGruntMWareHouseUpperOutro::
# 454 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "If Cheerorb could use Self-Destruct... \nwe would have won!$"

RebelGruntFWareHouseUpperOutro::
# 457 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "... you're paying for my Devon Center\nfee.$"

RebelAdminWareHouseUpperOutro::
# 460 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Heh... this isn't over.$"
