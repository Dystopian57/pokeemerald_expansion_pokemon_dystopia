# 1 "data/maps/LittlerootMausoleum/scripts.pory"

# 2 "data/maps/LittlerootMausoleum/scripts.pory"
LittlerootMausoleum_MapScripts::
# 3 "data/maps/LittlerootMausoleum/scripts.pory"
	.byte 0

MausoleumTM::
# 7 "data/maps/LittlerootMausoleum/scripts.pory"
	lock
# 8 "data/maps/LittlerootMausoleum/scripts.pory"
	finditem ITEM_TM_NIGHT_SHADE
# 9 "data/maps/LittlerootMausoleum/scripts.pory"
	removeobject 9
# 10 "data/maps/LittlerootMausoleum/scripts.pory"
	release
	return


MausoleumMourningLady::
# 14 "data/maps/LittlerootMausoleum/scripts.pory"
	lock
# 17 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset mausoleummourningladyitem, MausoleumMourningLady_2
# 35 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 6, MausoleumMourningLady_Movement_0
# 36 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumMourningLady_Text_2
# 37 "data/maps/LittlerootMausoleum/scripts.pory"
	closemessage
# 38 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 6, MausoleumMourningLady_Movement_1
# 39 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement 6
MausoleumMourningLady_1:
# 42 "data/maps/LittlerootMausoleum/scripts.pory"
	release
	return

MausoleumMourningLady_2:
# 19 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumMourningLady_Text_0
# 22 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 6, MausoleumMourningLady_Movement_0
# 23 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumMourningLady_Text_1
# 25 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 26 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag mausoleummourningladyitem
# 27 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumMourningLady_Text_2
# 28 "data/maps/LittlerootMausoleum/scripts.pory"
	closemessage
# 29 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 6, MausoleumMourningLady_Movement_1
# 30 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement 6
	goto MausoleumMourningLady_1


LittlerootMausoleum_Shuppet::
# 46 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 47 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 48 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset hexgirlshuppetmeet, LittlerootMausoleum_Shuppet_2
LittlerootMausoleum_Shuppet_1:
# 89 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set hexgirlshuppetmeet, LittlerootMausoleum_Shuppet_6
LittlerootMausoleum_Shuppet_4:
# 94 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set hexgirlshuppetmeet, LittlerootMausoleum_Shuppet_14
LittlerootMausoleum_Shuppet_12:
# 110 "data/maps/LittlerootMausoleum/scripts.pory"
afterhexgirl1stmeet:
# 111 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return

LittlerootMausoleum_Shuppet_2:
# 50 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_WEAK
# 51 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_0
# 52 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_1
# 53 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_Shuppet_Text_2, LittlerootMausoleum_Shuppet_Text_3, LittlerootMausoleum_Shuppet_Text_4
# 54 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmessage
# 56 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_Shuppet_10
LittlerootMausoleum_Shuppet_9:
# 60 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_Shuppet_18
LittlerootMausoleum_Shuppet_17:
# 85 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LittlerootMausoleum_Shuppet_20
	goto LittlerootMausoleum_Shuppet_1

LittlerootMausoleum_Shuppet_5:
# 91 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_WEAK
# 92 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_9
	goto LittlerootMausoleum_Shuppet_4

LittlerootMausoleum_Shuppet_6:
	checkitem ITEM_SCROLL_OF_DARKNESS
# 0 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LittlerootMausoleum_Shuppet_5
	goto LittlerootMausoleum_Shuppet_4

LittlerootMausoleum_Shuppet_10:
# 57 "data/maps/LittlerootMausoleum/scripts.pory"
	goto shuppetisjusthelping
	goto LittlerootMausoleum_Shuppet_9

LittlerootMausoleum_Shuppet_13:
# 96 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 97 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 2, MausoleumMourningLady_Movement_0
# 98 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_7
# 99 "data/maps/LittlerootMausoleum/scripts.pory"
playerhasblanketfromstart:
# 100 "data/maps/LittlerootMausoleum/scripts.pory"
	closemessage
# 101 "data/maps/LittlerootMausoleum/scripts.pory"
	removeobject 2
# 102 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag hexgirlshuppetmoves
# 103 "data/maps/LittlerootMausoleum/scripts.pory"
	clearflag hexgirlshuppetnormalspot
