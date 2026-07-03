# 1 "data/maps/JoelTent/scripts.pory"

# 2 "data/maps/JoelTent/scripts.pory"
JoelTent_MapScripts::
# 3 "data/maps/JoelTent/scripts.pory"
	.byte 0

JoelTentDoll::
# 8 "data/maps/JoelTent/scripts.pory"
	lockall
# 9 "data/maps/JoelTent/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 10 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentDoll_Text_0
# 12 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq JoelTentDoll_1
# 20 "data/maps/JoelTent/scripts.pory"
	releaseall
	return

JoelTentDoll_1:
# 14 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentDoll_Movement_0
# 15 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 16 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentDoll_Text_1
# 17 "data/maps/JoelTent/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JoelTentDoll_Movement_1
# 18 "data/maps/JoelTent/scripts.pory"
	goto thisisannedoll
	return


JoelTentZigzagoon::
# 24 "data/maps/JoelTent/scripts.pory"
	lockall
# 25 "data/maps/JoelTent/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 26 "data/maps/JoelTent/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 27 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentZigzagoon_Text_0
# 28 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


JoelTentJoel::
# 32 "data/maps/JoelTent/scripts.pory"
	lockall
# 33 "data/maps/JoelTent/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 35 "data/maps/JoelTent/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 3
	goto_if_eq JoelTentJoel_1
# 90 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq JoelTentJoel_11
JoelTentJoel_9:
# 113 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 4
	goto_if_eq JoelTentJoel_21
JoelTentJoel_19:
# 120 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 5
	goto_if_eq JoelTentJoel_27
JoelTentJoel_26:
# 142 "data/maps/JoelTent/scripts.pory"
	compare VAR_JOELQUESTS, 6
	goto_if_eq JoelTentJoel_29
	return

JoelTentJoel_1:
# 36 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 37 "data/maps/JoelTent/scripts.pory"
	goto_if_set SamanthaJoelInteraction, JoelTentJoel_6
JoelTentJoel_4:
# 44 "data/maps/JoelTent/scripts.pory"
	goto_if_set SamanthaJoelInteraction, JoelTentJoel_16
JoelTentJoel_14:
# 58 "data/maps/JoelTent/scripts.pory"
	goto_if_unset SamanthaJoelInteraction, JoelTentJoel_24
	return

JoelTentJoel_5:
# 38 "data/maps/JoelTent/scripts.pory"
	playse SE_M_BITE
# 39 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 40 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_0
# 41 "data/maps/JoelTent/scripts.pory"
	goto Joeltentfinish
	goto JoelTentJoel_4

JoelTentJoel_6:
# 37 "data/maps/JoelTent/scripts.pory"
	goto_if_unset Samanthagotsnacks, JoelTentJoel_5
	goto JoelTentJoel_4

JoelTentJoel_10:
# 92 "data/maps/JoelTent/scripts.pory"
thisisannedoll:
# 93 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 94 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_12
# 96 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 97 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 98 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_13
# 100 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_3
# 101 "data/maps/JoelTent/scripts.pory"
	removeobject 2
# 102 "data/maps/JoelTent/scripts.pory"
	waitmovement 4
# 103 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 104 "data/maps/JoelTent/scripts.pory"
	waitmovement 4
# 105 "data/maps/JoelTent/scripts.pory"
	giveitem ITEM_POKESHI_DOLL
# 106 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 107 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_14
# 108 "data/maps/JoelTent/scripts.pory"
	setflag anneandfamilygone
# 109 "data/maps/JoelTent/scripts.pory"
	setflag annegoestojoel
# 110 "data/maps/JoelTent/scripts.pory"
	setvar VAR_JOELQUESTS, 4
# 111 "data/maps/JoelTent/scripts.pory"
	goto joelgivesdoll
	goto JoelTentJoel_9

JoelTentJoel_11:
# 90 "data/maps/JoelTent/scripts.pory"
	goto_if_unset anneandfamilygone, JoelTentJoel_10
	goto JoelTentJoel_9

JoelTentJoel_15:
# 45 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 46 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_1
# 47 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 48 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_2
# 49 "data/maps/JoelTent/scripts.pory"
	applymovement 1, JoelTentJoel_Movement_1
# 50 "data/maps/JoelTent/scripts.pory"
	playse SE_M_BITE
# 51 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_0
# 52 "data/maps/JoelTent/scripts.pory"
	applymovement 1, JoelTentJoel_Movement_0
