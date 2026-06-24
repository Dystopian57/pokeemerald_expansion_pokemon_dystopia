# 1 "data/maps/LittlerootMausoleum/scripts.pory"

# 2 "data/maps/LittlerootMausoleum/scripts.pory"
LittlerootMausoleum_MapScripts::
# 3 "data/maps/LittlerootMausoleum/scripts.pory"
	.byte 0

LittlerootMausoleum_Shuppet::
# 7 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 8 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 9 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset hexgirlshuppetmeet, LittlerootMausoleum_Shuppet_2
LittlerootMausoleum_Shuppet_1:
# 39 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set hexgirlshuppetmeet, LittlerootMausoleum_Shuppet_6
LittlerootMausoleum_Shuppet_4:
# 44 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set hexgirlshuppetmeet, LittlerootMausoleum_Shuppet_14
LittlerootMausoleum_Shuppet_12:
# 55 "data/maps/LittlerootMausoleum/scripts.pory"
afterhexgirl1stmeet:
# 56 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return

LittlerootMausoleum_Shuppet_2:
# 11 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_WEAK
# 12 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_0
# 13 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_1
# 14 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_Shuppet_Text_2, LittlerootMausoleum_Shuppet_Text_3, LittlerootMausoleum_Shuppet_Text_4
# 15 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmessage
# 17 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_Shuppet_10
LittlerootMausoleum_Shuppet_9:
# 21 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_Shuppet_18
LittlerootMausoleum_Shuppet_17:
# 35 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LittlerootMausoleum_Shuppet_20
	goto LittlerootMausoleum_Shuppet_1

LittlerootMausoleum_Shuppet_5:
# 41 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_WEAK
# 42 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_7
	goto LittlerootMausoleum_Shuppet_4

LittlerootMausoleum_Shuppet_6:
	checkitem ITEM_SCROLL_OF_DARKNESS
# 0 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LittlerootMausoleum_Shuppet_5
	goto LittlerootMausoleum_Shuppet_4

LittlerootMausoleum_Shuppet_10:
# 18 "data/maps/LittlerootMausoleum/scripts.pory"
	goto shuppetisjusthelping
	goto LittlerootMausoleum_Shuppet_9

LittlerootMausoleum_Shuppet_13:
# 46 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 47 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 2, LittlerootMausoleum_Shuppet_Movement_2
# 48 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_8
# 49 "data/maps/LittlerootMausoleum/scripts.pory"
	removeobject 2
# 50 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag hexgirlshuppetmoves
# 51 "data/maps/LittlerootMausoleum/scripts.pory"
	clearflag hexgirlshuppetnormalspot
# 52 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_M_CONFUSE_RAY
	goto LittlerootMausoleum_Shuppet_12

LittlerootMausoleum_Shuppet_14:
	checkitem ITEM_SCROLL_OF_DARKNESS
# 0 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LittlerootMausoleum_Shuppet_13
	goto LittlerootMausoleum_Shuppet_12

LittlerootMausoleum_Shuppet_18:
# 22 "data/maps/LittlerootMausoleum/scripts.pory"
shuppetisjusthelping:
# 23 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_0
# 24 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_PIN
# 25 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_5
# 27 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 28 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_6
# 31 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag hexgirlshuppetmeet
# 32 "data/maps/LittlerootMausoleum/scripts.pory"
	goto afterhexgirl1stmeet
	goto LittlerootMausoleum_Shuppet_17

LittlerootMausoleum_Shuppet_20:
# 36 "data/maps/LittlerootMausoleum/scripts.pory"
	closemessage
	goto LittlerootMausoleum_Shuppet_1


LittlerootMausoleum_HexGirl::
# 61 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 62 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 63 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_2
# 65 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 0
	goto_if_eq LittlerootMausoleum_HexGirl_2
LittlerootMausoleum_HexGirl_1:
# 146 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 1
	goto_if_eq LittlerootMausoleum_HexGirl_5
LittlerootMausoleum_HexGirl_4:
# 154 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 2
	goto_if_eq LittlerootMausoleum_HexGirl_11
LittlerootMausoleum_HexGirl_10:
# 190 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 4
	goto_if_eq LittlerootMausoleum_HexGirl_19