# 104 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 4, LittlerootMausoleum_Shuppet_Movement_2
# 105 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_M_CONFUSE_RAY
# 106 "data/maps/LittlerootMausoleum/scripts.pory"
	waitse
	goto LittlerootMausoleum_Shuppet_12

LittlerootMausoleum_Shuppet_14:
	checkitem ITEM_SCROLL_OF_DARKNESS
# 0 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LittlerootMausoleum_Shuppet_13
	goto LittlerootMausoleum_Shuppet_12

LittlerootMausoleum_Shuppet_18:
# 61 "data/maps/LittlerootMausoleum/scripts.pory"
shuppetisjusthelping:
# 62 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_0
# 63 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_PIN
# 64 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_5
# 66 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 67 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_6
	checkitem ITEM_SCROLL_OF_DARKNESS
# 0 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LittlerootMausoleum_Shuppet_23
LittlerootMausoleum_Shuppet_22:
# 78 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_PLAYER ]
# 79 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_8
# 81 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag hexgirlshuppetmeet
# 82 "data/maps/LittlerootMausoleum/scripts.pory"
	goto afterhexgirl1stmeet
	goto LittlerootMausoleum_Shuppet_17

LittlerootMausoleum_Shuppet_20:
# 86 "data/maps/LittlerootMausoleum/scripts.pory"
	closemessage
	goto LittlerootMausoleum_Shuppet_1

LittlerootMausoleum_Shuppet_23:
# 73 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 74 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 2, MausoleumMourningLady_Movement_0
# 75 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_7
# 76 "data/maps/LittlerootMausoleum/scripts.pory"
	goto playerhasblanketfromstart
	goto LittlerootMausoleum_Shuppet_22


LittlerootMausoleum_HexGirl::
# 116 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 117 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 118 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, MausoleumMourningLady_Movement_0
# 120 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 0
	goto_if_eq LittlerootMausoleum_HexGirl_2
LittlerootMausoleum_HexGirl_1:
# 203 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 1
	goto_if_eq LittlerootMausoleum_HexGirl_5
LittlerootMausoleum_HexGirl_4:
# 213 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 2
	goto_if_eq LittlerootMausoleum_HexGirl_11
LittlerootMausoleum_HexGirl_10:
# 250 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 3
	goto_if_eq LittlerootMausoleum_HexGirl_19
LittlerootMausoleum_HexGirl_18:
# 289 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 4
	goto_if_eq LittlerootMausoleum_HexGirl_33
LittlerootMausoleum_HexGirl_32:
# 295 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
# 296 "data/maps/LittlerootMausoleum/scripts.pory"
endhexgirlscript:
# 297 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_2
# 298 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement 1
# 299 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return

LittlerootMausoleum_HexGirl_2:
# 123 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset refusedtohelphexgirl1st, LittlerootMausoleum_HexGirl_8
LittlerootMausoleum_HexGirl_7:
# 187 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set refusedtohelphexgirl1st, LittlerootMausoleum_HexGirl_13
	goto LittlerootMausoleum_HexGirl_1

LittlerootMausoleum_HexGirl_5:
# 204 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 205 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_20
# 208 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 209 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_21
# 210 "data/maps/LittlerootMausoleum/scripts.pory"
	closemessage
# 211 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_4

LittlerootMausoleum_HexGirl_8:
# 126 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_0
# 127 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_HexGirl_Text_1, LittlerootMausoleum_HexGirl_Text_2
# 128 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmessage
# 129 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_HexGirl_16
LittlerootMausoleum_HexGirl_15:
# 184 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_HexGirl_27
	goto LittlerootMausoleum_HexGirl_7

LittlerootMausoleum_HexGirl_11:
# 215 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 216 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_22
# 219 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_M_SNORE
# 220 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 221 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_23
# 224 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_HexGirl_Text_24, LittlerootMausoleum_HexGirl_Text_25
# 226 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_HexGirl_22
LittlerootMausoleum_HexGirl_21:
# 239 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_HexGirl_38
	goto LittlerootMausoleum_HexGirl_10

LittlerootMausoleum_HexGirl_13:
# 188 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 189 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_18
# 191 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_HexGirl_Text_1, LittlerootMausoleum_HexGirl_Text_2
# 192 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_HexGirl_25
LittlerootMausoleum_HexGirl_24:
# 195 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_HexGirl_40
	goto LittlerootMausoleum_HexGirl_1

