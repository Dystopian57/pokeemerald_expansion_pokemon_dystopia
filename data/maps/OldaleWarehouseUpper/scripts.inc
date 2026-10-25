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
# 32 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_2
# 39 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_1
# 40 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_2
OldaleWarehouseUpperRebelEventEntrance_1:
# 42 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 43 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 45 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 47 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_6
# 53 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_4
OldaleWarehouseUpperRebelEventEntrance_5:
# 54 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker NULL
# 56 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_4
# 57 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_METRONOME
# 58 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 60 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_10
# 62 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_6
OldaleWarehouseUpperRebelEventEntrance_9:
# 65 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 67 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_17
# 73 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_7
OldaleWarehouseUpperRebelEventEntrance_16:
# 75 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_7
# 77 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_23
# 80 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_9
OldaleWarehouseUpperRebelEventEntrance_22:
# 83 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 84 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 86 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_30
# 89 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_11
OldaleWarehouseUpperRebelEventEntrance_29:
# 91 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_8
# 93 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 95 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost1stfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_36
# 98 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_13
OldaleWarehouseUpperRebelEventEntrance_35:
# 101 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag lost1stfightoldalewarehouseupper
# 102 "data/maps/OldaleWarehouseUpper/scripts.pory"
	trainerbattle_two_trainers TRAINER_REBELGRUNT_OLDALEWAREHOUSE_3, RebelGruntMWareHouseUpperOutro, TRAINER_REBELGRUNT_OLDALEWAREHOUSE_4, RebelGruntFWareHouseUpperOutro
# 103 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 106 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_14
# 107 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 110 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_10
# 113 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_11
# 114 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_12
# 115 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 117 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset lost2ndfightoldalewarehouseupper, OldaleWarehouseUpperRebelEventEntrance_40
# 121 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_16
OldaleWarehouseUpperRebelEventEntrance_39:
# 123 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 124 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 125 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_17
# 126 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 127 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 128 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_18
# 129 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 131 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_13
# 133 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 134 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_15
# 135 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_16
# 136 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_16
# 137 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_17
# 138 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 9, OldaleWarehouseUpperRebelEventEntrance_Movement_15
# 139 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_19
# 141 "data/maps/OldaleWarehouseUpper/scripts.pory"
	trainerbattle_no_intro TRAINER_REBELADMIN_OLDALEWAREHOUSE, RebelAdminWareHouseUpperOutro
# 143 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 144 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_20
# 145 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 146 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 148 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 149 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_18
# 150 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_21
# 151 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 152 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TAKE_DOWN
# 153 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_19
# 154 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 155 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TAKE_DOWN
# 156 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_19
# 157 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 159 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 160 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 161 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 163 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 164 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 165 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 167 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 168 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 169 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 171 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 172 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 173 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 5
# 175 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 176 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 177 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 6
# 179 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 180 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_22
# 182 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 183 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_44
OldaleWarehouseUpperRebelEventEntrance_43:
# 184 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_47
OldaleWarehouseUpperRebelEventEntrance_46:
# 185 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker NULL
# 188 "data/maps/OldaleWarehouseUpper/scripts.pory"
repeatwarehousetaurostackle:
# 189 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_25
# 194 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseUpperRebelEventEntrance_Text_26, OldaleWarehouseUpperRebelEventEntrance_Text_27
# 198 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_50
OldaleWarehouseUpperRebelEventEntrance_49:
# 217 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_53
OldaleWarehouseUpperRebelEventEntrance_52:
# 512 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	end

OldaleWarehouseUpperRebelEventEntrance_2:
# 33 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_0
# 34 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 35 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_1
	goto OldaleWarehouseUpperRebelEventEntrance_1

OldaleWarehouseUpperRebelEventEntrance_6:
# 48 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 49 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_14
OldaleWarehouseUpperRebelEventEntrance_13:
# 50 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_20
	goto OldaleWarehouseUpperRebelEventEntrance_5

OldaleWarehouseUpperRebelEventEntrance_10:
# 61 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_5
	goto OldaleWarehouseUpperRebelEventEntrance_9

OldaleWarehouseUpperRebelEventEntrance_14:
# 49 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_2
	goto OldaleWarehouseUpperRebelEventEntrance_13

OldaleWarehouseUpperRebelEventEntrance_17:
# 69 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 70 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_27
OldaleWarehouseUpperRebelEventEntrance_26:
# 71 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_33
	goto OldaleWarehouseUpperRebelEventEntrance_16

OldaleWarehouseUpperRebelEventEntrance_20:
# 50 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_3
	goto OldaleWarehouseUpperRebelEventEntrance_5

OldaleWarehouseUpperRebelEventEntrance_23:
# 78 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_8
	goto OldaleWarehouseUpperRebelEventEntrance_22

OldaleWarehouseUpperRebelEventEntrance_27:
# 70 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_5
	goto OldaleWarehouseUpperRebelEventEntrance_26

OldaleWarehouseUpperRebelEventEntrance_30:
# 87 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_10
	goto OldaleWarehouseUpperRebelEventEntrance_29

OldaleWarehouseUpperRebelEventEntrance_33:
# 71 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_6
	goto OldaleWarehouseUpperRebelEventEntrance_16

