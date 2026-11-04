# 1 "data/maps/OldaleWarehouseUpper/scripts.pory"


OldaleWarehouseUpper_MapScripts::
# 6 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OldaleWarehouseUpperMapscriptbundle
# 8 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleWarehouseUpperMapscriptbundle
# 9 "data/maps/OldaleWarehouseUpper/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleWarehouseUpperMapscriptbundle
	.byte 0


OldaleWarehouseUpperMapscriptbundle::
# 13 "data/maps/OldaleWarehouseUpper/scripts.pory"
	special TurnOnTVScreen
# 15 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto DayNightAmbientLight
	return


WarehouseUpperEventMusic::
# 20 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_PYRITETOWN, TRUE
	return


TVOn::
# 24 "data/maps/OldaleWarehouseUpper/scripts.pory"
	special TurnOnTVScreen
	return


OldaleWarehouseUpperRebelEventEntrance::
# 28 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 29 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 30 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 31 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 32 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_0
# 34 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_2
# 41 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_1
# 42 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_2
OldaleWarehouseUpperRebelEventEntrance_1:
# 44 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 45 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 47 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 49 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_6
# 55 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_4
OldaleWarehouseUpperRebelEventEntrance_5:
# 56 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker NULL
# 58 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 59 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_METRONOME
# 60 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 62 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_10
# 64 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_6
OldaleWarehouseUpperRebelEventEntrance_9:
# 67 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 69 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_17
# 75 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_7
OldaleWarehouseUpperRebelEventEntrance_16:
# 77 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_7
# 79 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_23
# 82 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_9
OldaleWarehouseUpperRebelEventEntrance_22:
# 85 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 86 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 88 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_30
# 91 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_11
OldaleWarehouseUpperRebelEventEntrance_29:
# 93 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 94 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_8
# 95 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 97 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_36
# 100 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_13
OldaleWarehouseUpperRebelEventEntrance_35:
# 103 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag lost1stfightoldalewarehouseupper
# 104 "data/maps/OldaleWarehouseUpper/scripts.pory"
	trainerbattle_two_trainers TRAINER_REBELGRUNT_OLDALEWAREHOUSE_3, RebelGruntMWareHouseUpperOutro, TRAINER_REBELGRUNT_OLDALEWAREHOUSE_4, RebelGruntFWareHouseUpperOutro
# 105 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 108 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_14
# 109 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 112 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_10
# 115 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_11
# 116 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_12
# 117 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 119 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost2ndfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_40
# 123 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_16
OldaleWarehouseUpperRebelEventEntrance_39:
# 125 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 126 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 127 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_17
# 128 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 129 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 130 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_18
# 131 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 133 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 135 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 136 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_15
# 137 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_16
# 138 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_16
# 139 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_17
# 140 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 9, OldaleWarehouseUpperRebelEventEntrance_Movement_15
# 141 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_19
# 143 "data/maps/OldaleWarehouseUpper/scripts.pory"
	trainerbattle_no_intro TRAINER_REBELADMIN_OLDALEWAREHOUSE, RebelAdminWareHouseUpperOutro
# 145 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 146 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_20
# 147 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 148 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 150 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 151 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_18
# 152 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_21
# 153 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 154 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TAKE_DOWN
# 155 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_19
# 156 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 157 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TAKE_DOWN
# 158 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_19
# 159 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 161 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 162 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 163 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 165 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 166 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 167 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 169 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 170 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 171 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 173 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 174 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 175 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 5
# 177 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 178 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 179 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 6
# 181 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 182 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_22
# 184 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 185 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_44
OldaleWarehouseUpperRebelEventEntrance_43:
# 186 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_47
OldaleWarehouseUpperRebelEventEntrance_46:
# 187 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker NULL
# 190 "data/maps/OldaleWarehouseUpper/scripts.pory"
repeatwarehousetaurostackle:
# 191 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_25
# 196 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseUpperRebelEventEntrance_Text_26, OldaleWarehouseUpperRebelEventEntrance_Text_27
# 200 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_50
OldaleWarehouseUpperRebelEventEntrance_49:
# 219 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_53
OldaleWarehouseUpperRebelEventEntrance_52:
# 514 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	end

OldaleWarehouseUpperRebelEventEntrance_2:
# 35 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_0
# 36 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 37 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_1
	goto OldaleWarehouseUpperRebelEventEntrance_1

OldaleWarehouseUpperRebelEventEntrance_6:
# 50 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 51 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_14
OldaleWarehouseUpperRebelEventEntrance_13:
# 52 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_20
	goto OldaleWarehouseUpperRebelEventEntrance_5

OldaleWarehouseUpperRebelEventEntrance_10:
# 63 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_5
	goto OldaleWarehouseUpperRebelEventEntrance_9

OldaleWarehouseUpperRebelEventEntrance_14:
# 51 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_2
	goto OldaleWarehouseUpperRebelEventEntrance_13

