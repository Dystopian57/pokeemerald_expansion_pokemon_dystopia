# 1 "data/maps/Petalburg_Dojo/scripts.pory"

# 2 "data/maps/Petalburg_Dojo/scripts.pory"
Petalburg_Dojo_MapScripts::
# 3 "data/maps/Petalburg_Dojo/scripts.pory"
	.byte 0

PetalburgDojoApproach1::
# 8 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 1
# 9 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoApproach2::
# 13 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 2
# 14 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoApproach3::
# 18 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 3
# 19 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoApproach4::
# 23 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 4
# 24 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoApproach5::
# 28 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 5
# 29 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoApproach6::
# 33 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 6
# 34 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoApproach7::
# 38 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 7
# 39 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoIntro::
# 44 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 45 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 47 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_PIN
# 48 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, PetalburgDojoIntro_Movement_0
# 49 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 1
# 51 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 52 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 55 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_0
# 58 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, PetalburgDojoIntro_Movement_1
# 59 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 1
# 61 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_2
# 62 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 64 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_PIN
# 65 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 66 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 68 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_SHARPYANDCAMELIAOLDALE, 0
	goto_if_eq PetalburgDojoIntro_3
PetalburgDojoIntro_1:
# 83 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_SHARPYANDCAMELIAOLDALE, 0
	goto_if_eq PetalburgDojoIntro_8
PetalburgDojoIntro_6:
# 91 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_SHARPYANDCAMELIAOLDALE, 1
	goto_if_eq PetalburgDojoIntro_12
PetalburgDojoIntro_11:
# 95 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 96 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_CONFUSED
# 97 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_M_SKETCH
# 98 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, PetalburgDojoIntro_Movement_4
# 99 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 1
# 100 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_7
# 102 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 103 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 105 "data/maps/Petalburg_Dojo/scripts.pory"
	checkplayergender
# 106 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgDojoIntro_15
PetalburgDojoIntro_14:
# 108 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgDojoIntro_18
PetalburgDojoIntro_17:
# 111 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 112 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 113 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_PIN
# 114 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_5
# 115 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 116 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_10
# 118 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 119 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 120 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_11
# 121 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 122 "data/maps/Petalburg_Dojo/scripts.pory"
	closemessage
# 125 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 1
	goto_if_eq PetalburgDojoIntro_21
PetalburgDojoIntro_20:
# 130 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 2
	goto_if_eq PetalburgDojoIntro_24
PetalburgDojoIntro_23:
# 135 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 3
	goto_if_eq PetalburgDojoIntro_27
PetalburgDojoIntro_26:
# 140 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 4
	goto_if_eq PetalburgDojoIntro_30
PetalburgDojoIntro_29:
# 145 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 5
	goto_if_eq PetalburgDojoIntro_33
PetalburgDojoIntro_32:
# 150 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 6
	goto_if_eq PetalburgDojoIntro_36
PetalburgDojoIntro_35:
# 155 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 7
	goto_if_eq PetalburgDojoIntro_39
PetalburgDojoIntro_38:
# 160 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_13
# 161 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_13
# 162 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 164 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 165 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_CONFUSED
# 166 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_12
# 168 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 169 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 170 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_13
# 172 "data/maps/Petalburg_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDojoIntro_Text_14, PetalburgDojoIntro_Text_15
# 174 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDojoIntro_42
PetalburgDojoIntro_41:
# 386 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDojoIntro_45
PetalburgDojoIntro_44:
# 411 "data/maps/Petalburg_Dojo/scripts.pory"
endofdojointro:
# 412 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 414 "data/maps/Petalburg_Dojo/scripts.pory"
	release
	return

PetalburgDojoIntro_2:
# 71 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_1
# 73 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 74 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 75 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_2
# 77 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_3
# 78 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 79 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 80 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 81 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_3
	goto PetalburgDojoIntro_1

PetalburgDojoIntro_3:
# 68 "data/maps/Petalburg_Dojo/scripts.pory"
	goto_if_unset Sharpy103Rematch, PetalburgDojoIntro_2
	goto PetalburgDojoIntro_1

PetalburgDojoIntro_7:
# 84 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_4
# 86 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 87 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 88 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_5
	goto PetalburgDojoIntro_6

