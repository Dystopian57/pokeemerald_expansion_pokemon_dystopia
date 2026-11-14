# 1 "data/maps/Petalburg_Dojo/scripts.pory"

# 2 "data/maps/Petalburg_Dojo/scripts.pory"
Petalburg_Dojo_MapScripts::
# 3 "data/maps/Petalburg_Dojo/scripts.pory"
	.byte 0

PetalburgDojoApproach1::
# 11 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 1
# 12 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoApproach2::
# 16 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 2
# 17 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoApproach3::
# 21 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 3
# 22 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoApproach4::
# 26 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 4
# 27 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoApproach5::
# 31 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 5
# 32 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoApproach6::
# 36 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 6
# 37 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoApproach7::
# 41 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_DOJO_POSITION, 7
# 42 "data/maps/Petalburg_Dojo/scripts.pory"
	goto PetalburgDojoIntro
	return


PetalburgDojoIntro::
# 47 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 48 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 50 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_PIN
# 51 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, PetalburgDojoIntro_Movement_0
# 52 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 1
# 54 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 55 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 58 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_0
# 61 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, PetalburgDojoIntro_Movement_1
# 62 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 1
# 64 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_2
# 65 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 67 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_PIN
# 68 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 69 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 71 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_SHARPYANDCAMELIAOLDALE, 0
	goto_if_eq PetalburgDojoIntro_3
PetalburgDojoIntro_1:
# 86 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_SHARPYANDCAMELIAOLDALE, 0
	goto_if_eq PetalburgDojoIntro_8
PetalburgDojoIntro_6:
# 94 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_SHARPYANDCAMELIAOLDALE, 1
	goto_if_eq PetalburgDojoIntro_12
PetalburgDojoIntro_11:
# 98 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 99 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_CONFUSED
# 100 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_M_SKETCH
# 101 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, PetalburgDojoIntro_Movement_4
# 102 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 1
# 103 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_7
# 105 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 106 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 108 "data/maps/Petalburg_Dojo/scripts.pory"
	checkplayergender
# 109 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgDojoIntro_15
PetalburgDojoIntro_14:
# 111 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgDojoIntro_18
PetalburgDojoIntro_17:
# 114 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 115 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 116 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_PIN
# 117 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_5
# 118 "data/maps/Petalburg_Dojo/scripts.pory"
	waitse
# 119 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_10
# 121 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 122 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 123 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_11
# 124 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 125 "data/maps/Petalburg_Dojo/scripts.pory"
	closemessage
# 128 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 1
	goto_if_eq PetalburgDojoIntro_21
PetalburgDojoIntro_20:
# 133 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 2
	goto_if_eq PetalburgDojoIntro_24
PetalburgDojoIntro_23:
# 138 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 3
	goto_if_eq PetalburgDojoIntro_27
PetalburgDojoIntro_26:
# 143 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 4
	goto_if_eq PetalburgDojoIntro_30
PetalburgDojoIntro_29:
# 148 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 5
	goto_if_eq PetalburgDojoIntro_33
PetalburgDojoIntro_32:
# 153 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 6
	goto_if_eq PetalburgDojoIntro_36
PetalburgDojoIntro_35:
# 158 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_DOJO_POSITION, 7
	goto_if_eq PetalburgDojoIntro_39
PetalburgDojoIntro_38:
# 163 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_13
# 164 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_13
# 165 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 167 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 168 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_CONFUSED
# 169 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_12
# 171 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 172 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 173 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_13
# 175 "data/maps/Petalburg_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDojoIntro_Text_14, PetalburgDojoIntro_Text_15
# 177 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDojoIntro_42
PetalburgDojoIntro_41:
# 414 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDojoIntro_45
PetalburgDojoIntro_44:
# 439 "data/maps/Petalburg_Dojo/scripts.pory"
endofdojointro:
# 440 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 442 "data/maps/Petalburg_Dojo/scripts.pory"
	release
	return

PetalburgDojoIntro_2:
# 74 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_1
# 76 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 77 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 78 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_2
# 80 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_3
# 81 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 82 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 83 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 84 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_3
	goto PetalburgDojoIntro_1

PetalburgDojoIntro_3:
# 71 "data/maps/Petalburg_Dojo/scripts.pory"
	goto_if_unset Sharpy103Rematch, PetalburgDojoIntro_2
	goto PetalburgDojoIntro_1

PetalburgDojoIntro_7:
# 87 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_4
# 89 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 90 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 91 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_5
	goto PetalburgDojoIntro_6

PetalburgDojoIntro_8:
# 86 "data/maps/Petalburg_Dojo/scripts.pory"
	goto_if_set Sharpy103Rematch, PetalburgDojoIntro_7
	goto PetalburgDojoIntro_6