OldaleWarehouseUpperRebelEventEntrance_17:
# 71 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 72 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_27
OldaleWarehouseUpperRebelEventEntrance_26:
# 73 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_33
	goto OldaleWarehouseUpperRebelEventEntrance_16

OldaleWarehouseUpperRebelEventEntrance_20:
# 52 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_3
	goto OldaleWarehouseUpperRebelEventEntrance_5

OldaleWarehouseUpperRebelEventEntrance_23:
# 80 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_8
	goto OldaleWarehouseUpperRebelEventEntrance_22

OldaleWarehouseUpperRebelEventEntrance_27:
# 72 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_5
	goto OldaleWarehouseUpperRebelEventEntrance_26

OldaleWarehouseUpperRebelEventEntrance_30:
# 89 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_10
	goto OldaleWarehouseUpperRebelEventEntrance_29

OldaleWarehouseUpperRebelEventEntrance_33:
# 73 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_6
	goto OldaleWarehouseUpperRebelEventEntrance_16

OldaleWarehouseUpperRebelEventEntrance_36:
# 98 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_12
	goto OldaleWarehouseUpperRebelEventEntrance_35

OldaleWarehouseUpperRebelEventEntrance_40:
# 120 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_15
	goto OldaleWarehouseUpperRebelEventEntrance_39

OldaleWarehouseUpperRebelEventEntrance_44:
# 185 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_23
	goto OldaleWarehouseUpperRebelEventEntrance_43

OldaleWarehouseUpperRebelEventEntrance_47:
# 186 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_24
	goto OldaleWarehouseUpperRebelEventEntrance_46

OldaleWarehouseUpperRebelEventEntrance_50:
# 201 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 202 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 203 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_28
# 204 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 205 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_21
# 206 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 207 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 208 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 209 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_22
# 210 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_29
# 212 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_30
# 213 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 214 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_18
# 215 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto repeatwarehousetaurostackle
	goto OldaleWarehouseUpperRebelEventEntrance_49

OldaleWarehouseUpperRebelEventEntrance_53:
# 220 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 221 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 222 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 223 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_28
# 224 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 225 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_21
# 226 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 227 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_JUMP_KICK
# 228 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 229 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_23
# 230 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_24
# 231 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 232 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 233 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_16
# 234 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 235 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 236 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_31
# 238 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_25
# 239 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 240 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 241 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_32
# 243 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 244 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_SWAGGER2
# 245 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_33
# 247 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 248 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_34
# 249 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TAKE_DOWN
# 250 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 251 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 254 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_35
# 257 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseUpperRebelEventEntrance_Text_36, OldaleWarehouseUpperRebelEventEntrance_Text_27
# 259 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_56
OldaleWarehouseUpperRebelEventEntrance_55:
# 331 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_58
	goto OldaleWarehouseUpperRebelEventEntrance_52

OldaleWarehouseUpperRebelEventEntrance_56:
# 260 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 261 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 262 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_27
# 263 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 264 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 265 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 267 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 268 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 270 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 271 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_61
OldaleWarehouseUpperRebelEventEntrance_60:
# 275 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_66
OldaleWarehouseUpperRebelEventEntrance_65:
# 279 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadeoutbgm 2
# 280 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 281 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_39
# 283 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 284 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 285 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 287 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 288 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 291 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 292 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 293 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 295 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 296 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 299 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 300 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 301 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 6
# 303 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 304 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_40
# 305 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 306 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_41
# 307 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 308 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_42
# 309 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 310 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_28
# 311 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_29
# 312 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 313 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 1
# 314 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 319 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_30
# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_31
# 321 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 322 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 323 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 324 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 325 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_43
# 326 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadenewbgm 1
# 327 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 328 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto rebelsleaveupperwarehouse
	goto OldaleWarehouseUpperRebelEventEntrance_55

OldaleWarehouseUpperRebelEventEntrance_58:
# 332 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 333 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_27
# 334 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement
# 335 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 336 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 337 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 338 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 339 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 340 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_BIND
# 341 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 342 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_44
# 345 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 1, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseUpperRebelEventEntrance_Text_45
# 347 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_63
	goto OldaleWarehouseUpperRebelEventEntrance_52

OldaleWarehouseUpperRebelEventEntrance_61:
# 272 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_37
	goto OldaleWarehouseUpperRebelEventEntrance_60