PetalburgDojoIntro_8:
# 83 "data/maps/Petalburg_Dojo/scripts.pory"
	goto_if_set Sharpy103Rematch, PetalburgDojoIntro_7
	goto PetalburgDojoIntro_6

PetalburgDojoIntro_12:
# 92 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_6
	goto PetalburgDojoIntro_11

PetalburgDojoIntro_15:
# 106 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_8
	goto PetalburgDojoIntro_14

PetalburgDojoIntro_18:
# 108 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_9
	goto PetalburgDojoIntro_17

PetalburgDojoIntro_21:
# 126 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_6
# 127 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_20

PetalburgDojoIntro_24:
# 131 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_7
# 132 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_23

PetalburgDojoIntro_27:
# 136 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_8
# 137 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_26

PetalburgDojoIntro_30:
# 141 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_9
# 142 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_29

PetalburgDojoIntro_33:
# 146 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_10
# 147 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_32

PetalburgDojoIntro_36:
# 151 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_11
# 152 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_35

PetalburgDojoIntro_39:
# 156 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_12
# 157 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_38

PetalburgDojoIntro_42:
# 175 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 176 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 177 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_16
# 178 "data/maps/Petalburg_Dojo/scripts.pory"
devoncatchup:
# 179 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 180 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 181 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_17
# 184 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_14
# 185 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 186 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 187 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 188 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_18
# 190 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_13
# 191 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 192 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 193 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 194 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_19
# 196 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_15
# 197 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 198 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 199 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 200 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_20
# 202 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 203 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 204 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_21
# 206 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_13
# 207 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 208 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 209 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 210 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_22
# 212 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 213 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 214 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_23
# 217 "data/maps/Petalburg_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDojoIntro_Text_24, PetalburgDojoIntro_Text_25
# 219 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDojoIntro_48
PetalburgDojoIntro_47:
# 367 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDojoIntro_51
PetalburgDojoIntro_50:
# 381 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_PHASE, 1
# 382 "data/maps/Petalburg_Dojo/scripts.pory"
	goto endofdojointro
	goto PetalburgDojoIntro_41

PetalburgDojoIntro_45:
# 387 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 388 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_CONFUSED
# 389 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_53
# 392 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 393 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 394 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_54
# 397 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 398 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 399 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_55
# 403 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 404 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 405 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_56
# 408 "data/maps/Petalburg_Dojo/scripts.pory"
	goto devoncatchup
	goto PetalburgDojoIntro_44

PetalburgDojoIntro_48:
# 220 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 221 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 222 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_26
# 223 "data/maps/Petalburg_Dojo/scripts.pory"
agreedtohelpwith104indojo:
# 224 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_15
# 225 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 226 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 227 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 228 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_27
# 230 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 231 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 232 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_28
# 233 "data/maps/Petalburg_Dojo/scripts.pory"
	hidefollower
# 235 "data/maps/Petalburg_Dojo/scripts.pory"
repeatdojointrobattle:
# 237 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, PetalburgDojoIntro_Movement_16
# 239 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_17
# 241 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_18
# 243 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_19
# 244 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 246 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 247 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_MENACING
# 248 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_29
# 250 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_LEDGE
# 251 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_20
# 252 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 254 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_SHARPYANDCAMELIAOLDALE, 1
	goto_if_eq PetalburgDojoIntro_54
# 264 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 265 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 266 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_32
# 268 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 269 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 270 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_33
PetalburgDojoIntro_53:
# 272 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 273 "data/maps/Petalburg_Dojo/scripts.pory"
	setfollowernpc LOCALID_DOJO_NORMAN, FNPC_ALL, OldaleRivalfollowchat, PARTNER_NORMAN
# 274 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_PHASE, 1
# 275 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag lostdojointromultibattle
# 276 "data/maps/Petalburg_Dojo/scripts.pory"
	clearflag dojonorman
# 277 "data/maps/Petalburg_Dojo/scripts.pory"
	trainerbattle_two_trainers TRAINER_SHARPYDOJO, Sharpy_MultiOutro, TRAINER_CAMELIADOJO, Camelia_MultiOutro
# 280 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_PHASE, 2
# 282 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 283 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_HAPPY
# 284 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_34
# 286 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 287 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 288 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_35
# 291 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 292 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 293 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_36
# 295 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_11
# 296 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_11
# 297 "data/maps/Petalburg_Dojo/scripts.pory"
	opendoor 1, 1