LittlerootMausoleum_HexGirl_16:
# 130 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_3
# 131 "data/maps/LittlerootMausoleum/scripts.pory"
	removeitem ITEM_SCROLL_OF_DARKNESS
# 132 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, MausoleumMourningLady_Movement_1
# 133 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement 1
# 134 "data/maps/LittlerootMausoleum/scripts.pory"
	clearflag beddinginmausoleum
# 135 "data/maps/LittlerootMausoleum/scripts.pory"
	addobject 3
# 136 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 137 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_4
# 138 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, MausoleumMourningLady_Movement_0
# 139 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_5
# 140 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 141 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_6
# 144 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 145 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 146 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_7
# 147 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, MausoleumMourningLady_Movement_0
# 148 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 149 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_8
# 150 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 151 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_9
# 153 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_HexGirl_Text_10, LittlerootMausoleum_HexGirl_Text_11
# 155 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_HexGirl_30
LittlerootMausoleum_HexGirl_29:
# 169 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_HexGirl_42
	goto LittlerootMausoleum_HexGirl_15

LittlerootMausoleum_HexGirl_19:
# 251 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 252 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_29
# 254 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBirchInteraction, LittlerootMausoleum_HexGirl_36
LittlerootMausoleum_HexGirl_35:
# 260 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBalsamInteraction, LittlerootMausoleum_HexGirl_45
LittlerootMausoleum_HexGirl_44:
# 266 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaJoelInteraction, LittlerootMausoleum_HexGirl_48
LittlerootMausoleum_HexGirl_47:
# 270 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 271 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_33
# 272 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_SPELL_TAG
# 274 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBirchInteraction, LittlerootMausoleum_HexGirl_53
LittlerootMausoleum_HexGirl_50:
# 280 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 281 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_35
# 284 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 4
# 285 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_18

LittlerootMausoleum_HexGirl_22:
# 227 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 228 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_26
# 233 "data/maps/LittlerootMausoleum/scripts.pory"
	setfollowernpc LOCALID_SAMANTHA, FNPC_ALL, Samanthafollowchat, 0
# 234 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag Samanthaleavesmausoleum
# 235 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 3
# 236 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_21

LittlerootMausoleum_HexGirl_25:
# 193 "data/maps/LittlerootMausoleum/scripts.pory"
	goto changedmindwillhelphexgirl
	goto LittlerootMausoleum_HexGirl_24

LittlerootMausoleum_HexGirl_27:
# 185 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_17
	goto LittlerootMausoleum_HexGirl_7

LittlerootMausoleum_HexGirl_30:
# 156 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 157 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_12
# 159 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, MausoleumMourningLady_Movement_0
# 160 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 161 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_13
# 162 "data/maps/LittlerootMausoleum/scripts.pory"
	closemessage
# 163 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 164 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement 1
# 165 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag refusedtohelphexgirl1st
# 166 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_29

LittlerootMausoleum_HexGirl_33:
# 290 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 291 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_36
	goto LittlerootMausoleum_HexGirl_32

LittlerootMausoleum_HexGirl_36:
# 255 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 256 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_30
	goto LittlerootMausoleum_HexGirl_35

LittlerootMausoleum_HexGirl_38:
# 240 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 241 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_27
# 243 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_M_SNORE
# 244 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_28
# 245 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_10

LittlerootMausoleum_HexGirl_40:
# 196 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 197 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_19
# 199 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_1

LittlerootMausoleum_HexGirl_42:
# 170 "data/maps/LittlerootMausoleum/scripts.pory"
changedmindwillhelphexgirl:
# 171 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 172 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_14
# 175 "data/maps/LittlerootMausoleum/scripts.pory"
	register_matchcall TRAINER_HEXGIRL_MAUSOLEUM
# 176 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 177 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_15
# 178 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 179 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 180 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_16
# 181 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 1
# 182 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_15

LittlerootMausoleum_HexGirl_45:
# 261 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 262 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_31
	goto LittlerootMausoleum_HexGirl_44

LittlerootMausoleum_HexGirl_48:
# 267 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 268 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_32
	goto LittlerootMausoleum_HexGirl_47

LittlerootMausoleum_HexGirl_51:
# 276 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 277 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_34
# 278 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_DESTINY_KNOT
	goto LittlerootMausoleum_HexGirl_50

LittlerootMausoleum_HexGirl_52:
# 274 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaJoelInteraction, LittlerootMausoleum_HexGirl_51
	goto LittlerootMausoleum_HexGirl_50