OldaleWarehouseUpperRebelEventEntrance_63:
# 348 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_HEADBUTT
# 349 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 350 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 351 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 352 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 353 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 354 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 355 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 356 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 357 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 358 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 359 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 360 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_39
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_32
# 362 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 363 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_33
# 365 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 366 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_69
OldaleWarehouseUpperRebelEventEntrance_68:
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_72
OldaleWarehouseUpperRebelEventEntrance_71:
# 369 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_34
# 370 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 371 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_35
# 373 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_28
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 375 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_METRONOME
# 376 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_36
# 379 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_48
# 380 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 381 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_37
# 382 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 383 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 1
# 385 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 386 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_BELLY_DRUM
# 387 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 388 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 389 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_VITAL_THROW2
# 390 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 391 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 392 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_EXPLOSION
# 393 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 395 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadeoutbgm 1
# 397 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_30
# 398 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 399 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_49
# 400 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TWISTER
# 401 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_50
# 404 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_38
# 405 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 406 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 407 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_51
# 408 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 409 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 410 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 411 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 412 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 413 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 414 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_75
OldaleWarehouseUpperRebelEventEntrance_74:
# 415 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_78
OldaleWarehouseUpperRebelEventEntrance_77:
# 416 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 417 "data/maps/OldaleWarehouseUpper/scripts.pory"
rebelsleaveupperwarehouse:
# 418 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 420 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_39
# 421 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 422 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 3
# 423 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 426 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_40
# 427 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 428 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 429 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 430 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 2
# 431 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 432 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 435 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_41
# 436 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 437 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 438 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 439 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_42
# 440 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_39
# 441 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 442 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 443 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 4
# 444 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 446 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_43
# 447 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 448 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 449 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 6
# 450 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 6
# 451 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 452 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 455 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_44
# 456 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 457 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 458 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 5
# 459 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 5
# 460 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 461 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 464 "data/maps/OldaleWarehouseUpper/scripts.pory"
	addobject 2
# 465 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setobjectxy 2, 2, 1
# 466 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_45
# 467 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 468 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 469 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 470 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 471 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 472 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_54
# 473 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 474 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker NULL
# 475 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_39
# 476 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 477 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 2
# 478 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 479 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 480 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadeoutbgm 1
# 481 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_BADGE01_GET
# 482 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 483 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_81
OldaleWarehouseUpperRebelEventEntrance_80:
# 484 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_84
OldaleWarehouseUpperRebelEventEntrance_83:
# 486 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 487 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_57
# 490 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_UNDERPIZZA, TRUE
# 495 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag oldalewarehouserebelscleared
# 496 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag DLCclassends
# 497 "data/maps/OldaleWarehouseUpper/scripts.pory"
	clearflag DLCrecesstarts
# 498 "data/maps/OldaleWarehouseUpper/scripts.pory"
	clearflag cigarettepop
# 499 "data/maps/OldaleWarehouseUpper/scripts.pory"
	clearflag carrebelwarehouse
# 500 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag camelianotoutsideDLC
# 501 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag sharpynotinroute103
# 502 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag conartistescaped
# 503 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag devonbridgeguardgoestoconartist
# 504 "data/maps/OldaleWarehouseUpper/scripts.pory"
	clearflag FLAG_ITEM_OLDALE_BYTRUCK
# 505 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleWarehouseUpperRebelEventEntrance_52

OldaleWarehouseUpperRebelEventEntrance_66:
# 276 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_38
	goto OldaleWarehouseUpperRebelEventEntrance_65

OldaleWarehouseUpperRebelEventEntrance_69:
# 366 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_46
	goto OldaleWarehouseUpperRebelEventEntrance_68

OldaleWarehouseUpperRebelEventEntrance_72:
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_47
	goto OldaleWarehouseUpperRebelEventEntrance_71

OldaleWarehouseUpperRebelEventEntrance_75:
# 414 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_52
	goto OldaleWarehouseUpperRebelEventEntrance_74

OldaleWarehouseUpperRebelEventEntrance_78:
# 415 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_53
	goto OldaleWarehouseUpperRebelEventEntrance_77

OldaleWarehouseUpperRebelEventEntrance_81:
# 483 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_55
	goto OldaleWarehouseUpperRebelEventEntrance_80

OldaleWarehouseUpperRebelEventEntrance_84:
# 484 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_56
	goto OldaleWarehouseUpperRebelEventEntrance_83


WarehouseRebelAdminShake::
# 528 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8004, 2
# 529 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8005, 6
# 530 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8006, 4
# 531 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8007, 4
# 532 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_STRENGTH
# 533 "data/maps/OldaleWarehouseUpper/scripts.pory"
	special ShakeCamera
	return


WarehouseRebelAdminBigShake::
# 537 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8004, 4
# 538 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8005, 8
# 539 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8006, 8
# 540 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8007, 4
# 541 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_BRICK_BREAK
# 542 "data/maps/OldaleWarehouseUpper/scripts.pory"
	special ShakeCamera
	return


WarehouseUpperBallManager::
# 547 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 548 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 549 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 13, WarehouseUpperBallManager_Movement_0
# 550 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSEDEVONBALLS, WarehouseUpperBallManager_2
# 555 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseUpperBallManager_Text_1
WarehouseUpperBallManager_1:
# 556 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 13, WarehouseUpperBallManager_Movement_1
# 557 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 13
# 558 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