OldaleWarehouseUpperRebelEventEntrance_36:
# 96 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_12
	goto OldaleWarehouseUpperRebelEventEntrance_35

OldaleWarehouseUpperRebelEventEntrance_40:
# 118 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_15
	goto OldaleWarehouseUpperRebelEventEntrance_39

OldaleWarehouseUpperRebelEventEntrance_44:
# 183 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_23
	goto OldaleWarehouseUpperRebelEventEntrance_43

OldaleWarehouseUpperRebelEventEntrance_47:
# 184 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_24
	goto OldaleWarehouseUpperRebelEventEntrance_46

OldaleWarehouseUpperRebelEventEntrance_50:
# 199 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 200 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 201 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_28
# 202 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 203 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_21
# 204 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 205 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 206 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 207 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_22
# 208 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_29
# 210 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_30
# 211 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 212 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_18
# 213 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto repeatwarehousetaurostackle
	goto OldaleWarehouseUpperRebelEventEntrance_49

OldaleWarehouseUpperRebelEventEntrance_53:
# 218 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 219 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 220 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 221 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_28
# 222 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 223 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_21
# 224 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 225 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_JUMP_KICK
# 226 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 227 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_23
# 228 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_24
# 229 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 230 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 231 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_16
# 232 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 233 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 234 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_31
# 236 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_25
# 237 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 238 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 239 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_32
# 241 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 242 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_SWAGGER2
# 243 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_33
# 245 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 246 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_34
# 247 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TAKE_DOWN
# 248 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 249 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 252 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_35
# 255 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseUpperRebelEventEntrance_Text_36, OldaleWarehouseUpperRebelEventEntrance_Text_27
# 257 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_56
OldaleWarehouseUpperRebelEventEntrance_55:
# 329 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_58
	goto OldaleWarehouseUpperRebelEventEntrance_52

OldaleWarehouseUpperRebelEventEntrance_56:
# 258 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 259 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 260 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_27
# 261 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 262 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 263 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 265 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 266 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 268 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 269 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_61
OldaleWarehouseUpperRebelEventEntrance_60:
# 273 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_66
OldaleWarehouseUpperRebelEventEntrance_65:
# 277 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadeoutbgm 2
# 278 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 279 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_39
# 281 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 282 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 283 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 285 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 286 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 289 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 290 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 291 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 293 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 294 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 297 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_PIN
# 298 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 299 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 6
# 301 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 302 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_40
# 303 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 304 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_41
# 305 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 306 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_42
# 307 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 308 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_28
# 309 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_29
# 310 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 311 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 1
# 312 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 317 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_30
# 318 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_31
# 319 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 320 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 321 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 322 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 323 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_43
# 324 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadenewbgm 1
# 325 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 326 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto rebelsleaveupperwarehouse
	goto OldaleWarehouseUpperRebelEventEntrance_55

OldaleWarehouseUpperRebelEventEntrance_58:
# 330 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 331 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_27
# 332 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement
# 333 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 334 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_MEGA_KICK2
# 335 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 336 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 337 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 338 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_BIND
# 339 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 340 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_44
# 343 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 1, 0, DYN_MULTICHOICE_CB_NONE, OldaleWarehouseUpperRebelEventEntrance_Text_45
# 345 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_63
	goto OldaleWarehouseUpperRebelEventEntrance_52

OldaleWarehouseUpperRebelEventEntrance_61:
# 270 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_37
	goto OldaleWarehouseUpperRebelEventEntrance_60

OldaleWarehouseUpperRebelEventEntrance_63:
# 346 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_HEADBUTT
# 347 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 348 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_26
# 349 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 350 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_DIZZY_PUNCH
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
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_39
# 359 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_32
# 360 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_33
# 363 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 364 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_69
OldaleWarehouseUpperRebelEventEntrance_68:
# 365 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_72
OldaleWarehouseUpperRebelEventEntrance_71:
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_34
# 368 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 369 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_35
# 371 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_28
# 372 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 373 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_METRONOME
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_36
# 377 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_48
# 378 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 379 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 1, OldaleWarehouseUpperRebelEventEntrance_Movement_37
# 380 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 1
# 381 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 1
# 383 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 384 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_BELLY_DRUM
# 385 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 386 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminShake
# 387 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_VITAL_THROW2
# 388 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 389 "data/maps/OldaleWarehouseUpper/scripts.pory"
	call WarehouseRebelAdminBigShake