# 53 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 54 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_3
# 55 "data/maps/JoelTent/scripts.pory"
	goto Joeltentfinish
	goto JoelTentJoel_14

JoelTentJoel_16:
# 44 "data/maps/JoelTent/scripts.pory"
	goto_if_set Samanthagotsnacks, JoelTentJoel_15
	goto JoelTentJoel_14

JoelTentJoel_20:
# 114 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 115 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 116 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_15
# 118 "data/maps/JoelTent/scripts.pory"
	release
	goto JoelTentJoel_19

JoelTentJoel_21:
# 113 "data/maps/JoelTent/scripts.pory"
	goto_if_set anneandfamilygone, JoelTentJoel_20
	goto JoelTentJoel_19

JoelTentJoel_24:
# 59 "data/maps/JoelTent/scripts.pory"
	applymovement 1, JoelTentJoel_Movement_0
# 60 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 61 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_4
# 62 "data/maps/JoelTent/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JoelTentJoel_Movement_2
# 63 "data/maps/JoelTent/scripts.pory"
	playse SE_PIN
# 64 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 65 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_5
# 66 "data/maps/JoelTent/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JoelTentJoel_Movement_3
# 67 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_6
# 68 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 69 "data/maps/JoelTent/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JoelTentJoel_Movement_0
# 70 "data/maps/JoelTent/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 71 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_7
# 72 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 73 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_8
# 74 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 75 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_9
# 76 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 77 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_10
# 78 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 79 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_11
# 80 "data/maps/JoelTent/scripts.pory"
	playse SE_M_BITE
# 81 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 82 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_0
# 83 "data/maps/JoelTent/scripts.pory"
	setflag SamanthaJoelInteraction
# 84 "data/maps/JoelTent/scripts.pory"
	goto Joeltentfinish
	return

JoelTentJoel_27:
# 121 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 122 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 123 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_16
# 126 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_4
# 127 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 128 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_17
# 129 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 130 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 131 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_18
# 133 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 134 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_19
# 136 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 137 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_20
# 138 "data/maps/JoelTent/scripts.pory"
	register_matchcall TRAINER_ORPHAN_MALE_101
# 139 "data/maps/JoelTent/scripts.pory"
	setvar VAR_JOELQUESTS, 6
# 140 "data/maps/JoelTent/scripts.pory"
	goto joelgivesdoll
	goto JoelTentJoel_26

JoelTentJoel_29:
# 143 "data/maps/JoelTent/scripts.pory"
	applymovement 4, JoelTentJoel_Movement_0
# 144 "data/maps/JoelTent/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 145 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_21
# 146 "data/maps/JoelTent/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, JoelTentJoel_Text_22, JoelTentJoel_Text_23
# 148 "data/maps/JoelTent/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JoelTentJoel_32
JoelTentJoel_31:
# 152 "data/maps/JoelTent/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JoelTentJoel_35
JoelTentJoel_34:
# 195 "data/maps/JoelTent/scripts.pory"
joelgivesdoll:
# 196 "data/maps/JoelTent/scripts.pory"
Joeltentfinish:
# 197 "data/maps/JoelTent/scripts.pory"
	releaseall
	return

JoelTentJoel_32:
# 149 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_24
	goto JoelTentJoel_31

JoelTentJoel_35:
# 153 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_25
# 154 "data/maps/JoelTent/scripts.pory"
	compare VAR_SECRETSHELTERSVISITED, 0
	goto_if_eq JoelTentJoel_38
JoelTentJoel_37:
# 160 "data/maps/JoelTent/scripts.pory"
	compare VAR_SECRETSHELTERSVISITED, 1
	goto_if_eq JoelTentJoel_41
JoelTentJoel_40:
# 166 "data/maps/JoelTent/scripts.pory"
	compare VAR_SECRETSHELTERSVISITED, 2
	goto_if_eq JoelTentJoel_44
JoelTentJoel_43:
# 172 "data/maps/JoelTent/scripts.pory"
	compare VAR_SECRETSHELTERSVISITED, 3
	goto_if_eq JoelTentJoel_47
JoelTentJoel_46:
# 178 "data/maps/JoelTent/scripts.pory"
	compare VAR_SECRETSHELTERSVISITED, 4
	goto_if_eq JoelTentJoel_50