WarehouseUpperBallManager_2:
# 551 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseUpperBallManager_Text_0
	goto WarehouseUpperBallManager_1


WarehouseDevonBallCrate::
# 563 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_le WarehouseDevonBallCrate_2
# 582 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseDevonBallCrate_Text_4
WarehouseDevonBallCrate_1:
# 585 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

WarehouseDevonBallCrate_2:
# 565 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSEDEVONBALLS, WarehouseDevonBallCrate_5
# 578 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseDevonBallCrate_Text_3
	goto WarehouseDevonBallCrate_1

WarehouseDevonBallCrate_5:
# 566 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseDevonBallCrate_Text_0
# 567 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, WarehouseDevonBallCrate_Text_1, WarehouseDevonBallCrate_Text_2
# 569 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WarehouseDevonBallCrate_9
WarehouseDevonBallCrate_8:
# 573 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WarehouseDevonBallCrate_11
	goto WarehouseDevonBallCrate_1

WarehouseDevonBallCrate_9:
# 570 "data/maps/OldaleWarehouseUpper/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 571 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEDEVONBALLS
	goto WarehouseDevonBallCrate_8

WarehouseDevonBallCrate_11:
# 573 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	goto WarehouseDevonBallCrate_1


OldaleWarehouseUpperComputer::
# 590 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 591 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperComputer_Text_0
# 592 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperBookshelves::
# 596 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 597 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperBookshelves_Text_0
# 598 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperMicrowave::
# 602 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 603 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperMicrowave_Text_0
# 604 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSEMICROWAVE, OldaleWarehouseUpperMicrowave_2
# 608 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperMicrowave_Text_1
OldaleWarehouseUpperMicrowave_1:
# 610 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

OldaleWarehouseUpperMicrowave_2:
# 605 "data/maps/OldaleWarehouseUpper/scripts.pory"
	giveitem ITEM_AERODACTYLITE
# 606 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEMICROWAVE
	goto OldaleWarehouseUpperMicrowave_1


OldaleWarehouseUpperLoadtadDoll::
# 614 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 615 "data/maps/OldaleWarehouseUpper/scripts.pory"
	givedecoration DECOR_LOTAD_DOLL
# 616 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 9
# 617 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSELOTADDOLL
# 618 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperMoneyBags::
# 622 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 623 "data/maps/OldaleWarehouseUpper/scripts.pory"
	showmoneybox 18, 0
# 624 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperMoneyBags_Text_0
# 625 "data/maps/OldaleWarehouseUpper/scripts.pory"
	addmoney 1000
# 626 "data/maps/OldaleWarehouseUpper/scripts.pory"
	updatemoneybox
# 627 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_SHOP
# 628 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 629 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperMoneyBags_Text_1
# 630 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 8
# 631 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEMONEYBAGS
# 632 "data/maps/OldaleWarehouseUpper/scripts.pory"
	hidemoneybox
# 633 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperExtinguisher::
# 638 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 639 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperExtinguisher_Text_0
# 640 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperPrinter::
# 644 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 645 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperPrinter_Text_0
# 647 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperCoffee::
# 651 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 652 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperCoffee_Text_0
# 653 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSECOFFEE, OldaleWarehouseUpperCoffee_2
# 656 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperCoffee_Text_1
OldaleWarehouseUpperCoffee_1:
# 658 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

OldaleWarehouseUpperCoffee_2:
# 654 "data/maps/OldaleWarehouseUpper/scripts.pory"
	giveitem ITEM_HEAL_POWDER
	goto OldaleWarehouseUpperCoffee_1


OldaleWarehouseUpperTrashcan::
# 662 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 663 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSETRASHCAN, OldaleWarehouseUpperTrashcan_2
# 666 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperTrashcan_Text_0
OldaleWarehouseUpperTrashcan_1:
# 668 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

OldaleWarehouseUpperTrashcan_2:
# 664 "data/maps/OldaleWarehouseUpper/scripts.pory"
	givedecoration DECOR_SKITTY_DOLL
	goto OldaleWarehouseUpperTrashcan_1


OldaleWarehouseUpperSafemonNotice::
# 672 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 673 "data/maps/OldaleWarehouseUpper/scripts.pory"
	showmonpic SPECIES_LOADTAD, 10, 3
# 674 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperSafemonNotice_Text_0
# 676 "data/maps/OldaleWarehouseUpper/scripts.pory"
	hidemonpic
# 677 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


DevonWarehouseManagerAbra::
# 681 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 682 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 683 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 12, WarehouseUpperBallManager_Movement_0
# 684 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 12
# 685 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playmoncry SPECIES_ABRA, CRY_MODE_WEAK
# 686 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseManagerAbra_Text_0
# 687 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 12, WarehouseUpperBallManager_Movement_1
# 688 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 12
# 689 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