# 390 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_EXPLOSION
# 391 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 393 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadeoutbgm 1
# 395 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_30
# 396 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 397 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_49
# 398 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TWISTER
# 399 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_50
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_38
# 403 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 404 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 405 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_51
# 406 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 407 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_14
# 408 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 409 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 410 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 411 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 412 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_75
OldaleWarehouseUpperRebelEventEntrance_74:
# 413 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_78
OldaleWarehouseUpperRebelEventEntrance_77:
# 414 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 415 "data/maps/OldaleWarehouseUpper/scripts.pory"
rebelsleaveupperwarehouse:
# 416 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 418 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 3, OldaleWarehouseUpperRebelEventEntrance_Movement_39
# 419 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 3
# 420 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 3
# 421 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 424 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_40
# 425 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 426 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 427 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 428 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 2
# 429 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 430 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 433 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_41
# 434 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 435 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 436 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_LEDGE
# 437 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_42
# 438 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 4, OldaleWarehouseUpperRebelEventEntrance_Movement_39
# 439 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 440 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 4
# 441 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 4
# 442 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 444 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 6, OldaleWarehouseUpperRebelEventEntrance_Movement_43
# 445 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 446 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 447 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 6
# 448 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 6
# 449 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 450 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 453 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 5, OldaleWarehouseUpperRebelEventEntrance_Movement_44
# 454 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_3
# 455 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_FLEE
# 456 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 5
# 457 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 5
# 458 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 459 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 462 "data/maps/OldaleWarehouseUpper/scripts.pory"
	addobject 2
# 463 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setobjectxy 2, 2, 1
# 464 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_45
# 465 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 466 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 467 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 468 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 469 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 470 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_54
# 471 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 472 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setspeaker NULL
# 473 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 2, OldaleWarehouseUpperRebelEventEntrance_Movement_39
# 474 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 2
# 475 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 2
# 476 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_EXIT
# 477 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 478 "data/maps/OldaleWarehouseUpper/scripts.pory"
	fadeoutbgm 1
# 479 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_BADGE01_GET
# 480 "data/maps/OldaleWarehouseUpper/scripts.pory"
	checkplayergender
# 481 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_81
OldaleWarehouseUpperRebelEventEntrance_80:
# 482 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseUpperRebelEventEntrance_84
OldaleWarehouseUpperRebelEventEntrance_83:
# 484 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 485 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_57
# 488 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playbgm MUS_UNDERPIZZA, TRUE
# 493 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag oldalewarehouserebelscleared
# 494 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag DLCclassends
# 495 "data/maps/OldaleWarehouseUpper/scripts.pory"
	clearflag DLCrecesstarts
# 496 "data/maps/OldaleWarehouseUpper/scripts.pory"
	clearflag cigarettepop
# 497 "data/maps/OldaleWarehouseUpper/scripts.pory"
	clearflag carrebelwarehouse
# 498 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag camelianotoutsideDLC
# 499 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag sharpynotinroute103
# 500 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag conartistescaped
# 501 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag devonbridgeguardgoestoconartist
# 502 "data/maps/OldaleWarehouseUpper/scripts.pory"
	clearflag FLAG_ITEM_OLDALE_BYTRUCK
# 503 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleWarehouseUpperRebelEventEntrance_52

OldaleWarehouseUpperRebelEventEntrance_66:
# 274 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_38
	goto OldaleWarehouseUpperRebelEventEntrance_65

OldaleWarehouseUpperRebelEventEntrance_69:
# 364 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_46
	goto OldaleWarehouseUpperRebelEventEntrance_68

OldaleWarehouseUpperRebelEventEntrance_72:
# 365 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_47
	goto OldaleWarehouseUpperRebelEventEntrance_71

OldaleWarehouseUpperRebelEventEntrance_75:
# 412 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_52
	goto OldaleWarehouseUpperRebelEventEntrance_74

OldaleWarehouseUpperRebelEventEntrance_78:
# 413 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_53
	goto OldaleWarehouseUpperRebelEventEntrance_77

OldaleWarehouseUpperRebelEventEntrance_81:
# 481 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_55
	goto OldaleWarehouseUpperRebelEventEntrance_80

OldaleWarehouseUpperRebelEventEntrance_84:
# 482 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperRebelEventEntrance_Text_56
	goto OldaleWarehouseUpperRebelEventEntrance_83


WarehouseRebelAdminShake::
# 526 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8004, 2
# 527 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8005, 6
# 528 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8006, 4
# 529 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8007, 4
# 530 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_STRENGTH
# 531 "data/maps/OldaleWarehouseUpper/scripts.pory"
	special ShakeCamera
	return


WarehouseRebelAdminBigShake::
# 535 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8004, 4
# 536 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8005, 8
# 537 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8006, 8
# 538 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setvar VAR_0x8007, 4
# 539 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_BRICK_BREAK
# 540 "data/maps/OldaleWarehouseUpper/scripts.pory"
	special ShakeCamera
	return


WarehouseUpperBallManager::
# 545 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 546 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 547 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 13, WarehouseUpperBallManager_Movement_0
# 548 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSEDEVONBALLS, WarehouseUpperBallManager_2
# 553 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseUpperBallManager_Text_1
WarehouseUpperBallManager_1:
# 554 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 13, WarehouseUpperBallManager_Movement_1
# 555 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

WarehouseUpperBallManager_2:
# 549 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseUpperBallManager_Text_0
	goto WarehouseUpperBallManager_1


WarehouseDevonBallCrate::
# 560 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_le WarehouseDevonBallCrate_2
# 579 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseDevonBallCrate_Text_4
WarehouseDevonBallCrate_1:
# 582 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

WarehouseDevonBallCrate_2:
# 562 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSEDEVONBALLS, WarehouseDevonBallCrate_5
# 575 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseDevonBallCrate_Text_3
	goto WarehouseDevonBallCrate_1