JoelTentJoel_49:
# 184 "data/maps/JoelTent/scripts.pory"
	compare VAR_SECRETSHELTERSVISITED, 5
	goto_if_eq JoelTentJoel_52
	goto JoelTentJoel_34

JoelTentJoel_38:
# 155 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_26
	goto JoelTentJoel_37

JoelTentJoel_41:
# 161 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_27
# 163 "data/maps/JoelTent/scripts.pory"
	goto joelgivespresent
	goto JoelTentJoel_40

JoelTentJoel_44:
# 167 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_28
# 169 "data/maps/JoelTent/scripts.pory"
	goto joelgivespresent
	goto JoelTentJoel_43

JoelTentJoel_47:
# 173 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_29
# 175 "data/maps/JoelTent/scripts.pory"
	goto joelgivespresent
	goto JoelTentJoel_46

JoelTentJoel_50:
# 179 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_30
# 181 "data/maps/JoelTent/scripts.pory"
	goto joelgivespresent
	goto JoelTentJoel_49

JoelTentJoel_52:
# 185 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentJoel_Text_31
# 188 "data/maps/JoelTent/scripts.pory"
	goto joelgivespresent
	goto JoelTentJoel_34


Joelgivesdebutshelterreward::
# 202 "data/maps/JoelTent/scripts.pory"
joelgivespresent:
# 203 "data/maps/JoelTent/scripts.pory"
	goto_if_unset joeldebutshelterreward, Joelgivesdebutshelterreward_1
# 214 "data/maps/JoelTent/scripts.pory"
	release
	return

Joelgivesdebutshelterreward_1:
# 204 "data/maps/JoelTent/scripts.pory"
	compare VAR_SECRETSHELTERSVISITED, 0
	goto_if_gt Joelgivesdebutshelterreward_4
# 212 "data/maps/JoelTent/scripts.pory"
	release
	return

Joelgivesdebutshelterreward_4:
# 205 "data/maps/JoelTent/scripts.pory"
	msgbox Joelgivesdebutshelterreward_Text_0
# 206 "data/maps/JoelTent/scripts.pory"
	givedecoration DECOR_MUD_BALL
# 207 "data/maps/JoelTent/scripts.pory"
	msgbox Joelgivesdebutshelterreward_Text_1
# 209 "data/maps/JoelTent/scripts.pory"
	setflag joeldebutshelterreward
# 210 "data/maps/JoelTent/scripts.pory"
	release
	return


VisitedOldaleShelter::
# 218 "data/maps/JoelTent/scripts.pory"
	goto_if_unset visitedoldalesecretshelter, VisitedOldaleShelter_1
# 222 "data/maps/JoelTent/scripts.pory"
	release
	return

VisitedOldaleShelter_1:
# 219 "data/maps/JoelTent/scripts.pory"
	addvar VAR_SECRETSHELTERSVISITED, + 1
# 220 "data/maps/JoelTent/scripts.pory"
	setflag visitedoldalesecretshelter
	return


Visited102Shelter::
# 226 "data/maps/JoelTent/scripts.pory"
	goto_if_unset visited102secretshelter, Visited102Shelter_1
# 230 "data/maps/JoelTent/scripts.pory"
	release
	return

Visited102Shelter_1:
# 227 "data/maps/JoelTent/scripts.pory"
	addvar VAR_SECRETSHELTERSVISITED, + 1
# 228 "data/maps/JoelTent/scripts.pory"
	setflag visited102secretshelter
	return


VisitedGreatCraterShelter::
# 234 "data/maps/JoelTent/scripts.pory"
	goto_if_unset visitedcratersecretshelter, VisitedGreatCraterShelter_1
# 238 "data/maps/JoelTent/scripts.pory"
	release
	return

VisitedGreatCraterShelter_1:
# 235 "data/maps/JoelTent/scripts.pory"
	addvar VAR_SECRETSHELTERSVISITED, + 1
# 236 "data/maps/JoelTent/scripts.pory"
	setflag visitedcratersecretshelter
	return


VisitedRaltsSanctumShelter::
# 241 "data/maps/JoelTent/scripts.pory"
	goto_if_unset visitedsanctumsecretshelter, VisitedRaltsSanctumShelter_1
# 245 "data/maps/JoelTent/scripts.pory"
	release
	return

VisitedRaltsSanctumShelter_1:
# 242 "data/maps/JoelTent/scripts.pory"
	addvar VAR_SECRETSHELTERSVISITED, + 1