PetalburgDojoIntro_12:
# 95 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_6
	goto PetalburgDojoIntro_11

PetalburgDojoIntro_15:
# 109 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_8
	goto PetalburgDojoIntro_14

PetalburgDojoIntro_18:
# 111 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_9
	goto PetalburgDojoIntro_17

PetalburgDojoIntro_21:
# 129 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_6
# 130 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_20

PetalburgDojoIntro_24:
# 134 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_7
# 135 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_23

PetalburgDojoIntro_27:
# 139 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_8
# 140 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_26

PetalburgDojoIntro_30:
# 144 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_9
# 145 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_29

PetalburgDojoIntro_33:
# 149 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_10
# 150 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_32

PetalburgDojoIntro_36:
# 154 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_11
# 155 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_35

PetalburgDojoIntro_39:
# 159 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_12
# 160 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgDojoIntro_38

PetalburgDojoIntro_42:
# 178 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 179 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 180 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_16
# 181 "data/maps/Petalburg_Dojo/scripts.pory"
devoncatchup:
# 182 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 183 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 184 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_17
# 187 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_14
# 188 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 189 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 190 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 191 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_18
# 193 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_13
# 194 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 195 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 196 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 197 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_19
# 199 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_15
# 200 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 201 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 202 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 203 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_20
# 206 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 207 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 208 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_21
# 210 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_13
# 211 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 212 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 213 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 214 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_22
# 216 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 217 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 218 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_23
# 222 "data/maps/Petalburg_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDojoIntro_Text_24, PetalburgDojoIntro_Text_25
# 224 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDojoIntro_48
PetalburgDojoIntro_47:
# 395 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDojoIntro_51
PetalburgDojoIntro_50:
# 409 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_PHASE, 1
# 410 "data/maps/Petalburg_Dojo/scripts.pory"
	goto endofdojointro
	goto PetalburgDojoIntro_41

PetalburgDojoIntro_45:
# 415 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 416 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_CONFUSED
# 417 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_53
# 420 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 421 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 422 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_54
# 425 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 426 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 427 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_55
# 431 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 432 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 433 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_56
# 436 "data/maps/Petalburg_Dojo/scripts.pory"
	goto devoncatchup
	goto PetalburgDojoIntro_44

PetalburgDojoIntro_48:
# 225 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 226 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 227 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_26
# 228 "data/maps/Petalburg_Dojo/scripts.pory"
agreedtohelpwith104indojo:
# 229 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_15
# 230 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 231 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 232 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 233 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_27
# 235 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 236 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 237 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_28
# 238 "data/maps/Petalburg_Dojo/scripts.pory"
	closemessage
# 239 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 242 "data/maps/Petalburg_Dojo/scripts.pory"
repeatdojointrobattle:
# 243 "data/maps/Petalburg_Dojo/scripts.pory"
	hidefollower
# 244 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, PetalburgDojoIntro_Movement_16
# 246 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_17
# 248 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_18
# 250 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_19
# 251 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 253 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 254 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_MENACING
# 255 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_29
# 257 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_LEDGE
# 258 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_20
# 259 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 261 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_SHARPYANDCAMELIAOLDALE, 1
	goto_if_eq PetalburgDojoIntro_54
# 271 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 272 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 273 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_32
# 275 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 276 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 277 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_33
PetalburgDojoIntro_53:
# 279 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 280 "data/maps/Petalburg_Dojo/scripts.pory"
	setfollowernpc LOCALID_DOJO_NORMAN, FNPC_ALL, OldaleRivalfollowchat, PARTNER_NORMAN
# 281 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_PHASE, 1
# 282 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag lostdojointromultibattle
# 283 "data/maps/Petalburg_Dojo/scripts.pory"
	clearflag dojonorman
# 284 "data/maps/Petalburg_Dojo/scripts.pory"
	trainerbattle_two_trainers TRAINER_CAMELIADOJO, Camelia_MultiOutro, TRAINER_SHARPYDOJO, Sharpy_MultiOutro
# 288 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_PHASE, 2
# 290 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 291 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_HAPPY
# 292 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_34
# 294 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 295 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 296 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_35
# 299 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 300 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 301 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_36
# 303 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag dojonorman
# 304 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PetalburgDojoIntro_Movement_21
# 305 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoIntro_Movement_22
# 307 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_23
# 308 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_24
# 309 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 311 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_DOOR
# 312 "data/maps/Petalburg_Dojo/scripts.pory"
	opendoor 7, 1
# 315 "data/maps/Petalburg_Dojo/scripts.pory"
	playse SE_DOOR