DevonWarehouseUpperManager::
# 693 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 694 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 695 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_0
# 697 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 10, WarehouseUpperBallManager_Movement_0
# 698 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 10
# 699 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_1
# 700 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 701 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 702 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 10, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 703 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 10
# 704 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_2
# 705 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 706 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 10, OldaleWarehouseUpperRebelEventEntrance_Movement_16
# 707 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 10
# 708 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_3
# 709 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 710 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 711 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_4
# 713 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 714 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 715 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_5
# 717 "data/maps/OldaleWarehouseUpper/scripts.pory"
	giveitem ITEM_TM_TELEPORT
# 719 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_6
# 721 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 10, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 722 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 10
# 723 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_7
# 725 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 12, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 726 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 12
# 727 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playmoncry SPECIES_ABRA, CRY_MODE_WEAK
# 728 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseManagerAbra_Text_0
# 730 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 10, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 731 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 10
# 732 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_8
# 734 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TELEPORT
# 735 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 10
# 736 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 737 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TELEPORT
# 738 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 12
# 739 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 740 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag warehousemanagerandabra
# 742 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 743 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 11, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 744 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 11
# 745 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_9
# 746 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 11, DevonWarehouseUpperManager_Movement_0
# 747 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 11
# 751 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 753 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


DevonWarehouseUpperComplainer::
# 758 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 759 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 761 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_set warehousemanagerandabra, DevonWarehouseUpperComplainer_2
# 773 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperComplainer_Text_1
DevonWarehouseUpperComplainer_1:
# 775 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

DevonWarehouseUpperComplainer_2:
# 763 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 11, WarehouseUpperBallManager_Movement_0
# 764 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 11
# 765 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperComplainer_Text_0
# 767 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 11, DevonWarehouseUpperManager_Movement_0
# 768 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 11
	goto DevonWarehouseUpperComplainer_1


DevonWarehouseUpperComputerGuy::
# 781 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 782 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 783 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 14, WarehouseUpperBallManager_Movement_0
# 784 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 14
# 785 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperComputerGuy_Text_0
# 788 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 14, DevonWarehouseUpperComputerGuy_Movement_0
# 789 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 14
# 790 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


# 32 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_0:
# 32 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_exclamation_mark
# 32 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 37 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_1:
# 37 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_exclamation_mark
# 37 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 42 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_2:
# 42 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 44 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_3:
# 44 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_right
	step_end

# 58 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_4:
# 58 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 58 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 58 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 63 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_5:
# 63 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_question_mark
# 63 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 64 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_6:
# 64 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 77 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_7:
# 77 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
	step_end

# 94 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_8:
# 94 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 94 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
	step_end

# 95 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_9:
# 95 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_down
	step_end

# 112 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_10:
# 112 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_diag_northwest
# 112 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_down
	step_end

# 115 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_11:
# 115 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 115 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 115 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_right
	step_end

# 116 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_12:
# 116 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 116 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 116 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 126 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_13:
# 126 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_left
	step_end

# 135 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_14:
# 135 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_left
	step_end

# 136 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_15:
# 136 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_down
	step_end

# 137 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_16:
# 137 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_up
	step_end

# 139 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_17:
# 139 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_right
	step_end

# 151 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_18:
# 151 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 151 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 151 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 151 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 151 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 155 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_19:
# 155 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_slow_left
	step_end

# 162 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_20:
# 162 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_exclamation_mark
	step_end

# 205 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_21:
# 205 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 205 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 205 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 205 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
	step_end

# 209 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_22:
# 209 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_2_left
# 209 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_2_right
	step_end

# 229 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_23:
# 229 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_down
# 229 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 230 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_24:
# 230 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 230 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 230 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
	step_end

# 238 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_25:
# 238 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 238 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 250 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_26:
# 250 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_slow_right
	step_end

# 262 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_27:
# 262 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
	step_end

# 310 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_28:
# 310 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_right
# 310 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 311 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_29:
# 311 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_diag_northeast
# 311 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
	step_end

# 319 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_30:
# 319 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 319 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_31:
# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_left
	step_end

# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_32:
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_down
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_right
	step_end

# 363 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_33:
# 363 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_down
# 363 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
# 363 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 369 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_34:
# 369 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_up
# 369 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
# 369 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 371 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_35:
# 371 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_right
	step_end

# 376 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_36:
# 376 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_question_mark
	step_end

# 381 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_37:
# 381 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_up
	step_end

# 404 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_38:
# 404 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 404 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 404 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
	step_end

# 420 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_39:
# 420 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 426 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_40:
# 426 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 426 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 426 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 426 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 426 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 426 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 435 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_41:
# 435 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 435 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 439 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_42:
# 439 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_2_right
	step_end

# 446 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_43:
# 446 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 446 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 446 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 446 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 446 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 446 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 446 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 455 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_44:
# 455 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 455 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 455 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 455 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 455 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 455 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 455 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 455 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 466 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_45:
# 466 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_down
	step_end