# 243 "data/maps/JoelTent/scripts.pory"
	setflag visitedsanctumsecretshelter
	return


VisitedPetalburgSewersShelter::
# 249 "data/maps/JoelTent/scripts.pory"
	goto_if_unset visitedsewerssecretshelter, VisitedPetalburgSewersShelter_1
# 253 "data/maps/JoelTent/scripts.pory"
	release
	return

VisitedPetalburgSewersShelter_1:
# 250 "data/maps/JoelTent/scripts.pory"
	addvar VAR_SECRETSHELTERSVISITED, + 1
# 251 "data/maps/JoelTent/scripts.pory"
	setflag visitedsewerssecretshelter
	return


VisitedPetalburgLandfillShelter::
# 257 "data/maps/JoelTent/scripts.pory"
	goto_if_unset visitedlandfillsecretshelter, VisitedPetalburgLandfillShelter_1
# 261 "data/maps/JoelTent/scripts.pory"
	release
	return

VisitedPetalburgLandfillShelter_1:
# 258 "data/maps/JoelTent/scripts.pory"
	addvar VAR_SECRETSHELTERSVISITED, + 1
# 259 "data/maps/JoelTent/scripts.pory"
	setflag visitedlandfillsecretshelter
	return


VisitedRebelRoomShelter::
# 265 "data/maps/JoelTent/scripts.pory"
	goto_if_unset visitedrebelsecretshelter, VisitedRebelRoomShelter_1
# 269 "data/maps/JoelTent/scripts.pory"
	release
	return

VisitedRebelRoomShelter_1:
# 266 "data/maps/JoelTent/scripts.pory"
	addvar VAR_SECRETSHELTERSVISITED, + 1
# 267 "data/maps/JoelTent/scripts.pory"
	setflag visitedrebelsecretshelter
	return


JoelTentTV::
# 275 "data/maps/JoelTent/scripts.pory"
	lockall
# 276 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentTV_Text_0
# 277 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


JoelTentLantern::
# 281 "data/maps/JoelTent/scripts.pory"
	lockall
# 282 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentLantern_Text_0
# 283 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


JoelTentPoster::
# 287 "data/maps/JoelTent/scripts.pory"
	lockall
# 288 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentPoster_Text_0
# 289 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


JoelTentMudball::
# 293 "data/maps/JoelTent/scripts.pory"
	lockall
# 294 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentMudball_Text_0
# 295 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


JoelTentCushion::
# 299 "data/maps/JoelTent/scripts.pory"
	lockall
# 300 "data/maps/JoelTent/scripts.pory"
	msgbox JoelTentCushion_Text_0
# 301 "data/maps/JoelTent/scripts.pory"
	releaseall
	return


# 14 "data/maps/JoelTent/scripts.pory"
JoelTentDoll_Movement_0:
# 14 "data/maps/JoelTent/scripts.pory"
	walk_in_place_up
	step_end

# 17 "data/maps/JoelTent/scripts.pory"
JoelTentDoll_Movement_1:
# 17 "data/maps/JoelTent/scripts.pory"
	walk_down
# 17 "data/maps/JoelTent/scripts.pory"
	face_right
	step_end

# 36 "data/maps/JoelTent/scripts.pory"
JoelTentJoel_Movement_0:
# 36 "data/maps/JoelTent/scripts.pory"
	face_player
	step_end

# 49 "data/maps/JoelTent/scripts.pory"
JoelTentJoel_Movement_1:
# 49 "data/maps/JoelTent/scripts.pory"
	face_down
	step_end

# 62 "data/maps/JoelTent/scripts.pory"
JoelTentJoel_Movement_2:
# 62 "data/maps/JoelTent/scripts.pory"
	face_player
# 62 "data/maps/JoelTent/scripts.pory"
	emote_exclamation_mark
	step_end

# 66 "data/maps/JoelTent/scripts.pory"
JoelTentJoel_Movement_3:
# 66 "data/maps/JoelTent/scripts.pory"
	face_up
	step_end

# 126 "data/maps/JoelTent/scripts.pory"
JoelTentJoel_Movement_4:
# 126 "data/maps/JoelTent/scripts.pory"
	face_right
	step_end

JoelTentDoll_Text_0:
# 10 "data/maps/JoelTent/scripts.pory"
	.string "It's a Super Substitute doll... or is it?\p"
	.string "After a gentle poke, this one seems like\n"
	.string "the real deal.$"