LittlerootMausoleum_HexGirl_53:
# 274 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBalsamInteraction, LittlerootMausoleum_HexGirl_52
	goto LittlerootMausoleum_HexGirl_50


Samanthafollowchat::
# 303 "data/maps/LittlerootMausoleum/scripts.pory"
	lock
# 304 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 305 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MausoleumMourningLady_Movement_0
# 306 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 307 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_0
# 308 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Samanthafollowchat_Text_1, Samanthafollowchat_Text_2, Samanthafollowchat_Text_3, Samanthafollowchat_Text_4
# 309 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Samanthafollowchat_2
Samanthafollowchat_1:
# 324 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Samanthafollowchat_5
Samanthafollowchat_4:
# 336 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Samanthafollowchat_11
Samanthafollowchat_10:
# 363 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Samanthafollowchat_19
Samanthafollowchat_18:
# 366 "data/maps/LittlerootMausoleum/scripts.pory"
	release
	return

Samanthafollowchat_2:
# 310 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset Samanthagotsnacks, Samanthafollowchat_8
Samanthafollowchat_7:
# 313 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_M_BITE
# 315 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set Samanthagotsnacks, Samanthafollowchat_16
	goto Samanthafollowchat_1

Samanthafollowchat_5:
# 325 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset Samanthagotsnacks, Samanthafollowchat_14
Samanthafollowchat_13:
# 330 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set Samanthagotsnacks, Samanthafollowchat_24
	goto Samanthafollowchat_4

Samanthafollowchat_8:
# 311 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 312 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_5
	goto Samanthafollowchat_7

Samanthafollowchat_11:
# 337 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset Samanthagotsnacks, Samanthafollowchat_22
Samanthafollowchat_21:
# 348 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set Samanthagotsnacks, Samanthafollowchat_26
	goto Samanthafollowchat_10

Samanthafollowchat_14:
# 326 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 327 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_7
	goto Samanthafollowchat_13

Samanthafollowchat_16:
# 317 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 318 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_6
	goto Samanthafollowchat_1

Samanthafollowchat_19:
# 364 "data/maps/LittlerootMausoleum/scripts.pory"
	release
	goto Samanthafollowchat_18

Samanthafollowchat_22:
# 338 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 339 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_9
# 341 "data/maps/LittlerootMausoleum/scripts.pory"
	closemessage
# 342 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 343 "data/maps/LittlerootMausoleum/scripts.pory"
	destroyfollowernpc
# 344 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 345 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 2
# 346 "data/maps/LittlerootMausoleum/scripts.pory"
	clearflag Samanthaleavesmausoleum
	goto Samanthafollowchat_21

Samanthafollowchat_24:
# 331 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 332 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_8
	goto Samanthafollowchat_4

Samanthafollowchat_26:
# 349 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 350 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_10
# 352 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 353 "data/maps/LittlerootMausoleum/scripts.pory"
	destroyfollowernpc
# 354 "data/maps/LittlerootMausoleum/scripts.pory"
	clearflag Samanthaleavesmausoleum
# 355 "data/maps/LittlerootMausoleum/scripts.pory"
	addobject 1
# 356 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_2
# 357 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 358 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 4
	goto Samanthafollowchat_10


LittlerootMausoleum_ShuppetPost1stquest::
# 370 "data/maps/LittlerootMausoleum/scripts.pory"
	lock
# 373 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 3
	goto_if_eq LittlerootMausoleum_ShuppetPost1stquest_2
LittlerootMausoleum_ShuppetPost1stquest_1:
# 379 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 0
	goto_if_eq LittlerootMausoleum_ShuppetPost1stquest_5
# 384 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset shuppetgivesincense, LittlerootMausoleum_ShuppetPost1stquest_9
# 393 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 394 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_ShuppetPost1stquest_Text_1
LittlerootMausoleum_ShuppetPost1stquest_8:
# 395 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endofshuppetscript
LittlerootMausoleum_ShuppetPost1stquest_4:
# 399 "data/maps/LittlerootMausoleum/scripts.pory"
endofshuppetscript:
# 400 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return

LittlerootMausoleum_ShuppetPost1stquest_2:
# 374 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 375 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_ShuppetPost1stquest_Text_0
	goto LittlerootMausoleum_ShuppetPost1stquest_1