# 316 "data/maps/Petalburg_Dojo/scripts.pory"
	opendoor 1, 1
# 317 "data/maps/Petalburg_Dojo/scripts.pory"
	waitse
# 319 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_25
# 320 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 321 "data/maps/Petalburg_Dojo/scripts.pory"
	removeobject 3
# 322 "data/maps/Petalburg_Dojo/scripts.pory"
	closedoor 1, 1
# 323 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_25
# 324 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 325 "data/maps/Petalburg_Dojo/scripts.pory"
	removeobject 2
# 326 "data/maps/Petalburg_Dojo/scripts.pory"
	closedoor 7, 1
# 328 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag dojosharpyandcamelia
# 330 "data/maps/Petalburg_Dojo/scripts.pory"
	clearflag dojonorman
# 331 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 332 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 333 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_37
# 336 "data/maps/Petalburg_Dojo/scripts.pory"
	destroyfollowernpc
# 337 "data/maps/Petalburg_Dojo/scripts.pory"
	addobject 1
# 339 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 340 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 341 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_38
# 343 "data/maps/Petalburg_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDojoIntro_Text_39, PetalburgDojoIntro_Text_40
# 345 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDojoIntro_58
PetalburgDojoIntro_57:
# 389 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDojoIntro_60
	goto PetalburgDojoIntro_47

PetalburgDojoIntro_51:
# 396 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 397 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 398 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_50
# 401 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 402 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 403 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_51
# 406 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 407 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 408 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_52
	goto PetalburgDojoIntro_50

PetalburgDojoIntro_54:
# 263 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 264 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 265 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_30
# 266 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 267 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 268 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_31
	goto PetalburgDojoIntro_53

PetalburgDojoIntro_58:
# 346 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 347 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_CONFUSED
# 348 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_41
# 350 "data/maps/Petalburg_Dojo/scripts.pory"
rebelcatchup:
# 351 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 352 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 353 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_42
# 355 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 356 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 357 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_43
# 360 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 361 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 362 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_44
# 365 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 366 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 367 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_45
# 369 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 370 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_MENACING
# 371 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_46
# 375 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 376 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 377 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_47
# 380 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 381 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 382 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_48
# 384 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_PHASE, 2
# 385 "data/maps/Petalburg_Dojo/scripts.pory"
	goto endofdojointro
	goto PetalburgDojoIntro_57

PetalburgDojoIntro_60:
# 390 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoIntro_Text_49
# 391 "data/maps/Petalburg_Dojo/scripts.pory"
	goto rebelcatchup
	goto PetalburgDojoIntro_47


Petalburg_DojoNormanIdle::
# 446 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 447 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 449 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, Petalburg_DojoNormanIdle_Movement_0
# 450 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 1
# 452 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_PHASE, 1
	goto_if_eq Petalburg_DojoNormanIdle_2
Petalburg_DojoNormanIdle_1:
# 491 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 492 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 493 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_PHASE, 2
	goto_if_eq Petalburg_DojoNormanIdle_5
Petalburg_DojoNormanIdle_4:
# 498 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_PHASE, 3
	goto_if_eq Petalburg_DojoNormanIdle_11
Petalburg_DojoNormanIdle_10:
# 504 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_PHASE, 4
	goto_if_eq Petalburg_DojoNormanIdle_17
Petalburg_DojoNormanIdle_16:
# 509 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_PHASE, 5
	goto_if_eq Petalburg_DojoNormanIdle_22
Petalburg_DojoNormanIdle_21:
# 523 "data/maps/Petalburg_Dojo/scripts.pory"
endofnormanidledojo:
# 524 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 525 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, PetalburgDojoIntro_Movement_1
# 526 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 1
# 527 "data/maps/Petalburg_Dojo/scripts.pory"
	release
	return

Petalburg_DojoNormanIdle_2:
# 454 "data/maps/Petalburg_Dojo/scripts.pory"
	goto_if_set lostdojointromultibattle, Petalburg_DojoNormanIdle_8
Petalburg_DojoNormanIdle_7:
# 466 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 467 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 468 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_2
# 470 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 471 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 472 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_3
# 474 "data/maps/Petalburg_Dojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Petalburg_DojoNormanIdle_Text_4, Petalburg_DojoNormanIdle_Text_5
# 476 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Petalburg_DojoNormanIdle_14
Petalburg_DojoNormanIdle_13:
# 483 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Petalburg_DojoNormanIdle_19
	goto Petalburg_DojoNormanIdle_1

Petalburg_DojoNormanIdle_5:
# 494 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_8
	goto Petalburg_DojoNormanIdle_4