WarehouseDevonBallCrate_5:
# 563 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox WarehouseDevonBallCrate_Text_0
# 564 "data/maps/OldaleWarehouseUpper/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, WarehouseDevonBallCrate_Text_1, WarehouseDevonBallCrate_Text_2
# 566 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WarehouseDevonBallCrate_9
WarehouseDevonBallCrate_8:
# 570 "data/maps/OldaleWarehouseUpper/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WarehouseDevonBallCrate_11
	goto WarehouseDevonBallCrate_1

WarehouseDevonBallCrate_9:
# 567 "data/maps/OldaleWarehouseUpper/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 568 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEDEVONBALLS
	goto WarehouseDevonBallCrate_8

WarehouseDevonBallCrate_11:
# 570 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	goto WarehouseDevonBallCrate_1


OldaleWarehouseUpperComputer::
# 587 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 588 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperComputer_Text_0
# 589 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperBookshelves::
# 593 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 594 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperBookshelves_Text_0
# 595 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperMicrowave::
# 599 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 600 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperMicrowave_Text_0
# 601 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSEMICROWAVE, OldaleWarehouseUpperMicrowave_2
# 605 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperMicrowave_Text_1
OldaleWarehouseUpperMicrowave_1:
# 607 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

OldaleWarehouseUpperMicrowave_2:
# 602 "data/maps/OldaleWarehouseUpper/scripts.pory"
	giveitem ITEM_AERODACTYLITE
# 603 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEMICROWAVE
	goto OldaleWarehouseUpperMicrowave_1


OldaleWarehouseUpperLoadtadDoll::
# 611 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 612 "data/maps/OldaleWarehouseUpper/scripts.pory"
	givedecoration DECOR_LOTAD_DOLL
# 613 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 9
# 614 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSELOTADDOLL
# 615 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperMoneyBags::
# 619 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 620 "data/maps/OldaleWarehouseUpper/scripts.pory"
	showmoneybox 18, 0
# 621 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperMoneyBags_Text_0
# 622 "data/maps/OldaleWarehouseUpper/scripts.pory"
	addmoney 1000
# 623 "data/maps/OldaleWarehouseUpper/scripts.pory"
	updatemoneybox
# 624 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_SHOP
# 625 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 626 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperMoneyBags_Text_1
# 627 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 8
# 628 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEMONEYBAGS
# 629 "data/maps/OldaleWarehouseUpper/scripts.pory"
	hidemoneybox
# 630 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperExtinguisher::
# 635 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 636 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperExtinguisher_Text_0
# 637 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperPrinter::
# 641 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 642 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperPrinter_Text_0
# 644 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


OldaleWarehouseUpperCoffee::
# 648 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 649 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperCoffee_Text_0
# 650 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSECOFFEE, OldaleWarehouseUpperCoffee_2
# 653 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperCoffee_Text_1
OldaleWarehouseUpperCoffee_1:
# 655 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

OldaleWarehouseUpperCoffee_2:
# 651 "data/maps/OldaleWarehouseUpper/scripts.pory"
	giveitem ITEM_HEAL_POWDER
	goto OldaleWarehouseUpperCoffee_1


OldaleWarehouseUpperTrashcan::
# 659 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 660 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSETRASHCAN, OldaleWarehouseUpperTrashcan_2
# 663 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperTrashcan_Text_0
OldaleWarehouseUpperTrashcan_1:
# 665 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

OldaleWarehouseUpperTrashcan_2:
# 661 "data/maps/OldaleWarehouseUpper/scripts.pory"
	givedecoration DECOR_SKITTY_DOLL
	goto OldaleWarehouseUpperTrashcan_1


OldaleWarehouseUpperSafemonNotice::
# 669 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 670 "data/maps/OldaleWarehouseUpper/scripts.pory"
	showmonpic SPECIES_LOADTAD, 10, 3
# 671 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox OldaleWarehouseUpperSafemonNotice_Text_0
# 673 "data/maps/OldaleWarehouseUpper/scripts.pory"
	hidemonpic
# 674 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


DevonWarehouseManagerAbra::
# 678 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 679 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 680 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 12, WarehouseUpperBallManager_Movement_0
# 681 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 12
# 682 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playmoncry SPECIES_ABRA, CRY_MODE_WEAK
# 683 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseManagerAbra_Text_0
# 684 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 12, DevonWarehouseManagerAbra_Movement_0
# 685 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 12
# 686 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


DevonWarehouseUpperManager::
# 690 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 691 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 692 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_0
# 694 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 10, WarehouseUpperBallManager_Movement_0
# 695 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 10
# 696 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_1
# 697 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 698 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 10, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 699 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 10
# 700 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_2
# 701 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 10, OldaleWarehouseUpperRebelEventEntrance_Movement_16
# 702 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 10
# 703 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_3
# 704 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 705 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 706 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_4
# 708 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseUpperRebelEventEntrance_Movement_9
# 709 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 710 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_5
# 712 "data/maps/OldaleWarehouseUpper/scripts.pory"
	giveitem ITEM_TM_TELEPORT