LittlerootMausoleum_HexGirl_18:
# 228 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 4
	goto_if_eq LittlerootMausoleum_HexGirl_33
LittlerootMausoleum_HexGirl_32:
# 234 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
# 235 "data/maps/LittlerootMausoleum/scripts.pory"
endhexgirlscript:
# 236 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 237 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return

LittlerootMausoleum_HexGirl_2:
# 68 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset refusedtohelphexgirl1st, LittlerootMausoleum_HexGirl_8
LittlerootMausoleum_HexGirl_7:
# 130 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set refusedtohelphexgirl1st, LittlerootMausoleum_HexGirl_13
	goto LittlerootMausoleum_HexGirl_1

LittlerootMausoleum_HexGirl_5:
# 147 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 148 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_20
# 151 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 152 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_21
	goto LittlerootMausoleum_HexGirl_4

LittlerootMausoleum_HexGirl_8:
# 71 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_0
# 72 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_HexGirl_Text_1, LittlerootMausoleum_HexGirl_Text_2
# 73 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmessage
# 74 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_HexGirl_16
LittlerootMausoleum_HexGirl_15:
# 126 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_HexGirl_27
	goto LittlerootMausoleum_HexGirl_7

LittlerootMausoleum_HexGirl_11:
# 156 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 157 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_22
# 160 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_M_SNORE
# 161 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 162 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_23
# 165 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_HexGirl_Text_24, LittlerootMausoleum_HexGirl_Text_25
# 167 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_HexGirl_22
LittlerootMausoleum_HexGirl_21:
# 180 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_HexGirl_38
	goto LittlerootMausoleum_HexGirl_10

LittlerootMausoleum_HexGirl_13:
# 131 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 132 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_18
# 134 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_HexGirl_Text_1, LittlerootMausoleum_HexGirl_Text_2
# 135 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_HexGirl_25
LittlerootMausoleum_HexGirl_24:
# 138 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_HexGirl_40
	goto LittlerootMausoleum_HexGirl_1

LittlerootMausoleum_HexGirl_16:
# 75 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_3
# 76 "data/maps/LittlerootMausoleum/scripts.pory"
	removeitem ITEM_SCROLL_OF_DARKNESS
# 77 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_HexGirl_Movement_0
# 78 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement 1
# 79 "data/maps/LittlerootMausoleum/scripts.pory"
	clearflag beddinginmausoleum
# 80 "data/maps/LittlerootMausoleum/scripts.pory"
	addobject 3
# 81 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 82 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_4
# 83 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_2
# 84 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_5
# 85 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 86 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_6
# 89 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 90 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 91 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_7
# 92 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_2
# 93 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 94 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_8
# 95 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 96 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_9
# 98 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_HexGirl_Text_10, LittlerootMausoleum_HexGirl_Text_11
# 100 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_HexGirl_30
LittlerootMausoleum_HexGirl_29:
# 111 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_HexGirl_42
	goto LittlerootMausoleum_HexGirl_15

LittlerootMausoleum_HexGirl_19:
# 191 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 192 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_29
# 194 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBirchInteraction, LittlerootMausoleum_HexGirl_36
LittlerootMausoleum_HexGirl_35:
# 200 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBalsamInteraction, LittlerootMausoleum_HexGirl_45
LittlerootMausoleum_HexGirl_44:
# 206 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaJoelInteraction, LittlerootMausoleum_HexGirl_48
LittlerootMausoleum_HexGirl_47:
# 210 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 211 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_33
# 212 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_SPELL_TAG
# 214 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBirchInteraction, LittlerootMausoleum_HexGirl_53
LittlerootMausoleum_HexGirl_50:
# 220 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 221 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_35
# 224 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 5
	goto LittlerootMausoleum_HexGirl_18

LittlerootMausoleum_HexGirl_22:
# 168 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 169 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_26
# 174 "data/maps/LittlerootMausoleum/scripts.pory"
	setfollowernpc LOCALID_SAMANTHA, FNPC_ALL, Samanthafollowchat, 0
# 175 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag Samanthaleavesmausoleum
# 176 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 3
# 177 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_21

LittlerootMausoleum_HexGirl_25:
# 136 "data/maps/LittlerootMausoleum/scripts.pory"
	goto changedmindwillhelphexgirl
	goto LittlerootMausoleum_HexGirl_24