# 298 "data/maps/Petalburg_Dojo/scripts.pory"
	opendoor 7, 1
# 299 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_DOOR
# 300 "data/maps/Petalburg_Dojo/scripts.pory"
	waitse
# 301 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_21
# 302 "data/maps/Petalburg_Dojo/scripts.pory"
	removeobject 3
# 303 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_21
# 304 "data/maps/Petalburg_Dojo/scripts.pory"
	removeobject 2
# 305 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 306 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag dojosharpyandcamelia
# 308 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 309 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 310 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_37
# 313 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 314 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 315 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_38
# 317 "data/maps/Petalburg_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDojoIntro_Text_39, PetalburgDojoIntro_Text_40
# 319 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDojoIntro_58
PetalburgDojoIntro_57:
# 361 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDojoIntro_60
	goto PetalburgDojoIntro_47

PetalburgDojoIntro_51:
# 368 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 369 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 370 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_50
# 373 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 374 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 375 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_51
# 378 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 379 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 380 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_52
	goto PetalburgDojoIntro_50

PetalburgDojoIntro_54:
# 256 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 257 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 258 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_30
# 259 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 260 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 261 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_31
	goto PetalburgDojoIntro_53

PetalburgDojoIntro_58:
# 320 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 321 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_CONFUSED
# 322 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_41
# 324 "data/maps/Petalburg_Dojo/scripts.pory"
rebelcatchup:
# 325 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 326 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 327 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_42
# 329 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 330 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 331 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_43
# 334 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 335 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 336 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_44
# 339 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 340 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 341 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_45
# 343 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 344 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_MENACING
# 345 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_46
# 349 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 350 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 351 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_47
# 354 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 355 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 356 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_48
	goto PetalburgDojoIntro_57

PetalburgDojoIntro_60:
# 362 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_49
# 363 "data/maps/Petalburg_Dojo/scripts.pory"
	goto rebelcatchup
	goto PetalburgDojoIntro_47


Petalburg_DojoNormanIdle::
# 418 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 419 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 421 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, Petalburg_DojoNormanIdle_Movement_0
# 422 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 1
# 424 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_PHASE, 1
	goto_if_eq Petalburg_DojoNormanIdle_2
Petalburg_DojoNormanIdle_1:
# 460 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_PHASE, 2
	goto_if_eq Petalburg_DojoNormanIdle_5
Petalburg_DojoNormanIdle_4:
# 469 "data/maps/Petalburg_Dojo/scripts.pory"
endofnormanidledojo:
# 470 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 471 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, PetalburgDojoIntro_Movement_1
# 472 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 1
# 473 "data/maps/Petalburg_Dojo/scripts.pory"
	release
	return

Petalburg_DojoNormanIdle_2:
# 426 "data/maps/Petalburg_Dojo/scripts.pory"
	goto_if_set lostdojointromultibattle, Petalburg_DojoNormanIdle_8
Petalburg_DojoNormanIdle_7:
# 439 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_2
# 442 "data/maps/Petalburg_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Petalburg_DojoNormanIdle_Text_3, Petalburg_DojoNormanIdle_Text_4
# 444 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Petalburg_DojoNormanIdle_11
Petalburg_DojoNormanIdle_10:
# 451 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Petalburg_DojoNormanIdle_13
	goto Petalburg_DojoNormanIdle_1

Petalburg_DojoNormanIdle_5:
# 461 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_7
	goto Petalburg_DojoNormanIdle_4

Petalburg_DojoNormanIdle_8:
# 428 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 429 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 430 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_0
# 433 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 434 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 435 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_1
# 436 "data/maps/Petalburg_Dojo/scripts.pory"
	goto repeatdojointrobattle
	goto Petalburg_DojoNormanIdle_7

Petalburg_DojoNormanIdle_11:
# 445 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 446 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_HAPPY
# 447 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_5
# 448 "data/maps/Petalburg_Dojo/scripts.pory"
	goto agreedtohelpwith104indojo
	goto Petalburg_DojoNormanIdle_10