# 714 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_6
# 716 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 10, OldaleWarehouseUpperRebelEventEntrance_Movement_2
# 717 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 10
# 718 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_7
# 720 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playmoncry SPECIES_ABRA, CRY_MODE_WEAK
# 721 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseManagerAbra_Text_0
# 723 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 10, OldaleWarehouseUpperRebelEventEntrance_Movement_6
# 724 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 10
# 725 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_8
# 727 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TELEPORT
# 728 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 10
# 729 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 730 "data/maps/OldaleWarehouseUpper/scripts.pory"
	playse SE_M_TELEPORT
# 731 "data/maps/OldaleWarehouseUpper/scripts.pory"
	removeobject 12
# 732 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitse
# 733 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag warehousemanagerandabra
# 735 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 11, OldaleWarehouseUpperRebelEventEntrance_Movement_20
# 736 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 11
# 737 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperManager_Text_9
# 738 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 11, DevonWarehouseUpperManager_Movement_0
# 739 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 11
# 743 "data/maps/OldaleWarehouseUpper/scripts.pory"
	closemessage
# 745 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


DevonWarehouseUpperComplainer::
# 750 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 751 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 753 "data/maps/OldaleWarehouseUpper/scripts.pory"
	goto_if_unset warehousemanagerandabra, DevonWarehouseUpperComplainer_2
# 765 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperComplainer_Text_1
DevonWarehouseUpperComplainer_1:
# 767 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return

DevonWarehouseUpperComplainer_2:
# 755 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 41, WarehouseUpperBallManager_Movement_0
# 756 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 41
# 757 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperComplainer_Text_0
# 759 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 41, DevonWarehouseUpperManager_Movement_0
# 760 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 41
	goto DevonWarehouseUpperComplainer_1


DevonWarehouseUpperComputerGuy::
# 773 "data/maps/OldaleWarehouseUpper/scripts.pory"
	lock
# 774 "data/maps/OldaleWarehouseUpper/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 775 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 14, WarehouseUpperBallManager_Movement_0
# 776 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 14
# 777 "data/maps/OldaleWarehouseUpper/scripts.pory"
	msgbox DevonWarehouseUpperComputerGuy_Text_0
# 780 "data/maps/OldaleWarehouseUpper/scripts.pory"
	applymovement 14, DevonWarehouseUpperComputerGuy_Movement_0
# 781 "data/maps/OldaleWarehouseUpper/scripts.pory"
	waitmovement 14
# 782 "data/maps/OldaleWarehouseUpper/scripts.pory"
	release
	return


# 30 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_0:
# 30 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_exclamation_mark
# 30 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 35 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_1:
# 35 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_exclamation_mark
# 35 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 40 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_2:
# 40 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 42 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_3:
# 42 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_right
	step_end

# 56 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_4:
# 56 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 56 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 56 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 61 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_5:
# 61 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_question_mark
# 61 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 62 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_6:
# 62 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 75 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_7:
# 75 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
	step_end

# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_8:
# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 92 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
	step_end

# 93 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_9:
# 93 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_down
	step_end

# 110 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_10:
# 110 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_diag_northwest
# 110 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_down
	step_end

# 113 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_11:
# 113 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 113 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 113 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_right
	step_end

# 114 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_12:
# 114 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 114 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 114 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 124 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_13:
# 124 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_left
	step_end

# 133 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_14:
# 133 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_left
	step_end

# 134 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_15:
# 134 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_down
	step_end

# 135 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_16:
# 135 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_up
	step_end

# 137 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_17:
# 137 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_right
	step_end

# 149 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_18:
# 149 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 149 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 149 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 149 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 149 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 153 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_19:
# 153 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_slow_left
	step_end

# 160 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_20:
# 160 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_exclamation_mark
	step_end

# 203 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_21:
# 203 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 203 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 203 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 203 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
	step_end

# 207 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_22:
# 207 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_2_left
# 207 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_2_right
	step_end

# 227 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_23:
# 227 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_down
# 227 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 228 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_24:
# 228 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 228 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 228 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
	step_end

# 236 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_25:
# 236 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 236 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 248 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_26:
# 248 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_slow_right
	step_end

# 260 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_27:
# 260 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
	step_end

# 308 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_28:
# 308 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_right
# 308 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
	step_end

# 309 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_29:
# 309 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_diag_northeast
# 309 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
	step_end

# 317 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_30:
# 317 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 317 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 318 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_31:
# 318 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 318 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 318 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
# 318 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_in_place_left
	step_end

# 359 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_32:
# 359 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_down
# 359 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
# 359 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
# 359 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_right
	step_end

# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_33:
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_down
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
# 361 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_34:
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_up
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_left
# 367 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_in_place_up
	step_end

# 369 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_35:
# 369 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_right
	step_end

# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_36:
# 374 "data/maps/OldaleWarehouseUpper/scripts.pory"
	emote_question_mark
	step_end

# 379 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_37:
# 379 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_slow_up
	step_end

# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_38:
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_up
# 402 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_left
	step_end

# 418 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_39:
# 418 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 424 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_40:
# 424 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 424 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 424 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 424 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 424 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 424 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 433 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_41:
# 433 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 433 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 437 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_42:
# 437 "data/maps/OldaleWarehouseUpper/scripts.pory"
	jump_2_right
	step_end