LittlerootMausoleum_HexGirl_27:
# 127 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 128 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_17
	goto LittlerootMausoleum_HexGirl_7

LittlerootMausoleum_HexGirl_30:
# 101 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 102 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_12
# 104 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_2
# 105 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 106 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_13
# 107 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag refusedtohelphexgirl1st
# 108 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_29

LittlerootMausoleum_HexGirl_33:
# 229 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 230 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_36
	goto LittlerootMausoleum_HexGirl_32

LittlerootMausoleum_HexGirl_36:
# 195 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 196 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_30
	goto LittlerootMausoleum_HexGirl_35

LittlerootMausoleum_HexGirl_38:
# 181 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 182 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_27
# 184 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_M_SNORE
# 185 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_28
	goto LittlerootMausoleum_HexGirl_10

LittlerootMausoleum_HexGirl_40:
# 139 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 140 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_19
# 142 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_1

LittlerootMausoleum_HexGirl_42:
# 112 "data/maps/LittlerootMausoleum/scripts.pory"
changedmindwillhelphexgirl:
# 113 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 114 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_14
# 117 "data/maps/LittlerootMausoleum/scripts.pory"
	register_matchcall TRAINER_HEXGIRL_MAUSOLEUM
# 118 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 119 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_15
# 120 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 121 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 122 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_16
# 123 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 1
# 124 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_15

LittlerootMausoleum_HexGirl_45:
# 201 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 202 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_31
	goto LittlerootMausoleum_HexGirl_44

LittlerootMausoleum_HexGirl_48:
# 207 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 208 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_32
	goto LittlerootMausoleum_HexGirl_47

LittlerootMausoleum_HexGirl_51:
# 216 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 217 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_34
# 218 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_DESTINY_KNOT
	goto LittlerootMausoleum_HexGirl_50

LittlerootMausoleum_HexGirl_52:
# 214 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaJoelInteraction, LittlerootMausoleum_HexGirl_51
	goto LittlerootMausoleum_HexGirl_50

LittlerootMausoleum_HexGirl_53:
# 214 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBalsamInteraction, LittlerootMausoleum_HexGirl_52
	goto LittlerootMausoleum_HexGirl_50


Samanthafollowchat::
# 241 "data/maps/LittlerootMausoleum/scripts.pory"
	lock
# 242 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 243 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, LittlerootMausoleum_Shuppet_Movement_2
# 244 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 245 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_0
# 246 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Samanthafollowchat_Text_1, Samanthafollowchat_Text_2, Samanthafollowchat_Text_3
# 247 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Samanthafollowchat_2
Samanthafollowchat_1:
# 251 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Samanthafollowchat_5
Samanthafollowchat_4:
# 263 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Samanthafollowchat_8
Samanthafollowchat_7:
# 284 "data/maps/LittlerootMausoleum/scripts.pory"
	release
	return

Samanthafollowchat_2:
# 248 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 249 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_4
	goto Samanthafollowchat_1

Samanthafollowchat_5:
# 252 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset Samanthagotsnacks, Samanthafollowchat_11
Samanthafollowchat_10:
# 257 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set Samanthagotsnacks, Samanthafollowchat_16
	goto Samanthafollowchat_4

Samanthafollowchat_8:
# 264 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset Samanthagotsnacks, Samanthafollowchat_14
Samanthafollowchat_13:
# 273 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set Samanthagotsnacks, Samanthafollowchat_18
	goto Samanthafollowchat_7

Samanthafollowchat_11:
# 253 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 254 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_5
	goto Samanthafollowchat_10

Samanthafollowchat_14:
# 265 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 266 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_7
# 268 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 269 "data/maps/LittlerootMausoleum/scripts.pory"
	destroyfollowernpc
# 270 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 271 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 2
	goto Samanthafollowchat_13

Samanthafollowchat_16:
# 258 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 259 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_6
	goto Samanthafollowchat_4

Samanthafollowchat_18:
# 274 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 275 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_8
# 277 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 278 "data/maps/LittlerootMausoleum/scripts.pory"
	destroyfollowernpc
# 279 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 280 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 4
	goto Samanthafollowchat_7