Petalburg_DojoNormanIdle_8:
# 456 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 457 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 458 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_0
# 461 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 462 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 463 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_1
# 464 "data/maps/Petalburg_Dojo/scripts.pory"
	goto repeatdojointrobattle
	goto Petalburg_DojoNormanIdle_7

Petalburg_DojoNormanIdle_11:
# 499 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_9
	goto Petalburg_DojoNormanIdle_10

Petalburg_DojoNormanIdle_14:
# 477 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 478 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_HAPPY
# 479 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_6
# 480 "data/maps/Petalburg_Dojo/scripts.pory"
	goto agreedtohelpwith104indojo
	goto Petalburg_DojoNormanIdle_13

Petalburg_DojoNormanIdle_17:
# 505 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_10
	goto Petalburg_DojoNormanIdle_16

Petalburg_DojoNormanIdle_19:
# 484 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 485 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 486 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_7
# 487 "data/maps/Petalburg_Dojo/scripts.pory"
	goto endofnormanidledojo
	goto Petalburg_DojoNormanIdle_1

Petalburg_DojoNormanIdle_22:
# 510 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanIdle_Text_11
	goto Petalburg_DojoNormanIdle_21


Petalburg_DojoSharpyIdle::
# 532 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 533 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 534 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, Petalburg_DojoNormanIdle_Movement_0
# 535 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 536 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_PHASE, 1
	goto_if_eq Petalburg_DojoSharpyIdle_2
Petalburg_DojoSharpyIdle_1:
# 541 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 542 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 2, PetalburgDojoIntro_Movement_13
# 543 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 2
# 545 "data/maps/Petalburg_Dojo/scripts.pory"
	release
	return

Petalburg_DojoSharpyIdle_2:
# 538 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 539 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 540 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoSharpyIdle_Text_0
	goto Petalburg_DojoSharpyIdle_1


Petalburg_DojoCameliaIdle::
# 549 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 550 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 551 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, Petalburg_DojoNormanIdle_Movement_0
# 552 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 553 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_PETALBURG_PHASE, 1
	goto_if_eq Petalburg_DojoCameliaIdle_2
Petalburg_DojoCameliaIdle_1:
# 567 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 568 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 3, PetalburgDojoIntro_Movement_13
# 569 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 3
# 570 "data/maps/Petalburg_Dojo/scripts.pory"
	release
	return

Petalburg_DojoCameliaIdle_2:
# 555 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 556 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 558 "data/maps/Petalburg_Dojo/scripts.pory"
	checkplayergender
# 559 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Petalburg_DojoCameliaIdle_5
Petalburg_DojoCameliaIdle_4:
# 561 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Petalburg_DojoCameliaIdle_8
Petalburg_DojoCameliaIdle_7:
# 564 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 565 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 566 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoCameliaIdle_Text_2
	goto Petalburg_DojoCameliaIdle_1

Petalburg_DojoCameliaIdle_5:
# 560 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoCameliaIdle_Text_0
	goto Petalburg_DojoCameliaIdle_4

Petalburg_DojoCameliaIdle_8:
# 562 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoCameliaIdle_Text_1
	goto Petalburg_DojoCameliaIdle_7


PetalburgDojoNoRoomAccess::
# 574 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 575 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 576 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, Petalburg_DojoNormanIdle_Movement_0
# 577 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement 1
# 579 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 580 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 581 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoNoRoomAccess_Text_0
# 583 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement 1, PetalburgDojoIntro_Movement_1
# 584 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDojoNoRoomAccess_Movement_0
# 585 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 587 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 588 "data/maps/Petalburg_Dojo/scripts.pory"
	release
	return


Petalburg_DojoNormanBeforeYouGo::
# 593 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 594 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 598 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 599 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 600 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanBeforeYouGo_Text_0
# 602 "data/maps/Petalburg_Dojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Petalburg_DojoNormanBeforeYouGo_Movement_0
# 603 "data/maps/Petalburg_Dojo/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 605 "data/maps/Petalburg_Dojo/scripts.pory"
	checkplayergender
# 606 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Petalburg_DojoNormanBeforeYouGo_2
Petalburg_DojoNormanBeforeYouGo_1:
# 611 "data/maps/Petalburg_Dojo/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Petalburg_DojoNormanBeforeYouGo_5
Petalburg_DojoNormanBeforeYouGo_4:
# 617 "data/maps/Petalburg_Dojo/scripts.pory"
	setvar VAR_PETALBURG_PHASE, 3
# 618 "data/maps/Petalburg_Dojo/scripts.pory"
	setflag rebelsunblockarcade
# 619 "data/maps/Petalburg_Dojo/scripts.pory"
	removefieldmugshot