JoelTentDoll_Text_1:
# 16 "data/maps/JoelTent/scripts.pory"
	.string "Hey, don't touch it - it's not yours!\n"
	.string "It's not even mine...$"

JoelTentZigzagoon_Text_0:
# 27 "data/maps/JoelTent/scripts.pory"
	.string "Giiiz!$"

JoelTentJoel_Text_0:
# 40 "data/maps/JoelTent/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Nom-nom-nom...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

JoelTentJoel_Text_1:
# 46 "data/maps/JoelTent/scripts.pory"
	.string "That's a lot of snacks you got! Can I\n"
	.string "have some?$"

JoelTentJoel_Text_2:
# 48 "data/maps/JoelTent/scripts.pory"
	.string "O-of course... here!$"

JoelTentJoel_Text_3:
# 54 "data/maps/JoelTent/scripts.pory"
	.string "Hmm... they're alright! But I still prefer\n"
	.string "berries.$"

JoelTentJoel_Text_4:
# 61 "data/maps/JoelTent/scripts.pory"
	.string "Hey {PLAYER}! And strange lady! Where\n"
	.string "are you two going?$"

JoelTentJoel_Text_5:
# 65 "data/maps/JoelTent/scripts.pory"
	.string "S-... strange lady...?$"

JoelTentJoel_Text_6:
# 67 "data/maps/JoelTent/scripts.pory"
	.string "W-well, we went out to get food at\n"
	.string "Oldale...$"

JoelTentJoel_Text_7:
# 71 "data/maps/JoelTent/scripts.pory"
	.string "Food? I've got some Oran berries if\n"
	.string "you'd like!$"

JoelTentJoel_Text_8:
# 73 "data/maps/JoelTent/scripts.pory"
	.string "B-berries...? Y-you eat them raw? You\n"
	.string "don't get... s-sick...?$"

JoelTentJoel_Text_9:
# 75 "data/maps/JoelTent/scripts.pory"
	.string "I did at first, but I got used to them.\n"
	.string "Here, try them!$"

JoelTentJoel_Text_10:
# 77 "data/maps/JoelTent/scripts.pory"
	.string "T-thank you, b-but I'll have... some more\n"
	.string "p-processed food...$"

JoelTentJoel_Text_11:
# 79 "data/maps/JoelTent/scripts.pory"
	.string "Really? Well, more for me!$"

JoelTentJoel_Text_12:
# 94 "data/maps/JoelTent/scripts.pory"
	.string "This... this is Anne's doll! She must have\n"
	.string "forgotten it last time we played here.$"

JoelTentJoel_Text_13:
# 98 "data/maps/JoelTent/scripts.pory"
	.string "Hey, do you mind returning it to her? I'd\n"
	.string "go myself, but her mom always gets mad\l"
	.string "when I go visit.$"

JoelTentJoel_Text_14:
# 107 "data/maps/JoelTent/scripts.pory"
	.string "Hurry up, before she and her family move\n"
	.string "away!$"

JoelTentJoel_Text_15:
# 116 "data/maps/JoelTent/scripts.pory"
	.string "You should hurry up! Go return Anne her\n"
	.string "{COLOR BLUE}Super Substitute Doll{COLOR DARK_GRAY}!\p"
	.string "She lives in Oldale, in the house with\n"
	.string "the metallic roof.$"

JoelTentJoel_Text_16:
# 123 "data/maps/JoelTent/scripts.pory"
	.string "What? Anne was already gone!? Oh no...\p"
	.string "She told me she can't sleep without\n"
	.string "that doll. She'll miss it so much in her\l"
	.string "new home...\p"
	.string "I know it's a big ask... but if you go to\n"
	.string "Rustboro, could you give it to her?$"

JoelTentJoel_Text_17:
# 128 "data/maps/JoelTent/scripts.pory"
	.string "I said I'd go visit her... but it was only\n"
	.string "so she wouldn't be sad.$"

JoelTentJoel_Text_18:
# 131 "data/maps/JoelTent/scripts.pory"
	.string "To go to Rustboro, you need a {COLOR BLUE}Devon\n"
	.string "Visa{COLOR DARK_GRAY}, or the Devon guards will stop you\l"
	.string "at {COLOR GREEN}Petalburg Customs{COLOR DARK_GRAY}.$"