LittlerootMausoleum_ShuppetPost1stquest_5:
# 380 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 381 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_ShuppetPost1stquest_Text_1
	goto LittlerootMausoleum_ShuppetPost1stquest_4

LittlerootMausoleum_ShuppetPost1stquest_9:
# 385 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_HIGH_PITCH
# 386 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_ShuppetPost1stquest_Text_2
# 388 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_LUCK_INCENSE
# 389 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag shuppetgivesincense
# 390 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_ShuppetPost1stquest_Text_3
	goto LittlerootMausoleum_ShuppetPost1stquest_8


MausoleumHealingSigil::
# 405 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 406 "data/maps/LittlerootMausoleum/scripts.pory"
	fadeoutbgm 1
# 407 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 408 "data/maps/LittlerootMausoleum/scripts.pory"
	special HealPlayerParty
# 409 "data/maps/LittlerootMausoleum/scripts.pory"
	playse MUS_HEAL
# 410 "data/maps/LittlerootMausoleum/scripts.pory"
	waitse
# 411 "data/maps/LittlerootMausoleum/scripts.pory"
	fadeinbgm 1
# 412 "data/maps/LittlerootMausoleum/scripts.pory"
	playbgm MUS_RG_POKE_TOWER, TRUE
# 413 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 414 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumTombstone::
# 418 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 419 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumTombstone_Text_0
# 420 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumIncense::
# 424 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 425 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumIncense_Text_0
# 426 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumBouquet::
# 430 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 431 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumBouquet_Text_0
# 432 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumBlanket::
# 436 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 437 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumBlanket_Text_0
# 438 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumSigns::
# 442 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 443 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumSigns_Text_0
# 444 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumNogoDownstairs::
# 448 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 449 "data/maps/LittlerootMausoleum/scripts.pory"
	fadeoutbgm 2
# 450 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumNogoDownstairs_Text_0
# 451 "data/maps/LittlerootMausoleum/scripts.pory"
	closemessage
# 452 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MausoleumNogoDownstairs_Movement_0
# 453 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 454 "data/maps/LittlerootMausoleum/scripts.pory"
	fadeinbgm 2
# 455 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumFinishedSnackQuest::
# 462 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set Samanthagotsnacks, MausoleumFinishedSnackQuest_1
# 510 "data/maps/LittlerootMausoleum/scripts.pory"
	release
	return

MausoleumFinishedSnackQuest_1:
# 464 "data/maps/LittlerootMausoleum/scripts.pory"
	lock
# 465 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootMausoleum_Shuppet_Movement_1
# 466 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 467 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MausoleumMourningLady_Movement_1
# 468 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 469 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 470 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_29
# 472 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBirchInteraction, MausoleumFinishedSnackQuest_5
MausoleumFinishedSnackQuest_4:
# 478 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBalsamInteraction, MausoleumFinishedSnackQuest_8
MausoleumFinishedSnackQuest_7:
# 484 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaJoelInteraction, MausoleumFinishedSnackQuest_11
MausoleumFinishedSnackQuest_10:
# 488 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 489 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_33
# 490 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_SPELL_TAG
# 492 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBirchInteraction, MausoleumFinishedSnackQuest_16
MausoleumFinishedSnackQuest_13:
# 498 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 499 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_35
# 501 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 502 "data/maps/LittlerootMausoleum/scripts.pory"
	destroyfollowernpc
# 503 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 504 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 4
# 505 "data/maps/LittlerootMausoleum/scripts.pory"
	clearflag Samanthaleavesmausoleum
# 507 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return

MausoleumFinishedSnackQuest_5:
# 473 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 474 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_30
	goto MausoleumFinishedSnackQuest_4

MausoleumFinishedSnackQuest_8:
# 479 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 480 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_31
	goto MausoleumFinishedSnackQuest_7

MausoleumFinishedSnackQuest_11:
# 485 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 486 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_32
	goto MausoleumFinishedSnackQuest_10

MausoleumFinishedSnackQuest_14:
# 494 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 495 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_34
# 496 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_DESTINY_KNOT
	goto MausoleumFinishedSnackQuest_13

MausoleumFinishedSnackQuest_15:
# 492 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaJoelInteraction, MausoleumFinishedSnackQuest_14
	goto MausoleumFinishedSnackQuest_13

MausoleumFinishedSnackQuest_16:
# 492 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBalsamInteraction, MausoleumFinishedSnackQuest_15
	goto MausoleumFinishedSnackQuest_13