Petalburg_DojoNormanIdle_13:
# 452 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 453 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 454 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_6
# 455 "data/maps/Petalburg_Dojo/scripts.pory"
	goto endofnormanidledojo
	goto Petalburg_DojoNormanIdle_1


Petalburg_DojoSharpyIdle::
# 478 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 479 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 480 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, Petalburg_DojoNormanIdle_Movement_0
# 481 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 482 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_PHASE, 1
	goto_if_eq Petalburg_DojoSharpyIdle_2
Petalburg_DojoSharpyIdle_1:
# 488 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_13
# 489 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
	return

Petalburg_DojoSharpyIdle_2:
# 484 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 485 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 486 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoSharpyIdle_Text_0
	goto Petalburg_DojoSharpyIdle_1


Petalburg_DojoCameliaIdle::
# 494 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 495 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 496 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, Petalburg_DojoNormanIdle_Movement_0
# 497 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 498 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_PHASE, 1
	goto_if_eq Petalburg_DojoCameliaIdle_2
Petalburg_DojoCameliaIdle_1:
# 513 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_13
# 514 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
	return

Petalburg_DojoCameliaIdle_2:
# 500 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 501 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 503 "data/maps/Petalburg_Dojo/scripts.pory"
	checkplayergender
# 504 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Petalburg_DojoCameliaIdle_5
Petalburg_DojoCameliaIdle_4:
# 506 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Petalburg_DojoCameliaIdle_8
Petalburg_DojoCameliaIdle_7:
# 509 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 510 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 511 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoCameliaIdle_Text_2
	goto Petalburg_DojoCameliaIdle_1

Petalburg_DojoCameliaIdle_5:
# 505 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoCameliaIdle_Text_0
	goto Petalburg_DojoCameliaIdle_4

Petalburg_DojoCameliaIdle_8:
# 507 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoCameliaIdle_Text_1
	goto Petalburg_DojoCameliaIdle_7


PetalburgDojoNoRoomAccess::
# 519 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 520 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 521 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, Petalburg_DojoNormanIdle_Movement_0
# 522 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 1
# 524 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 525 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 526 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoNoRoomAccess_Text_0
# 528 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, PetalburgDojoIntro_Movement_1
# 529 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoNoRoomAccess_Movement_0
# 530 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 532 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 533 "data/maps/Petalburg_Dojo/scripts.pory"
	release
	return


Petalburg_DojoNormanBeforeYouGo::
# 538 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 539 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 541 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Petalburg_DojoNormanBeforeYouGo_Movement_0
# 542 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 544 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 545 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 546 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanBeforeYouGo_Text_0
# 548 "data/maps/Petalburg_Dojo/scripts.pory"
	checkplayergender
# 549 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Petalburg_DojoNormanBeforeYouGo_2
Petalburg_DojoNormanBeforeYouGo_1:
# 554 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Petalburg_DojoNormanBeforeYouGo_5
Petalburg_DojoNormanBeforeYouGo_4:
# 560 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_PHASE, 2
# 561 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag rebelsunblockarcade
# 562 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 563 "data/maps/Petalburg_Dojo/scripts.pory"
	release
	return

Petalburg_DojoNormanBeforeYouGo_2:
# 550 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 551 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_HAPPY
# 552 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanBeforeYouGo_Text_1
	goto Petalburg_DojoNormanBeforeYouGo_1

Petalburg_DojoNormanBeforeYouGo_5:
# 555 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 556 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_HAPPY
# 557 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanBeforeYouGo_Text_2
	goto Petalburg_DojoNormanBeforeYouGo_4


# 48 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_0:
# 48 "data/maps/Petalburg_Dojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 58 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_1:
# 58 "data/maps/Petalburg_Dojo/scripts.pory"
	face_down
	step_end

# 61 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_2:
# 61 "data/maps/Petalburg_Dojo/scripts.pory"
	face_down
# 61 "data/maps/Petalburg_Dojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 77 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_3:
# 77 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_right
	step_end

# 98 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_4:
# 98 "data/maps/Petalburg_Dojo/scripts.pory"
	emote_x
	step_end