JoelTentJoel_Text_19:
# 134 "data/maps/JoelTent/scripts.pory"
	.string "There's no way they'll let me through...\n"
	.string "but you look like a soldier. Perhaps\l"
	.string "they'll let you.$"

JoelTentJoel_Text_20:
# 137 "data/maps/JoelTent/scripts.pory"
	.string "Here's my Devon Nav number - let's keep\n"
	.string "in touch about this!$"

JoelTentJoel_Text_21:
# 145 "data/maps/JoelTent/scripts.pory"
	.string "Hey, {PLAYER}! What's up?$"

JoelTentJoel_Text_22:
# 146 "data/maps/JoelTent/scripts.pory"
	.string "About Anne's doll...$"

JoelTentJoel_Text_23:
# 146 "data/maps/JoelTent/scripts.pory"
	.string "About Secret Shelters...$"

JoelTentJoel_Text_24:
# 149 "data/maps/JoelTent/scripts.pory"
	.string "Please, you have to give Anne her doll\n"
	.string "back.\p"
	.string "She'll forget about me eventually... but\n"
	.string "I still don't want her to be sad.$"

JoelTentJoel_Text_25:
# 153 "data/maps/JoelTent/scripts.pory"
	.string "How many spots have you made a Secret\n"
	.string "Shelter on, {PLAYER}?$"

JoelTentJoel_Text_26:
# 155 "data/maps/JoelTent/scripts.pory"
	.string "None? Wow, you should make at least\n"
	.string "one!\p"
	.string "Come back when you do, and I'll give you\n"
	.string "something cool!$"

JoelTentJoel_Text_27:
# 161 "data/maps/JoelTent/scripts.pory"
	.string "One? Well, that's a start!\p"
	.string "I bet it's either in that truck in Oldale,\n"
	.string "or the sandy cave in the Great Crater.\l"
	.string "I've been in those before!$"

JoelTentJoel_Text_28:
# 167 "data/maps/JoelTent/scripts.pory"
	.string "Two? Not bad.\p"
	.string "You should try a few more places\n"
	.string "though.\p"
	.string "I moved around a lot, before I found\n"
	.string "the perfect one for me!$"

JoelTentJoel_Text_29:
# 173 "data/maps/JoelTent/scripts.pory"
	.string "Three? You're getting around!\p"
	.string "Have you checked the places around\n"
	.string "Petalburg City? There's at least three\l"
	.string "shelter spots across them.$"

JoelTentJoel_Text_30:
# 179 "data/maps/JoelTent/scripts.pory"
	.string "Four? Wow, you've been in more than me\n"
	.string "already! You should tell me about them\l"
	.string "sometime.$"

JoelTentJoel_Text_31:
# 185 "data/maps/JoelTent/scripts.pory"
	.string "Five? {PLAYER}, you're moving around\n"
	.string "a lot!\p"
	.string "Are you sure you're giving the spots a\n"
	.string "proper chance? Sometimes it takes a bit\l"
	.string "of time to get used to them.$"

Joelgivesdebutshelterreward_Text_0:
# 205 "data/maps/JoelTent/scripts.pory"
	.string "Your first shelters may be a bit empty\n"
	.string "at firt. Here, you can have this.$"

Joelgivesdebutshelterreward_Text_1:
# 207 "data/maps/JoelTent/scripts.pory"
	.string "... why the face? It's a Pokéball I made\n"
	.string "from mud!\p"
	.string "Of course, it doesn't work, but it's one\n"
	.string "of my best ones.$"

JoelTentTV_Text_0:
# 276 "data/maps/JoelTent/scripts.pory"
	.string "The TV is not plugged to anything...$"

JoelTentLantern_Text_0:
# 282 "data/maps/JoelTent/scripts.pory"
	.string "An oil lantern. It doesn't have much oil\n"
	.string "left.$"

JoelTentPoster_Text_0:
# 288 "data/maps/JoelTent/scripts.pory"
	.string "An old poster of a Treecko.$"

JoelTentMudball_Text_0:
# 294 "data/maps/JoelTent/scripts.pory"
	.string "The dry, cracked remains of a mudball.\n"
	.string "They resemble a Pokéball.$"

JoelTentCushion_Text_0:
# 300 "data/maps/JoelTent/scripts.pory"
	.string "A dirty cushion. It's got black and\n"
	.string "white hair all over it.$"