LittlerootMausoleum_ShuppetPost1stquest::
# 288 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 289 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 290 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_ShuppetPost1stquest_Text_0
# 291 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumHealingSigil::
# 296 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 297 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreen FADE_TO_WHITE
# 298 "data/maps/LittlerootMausoleum/scripts.pory"
	special HealPlayerParty
# 299 "data/maps/LittlerootMausoleum/scripts.pory"
	playse MUS_HEAL
# 300 "data/maps/LittlerootMausoleum/scripts.pory"
	waitse
# 301 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 302 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumTombstone::
# 306 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 307 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumTombstone_Text_0
# 308 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumBouquet::
# 312 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 313 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumBouquet_Text_0
# 314 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumBlanket::
# 318 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 319 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumBlanket_Text_0
# 320 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumSigns::
# 324 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 325 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumSigns_Text_0
# 326 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumNogoDownstairs::
# 330 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 331 "data/maps/LittlerootMausoleum/scripts.pory"
	fadeoutbgm 2
# 332 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumNogoDownstairs_Text_0
# 333 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MausoleumNogoDownstairs_Movement_0
# 334 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 335 "data/maps/LittlerootMausoleum/scripts.pory"
	fadeinbgm 2
# 336 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


# 23 "data/maps/LittlerootMausoleum/scripts.pory"
LittlerootMausoleum_Shuppet_Movement_0:
# 23 "data/maps/LittlerootMausoleum/scripts.pory"
	emote_exclamation_mark
# 23 "data/maps/LittlerootMausoleum/scripts.pory"
	face_right
	step_end

# 27 "data/maps/LittlerootMausoleum/scripts.pory"
LittlerootMausoleum_Shuppet_Movement_1:
# 27 "data/maps/LittlerootMausoleum/scripts.pory"
	face_down
	step_end

# 47 "data/maps/LittlerootMausoleum/scripts.pory"
LittlerootMausoleum_Shuppet_Movement_2:
# 47 "data/maps/LittlerootMausoleum/scripts.pory"
	face_player
	step_end

# 77 "data/maps/LittlerootMausoleum/scripts.pory"
LittlerootMausoleum_HexGirl_Movement_0:
# 77 "data/maps/LittlerootMausoleum/scripts.pory"
	face_up
	step_end

# 333 "data/maps/LittlerootMausoleum/scripts.pory"
MausoleumNogoDownstairs_Movement_0:
# 333 "data/maps/LittlerootMausoleum/scripts.pory"
	walk_slow_down
	step_end

LittlerootMausoleum_Shuppet_Text_0:
# 12 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "The girl seems to be having a bad dream,\n"
	.string "while the Shuppet floats next to her...$"

LittlerootMausoleum_Shuppet_Text_1:
# 13 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "What will you do?$"

LittlerootMausoleum_Shuppet_Text_2:
# 14 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Battle$"

LittlerootMausoleum_Shuppet_Text_3:
# 14 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Shoo away$"

LittlerootMausoleum_Shuppet_Text_4:
# 14 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Leave$"

LittlerootMausoleum_Shuppet_Text_5:
# 25 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Wait... it's not... trying to hurt me...!\n"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Cough cough...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

LittlerootMausoleum_Shuppet_Text_6:
# 28 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I'm just, very cold... Shuppet is trying\n"
	.string "to keep me warm...\p"
	.string "But Ghost Pokémon can't do that... their\n"
	.string "bodies just go right through...\p"
	.string "Ah... if only I had... a {COLOR RED}blanket{COLOR DARK_GRAY} or\n"
	.string "something to cover myself...$"

LittlerootMausoleum_Shuppet_Text_7:
# 42 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "The Shuppet keeps trying to warm the\n"
	.string "girl on the floor, to no avail...$"

LittlerootMausoleum_Shuppet_Text_8:
# 48 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "The Shuppet regards you knowingly and\n"
	.string "lets you pass...$"

LittlerootMausoleum_HexGirl_Text_0:
# 71 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "BRRT... o-oh... is that... for me?$"

LittlerootMausoleum_HexGirl_Text_1:
# 72 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Yes$"

LittlerootMausoleum_HexGirl_Text_2:
# 72 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "No$"

LittlerootMausoleum_HexGirl_Text_3:
# 75 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "R-really...? Thank you...!$"