# 549 "data/maps/OldaleWarehouseUpper/scripts.pory"
WarehouseUpperBallManager_Movement_0:
# 549 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_player
	step_end

# 556 "data/maps/OldaleWarehouseUpper/scripts.pory"
WarehouseUpperBallManager_Movement_1:
# 556 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_right
	step_end

# 746 "data/maps/OldaleWarehouseUpper/scripts.pory"
DevonWarehouseUpperManager_Movement_0:
# 746 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_down
	step_end

# 788 "data/maps/OldaleWarehouseUpper/scripts.pory"
DevonWarehouseUpperComputerGuy_Movement_0:
# 788 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_left
	step_end

OldaleWarehouseUpperRebelEventEntrance_Text_0:
# 35 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hm? Who the hells are you?$"

OldaleWarehouseUpperRebelEventEntrance_Text_1:
# 41 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Huh? You've come for more?$"

OldaleWarehouseUpperRebelEventEntrance_Text_2:
# 51 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hey! It's him! That's the Littleroot\n"
	.string "chump! GET HIM!$"

OldaleWarehouseUpperRebelEventEntrance_Text_3:
# 52 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hey! It's her! That's the Littleroot\n"
	.string "chump! GET HER!$"

OldaleWarehouseUpperRebelEventEntrance_Text_4:
# 55 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Told you, Littleroot hicks are\n"
	.string "stubborn!$"

OldaleWarehouseUpperRebelEventEntrance_Text_5:
# 72 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "That's the guy...? Pfft! You're such a\n"
	.string "loser, Calvin!$"

OldaleWarehouseUpperRebelEventEntrance_Text_6:
# 73 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "That the girl...? Pfft! You're such a\n"
	.string "loser, Calvin!$"

OldaleWarehouseUpperRebelEventEntrance_Text_7:
# 75 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Well... for once, you are right.$"

OldaleWarehouseUpperRebelEventEntrance_Text_8:
# 80 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Wait... you beat Rick and Lola\n"
	.string "downstairs?\p"
	.string "Heh... perhaps this'll be fun.$"

OldaleWarehouseUpperRebelEventEntrance_Text_9:
# 82 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I mean, we can do this all day, so be my\n"
	.string "guest!!$"

OldaleWarehouseUpperRebelEventEntrance_Text_10:
# 89 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Jani, back me up! Let's do our COMBO!$"

OldaleWarehouseUpperRebelEventEntrance_Text_11:
# 91 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Jani, you know what time it is!$"

OldaleWarehouseUpperRebelEventEntrance_Text_12:
# 98 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I told you, if you pull that crap one\n"
	.string "more time...!$"

OldaleWarehouseUpperRebelEventEntrance_Text_13:
# 100 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Idiot boom-boom time? Hate to admit\n"
	.string "that it worked last time... {COLOR LIGHT_GRAY}{SHADOW WHITE}tsk...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleWarehouseUpperRebelEventEntrance_Text_14:
# 108 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Stand aside, you punks!$"

OldaleWarehouseUpperRebelEventEntrance_Text_15:
# 120 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "You ain't gonna beat this one like that.\n"
	.string "The way you battle...\p"
	.string "You're an ex-soldier, aren't you? What,\n"
	.string "you're a merc sent by Devon?\p"
	.string "Eh, all the same. We'll use you to send a\n"
	.string "message to this town...$"

OldaleWarehouseUpperRebelEventEntrance_Text_16:
# 123 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Guess you didn't get it the first time,\n"
	.string "so I'll repeat it loud and clear...$"

OldaleWarehouseUpperRebelEventEntrance_Text_17:
# 127 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "NO ONE...$"

OldaleWarehouseUpperRebelEventEntrance_Text_18:
# 130 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "MESSES...$"

OldaleWarehouseUpperRebelEventEntrance_Text_19:
# 141 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "WITH REBELS!$"

OldaleWarehouseUpperRebelEventEntrance_Text_20:
# 146 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Alright, you chump... if this were the old\n"
	.string "days, you'd have won already.$"

OldaleWarehouseUpperRebelEventEntrance_Text_21:
# 152 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Unlucky you, they ain't!!$"

OldaleWarehouseUpperRebelEventEntrance_Text_22:
# 182 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "T-that's the boss special! The TAUROS\n"
	.string "TAKE-DOWN!$"

OldaleWarehouseUpperRebelEventEntrance_Text_23:
# 185 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "This guy is done for!$"

OldaleWarehouseUpperRebelEventEntrance_Text_24:
# 186 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "This girl is done for!$"

OldaleWarehouseUpperRebelEventEntrance_Text_25:
# 191 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} prepares to tackle with all of\n"
	.string "his strength... what to do?$"

OldaleWarehouseUpperRebelEventEntrance_Text_26:
# 196 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Block$"