# 22 "data/maps/LittlerootMausoleum/scripts.pory"
MausoleumMourningLady_Movement_0:
# 22 "data/maps/LittlerootMausoleum/scripts.pory"
	face_player
	step_end

# 29 "data/maps/LittlerootMausoleum/scripts.pory"
MausoleumMourningLady_Movement_1:
# 29 "data/maps/LittlerootMausoleum/scripts.pory"
	walk_in_place_up
	step_end

# 62 "data/maps/LittlerootMausoleum/scripts.pory"
LittlerootMausoleum_Shuppet_Movement_0:
# 62 "data/maps/LittlerootMausoleum/scripts.pory"
	emote_exclamation_mark
# 62 "data/maps/LittlerootMausoleum/scripts.pory"
	walk_in_place_right
	step_end

# 66 "data/maps/LittlerootMausoleum/scripts.pory"
LittlerootMausoleum_Shuppet_Movement_1:
# 66 "data/maps/LittlerootMausoleum/scripts.pory"
	walk_in_place_down
	step_end

# 104 "data/maps/LittlerootMausoleum/scripts.pory"
LittlerootMausoleum_Shuppet_Movement_2:
# 104 "data/maps/LittlerootMausoleum/scripts.pory"
	face_down
	step_end

# 452 "data/maps/LittlerootMausoleum/scripts.pory"
MausoleumNogoDownstairs_Movement_0:
# 452 "data/maps/LittlerootMausoleum/scripts.pory"
	walk_slow_down
	step_end

MausoleumMourningLady_Text_0:
# 19 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Some days, I feel like I can't get out of\n"
	.string "bed at all...\p"
	.string "Like there's no meaning in it anymore.\p"
	.string "But then, I go through the motions, and\n"
	.string "I find myself here again.\p"
	.string "And it gets a bit better, one day at a\n"
	.string "time.$"

MausoleumMourningLady_Text_1:
# 23 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "You too, should hang in there. For them.\n"
	.string "For you. Here.$"

MausoleumMourningLady_Text_2:
# 27 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "You don't need to forget the past. But\n"
	.string "don't let it drag you down either.$"

LittlerootMausoleum_Shuppet_Text_0:
# 51 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "The girl seems to be having a bad dream,\n"
	.string "while the Shuppet floats next to her...$"

LittlerootMausoleum_Shuppet_Text_1:
# 52 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "What to do?$"

LittlerootMausoleum_Shuppet_Text_2:
# 53 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Battle$"

LittlerootMausoleum_Shuppet_Text_3:
# 53 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Shoo away$"

LittlerootMausoleum_Shuppet_Text_4:
# 53 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Leave$"

LittlerootMausoleum_Shuppet_Text_5:
# 64 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Wait... it's not... trying to hurt me...!\n"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Cough cough...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

LittlerootMausoleum_Shuppet_Text_6:
# 67 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I'm just very cold... Shuppet is trying\n"
	.string "to keep me warm...\p"
	.string "But Ghost Pokémon can't do that... their\n"
	.string "bodies just go right through yours...\p"
	.string "Ah... if only I had... a {COLOR RED}blanket{COLOR DARK_GRAY} or\n"
	.string "something to cover myself...$"

LittlerootMausoleum_Shuppet_Text_7:
# 75 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "The Shuppet detects {PLAYER} has\n"
	.string "something that can help...$"

LittlerootMausoleum_Shuppet_Text_8:
# 79 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "(Hmm... may have some {COLOR GREEN}extra bedding{COLOR DARK_GRAY} back\n"
	.string "home).$"

LittlerootMausoleum_Shuppet_Text_9:
# 92 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "The Shuppet keeps trying to warm the\n"
	.string "girl on the floor, to no avail...$"

LittlerootMausoleum_HexGirl_Text_0:
# 126 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "BRRT... o-oh... is that... for me?$"

LittlerootMausoleum_HexGirl_Text_1:
# 127 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Yes$"

LittlerootMausoleum_HexGirl_Text_2:
# 127 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "No$"

LittlerootMausoleum_HexGirl_Text_3:
# 130 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "R-really...? Thank you...!$"

LittlerootMausoleum_HexGirl_Text_4:
# 137 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Aah, yes... this is much better.$"