LittlerootMausoleum_HexGirl_Text_4:
# 82 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Aah, yes... this is much better.$"

LittlerootMausoleum_HexGirl_Text_5:
# 84 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I'm Samantha, the caretaker of this\n"
	.string "mausoleum...$"

LittlerootMausoleum_HexGirl_Text_6:
# 86 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Many of the Pokémon and people that\n"
	.string "lost their lives during the war rest\l"
	.string "here now.\p"
	.string "People used to visit all the time - but\n"
	.string "not so much anymore.$"

LittlerootMausoleum_HexGirl_Text_7:
# 91 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I guess people move on, or mourn in\n"
	.string "different ways... that's okay...$"

LittlerootMausoleum_HexGirl_Text_8:
# 94 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "But my employers at Devon Co., they also\n"
	.string "stopped sending me supplies...$"

LittlerootMausoleum_HexGirl_Text_9:
# 96 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} What should I do?$"

LittlerootMausoleum_HexGirl_Text_10:
# 98 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "You should go home$"

LittlerootMausoleum_HexGirl_Text_11:
# 98 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I will help you$"

LittlerootMausoleum_HexGirl_Text_12:
# 102 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "W-well... I just can't leave everyone\n"
	.string "behind, you know...\p"
	.string "They may be dead... but some still feel\n"
	.string "lonely...$"

LittlerootMausoleum_HexGirl_Text_13:
# 106 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I... I will figure something out. Don't\n"
	.string "worry...$"

LittlerootMausoleum_HexGirl_Text_14:
# 114 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Y-you will... thank you! I-I will gladly\n"
	.string "accept your help...\p"
	.string "I mean, you've done more than enough\n"
	.string "for now...\p"
	.string "B-but if I need something else... could\n"
	.string "I... could I call you?\p"
	.string "Here, this is my Pokenav number...$"

LittlerootMausoleum_HexGirl_Text_15:
# 119 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Oh, and this - this is for your\n"
	.string "trouble...!$"

LittlerootMausoleum_HexGirl_Text_16:
# 122 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Thank so much again... now, please be\n"
	.string "safe out there.$"

LittlerootMausoleum_HexGirl_Text_17:
# 128 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, of course not... I'm sorry for\n"
	.string "assuming...$"

LittlerootMausoleum_HexGirl_Text_18:
# 132 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh... have you... changed your mind?\n"
	.string "Will you help me care for the mausoleum?$"

LittlerootMausoleum_HexGirl_Text_19:
# 140 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "R-right, sorry... I understand... it's not\n"
	.string "a very good job...\p"
	.string "Though I happen to like it.$"

LittlerootMausoleum_HexGirl_Text_20:
# 148 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Don't worry, I am okay now. And warm!\p"
	.string "And I don't feel lonely - I have Shuppet\n"
	.string "and the rest, keeping me company!$"

LittlerootMausoleum_HexGirl_Text_21:
# 152 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I will give you a call if I need\n"
	.string "something again. Thank you...$"

LittlerootMausoleum_HexGirl_Text_22:
# 157 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, {PLAYER}, you've come to help!?\n"
	.string "I'm glad...\p"
	.string "Y-you see, my employers at Devon Co....\n"
	.string "stopped sending me food.\p"
	.string "I-I'm not mad at them, I'm sure they're\n"
	.string "busy with the Safemon project, but...$"

LittlerootMausoleum_HexGirl_Text_23:
# 162 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "...I'm very hungry.\p"
	.string "I want to get some snacks in Oldale, but\n"
	.string "I'm scared of Rebels...\p"
	.string "C-can... can you come with me?$"

LittlerootMausoleum_HexGirl_Text_24:
# 165 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Yes, let's go$"

LittlerootMausoleum_HexGirl_Text_25:
# 165 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Sorry, not right now$"

LittlerootMausoleum_HexGirl_Text_26:
# 169 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "R-really!? T-thank you...! Well, let's go\n"
	.string "then!\p"
	.string "O-oh, and... {PLAYER}? If you have\n"
	.string "time, can you, uhm...\p"
	.string "Can you introduce me to some of your\n"
	.string "friends? I've been a bit lonely...\p"
	.string "You must have tons, since you're so\n"
	.string "kind...\p"
	.string "D-don't get me wrong, I love talking\n"
	.string "with you - but you're a bit silent...\p"
	.string "S-sorry, that wasn't a complaint - I\n"
	.string "actually like that you...!\p"
	.string "A-aah, forget about it! Let's go to\n"
	.string "Oldane Town's vending machine!$"