OldaleWarehouseUpperRebelEventEntrance_Text_27:
# 196 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Dodge$"

OldaleWarehouseUpperRebelEventEntrance_Text_28:
# 203 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Going to splat you flat! ORYAAAAH!$"

OldaleWarehouseUpperRebelEventEntrance_Text_29:
# 210 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The blow was impossible to block... and\n"
	.string "it was supereffective!$"

OldaleWarehouseUpperRebelEventEntrance_Text_30:
# 212 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Calvin was right - you're quite sturdy!\n"
	.string "But one more ought to do it!$"

OldaleWarehouseUpperRebelEventEntrance_Text_31:
# 236 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} can't stop his momentum, and\n"
	.string "slams himself against the wall!$"

OldaleWarehouseUpperRebelEventEntrance_Text_32:
# 241 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "B-boss! Are you alright!?$"

OldaleWarehouseUpperRebelEventEntrance_Text_33:
# 245 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Shut up, idiot! This is nothing, I just\n"
	.string "slipped! Ugh...$"

OldaleWarehouseUpperRebelEventEntrance_Text_34:
# 248 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "You... you're going to have it now! See if\n"
	.string "you can dodge this!$"

OldaleWarehouseUpperRebelEventEntrance_Text_35:
# 254 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} extends his arms for a wide,\n"
	.string "short-distance ram!$"

OldaleWarehouseUpperRebelEventEntrance_Text_36:
# 257 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Strike$"

OldaleWarehouseUpperRebelEventEntrance_Text_37:
# 272 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} receives a crutch strike in\n"
	.string "his wide-open chest!$"

OldaleWarehouseUpperRebelEventEntrance_Text_38:
# 276 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} receives a kick in his\n"
	.string "wide-open chest!$"

OldaleWarehouseUpperRebelEventEntrance_Text_39:
# 281 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "G-gah...!$"

OldaleWarehouseUpperRebelEventEntrance_Text_40:
# 304 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Heh... you're a tough merch. Tsk...$"

OldaleWarehouseUpperRebelEventEntrance_Text_41:
# 306 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "You want this place so badly? Whatever.\n"
	.string "We're done with it anyway.$"

OldaleWarehouseUpperRebelEventEntrance_Text_42:
# 308 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "PACK IT UP, REBELS! We're going back to\n"
	.string "{COLOR GREEN}PETALBURG!$"

OldaleWarehouseUpperRebelEventEntrance_Text_43:
# 325 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Y-you heard the boss! Back to base!$"

OldaleWarehouseUpperRebelEventEntrance_Text_44:
# 342 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} has {PLAYER} in a wrestling\n"
	.string "grapple!$"

OldaleWarehouseUpperRebelEventEntrance_Text_45:
# 345 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Headbutt!$"

OldaleWarehouseUpperRebelEventEntrance_Text_46:
# 366 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "L-let me at him... where's the...\n"
	.string "t-werp...!?$"

OldaleWarehouseUpperRebelEventEntrance_Text_47:
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "L-let me at her... where's the...\n"
	.string "t-werp...!?$"

OldaleWarehouseUpperRebelEventEntrance_Text_48:
# 379 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Uhm... boss? You're going to Tauros\n"
	.string "Tackle from downstairs?$"

OldaleWarehouseUpperRebelEventEntrance_Text_49:
# 399 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Oouuch...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleWarehouseUpperRebelEventEntrance_Text_50:
# 401 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "...$"

OldaleWarehouseUpperRebelEventEntrance_Text_51:
# 407 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A-as the second in command, I say...$"

OldaleWarehouseUpperRebelEventEntrance_Text_52:
# 414 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I told you this guy was too strong!\n"
	.string "RUUUUN!$"

OldaleWarehouseUpperRebelEventEntrance_Text_53:
# 415 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I told you this girl was too strong!\n"
	.string "RUUUUN!$"

OldaleWarehouseUpperRebelEventEntrance_Text_54:
# 472 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "T-this is not over yet! You'll regret\n"
	.string "getting on our bad side, twerp!$"

OldaleWarehouseUpperRebelEventEntrance_Text_55:
# 483 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} begins to remember some of\n"
	.string "his soldier skills...$"

OldaleWarehouseUpperRebelEventEntrance_Text_56:
# 484 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} begins to remember some of\n"
	.string "her soldier skills...$"

OldaleWarehouseUpperRebelEventEntrance_Text_57:
# 487 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} can now train Pokémon {COLOR BLUE}(and\n"
	.string "Safemon) {COLOR GREEN}past level 10!$"

WarehouseUpperBallManager_Text_0:
# 551 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I find it curious those Rebels didn't\n"
	.string "take these Devon Balls...$"

WarehouseUpperBallManager_Text_1:
# 555 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Of course the rebels left none of the\n"
	.string "Devon Balls...$"