LittlerootMausoleum_HexGirl_Text_5:
# 139 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I'm Samantha, the caretaker of this\n"
	.string "mausoleum...$"

LittlerootMausoleum_HexGirl_Text_6:
# 141 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Many of the Pokémon and people that\n"
	.string "lost their lives during the war rest\l"
	.string "here now.\p"
	.string "People used to visit all the time - but\n"
	.string "not so much anymore.$"

LittlerootMausoleum_HexGirl_Text_7:
# 146 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I guess people move on, or mourn in\n"
	.string "different ways... that's okay...$"

LittlerootMausoleum_HexGirl_Text_8:
# 149 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "But my employers at Devon Co., they also\n"
	.string "stopped sending me supplies...$"

LittlerootMausoleum_HexGirl_Text_9:
# 151 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} What should I do?$"

LittlerootMausoleum_HexGirl_Text_10:
# 153 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "You should go home$"

LittlerootMausoleum_HexGirl_Text_11:
# 153 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I will help you$"

LittlerootMausoleum_HexGirl_Text_12:
# 157 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "W-well... I just can't leave everyone\n"
	.string "behind, you know...\p"
	.string "They may be dead... but some still feel\n"
	.string "lonely...$"

LittlerootMausoleum_HexGirl_Text_13:
# 161 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I... I will figure something out. Don't\n"
	.string "worry...$"

LittlerootMausoleum_HexGirl_Text_14:
# 172 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Y-you will...? Thank you! I-I will gladly\n"
	.string "accept your help...\p"
	.string "I mean, you've done more than enough\n"
	.string "for now...\p"
	.string "B-but if I need something else... could\n"
	.string "I... could I call you?\p"
	.string "Here, this is my Devonav number...$"

LittlerootMausoleum_HexGirl_Text_15:
# 177 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Oh, and this - this is for your\n"
	.string "trouble...!$"

LittlerootMausoleum_HexGirl_Text_16:
# 180 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Thank so much again... now, please be\n"
	.string "safe out there.$"

LittlerootMausoleum_HexGirl_Text_17:
# 185 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, of course not... I'm sorry for\n"
	.string "assuming...$"

LittlerootMausoleum_HexGirl_Text_18:
# 189 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh... have you... changed your mind?\n"
	.string "Will you help me care for the mausoleum?$"

LittlerootMausoleum_HexGirl_Text_19:
# 197 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "R-right, sorry... I understand... it's not\n"
	.string "a very good job...\p"
	.string "Though I happen to like it.$"

LittlerootMausoleum_HexGirl_Text_20:
# 205 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Don't worry, I am okay now. And warm!\p"
	.string "And I don't feel lonely - I have Shuppet\n"
	.string "and the rest, keeping me company!$"

LittlerootMausoleum_HexGirl_Text_21:
# 209 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I will give you a call if I need\n"
	.string "something again. Thank you...$"

LittlerootMausoleum_HexGirl_Text_22:
# 216 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, {PLAYER}, you've come to help!?\n"
	.string "I'm glad...\p"
	.string "Y-you see, my employers at Devon Co....\n"
	.string "stopped sending me food.\p"
	.string "I-I'm not mad at them, I'm sure they're\n"
	.string "busy with the Safemon project, but...$"

LittlerootMausoleum_HexGirl_Text_23:
# 221 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "...I'm very hungry.\p"
	.string "I want to get some snacks in Oldale, but\n"
	.string "I'm scared of Rebels...\p"
	.string "C-can... can you come with me?$"

LittlerootMausoleum_HexGirl_Text_24:
# 224 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Yes, let's go$"

LittlerootMausoleum_HexGirl_Text_25:
# 224 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Sorry, not right now$"

LittlerootMausoleum_HexGirl_Text_26:
# 228 "data/maps/LittlerootMausoleum/scripts.pory"
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
# 241 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, that's okay... it's a hassle, I\n"
	.string "know...\p"
	.string "And it's something I should do on my\n"
	.string "own.\p"
	.string "I'll just... try to muster the courage to\n"
	.string "go by myself. Yes. I'll do that...$"

LittlerootMausoleum_HexGirl_Text_28:
# 244 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "...$"

LittlerootMausoleum_HexGirl_Text_29:
# 252 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "T-thank you for your help... these\n"
	.string "snacks will last me a while...$"

LittlerootMausoleum_HexGirl_Text_30:
# 256 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I didn't know Professor Birch was your\n"
	.string "grandfather...\p"
	.string "He is so kind, but he also looks very\n"
	.string "sad...$"