# 114 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_5:
# 114 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_down
# 114 "data/maps/Petalburg_Dojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 126 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_6:
# 126 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 126 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 126 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 126 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 126 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 131 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_7:
# 131 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 131 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 131 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 131 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 136 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_8:
# 136 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 136 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 136 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 141 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_9:
# 141 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 141 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 146 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_10:
# 146 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 146 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 146 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 151 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_11:
# 151 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 151 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 151 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 151 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 156 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_12:
# 156 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 156 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 156 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 156 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 156 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 160 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_13:
# 160 "data/maps/Petalburg_Dojo/scripts.pory"
	face_up
	step_end

# 184 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_14:
# 184 "data/maps/Petalburg_Dojo/scripts.pory"
	face_right
	step_end

# 196 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_15:
# 196 "data/maps/Petalburg_Dojo/scripts.pory"
	face_left
	step_end

# 237 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_16:
# 237 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 237 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 237 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_right
	step_end

# 239 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_17:
# 239 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_down
# 239 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 239 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 239 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_right
	step_end

# 241 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_18:
# 241 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 241 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 241 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_left
	step_end

# 243 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_19:
# 243 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 243 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 243 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 243 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_down
# 243 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_left
	step_end

# 251 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_20:
# 251 "data/maps/Petalburg_Dojo/scripts.pory"
	jump_in_place_left
	step_end

# 301 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_21:
# 301 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 421 "data/maps/Petalburg_Dojo/scripts.pory"
Petalburg_DojoNormanIdle_Movement_0:
# 421 "data/maps/Petalburg_Dojo/scripts.pory"
	face_player
	step_end

# 529 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoNoRoomAccess_Movement_0:
# 529 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_down
	step_end

# 541 "data/maps/Petalburg_Dojo/scripts.pory"
Petalburg_DojoNormanBeforeYouGo_Movement_0:
# 541 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_up
	step_end

PetalburgDojoIntro_Text_0:
# 55 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "{PLAYER}... is that you?$"

PetalburgDojoIntro_Text_1:
# 71 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh, hello, {PLAYER}!$"

PetalburgDojoIntro_Text_2:
# 75 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "You really stood me up in {COLOR GREEN}Route 103{COLOR DARK_GRAY}! I\n"
	.string "waited for AGES!$"

PetalburgDojoIntro_Text_3:
# 81 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "He's exaggerating. He was only there\n"
	.string "for five minutes.$"

PetalburgDojoIntro_Text_4:
# 84 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh, hello, {PLAYER}! You came!$"

PetalburgDojoIntro_Text_5:
# 88 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "You should have come for a rematch on\n"
	.string "Route 103 - I knew you went easy on me!$"

PetalburgDojoIntro_Text_6:
# 92 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh hi {PLAYER} - you came! Took you\n"
	.string "your sweet time!$"

PetalburgDojoIntro_Text_7:
# 100 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh, so you know each other? I guess\n"
	.string "Hoenn is a small place.$"

PetalburgDojoIntro_Text_8:
# 106 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Sharpy, Camelia - in case you didn't\n"
	.string "know, {PLAYER} is my grandson.$"

PetalburgDojoIntro_Text_9:
# 108 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Sharpy, Camelia - in case you didn't\n"
	.string "know, {PLAYER} is my granddaugther.$"

PetalburgDojoIntro_Text_10:
# 116 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh? I knew you were special when I saw\n"
	.string "you! My intuition never misses!$"

PetalburgDojoIntro_Text_11:
# 120 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Now, don't stand there, {PLAYER} -\n"
	.string "come.$"

PetalburgDojoIntro_Text_12:
# 166 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "{PLAYER}... I know you've been...\n"
	.string "“sick”, for a while.$"

PetalburgDojoIntro_Text_13:
# 170 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Are you up to date with things in\n"
	.string "Hoenn?$"

PetalburgDojoIntro_Text_14:
# 172 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I am$"

PetalburgDojoIntro_Text_15:
# 172 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I am not$"

PetalburgDojoIntro_Text_16:
# 177 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Then you know about Devon and its\n"
	.string "questionable policies. Like Safemon.$"

PetalburgDojoIntro_Text_17:
# 181 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "We've been protesting against Devon in\n"
	.string "front of their closest lab, in {COLOR GREEN}Route\l"
	.string "104{COLOR DARK_GRAY}, but...$"

PetalburgDojoIntro_Text_18:
# 188 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "They're not listening to us. So we're\n"
	.string "planning a “bolder” approach.$"