# 620 "data/maps/Petalburg_Dojo/scripts.pory"
	release
	return

Petalburg_DojoNormanBeforeYouGo_2:
# 607 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 608 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_HAPPY
# 609 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanBeforeYouGo_Text_1
	goto Petalburg_DojoNormanBeforeYouGo_1

Petalburg_DojoNormanBeforeYouGo_5:
# 612 "data/maps/Petalburg_Dojo/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 613 "data/maps/Petalburg_Dojo/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_HAPPY
# 614 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox Petalburg_DojoNormanBeforeYouGo_Text_2
	goto Petalburg_DojoNormanBeforeYouGo_4


PetalburgDojoGymStatue::
# 631 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 632 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgDojoGymStatue_Text_0
# 633 "data/maps/Petalburg_Dojo/scripts.pory"
	releaseall
	return


PetalburgSharpyRoomSign::
# 637 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 638 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgSharpyRoomSign_Text_0
# 639 "data/maps/Petalburg_Dojo/scripts.pory"
	releaseall
	return


PetalburgCameliaRoomSign::
# 643 "data/maps/Petalburg_Dojo/scripts.pory"
	lock
# 644 "data/maps/Petalburg_Dojo/scripts.pory"
	msgbox PetalburgCameliaRoomSign_Text_0
# 645 "data/maps/Petalburg_Dojo/scripts.pory"
	releaseall
	return


# 51 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_0:
# 51 "data/maps/Petalburg_Dojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 61 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_1:
# 61 "data/maps/Petalburg_Dojo/scripts.pory"
	face_down
	step_end

# 64 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_2:
# 64 "data/maps/Petalburg_Dojo/scripts.pory"
	face_down
# 64 "data/maps/Petalburg_Dojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 80 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_3:
# 80 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_right
	step_end

# 101 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_4:
# 101 "data/maps/Petalburg_Dojo/scripts.pory"
	emote_x
	step_end

# 117 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_5:
# 117 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_down
# 117 "data/maps/Petalburg_Dojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 129 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_6:
# 129 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 129 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 129 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 129 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 129 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 134 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_7:
# 134 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 134 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 134 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 134 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 139 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_8:
# 139 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 139 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 139 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 144 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_9:
# 144 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 144 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 149 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_10:
# 149 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 149 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 149 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 154 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_11:
# 154 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 154 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 154 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 154 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 159 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_12:
# 159 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 159 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 159 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 159 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 159 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 163 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_13:
# 163 "data/maps/Petalburg_Dojo/scripts.pory"
	face_up
	step_end

# 187 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_14:
# 187 "data/maps/Petalburg_Dojo/scripts.pory"
	face_right
	step_end

# 199 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_15:
# 199 "data/maps/Petalburg_Dojo/scripts.pory"
	face_left
	step_end

# 244 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_16:
# 244 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 244 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 244 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_right
	step_end

# 246 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_17:
# 246 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_down
# 246 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 246 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_left
# 246 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_right
	step_end

# 248 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_18:
# 248 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 248 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
# 248 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_left
	step_end

# 250 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_19:
# 250 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 250 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 250 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 250 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_down
# 250 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_left
	step_end

# 258 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_20:
# 258 "data/maps/Petalburg_Dojo/scripts.pory"
	jump_in_place_left
	step_end

# 304 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_21:
# 304 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 304 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 304 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_down
	step_end

# 305 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_22:
# 305 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 305 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 305 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_up
	step_end

# 307 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_23:
# 307 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_right
# 307 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 308 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_24:
# 308 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_fast_up
# 308 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_fast_up
# 308 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_fast_up
# 308 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_fast_left
# 308 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_fast_left
# 308 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_fast_left
# 308 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_fast_left
# 308 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_fast_left
# 308 "data/maps/Petalburg_Dojo/scripts.pory"
	face_up
	step_end

# 319 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoIntro_Movement_25:
# 319 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_up
	step_end

# 449 "data/maps/Petalburg_Dojo/scripts.pory"
Petalburg_DojoNormanIdle_Movement_0:
# 449 "data/maps/Petalburg_Dojo/scripts.pory"
	face_player
	step_end

# 584 "data/maps/Petalburg_Dojo/scripts.pory"
PetalburgDojoNoRoomAccess_Movement_0:
# 584 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_down
	step_end

# 602 "data/maps/Petalburg_Dojo/scripts.pory"
Petalburg_DojoNormanBeforeYouGo_Movement_0:
# 602 "data/maps/Petalburg_Dojo/scripts.pory"
	walk_in_place_up
	step_end

PetalburgDojoIntro_Text_0:
# 58 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "{PLAYER}... is that you?$"