# 444 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_43:
# 444 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 444 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 444 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 444 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 444 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 444 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_right
# 444 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 453 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_44:
# 453 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 453 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 453 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 453 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
# 453 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 453 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 453 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_left
# 453 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_up
	step_end

# 464 "data/maps/OldaleWarehouseUpper/scripts.pory"
OldaleWarehouseUpperRebelEventEntrance_Movement_45:
# 464 "data/maps/OldaleWarehouseUpper/scripts.pory"
	walk_fast_down
	step_end

# 547 "data/maps/OldaleWarehouseUpper/scripts.pory"
WarehouseUpperBallManager_Movement_0:
# 547 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_player
	step_end

# 554 "data/maps/OldaleWarehouseUpper/scripts.pory"
WarehouseUpperBallManager_Movement_1:
# 554 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_right
	step_end

# 684 "data/maps/OldaleWarehouseUpper/scripts.pory"
DevonWarehouseManagerAbra_Movement_0:
# 684 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_left
	step_end

# 738 "data/maps/OldaleWarehouseUpper/scripts.pory"
DevonWarehouseUpperManager_Movement_0:
# 738 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_down
	step_end

# 780 "data/maps/OldaleWarehouseUpper/scripts.pory"
DevonWarehouseUpperComputerGuy_Movement_0:
# 780 "data/maps/OldaleWarehouseUpper/scripts.pory"
	face_up
	step_end

OldaleWarehouseUpperRebelEventEntrance_Text_0:
# 33 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hm? Who the hells are you?$"

OldaleWarehouseUpperRebelEventEntrance_Text_1:
# 39 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Huh? You've come for more?$"

OldaleWarehouseUpperRebelEventEntrance_Text_2:
# 49 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hey! It's him! That's the Littleroot\n"
	.string "chump! GET HIM!$"

OldaleWarehouseUpperRebelEventEntrance_Text_3:
# 50 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hey! It's her! That's the Littleroot\n"
	.string "chump! GET HER!$"

OldaleWarehouseUpperRebelEventEntrance_Text_4:
# 53 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Told you, Littleroot hicks are\n"
	.string "stubborn!$"

OldaleWarehouseUpperRebelEventEntrance_Text_5:
# 70 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "That's the guy...? Pfft! You're such a\n"
	.string "loser, Calvin!$"

OldaleWarehouseUpperRebelEventEntrance_Text_6:
# 71 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "That the girl...? Pfft! You're such a\n"
	.string "loser, Calvin!$"

OldaleWarehouseUpperRebelEventEntrance_Text_7:
# 73 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Well... for once, you are right.$"

OldaleWarehouseUpperRebelEventEntrance_Text_8:
# 78 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Wait... you beat Rick and Lola\n"
	.string "downstairs?\p"
	.string "Heh... perhaps this'll be fun.$"

OldaleWarehouseUpperRebelEventEntrance_Text_9:
# 80 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I mean, we can do this all day, so be my\n"
	.string "guest!!$"

OldaleWarehouseUpperRebelEventEntrance_Text_10:
# 87 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Jani, back me up! Let's do our COMBO!$"

OldaleWarehouseUpperRebelEventEntrance_Text_11:
# 89 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Jani, you know what time it is!$"

OldaleWarehouseUpperRebelEventEntrance_Text_12:
# 96 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I told you, if you pull that crap one\n"
	.string "more time...!$"

OldaleWarehouseUpperRebelEventEntrance_Text_13:
# 98 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Idiot boom-boom time? Hate to admit\n"
	.string "that it worked last time... {COLOR LIGHT_GRAY}{SHADOW WHITE}tsk...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleWarehouseUpperRebelEventEntrance_Text_14:
# 106 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Stand aside, you punks!$"

OldaleWarehouseUpperRebelEventEntrance_Text_15:
# 118 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "You ain't gonna beat this one like that.\n"
	.string "The way you battle...\p"
	.string "You're an ex-soldier, aren't you? What,\n"
	.string "you're a merc sent by Devon?\p"
	.string "Eh, all the same. We'll use you to send a\n"
	.string "message to this town...$"

OldaleWarehouseUpperRebelEventEntrance_Text_16:
# 121 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Guess you didn't get it the first time,\n"
	.string "so I'll repeat it loud and clear...$"

OldaleWarehouseUpperRebelEventEntrance_Text_17:
# 125 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "NO ONE...$"

OldaleWarehouseUpperRebelEventEntrance_Text_18:
# 128 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "MESSES...$"

OldaleWarehouseUpperRebelEventEntrance_Text_19:
# 139 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "WITH REBELS!$"

OldaleWarehouseUpperRebelEventEntrance_Text_20:
# 144 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Alright, you chump... if this were the old\n"
	.string "days, you'd have won already.$"

OldaleWarehouseUpperRebelEventEntrance_Text_21:
# 150 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Unlucky you, they ain't!!$"

OldaleWarehouseUpperRebelEventEntrance_Text_22:
# 180 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "T-that's the boss special! The TAUROS\n"
	.string "TAKE-DOWN!$"