LittlerootMausoleum_HexGirl_Text_27:
# 182 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, that's okay... it's a hassle, I\n"
	.string "know...\p"
	.string "And it's something I should do on my\n"
	.string "own.\p"
	.string "I'll just... try to muster the courage to\n"
	.string "go by myself. Yes. I'll do that...$"

LittlerootMausoleum_HexGirl_Text_28:
# 185 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "...$"

LittlerootMausoleum_HexGirl_Text_29:
# 192 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "T-thank you for your help... these\n"
	.string "snacks will last me a while...$"

LittlerootMausoleum_HexGirl_Text_30:
# 196 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I didn't know Professor Birch was your\n"
	.string "grandfather...\p"
	.string "He is so kind, but he also looks very\n"
	.string "sad...$"

LittlerootMausoleum_HexGirl_Text_31:
# 202 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "And thank you for introducing me to\n"
	.string "Professor Balsam.\p"
	.string "S-she is... not as scary as I thought...$"

LittlerootMausoleum_HexGirl_Text_32:
# 208 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I liked meeting Joel too. He is a tough\n"
	.string "kid.$"

LittlerootMausoleum_HexGirl_Text_33:
# 211 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "H-here... I want to give you this as...\n"
	.string "t-thanks...!$"

LittlerootMausoleum_HexGirl_Text_34:
# 217 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "A-and... I also m-made... this...!$"

LittlerootMausoleum_HexGirl_Text_35:
# 221 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I'm sorry I don't have... m-more to\n"
	.string "give you... for your help...\p"
	.string "T-thanks again... it was... v-very fun!$"

LittlerootMausoleum_HexGirl_Text_36:
# 230 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Don't worry, {PLAYER}. The snacks will\n"
	.string "last me a while.\p"
	.string "A-and I sleep well, thanks to the\n"
	.string "blanket you gave me...\p"
	.string "I-I don't know what I would have done\n"
	.string "without you... thanks again!$"

Samanthafollowchat_Text_0:
# 245 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "{PLAYER}... what's the matter?$"

Samanthafollowchat_Text_1:
# 246 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "What's up?$"

Samanthafollowchat_Text_2:
# 246 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Where to?$"

Samanthafollowchat_Text_3:
# 246 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I need to go$"

Samanthafollowchat_Text_4:
# 249 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I'm good... just a bit hungry.$"

Samanthafollowchat_Text_5:
# 254 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I want to go to the vending machine\n"
	.string "next to Oldale Town's Devon Center.\p"
	.string "There's some... tasty snacks there...$"

Samanthafollowchat_Text_6:
# 259 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "L-let's go back... to the Mausoleum... I\n"
	.string "have all the snacks... hehe...$"

Samanthafollowchat_Text_7:
# 266 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, did something came up? T-that's\n"
	.string "okay...\p"
	.string "I-I'll go back to the Mausoleum... we can\n"
	.string "do this some other time!\p"
	.string "B-bye... {PLAYER}...$"

Samanthafollowchat_Text_8:
# 275 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, okay... I-I guess you helped me\n"
	.string "get the snacks...\p"
	.string "Y-yes, I... I can go back to the\n"
	.string "Mausoleum by myself...\p"
	.string "B-bye... {PLAYER}...$"

LittlerootMausoleum_ShuppetPost1stquest_Text_0:
# 290 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Shuuu...$"

MausoleumTombstone_Text_0:
# 307 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "It's a tombstone. The name on it does\n"
	.string "not seem familiar.$"

MausoleumBouquet_Text_0:
# 313 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "A flower bouquet. The vase is far from\n"
	.string "new, but the flowers are well tended.$"

MausoleumBlanket_Text_0:
# 319 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "A spare bedding set from home. It looks\n"
	.string "a bit out of place...$"

MausoleumSigns_Text_0:
# 325 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "'Littleroot Mausoleum.'$"

MausoleumNogoDownstairs_Text_0:
# 332 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "...\p"
	.string "There is... no need to go there right\n"
	.string "now...$"