PetalburgDojoIntro_Text_1:
# 74 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh, hello, {PLAYER}!$"

PetalburgDojoIntro_Text_2:
# 78 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "You really stood me up in {COLOR GREEN}Route 103{COLOR DARK_GRAY}! I\n"
	.string "waited for AGES!$"

PetalburgDojoIntro_Text_3:
# 84 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "He's exaggerating. He was only there\n"
	.string "for five minutes.$"

PetalburgDojoIntro_Text_4:
# 87 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh, hello, {PLAYER}! You came!$"

PetalburgDojoIntro_Text_5:
# 91 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "You should have come for a rematch on\n"
	.string "Route 103 - I knew you went easy on me!$"

PetalburgDojoIntro_Text_6:
# 95 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh hi {PLAYER} - you came! Took you\n"
	.string "your sweet time!$"

PetalburgDojoIntro_Text_7:
# 103 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh, so you know each other? I guess\n"
	.string "Hoenn is a small place.$"

PetalburgDojoIntro_Text_8:
# 109 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Sharpy, Camelia - in case you didn't\n"
	.string "know, {PLAYER} is my grandson.$"

PetalburgDojoIntro_Text_9:
# 111 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Sharpy, Camelia - in case you didn't\n"
	.string "know, {PLAYER} is my granddaugther.$"

PetalburgDojoIntro_Text_10:
# 119 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh? I knew you were special when I saw\n"
	.string "you! My intuition never misses!$"

PetalburgDojoIntro_Text_11:
# 123 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Now, don't stand there, {PLAYER} -\n"
	.string "come.$"

PetalburgDojoIntro_Text_12:
# 169 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "{PLAYER}... I know you've been...\n"
	.string "“sick”, for a while.$"

PetalburgDojoIntro_Text_13:
# 173 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Are you up to date with things in\n"
	.string "Hoenn?$"

PetalburgDojoIntro_Text_14:
# 175 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I am$"

PetalburgDojoIntro_Text_15:
# 175 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I am not$"

PetalburgDojoIntro_Text_16:
# 180 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Then you know about {COLOR BLUE}Devon{COLOR DARK_GRAY} and its\n"
	.string "questionable policies. Like Safemon.$"

PetalburgDojoIntro_Text_17:
# 184 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "We've been protesting against {COLOR BLUE}Devon{COLOR DARK_GRAY} in\n"
	.string "front of their closest lab, in {COLOR GREEN}Route\l"
	.string "104{COLOR DARK_GRAY}, but...$"

PetalburgDojoIntro_Text_18:
# 191 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "They're not listening to us. So we're\n"
	.string "planning a “bolder” approach.$"

PetalburgDojoIntro_Text_19:
# 197 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Precisely. We want to liberate the\n"
	.string "Safemon that are held captive there.$"

PetalburgDojoIntro_Text_20:
# 203 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Yeah! But no battles, and no stealing\n"
	.string "stuff like {COLOR RED}Rebels{COLOR DARK_GRAY} do.$"

PetalburgDojoIntro_Text_21:
# 208 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Just freeing those poor Safemon. Get in\n"
	.string "and get out, all stealthy like!$"

PetalburgDojoIntro_Text_22:
# 214 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I know it's sudden, {PLAYER} - but if\n"
	.string "you agree with us...$"

PetalburgDojoIntro_Text_23:
# 218 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Will you help us liberate the Safemon\n"
	.string "that {COLOR BLUE}Devon{COLOR DARK_GRAY} keeps in {COLOR GREEN}Route 104{COLOR DARK_GRAY}?$"

PetalburgDojoIntro_Text_24:
# 222 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I will$"

PetalburgDojoIntro_Text_25:
# 222 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I will not$"

PetalburgDojoIntro_Text_26:
# 227 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Excellent. Now, while it is true our\n"
	.string "methods will be pacific...$"

PetalburgDojoIntro_Text_27:
# 233 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "We need to be prepared for everything!\n"
	.string "So we were going to do a battle!$"

PetalburgDojoIntro_Text_28:
# 237 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Come with me, {PLAYER}. We will face\n"
	.string "Sharpy and Camelia in a double battle.$"

PetalburgDojoIntro_Text_29:
# 255 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Now focus, you two. And no bickering\n"
	.string "between each other this time.$"

PetalburgDojoIntro_Text_30:
# 265 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Of course - it's rematch time,\n"
	.string "{PLAYER}$"

PetalburgDojoIntro_Text_31:
# 268 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Now it's my turn to get to battle you!\n"
	.string "I'm kind of excited.$"

PetalburgDojoIntro_Text_32:
# 273 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "You got it - let's do this, Camelia!$"