PetalburgDojoIntro_Text_19:
# 194 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Precisely. We want to liberate the\n"
	.string "Safemon that are held captive there.$"

PetalburgDojoIntro_Text_20:
# 200 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Yeah! But no battles, and no stealing\n"
	.string "stuff like Rebels do.$"

PetalburgDojoIntro_Text_21:
# 204 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Just freeing those poor Safemon. Get in\n"
	.string "and get out, all stealthy like!$"

PetalburgDojoIntro_Text_22:
# 210 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I know it's sudden, {PLAYER} - but if\n"
	.string "you agree with us...$"

PetalburgDojoIntro_Text_23:
# 214 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Will you help us liberate the Safemon\n"
	.string "that Devon keeps in {COLOR GREEN}Route 104{COLOR DARK_GRAY}?$"

PetalburgDojoIntro_Text_24:
# 217 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I will$"

PetalburgDojoIntro_Text_25:
# 217 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I will not$"

PetalburgDojoIntro_Text_26:
# 222 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Excellent. Now, while it is true our\n"
	.string "methods will be pacific...$"

PetalburgDojoIntro_Text_27:
# 228 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "We need to be prepared for everything!\n"
	.string "So we were going to do a battle!$"

PetalburgDojoIntro_Text_28:
# 232 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Come with me, {PLAYER}. We will face\n"
	.string "Sharpy and Camelia in a double battle.$"

PetalburgDojoIntro_Text_29:
# 248 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Now focus, you two. And no bickering\n"
	.string "between each other this time.$"

PetalburgDojoIntro_Text_30:
# 258 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Of course - it's rematch time,\n"
	.string "{PLAYER}$"

PetalburgDojoIntro_Text_31:
# 261 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Now it's my turn to get to battle you!\n"
	.string "I'm kind of excited.$"

PetalburgDojoIntro_Text_32:
# 266 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "You got it - let's do this, Camelia!$"

PetalburgDojoIntro_Text_33:
# 270 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "You better not drag me down, Sharpy!$"

PetalburgDojoIntro_Text_34:
# 284 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Now, no need to get upset. You do did\n"
	.string "remarkably well.$"

PetalburgDojoIntro_Text_35:
# 288 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Now go back to your rooms, and get\n"
	.string "everything ready. I need to go over a\l"
	.string "last thing with {PLAYER}$"

PetalburgDojoIntro_Text_36:
# 293 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Gotcha! See you later, {PLAYER}.$"

PetalburgDojoIntro_Text_37:
# 310 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "{PLAYER}... before we set out for\n"
	.string "Route 104, there's something I need\l"
	.string "your help with.$"

PetalburgDojoIntro_Text_38:
# 315 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "We went over Devon Co. - but do you\n"
	.string "know about Rebels too?$"

PetalburgDojoIntro_Text_39:
# 317 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I do$"

PetalburgDojoIntro_Text_40:
# 317 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I don't$"

PetalburgDojoIntro_Text_41:
# 322 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Hmm... your face tells me you have met\n"
	.string "them, even.$"

PetalburgDojoIntro_Text_42:
# 327 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Rebels are a troublesome bunch, but\n"
	.string "they do not worry me as much as Devon.$"

PetalburgDojoIntro_Text_43:
# 331 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "They are a reactionary force to Devon.\n"
	.string "If we deal with Devon, the Rebel\l"
	.string "situation should sort itself out.$"

PetalburgDojoIntro_Text_44:
# 336 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "That said... after they lost Oldale\n"
	.string "Warehouse, I've heard they want to\l"
	.string "occupy Devon Lab in Route 104 next.$"

PetalburgDojoIntro_Text_45:
# 341 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "If they do that, our reivindication will\n"
	.string "be tarnihshed with their vandalism.$"

PetalburgDojoIntro_Text_46:
# 345 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "To avoid that, I want you to go see the\n"
	.string "Rebel Leader in Petalburg, and ask him\l"
	.string "and his Rebels leave Route 104 alone, on\l"
	.string "my behalf.$"

PetalburgDojoIntro_Text_47:
# 351 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "He is a... problematic man. But he owes\n"
	.string "me one, and I know he will do me this\l"
	.string "favour.$"