WarehouseDevonBallCrate_Text_0:
# 566 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "There's a few unsealed balls in the\n"
	.string "crates. No one will miss them...$"

WarehouseDevonBallCrate_Text_1:
# 567 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Take them$"

WarehouseDevonBallCrate_Text_2:
# 567 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Leave$"

WarehouseDevonBallCrate_Text_3:
# 578 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "It would be wrong to take these Devon\n"
	.string "Balls...$"

WarehouseDevonBallCrate_Text_4:
# 582 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A crate full of Devon Balls, still sealed.$"

OldaleWarehouseUpperComputer_Text_0:
# 591 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "The desktop's background features the\n"
	.string "warehouse's logo: a smiling Loadtad.$"

OldaleWarehouseUpperBookshelves_Text_0:
# 597 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "It's full of accounting books and\n"
	.string "company guidelines.$"

OldaleWarehouseUpperMicrowave_Text_0:
# 603 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "It's a microwave. There's some reheated\n"
	.string "food inside...$"

OldaleWarehouseUpperMicrowave_Text_1:
# 608 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "The microwave is empty.$"

OldaleWarehouseUpperMoneyBags_Text_0:
# 624 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Seems the {COLOR RED}Rebels{COLOR DARK_GRAY} forgot some of their\n"
	.string "loot...$"

OldaleWarehouseUpperMoneyBags_Text_1:
# 629 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Received 1000¥!$"

OldaleWarehouseUpperExtinguisher_Text_0:
# 639 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A regular fire extinguisher.$"

OldaleWarehouseUpperPrinter_Text_0:
# 645 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "There's many copies of a picture of\n"
	.string "Mister Stone.\p"
	.string "The image has been edited to make him\n"
	.string "look like a Mr. Mime.$"

OldaleWarehouseUpperCoffee_Text_0:
# 652 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "For some reason, there's a can of\n"
	.string "coffee by the coffee machine...$"

OldaleWarehouseUpperCoffee_Text_1:
# 656 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A coffee machine, Chesto brand.$"

OldaleWarehouseUpperTrashcan_Text_0:
# 666 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "The trash can is empty.$"

OldaleWarehouseUpperSafemonNotice_Text_0:
# 674 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR BLUE}Safemon Notice{COLOR DARK_GRAY}: To assist conditioning,\n"
	.string "do not feed Loadtads until end of\l"
	.string "shift!$"

DevonWarehouseManagerAbra_Text_0:
# 686 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "... aaaabraaa.$"

DevonWarehouseUpperManager_Text_0:
# 695 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I don't want to hear any more excuses,\n"
	.string "you hear me?\p"
	.string "I want this warehouse back in order by\n"
	.string "the...$"

DevonWarehouseUpperManager_Text_1:
# 699 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hm? And who are you? If you're a job\n"
	.string "applicant, I'm afraid...$"

DevonWarehouseUpperManager_Text_2:
# 704 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Wait a minute - you...$"

DevonWarehouseUpperManager_Text_3:
# 708 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "If you aren't the warehouse's saviour!$"

DevonWarehouseUpperManager_Text_4:
# 711 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "See that camera behind you? It\n"
	.string "recorded all of your heroic deeds in\l"
	.string "this room!$"

DevonWarehouseUpperManager_Text_5:
# 715 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Please, allow me to give you this as\n"
	.string "thanks!$"

DevonWarehouseUpperManager_Text_6:
# 719 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "That is the most useful move for kind,\n"
	.string "busy people like us.$"

DevonWarehouseUpperManager_Text_7:
# 723 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Allow me to demonstrate... Abra!$"

DevonWarehouseUpperManager_Text_8:
# 732 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Goodbye, and thank you for your\n"
	.string "service!$"

DevonWarehouseUpperManager_Text_9:
# 745 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Wait, sir, you haven't...! Ah...$"

DevonWarehouseUpperComplainer_Text_0:
# 765 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "That manager comes everyday from\n"
	.string "Slateport with his Abra.\p"
	.string "He barks orders for 10 minutes, does no\n"
	.string "work, and teleports out.$"

DevonWarehouseUpperComplainer_Text_1:
# 773 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "But sir, half our Loadtads are missing,\n"
	.string "and the forklifts are not...$"

DevonWarehouseUpperComputerGuy_Text_0:
# 785 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I'm running a virus check on our\n"
	.string "internal network.\p"
	.string "The Rebels have some impressive\n"
	.string "hackers, like Lanette, the designer of\l"
	.string "Hoenn's Storage System.\p"
	.string "We need to make sure the Rebels planted\n"
	.string "no malware.$"

RebelGruntMWareHouseUpperOutro::
# 518 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "If Cheerorb could use Self-Destruct... \nwe would have won!$"

RebelGruntFWareHouseUpperOutro::
# 521 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "... you're paying for my Devon Center\nfee.$"

RebelAdminWareHouseUpperOutro::
# 524 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Heh... this isn't over.$"