PetalburgDojoIntro_Text_33:
# 277 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "You better not drag me down, Sharpy!$"

PetalburgDojoIntro_Text_34:
# 292 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Now, no need to get upset. You do did\n"
	.string "remarkably well.$"

PetalburgDojoIntro_Text_35:
# 296 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Now go back to your rooms, and get\n"
	.string "everything ready. I need to go over one\l"
	.string "last thing with {PLAYER}.$"

PetalburgDojoIntro_Text_36:
# 301 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Gotcha! See you later, {PLAYER}.$"

PetalburgDojoIntro_Text_37:
# 333 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "{PLAYER}... before we set out for\n"
	.string "{COLOR GREEN}Route 104{COLOR DARK_GRAY}, there's something I need\l"
	.string "your help with.$"

PetalburgDojoIntro_Text_38:
# 341 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "We went over {COLOR BLUE}Devon Co.{COLOR DARK_GRAY} - but do you\n"
	.string "know about Rebels too?$"

PetalburgDojoIntro_Text_39:
# 343 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I do$"

PetalburgDojoIntro_Text_40:
# 343 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I don't$"

PetalburgDojoIntro_Text_41:
# 348 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Hmm... your face tells me you have met\n"
	.string "them, even.$"

PetalburgDojoIntro_Text_42:
# 353 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Rebels are a troublesome bunch, but\n"
	.string "they do not worry me as much as {COLOR BLUE}Devon{COLOR DARK_GRAY}.$"

PetalburgDojoIntro_Text_43:
# 357 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "They are a reactionary force to {COLOR BLUE}Devon{COLOR DARK_GRAY}.\n"
	.string "If we deal with {COLOR BLUE}Devon{COLOR DARK_GRAY}, the Rebel\l"
	.string "situation should sort itself out.$"

PetalburgDojoIntro_Text_44:
# 362 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "That said... after they lost {COLOR GREEN}Oldale\n"
	.string "Warehouse{COLOR DARK_GRAY}, I hear they want to occupy\l"
	.string "the {COLOR GREEN}Devon Lab{COLOR DARK_GRAY} in {COLOR GREEN}Route 104{COLOR DARK_GRAY} next.$"

PetalburgDojoIntro_Text_45:
# 367 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "If they do that, our reivindication will\n"
	.string "be tarnished with their vandalism.$"

PetalburgDojoIntro_Text_46:
# 371 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "To avoid that, I want you to go see the\n"
	.string "Rebel Leader in Petalburg, and ask him\l"
	.string "and his Rebels leave {COLOR GREEN}Route 104{COLOR DARK_GRAY} alone.$"

PetalburgDojoIntro_Text_47:
# 377 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "He is a... problematic man. But he owes\n"
	.string "me one, and I know he will agree.$"

PetalburgDojoIntro_Text_48:
# 382 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "He should be in {COLOR GREEN}Petalburg Arcade{COLOR DARK_GRAY}, the\n"
	.string "building in front of the dojo.\p"
	.string "Don't delay. We will wait here for you.$"

PetalburgDojoIntro_Text_49:
# 390 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Really? I heard they were causing\n"
	.string "trouble in Oldale recently.$"

PetalburgDojoIntro_Text_50:
# 398 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I understand... after the war, you must\n"
	.string "be tired of fighting..$"

PetalburgDojoIntro_Text_51:
# 403 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Perhaps seeing more of Petalburg, and\n"
	.string "its surroundings, will change your mind.$"

PetalburgDojoIntro_Text_52:
# 408 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "If it does, our offer will stand. Take\n"
	.string "care, {PLAYER}.$"

PetalburgDojoIntro_Text_53:
# 417 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Really? I thought Balsam or Birch would\n"
	.string "have caught you up.$"

PetalburgDojoIntro_Text_54:
# 422 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Well, to make a long story short...$"

PetalburgDojoIntro_Text_55:
# 427 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Little by little, {COLOR BLUE}Devon{COLOR DARK_GRAY} has been seizing\n"
	.string "control of Hoenn.\p"
	.string "They did some good things at first, like\n"
	.string "rebuilding infraestructure, and getting\l"
	.string "Pokémon Centers back in order.$"

PetalburgDojoIntro_Text_56:
# 433 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "But then they began to privatize said\n"
	.string "centers, absorb Pokémarts, build roads\l"
	.string "without regard to nature, put tolls on\l"
	.string "travel. The list goes on and on.\p"
	.string "And to top it all off... they began to\n"
	.string "turn Pokémon into Safemon.$"

Petalburg_DojoNormanIdle_Text_0:
# 458 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Now, don't feel ashamed, {PLAYER}.\n"
	.string "After a year at home, it's natural your\l"
	.string "training skills have rusted a little.$"