PetalburgDojoIntro_Text_48:
# 356 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "He should be in Petalburg Arcade, the\n"
	.string "building in front of the dojo.\p"
	.string "Don't delay. We will wait here for you.$"

PetalburgDojoIntro_Text_49:
# 362 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Really? I heard they were causing\n"
	.string "trouble in Oldale recently.$"

PetalburgDojoIntro_Text_50:
# 370 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I understand... After the war, you must\n"
	.string "be tired of fighting..$"

PetalburgDojoIntro_Text_51:
# 375 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Perhaps seeing more of Petalburg, and\n"
	.string "its surroundings, will change your mind.$"

PetalburgDojoIntro_Text_52:
# 380 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "If it does, our offer will stand. Take\n"
	.string "care, {PLAYER}.$"

PetalburgDojoIntro_Text_53:
# 389 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Really? I thought Balsam or Birch would\n"
	.string "have caught you up.$"

PetalburgDojoIntro_Text_54:
# 394 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Well, to make a long story short...$"

PetalburgDojoIntro_Text_55:
# 399 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Little by little, Devon has been seizing\n"
	.string "control of Hoenn.\p"
	.string "They did some good things at first, like\n"
	.string "rebuilding infraestructure, and getting\l"
	.string "Pokémon Centers back in order.$"

PetalburgDojoIntro_Text_56:
# 405 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "But then they began to privatize said\n"
	.string "centers, absorb Pokémarts, build roads\l"
	.string "without regard to nature, put tolls on\l"
	.string "travel. The list goes on and on.\p"
	.string "And to top it all off... they began to\n"
	.string "turn Pokémon into Safemon.$"

Petalburg_DojoNormanIdle_Text_0:
# 430 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Now, don't feel ashamed, {PLAYER}.\n"
	.string "After a year at home, it's natural your\l"
	.string "training skills have rusted a little.$"

Petalburg_DojoNormanIdle_Text_1:
# 435 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Let's practice some more. We need to be\n"
	.string "prepared for the unexpected$"

Petalburg_DojoNormanIdle_Text_2:
# 439 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "You're back, {PLAYER}, and we're glad\n"
	.string "you are.\p"
	.string "Have you changed your mind about\n"
	.string "helping us free those Safemon?$"

Petalburg_DojoNormanIdle_Text_3:
# 442 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I will help$"

Petalburg_DojoNormanIdle_Text_4:
# 442 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I won't help$"

Petalburg_DojoNormanIdle_Text_5:
# 447 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I knew I could count on you. Now, while\n"
	.string "our intentions are pacific...$"

Petalburg_DojoNormanIdle_Text_6:
# 454 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I am sorry to hear that... but you are in\n"
	.string "your right to refuse.$"

Petalburg_DojoNormanIdle_Text_7:
# 461 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "{PLAYER} - what is it? Did you speak\n"
	.string "with my acquaintance yet?$"

Petalburg_DojoSharpyIdle_Text_0:
# 486 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Don't worry, freeing those Safemon\n"
	.string "should be cinch-Trapinch for us three!$"

Petalburg_DojoCameliaIdle_Text_0:
# 505 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "If you are Norman's grandson, then that\n"
	.string "means your parents are...$"

Petalburg_DojoCameliaIdle_Text_1:
# 507 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "If you are Norman's granddaugther,\n"
	.string "then that means your parents are...$"

Petalburg_DojoCameliaIdle_Text_2:
# 511 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Well, I understand if you prefer to stay\n"
	.string "away from conflict.$"

PetalburgDojoNoRoomAccess_Text_0:
# 526 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "You know this dojo, {PLAYER}. There's\n"
	.string "no exit that way.$"

Petalburg_DojoNormanBeforeYouGo_Text_0:
# 546 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh, and... {PLAYER}?$"

Petalburg_DojoNormanBeforeYouGo_Text_1:
# 552 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Good job on that battle. You're a good\n"
	.string "trainer. Just like your father.$"

Petalburg_DojoNormanBeforeYouGo_Text_2:
# 557 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Good job on that battle. You're a good\n"
	.string "trainer. Just like your mother.$"

Camelia_MultiOutro::
# 566 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I want {PLAYER} as partner next\ntime...$"

Sharpy_MultiOutro::
# 569 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh yeah!? Right back at you! Bleeeh!$"