OldaleWarehouseUpperRebelEventEntrance_Text_23:
# 183 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "This guy is done for!$"

OldaleWarehouseUpperRebelEventEntrance_Text_24:
# 184 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "This girl is done for!$"

OldaleWarehouseUpperRebelEventEntrance_Text_25:
# 189 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} prepares to tackle with all of\n"
	.string "his strength... what to do?$"

OldaleWarehouseUpperRebelEventEntrance_Text_26:
# 194 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Block$"

OldaleWarehouseUpperRebelEventEntrance_Text_27:
# 194 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Dodge$"

OldaleWarehouseUpperRebelEventEntrance_Text_28:
# 201 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Going to splat you flat! ORYAAAAH!$"

OldaleWarehouseUpperRebelEventEntrance_Text_29:
# 208 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The blow was impossible to block... and\n"
	.string "it was supereffective!$"

OldaleWarehouseUpperRebelEventEntrance_Text_30:
# 210 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Calvin was right - you're quite sturdy!\n"
	.string "But one more ought to do it!$"

OldaleWarehouseUpperRebelEventEntrance_Text_31:
# 234 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} can't stop his momentum, and\n"
	.string "slams himself against the wall!$"

OldaleWarehouseUpperRebelEventEntrance_Text_32:
# 239 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "B-boss! Are you alright!?$"

OldaleWarehouseUpperRebelEventEntrance_Text_33:
# 243 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Shut up, idiot! This is nothing, I just\n"
	.string "slipped! Ugh...$"

OldaleWarehouseUpperRebelEventEntrance_Text_34:
# 246 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "You... you're going to have it now! See if\n"
	.string "you can dodge this!$"

OldaleWarehouseUpperRebelEventEntrance_Text_35:
# 252 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} extends his arms for a wide,\n"
	.string "short-distance ram!$"

OldaleWarehouseUpperRebelEventEntrance_Text_36:
# 255 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Strike$"

OldaleWarehouseUpperRebelEventEntrance_Text_37:
# 270 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} receives a crutch strike in\n"
	.string "his wide-open chest!$"

OldaleWarehouseUpperRebelEventEntrance_Text_38:
# 274 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} receives a kick in his\n"
	.string "wide-open chest!$"

OldaleWarehouseUpperRebelEventEntrance_Text_39:
# 279 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "G-gah...!$"

OldaleWarehouseUpperRebelEventEntrance_Text_40:
# 302 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Heh... you're a tough merch. Tsk...$"

OldaleWarehouseUpperRebelEventEntrance_Text_41:
# 304 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "You want this place so badly? Whatever.\n"
	.string "We're done with it anyway.$"

OldaleWarehouseUpperRebelEventEntrance_Text_42:
# 306 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "PACK IT UP, REBELS! We're going back to\n"
	.string "{COLOR GREEN}PETALBURG!$"

OldaleWarehouseUpperRebelEventEntrance_Text_43:
# 323 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Y-you heard the boss! Back to base!$"

OldaleWarehouseUpperRebelEventEntrance_Text_44:
# 340 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}The {COLOR RED}Rebel{COLOR GREEN} has {PLAYER} in a wrestling\n"
	.string "grapple!$"

OldaleWarehouseUpperRebelEventEntrance_Text_45:
# 343 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Headbutt!$"

OldaleWarehouseUpperRebelEventEntrance_Text_46:
# 364 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "L-let me at him... where's the...\n"
	.string "t-werp...!?$"

OldaleWarehouseUpperRebelEventEntrance_Text_47:
# 365 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "L-let me at her... where's the...\n"
	.string "t-werp...!?$"

OldaleWarehouseUpperRebelEventEntrance_Text_48:
# 377 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Uhm... boss? You're going to Tauros\n"
	.string "Tackle from downstairs?$"

OldaleWarehouseUpperRebelEventEntrance_Text_49:
# 397 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Oouuch...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleWarehouseUpperRebelEventEntrance_Text_50:
# 399 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "...$"

OldaleWarehouseUpperRebelEventEntrance_Text_51:
# 405 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A-as the second in command, I say...$"

OldaleWarehouseUpperRebelEventEntrance_Text_52:
# 412 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I told you this guy was too strong!\n"
	.string "RUUUUN!$"

OldaleWarehouseUpperRebelEventEntrance_Text_53:
# 413 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I told you this girl was too strong!\n"
	.string "RUUUUN!$"

OldaleWarehouseUpperRebelEventEntrance_Text_54:
# 470 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "T-this is not over yet! You'll regret\n"
	.string "getting on our bad side, twerp!$"

OldaleWarehouseUpperRebelEventEntrance_Text_55:
# 481 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} begins to remember some of\n"
	.string "his soldier skills...$"

OldaleWarehouseUpperRebelEventEntrance_Text_56:
# 482 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} begins to remember some of\n"
	.string "her soldier skills...$"

OldaleWarehouseUpperRebelEventEntrance_Text_57:
# 485 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} can now train Pokémon {COLOR BLUE}(and\n"
	.string "Safemon) {COLOR GREEN}past level 10!$"

WarehouseUpperBallManager_Text_0:
# 549 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I find it curious those Rebels didn't\n"
	.string "take these Devon Balls...$"