Petalburg_DojoNormanIdle_Text_1:
# 463 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Let's practice some more. We need to be\n"
	.string "prepared for the unexpected.$"

Petalburg_DojoNormanIdle_Text_2:
# 468 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "You're back, {PLAYER}, and we're glad\n"
	.string "you are.$"

Petalburg_DojoNormanIdle_Text_3:
# 472 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Have you changed your mind about\n"
	.string "helping us free those Safemon?$"

Petalburg_DojoNormanIdle_Text_4:
# 474 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I will help$"

Petalburg_DojoNormanIdle_Text_5:
# 474 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I won't help$"

Petalburg_DojoNormanIdle_Text_6:
# 479 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I knew I could count on you. Now, while\n"
	.string "our intentions are pacific...$"

Petalburg_DojoNormanIdle_Text_7:
# 486 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I am sorry to hear that... but you are in\n"
	.string "your right to refuse.$"

Petalburg_DojoNormanIdle_Text_8:
# 494 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Thank you, {PLAYER}. I would go to\n"
	.string "speak with my acquaintance myself...\p"
	.string "But me being seen in the arcade would\n"
	.string "only link our actions to the Rebels.\p"
	.string "I am too well known. You, on the other\n"
	.string "hand, should pass unnoticed.$"

Petalburg_DojoNormanIdle_Text_9:
# 499 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "{PLAYER} - what is it? Did you speak\n"
	.string "with my acquaintance yet?\p"
	.string "As the leader of the Rebels, you will\n"
	.string "most likely find him in their base.\p"
	.string "And that's Petalburg Arcade. Of course,\n"
	.string "that's just their legal front.\p"
	.string "Just be careful. They are a rowdy bunch.$"

Petalburg_DojoNormanIdle_Text_10:
# 505 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "{PLAYER} - what is it? Did you speak\n"
	.string "with my acquaintance yet?\p"
	.string "Hmm... so one of his henchmen is blocking\n"
	.string "the way to his office.\p"
	.string "Tell him I sent you. He may let you\n"
	.string "through then.$"

Petalburg_DojoNormanIdle_Text_11:
# 510 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "{PLAYER} - what is it? Did you speak\n"
	.string "with my acquaintance yet?\p"
	.string "Hmm... so only Rebels can meet with him?\n"
	.string "Who does he think he is...?\p"
	.string "Of course, you should not join the\n"
	.string "Rebels. They are nothing but\l"
	.string "troublemakers.\p"
	.string "But if you could pretend to join, just\n"
	.string "long enough to meet him...\p"
	.string "I'm sorry. I did not realize this would\n"
	.string "be so difficult.\p"
	.string "Perhaps we'll need to call off the\n"
	.string "operation, after all...$"

Petalburg_DojoSharpyIdle_Text_0:
# 540 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Don't worry, freeing those Safemon\n"
	.string "should be cinch-Trapinch for us three!$"

Petalburg_DojoCameliaIdle_Text_0:
# 560 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "If you are Norman's grandson, then that\n"
	.string "means your parents are...$"

Petalburg_DojoCameliaIdle_Text_1:
# 562 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "If you are Norman's granddaugther,\n"
	.string "then that means your parents are...$"

Petalburg_DojoCameliaIdle_Text_2:
# 566 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Well, I understand if you prefer to stay\n"
	.string "away from conflict.$"

PetalburgDojoNoRoomAccess_Text_0:
# 581 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "You know this dojo, {PLAYER}. There's\n"
	.string "no exit that way.$"

Petalburg_DojoNormanBeforeYouGo_Text_0:
# 600 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh, and... {PLAYER}?$"

Petalburg_DojoNormanBeforeYouGo_Text_1:
# 609 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Good job on that battle. You're a good\n"
	.string "trainer. Just like your father.$"

Petalburg_DojoNormanBeforeYouGo_Text_2:
# 614 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Good job on that battle. You're a good\n"
	.string "trainer. Just like your mother.$"

PetalburgDojoGymStatue_Text_0:
# 632 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "“Petalburg Dojo.” The word “dojo”\n"
	.string "seems carved on top of another.$"

PetalburgSharpyRoomSign_Text_0:
# 638 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "“Sharpy's Room.”$"

PetalburgCameliaRoomSign_Text_0:
# 644 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "“Camelia's Room.”\n"
	.string "Knock before entering!$"

Camelia_MultiOutro::
# 623 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "I want {PLAYER} as partner next\ntime...$"

Sharpy_MultiOutro::
# 626 "data/maps/Petalburg_Dojo/scripts.pory"
	.string "Oh yeah!? Right back at you! Bleeeh!$"