LittlerootMausoleum_HexGirl_Text_31:
# 262 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "And thank you for introducing me to\n"
	.string "Professor Balsam.\p"
	.string "S-she is... not as scary as I thought...$"

LittlerootMausoleum_HexGirl_Text_32:
# 268 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I liked meeting Joel too. He is a tough\n"
	.string "kid.$"

LittlerootMausoleum_HexGirl_Text_33:
# 271 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "H-here... I want to give you this as...\n"
	.string "t-thanks...!$"

LittlerootMausoleum_HexGirl_Text_34:
# 277 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "A-and... I also m-made... this...!$"

LittlerootMausoleum_HexGirl_Text_35:
# 281 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I'm sorry I don't have... m-more to\n"
	.string "give you... for your help...\p"
	.string "T-thanks again... it was... v-very fun!$"

LittlerootMausoleum_HexGirl_Text_36:
# 291 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Don't worry, {PLAYER}. The snacks will\n"
	.string "last me a while.\p"
	.string "A-and I sleep well, thanks to the\n"
	.string "blanket you gave me...\p"
	.string "I-I don't know what I would have done\n"
	.string "without you... thanks again!$"

Samanthafollowchat_Text_0:
# 307 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "{PLAYER}... what's the matter?$"

Samanthafollowchat_Text_1:
# 308 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "What's up?$"

Samanthafollowchat_Text_2:
# 308 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Where to?$"

Samanthafollowchat_Text_3:
# 308 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I need to go$"

Samanthafollowchat_Text_4:
# 308 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "It's nothing$"

Samanthafollowchat_Text_5:
# 312 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I'm good... just a big hungry...$"

Samanthafollowchat_Text_6:
# 318 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Nom-nom-nom... gulp.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "O-oh, I'm sorry! I couldn't help myself...$"

Samanthafollowchat_Text_7:
# 327 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I want to go to the vending machine\n"
	.string "next to {COLOR GREEN}Oldale Town{COLOR DARK_GRAY}'s Devon Center.\p"
	.string "There's some... t-tasty snacks there...$"

Samanthafollowchat_Text_8:
# 332 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "L-let's go back... to the {COLOR GREEN}Mausoleum{COLOR DARK_GRAY}... I\n"
	.string "have all the snacks... hehe...$"

Samanthafollowchat_Text_9:
# 339 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, did something come up? T-that's\n"
	.string "okay...\p"
	.string "I-I'll go back to the Mausoleum... we can\n"
	.string "do this some other time!\p"
	.string "B-bye... {PLAYER}...$"

Samanthafollowchat_Text_10:
# 350 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, okay... I-I guess you helped me\n"
	.string "get the snacks...\p"
	.string "Y-yes, I... I can go back to the\n"
	.string "Mausoleum by myself...\p"
	.string "B-bye... {PLAYER}...$"

LittlerootMausoleum_ShuppetPost1stquest_Text_0:
# 375 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Shuppet seems to be saying goodbye to\n"
	.string "{PLAYER} and Samantha.$"

LittlerootMausoleum_ShuppetPost1stquest_Text_1:
# 381 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Shuuu...$"

LittlerootMausoleum_ShuppetPost1stquest_Text_2:
# 386 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Shuuu...!\p"
	.string "The Shuppet opens its mouth wide.\n"
	.string "There's something inside it seems to be\l"
	.string "offering...$"

LittlerootMausoleum_ShuppetPost1stquest_Text_3:
# 390 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "The Shuppet nods with a clever smile.$"

MausoleumTombstone_Text_0:
# 419 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "It's a tombstone. The name on it does\n"
	.string "not seem familiar.$"

MausoleumIncense_Text_0:
# 425 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "The incense fills the area with a sad,\n"
	.string "nostalgic smell.$"

MausoleumBouquet_Text_0:
# 431 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "A flower bouquet. The vase is far from\n"
	.string "new, but the flowers are well tended.$"

MausoleumBlanket_Text_0:
# 437 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "A spare bedding set from home. It looks\n"
	.string "a bit out of place...$"

MausoleumSigns_Text_0:
# 443 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "“Littleroot Mausoleum.”$"

MausoleumNogoDownstairs_Text_0:
# 450 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "...\p"
	.string "There is... no need to go there right\n"
	.string "now...$"