WarehouseUpperBallManager_Text_1:
# 553 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Of course the rebels left none of the\n"
	.string "Devon Balls...$"

WarehouseDevonBallCrate_Text_0:
# 563 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "There's a few unsealed balls in the\n"
	.string "crates. No one will miss them...$"

WarehouseDevonBallCrate_Text_1:
# 564 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Take them$"

WarehouseDevonBallCrate_Text_2:
# 564 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Leave$"

WarehouseDevonBallCrate_Text_3:
# 575 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "It would be wrong to take these Devon\n"
	.string "Balls...$"

WarehouseDevonBallCrate_Text_4:
# 579 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A crate full of Devon Balls, still sealed.$"

OldaleWarehouseUpperComputer_Text_0:
# 588 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "The desktop's background features the\n"
	.string "warehouse's logo: a smiling Loadtad.$"

OldaleWarehouseUpperBookshelves_Text_0:
# 594 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "It's full of accounting books and\n"
	.string "company guidelines.$"

OldaleWarehouseUpperMicrowave_Text_0:
# 600 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "It's a microwave. There's some reheated\n"
	.string "food inside...$"

OldaleWarehouseUpperMicrowave_Text_1:
# 605 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "The microwave is empty.$"

OldaleWarehouseUpperMoneyBags_Text_0:
# 621 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Seems the {COLOR RED}Rebels{COLOR DARK_GRAY} forgot some of their\n"
	.string "loot...$"

OldaleWarehouseUpperMoneyBags_Text_1:
# 626 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Received 1000¥!$"

OldaleWarehouseUpperExtinguisher_Text_0:
# 636 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A regular fire extinguisher.$"

OldaleWarehouseUpperPrinter_Text_0:
# 642 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "There's many copies of a picture of\n"
	.string "Mister Stone.\p"
	.string "The image has been edited to make him\n"
	.string "look like a Mr. Mime.$"

OldaleWarehouseUpperCoffee_Text_0:
# 649 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "For some reason, there's a can of\n"
	.string "coffee by the coffee machine...$"

OldaleWarehouseUpperCoffee_Text_1:
# 653 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "A coffee machine, Chesto brand.$"

OldaleWarehouseUpperTrashcan_Text_0:
# 663 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "The trash can is empty.$"

OldaleWarehouseUpperSafemonNotice_Text_0:
# 671 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "{COLOR BLUE}Safemon Notice{COLOR DARK_GRAY}: To assist conditioning,\n"
	.string "do not feed Loadtads until end of\l"
	.string "shift!$"

DevonWarehouseManagerAbra_Text_0:
# 683 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "... aaaabraaa.$"

DevonWarehouseUpperManager_Text_0:
# 692 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I don't want to hear any more excuses,\n"
	.string "you hear me?\p"
	.string "I want this warehouse back in order by\n"
	.string "the...$"

DevonWarehouseUpperManager_Text_1:
# 696 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Hm? And who are you? If you're a job\n"
	.string "applicant, I'm afraid...$"

DevonWarehouseUpperManager_Text_2:
# 700 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Wait a minute - you...$"

DevonWarehouseUpperManager_Text_3:
# 703 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "If you aren't the warehouse's saviour!$"

DevonWarehouseUpperManager_Text_4:
# 706 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "See that camera behind you? It\n"
	.string "recorded all of your heroic deeds in\l"
	.string "this room!$"

DevonWarehouseUpperManager_Text_5:
# 710 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Please, allow me to give you this as\n"
	.string "thanks!$"

DevonWarehouseUpperManager_Text_6:
# 714 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "That is the most useful move for kind,\n"
	.string "busy people like us.$"

DevonWarehouseUpperManager_Text_7:
# 718 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Allow me to demonstrate... Abra!$"

DevonWarehouseUpperManager_Text_8:
# 725 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Goodbye!$"

DevonWarehouseUpperManager_Text_9:
# 737 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Wait, sir, you haven't...! Ah...$"

DevonWarehouseUpperComplainer_Text_0:
# 757 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "That manager comes everyday from\n"
	.string "Slateport with his Abra.\p"
	.string "He barks orders for 10 minutes, does no\n"
	.string "work, and teleports out.$"

DevonWarehouseUpperComplainer_Text_1:
# 765 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "But sir, half our Loadtads are missing,\n"
	.string "and the forklifts are not...$"

DevonWarehouseUpperComputerGuy_Text_0:
# 777 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "I'm running a virus check on our\n"
	.string "internal network-\p"
	.string "The Rebels have some impressive\n"
	.string "hackers, like Lanette, the designer of\l"
	.string "Hoenn's Storage System.\p"
	.string "We need to make sure the Rebels planted\n"
	.string "no malware.$"

RebelGruntMWareHouseUpperOutro::
# 516 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "If Cheerorb could use Self-Destruct... \nwe would have won!$"

RebelGruntFWareHouseUpperOutro::
# 519 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "... you're paying for my Devon Center\nfee.$"

RebelAdminWareHouseUpperOutro::
# 522 "data/maps/OldaleWarehouseUpper/scripts.pory"
	.string "Heh... this isn't over.$"
