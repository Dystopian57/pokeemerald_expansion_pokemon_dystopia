# 1 "data/maps/LittlerootMausoleum/scripts.pory"

# 2 "data/maps/LittlerootMausoleum/scripts.pory"
LittlerootMausoleum_MapScripts::
# 3 "data/maps/LittlerootMausoleum/scripts.pory"
	.byte 0

MausoleumMourningLady::
# 8 "data/maps/LittlerootMausoleum/scripts.pory"
	lock
# 9 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset mausoleummourningladyitem, MausoleumMourningLady_2
# 26 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 6, MausoleumMourningLady_Movement_0
# 27 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumMourningLady_Text_2
# 28 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 6, MausoleumMourningLady_Movement_1
# 29 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement 6
MausoleumMourningLady_1:
# 32 "data/maps/LittlerootMausoleum/scripts.pory"
	release
	return

MausoleumMourningLady_2:
# 11 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumMourningLady_Text_0
# 14 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 6, MausoleumMourningLady_Movement_0
# 15 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumMourningLady_Text_1
# 17 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 18 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag mausoleummourningladyitem
# 19 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumMourningLady_Text_2
# 20 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 6, MausoleumMourningLady_Movement_1
# 21 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement 6
	goto MausoleumMourningLady_1


LittlerootMausoleum_Shuppet::
# 36 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 37 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 38 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset hexgirlshuppetmeet, LittlerootMausoleum_Shuppet_2
LittlerootMausoleum_Shuppet_1:
# 70 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set hexgirlshuppetmeet, LittlerootMausoleum_Shuppet_6
LittlerootMausoleum_Shuppet_4:
# 75 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set hexgirlshuppetmeet, LittlerootMausoleum_Shuppet_14
LittlerootMausoleum_Shuppet_12:
# 86 "data/maps/LittlerootMausoleum/scripts.pory"
afterhexgirl1stmeet:
# 87 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return

LittlerootMausoleum_Shuppet_2:
# 40 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_WEAK
# 41 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_0
# 42 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_1
# 43 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_Shuppet_Text_2, LittlerootMausoleum_Shuppet_Text_3, LittlerootMausoleum_Shuppet_Text_4
# 44 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmessage
# 46 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_Shuppet_10
LittlerootMausoleum_Shuppet_9:
# 50 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_Shuppet_18
LittlerootMausoleum_Shuppet_17:
# 66 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LittlerootMausoleum_Shuppet_20
	goto LittlerootMausoleum_Shuppet_1

LittlerootMausoleum_Shuppet_5:
# 72 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_WEAK
# 73 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_7
	goto LittlerootMausoleum_Shuppet_4

LittlerootMausoleum_Shuppet_6:
	checkitem ITEM_SCROLL_OF_DARKNESS
# 0 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LittlerootMausoleum_Shuppet_5
	goto LittlerootMausoleum_Shuppet_4

LittlerootMausoleum_Shuppet_10:
# 47 "data/maps/LittlerootMausoleum/scripts.pory"
	goto shuppetisjusthelping
	goto LittlerootMausoleum_Shuppet_9

LittlerootMausoleum_Shuppet_13:
# 77 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 78 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 2, MausoleumMourningLady_Movement_0
# 79 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_8
# 80 "data/maps/LittlerootMausoleum/scripts.pory"
	removeobject 2
# 81 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag hexgirlshuppetmoves
# 82 "data/maps/LittlerootMausoleum/scripts.pory"
	clearflag hexgirlshuppetnormalspot
# 83 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_M_CONFUSE_RAY
	goto LittlerootMausoleum_Shuppet_12

LittlerootMausoleum_Shuppet_14:
	checkitem ITEM_SCROLL_OF_DARKNESS
# 0 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LittlerootMausoleum_Shuppet_13
	goto LittlerootMausoleum_Shuppet_12

LittlerootMausoleum_Shuppet_18:
# 51 "data/maps/LittlerootMausoleum/scripts.pory"
shuppetisjusthelping:
# 52 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_0
# 53 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_PIN
# 54 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_5
# 56 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 57 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_Shuppet_Text_6
# 62 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag hexgirlshuppetmeet
# 63 "data/maps/LittlerootMausoleum/scripts.pory"
	goto afterhexgirl1stmeet
	goto LittlerootMausoleum_Shuppet_17

LittlerootMausoleum_Shuppet_20:
# 67 "data/maps/LittlerootMausoleum/scripts.pory"
	closemessage
	goto LittlerootMausoleum_Shuppet_1


LittlerootMausoleum_HexGirl::
# 92 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 93 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 94 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, MausoleumMourningLady_Movement_0
# 96 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 0
	goto_if_eq LittlerootMausoleum_HexGirl_2
LittlerootMausoleum_HexGirl_1:
# 179 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 1
	goto_if_eq LittlerootMausoleum_HexGirl_5
LittlerootMausoleum_HexGirl_4:
# 188 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 2
	goto_if_eq LittlerootMausoleum_HexGirl_11
LittlerootMausoleum_HexGirl_10:
# 225 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 3
	goto_if_eq LittlerootMausoleum_HexGirl_19
LittlerootMausoleum_HexGirl_18:
# 264 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 4
	goto_if_eq LittlerootMausoleum_HexGirl_33
LittlerootMausoleum_HexGirl_32:
# 270 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
# 271 "data/maps/LittlerootMausoleum/scripts.pory"
endhexgirlscript:
# 272 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 273 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return

LittlerootMausoleum_HexGirl_2:
# 99 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset refusedtohelphexgirl1st, LittlerootMausoleum_HexGirl_8
LittlerootMausoleum_HexGirl_7:
# 163 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set refusedtohelphexgirl1st, LittlerootMausoleum_HexGirl_13
	goto LittlerootMausoleum_HexGirl_1

LittlerootMausoleum_HexGirl_5:
# 180 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 181 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_20
# 184 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 185 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_21
# 186 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_4

LittlerootMausoleum_HexGirl_8:
# 102 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_0
# 103 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_HexGirl_Text_1, LittlerootMausoleum_HexGirl_Text_2
# 104 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmessage
# 105 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_HexGirl_16
LittlerootMausoleum_HexGirl_15:
# 159 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_HexGirl_27
	goto LittlerootMausoleum_HexGirl_7

LittlerootMausoleum_HexGirl_11:
# 190 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 191 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_22
# 194 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_M_SNORE
# 195 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 196 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_23
# 199 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_HexGirl_Text_24, LittlerootMausoleum_HexGirl_Text_25
# 201 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_HexGirl_22
LittlerootMausoleum_HexGirl_21:
# 214 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_HexGirl_38
	goto LittlerootMausoleum_HexGirl_10

LittlerootMausoleum_HexGirl_13:
# 164 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 165 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_18
# 167 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_HexGirl_Text_1, LittlerootMausoleum_HexGirl_Text_2
# 168 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_HexGirl_25
LittlerootMausoleum_HexGirl_24:
# 171 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_HexGirl_40
	goto LittlerootMausoleum_HexGirl_1

LittlerootMausoleum_HexGirl_16:
# 106 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_3
# 107 "data/maps/LittlerootMausoleum/scripts.pory"
	removeitem ITEM_SCROLL_OF_DARKNESS
# 108 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, MausoleumMourningLady_Movement_1
# 109 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement 1
# 110 "data/maps/LittlerootMausoleum/scripts.pory"
	clearflag beddinginmausoleum
# 111 "data/maps/LittlerootMausoleum/scripts.pory"
	addobject 3
# 112 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 113 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_4
# 114 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, MausoleumMourningLady_Movement_0
# 115 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_5
# 116 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 117 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_6
# 120 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 121 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 122 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_7
# 123 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, MausoleumMourningLady_Movement_0
# 124 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 125 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_8
# 126 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 127 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_9
# 129 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootMausoleum_HexGirl_Text_10, LittlerootMausoleum_HexGirl_Text_11
# 131 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootMausoleum_HexGirl_30
LittlerootMausoleum_HexGirl_29:
# 144 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootMausoleum_HexGirl_42
	goto LittlerootMausoleum_HexGirl_15

LittlerootMausoleum_HexGirl_19:
# 226 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 227 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_29
# 229 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBirchInteraction, LittlerootMausoleum_HexGirl_36
LittlerootMausoleum_HexGirl_35:
# 235 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBalsamInteraction, LittlerootMausoleum_HexGirl_45
LittlerootMausoleum_HexGirl_44:
# 241 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaJoelInteraction, LittlerootMausoleum_HexGirl_48
LittlerootMausoleum_HexGirl_47:
# 245 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 246 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_33
# 247 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_SPELL_TAG
# 249 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBirchInteraction, LittlerootMausoleum_HexGirl_53
LittlerootMausoleum_HexGirl_50:
# 255 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 256 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_35
# 259 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 4
# 260 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_18

LittlerootMausoleum_HexGirl_22:
# 202 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 203 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_26
# 208 "data/maps/LittlerootMausoleum/scripts.pory"
	setfollowernpc LOCALID_SAMANTHA, FNPC_ALL, Samanthafollowchat, 0
# 209 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag Samanthaleavesmausoleum
# 210 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 3
# 211 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_21

LittlerootMausoleum_HexGirl_25:
# 169 "data/maps/LittlerootMausoleum/scripts.pory"
	goto changedmindwillhelphexgirl
	goto LittlerootMausoleum_HexGirl_24

LittlerootMausoleum_HexGirl_27:
# 160 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 161 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_17
	goto LittlerootMausoleum_HexGirl_7

LittlerootMausoleum_HexGirl_30:
# 132 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 133 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_12
# 135 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, MausoleumMourningLady_Movement_0
# 136 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 137 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_13
# 138 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement 1, LittlerootMausoleum_Shuppet_Movement_1
# 139 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement 1
# 140 "data/maps/LittlerootMausoleum/scripts.pory"
	setflag refusedtohelphexgirl1st
# 141 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_29

LittlerootMausoleum_HexGirl_33:
# 265 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 266 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_36
	goto LittlerootMausoleum_HexGirl_32

LittlerootMausoleum_HexGirl_36:
# 230 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 231 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_30
	goto LittlerootMausoleum_HexGirl_35

LittlerootMausoleum_HexGirl_38:
# 215 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 216 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_27
# 218 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_M_SNORE
# 219 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_28
# 220 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_10

LittlerootMausoleum_HexGirl_40:
# 172 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 173 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_19
# 175 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_1

LittlerootMausoleum_HexGirl_42:
# 145 "data/maps/LittlerootMausoleum/scripts.pory"
changedmindwillhelphexgirl:
# 146 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 147 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_14
# 150 "data/maps/LittlerootMausoleum/scripts.pory"
	register_matchcall TRAINER_HEXGIRL_MAUSOLEUM
# 151 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 152 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_15
# 153 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 154 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 155 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_16
# 156 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 1
# 157 "data/maps/LittlerootMausoleum/scripts.pory"
	goto endhexgirlscript
	goto LittlerootMausoleum_HexGirl_15

LittlerootMausoleum_HexGirl_45:
# 236 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 237 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_31
	goto LittlerootMausoleum_HexGirl_44

LittlerootMausoleum_HexGirl_48:
# 242 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 243 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_32
	goto LittlerootMausoleum_HexGirl_47

LittlerootMausoleum_HexGirl_51:
# 251 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 252 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_34
# 253 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_DESTINY_KNOT
	goto LittlerootMausoleum_HexGirl_50

LittlerootMausoleum_HexGirl_52:
# 249 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaJoelInteraction, LittlerootMausoleum_HexGirl_51
	goto LittlerootMausoleum_HexGirl_50

LittlerootMausoleum_HexGirl_53:
# 249 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBalsamInteraction, LittlerootMausoleum_HexGirl_52
	goto LittlerootMausoleum_HexGirl_50


Samanthafollowchat::
# 277 "data/maps/LittlerootMausoleum/scripts.pory"
	lock
# 278 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 279 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, MausoleumMourningLady_Movement_0
# 280 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 281 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_0
# 282 "data/maps/LittlerootMausoleum/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Samanthafollowchat_Text_1, Samanthafollowchat_Text_2, Samanthafollowchat_Text_3, Samanthafollowchat_Text_4
# 283 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Samanthafollowchat_2
Samanthafollowchat_1:
# 298 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Samanthafollowchat_5
Samanthafollowchat_4:
# 310 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Samanthafollowchat_11
Samanthafollowchat_10:
# 334 "data/maps/LittlerootMausoleum/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Samanthafollowchat_19
Samanthafollowchat_18:
# 337 "data/maps/LittlerootMausoleum/scripts.pory"
	release
	return

Samanthafollowchat_2:
# 284 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset Samanthagotsnacks, Samanthafollowchat_8
Samanthafollowchat_7:
# 287 "data/maps/LittlerootMausoleum/scripts.pory"
	playse SE_M_BITE
# 289 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set Samanthagotsnacks, Samanthafollowchat_16
	goto Samanthafollowchat_1

Samanthafollowchat_5:
# 299 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset Samanthagotsnacks, Samanthafollowchat_14
Samanthafollowchat_13:
# 304 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set Samanthagotsnacks, Samanthafollowchat_24
	goto Samanthafollowchat_4

Samanthafollowchat_8:
# 285 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 286 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_5
	goto Samanthafollowchat_7

Samanthafollowchat_11:
# 311 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_unset Samanthagotsnacks, Samanthafollowchat_22
Samanthafollowchat_21:
# 322 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set Samanthagotsnacks, Samanthafollowchat_26
	goto Samanthafollowchat_10

Samanthafollowchat_14:
# 300 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 301 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_7
	goto Samanthafollowchat_13

Samanthafollowchat_16:
# 291 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 292 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_6
	goto Samanthafollowchat_1

Samanthafollowchat_19:
# 335 "data/maps/LittlerootMausoleum/scripts.pory"
	release
	goto Samanthafollowchat_18

Samanthafollowchat_22:
# 312 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 313 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_9
# 315 "data/maps/LittlerootMausoleum/scripts.pory"
	closemessage
# 316 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 317 "data/maps/LittlerootMausoleum/scripts.pory"
	destroyfollowernpc
# 318 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 319 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 2
# 320 "data/maps/LittlerootMausoleum/scripts.pory"
	clearflag Samanthaleavesmausoleum
	goto Samanthafollowchat_21

Samanthafollowchat_24:
# 305 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 306 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_8
	goto Samanthafollowchat_4

Samanthafollowchat_26:
# 323 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 324 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox Samanthafollowchat_Text_10
# 326 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 327 "data/maps/LittlerootMausoleum/scripts.pory"
	destroyfollowernpc
# 328 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 329 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 4
# 330 "data/maps/LittlerootMausoleum/scripts.pory"
	clearflag Samanthaleavesmausoleum
	goto Samanthafollowchat_10


LittlerootMausoleum_ShuppetPost1stquest::
# 341 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 342 "data/maps/LittlerootMausoleum/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 343 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_ShuppetPost1stquest_Text_0
# 344 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumHealingSigil::
# 349 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 350 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreen FADE_TO_WHITE
# 351 "data/maps/LittlerootMausoleum/scripts.pory"
	special HealPlayerParty
# 352 "data/maps/LittlerootMausoleum/scripts.pory"
	playse MUS_HEAL
# 353 "data/maps/LittlerootMausoleum/scripts.pory"
	waitse
# 354 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 355 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumTombstone::
# 359 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 360 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumTombstone_Text_0
# 361 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumBouquet::
# 365 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 366 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumBouquet_Text_0
# 367 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumBlanket::
# 371 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 372 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumBlanket_Text_0
# 373 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumSigns::
# 377 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 378 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumSigns_Text_0
# 379 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumNogoDownstairs::
# 383 "data/maps/LittlerootMausoleum/scripts.pory"
	lockall
# 384 "data/maps/LittlerootMausoleum/scripts.pory"
	fadeoutbgm 2
# 385 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox MausoleumNogoDownstairs_Text_0
# 386 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MausoleumNogoDownstairs_Movement_0
# 387 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 388 "data/maps/LittlerootMausoleum/scripts.pory"
	fadeinbgm 2
# 389 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return


MausoleumFinishedSnackQuest::
# 396 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set Samanthagotsnacks, MausoleumFinishedSnackQuest_1
# 444 "data/maps/LittlerootMausoleum/scripts.pory"
	release
	return

MausoleumFinishedSnackQuest_1:
# 398 "data/maps/LittlerootMausoleum/scripts.pory"
	lock
# 399 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootMausoleum_Shuppet_Movement_1
# 400 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 401 "data/maps/LittlerootMausoleum/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, MausoleumMourningLady_Movement_1
# 402 "data/maps/LittlerootMausoleum/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 403 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 404 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_29
# 406 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBirchInteraction, MausoleumFinishedSnackQuest_5
MausoleumFinishedSnackQuest_4:
# 412 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBalsamInteraction, MausoleumFinishedSnackQuest_8
MausoleumFinishedSnackQuest_7:
# 418 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaJoelInteraction, MausoleumFinishedSnackQuest_11
MausoleumFinishedSnackQuest_10:
# 422 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 423 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_33
# 424 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_SPELL_TAG
# 426 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBirchInteraction, MausoleumFinishedSnackQuest_16
MausoleumFinishedSnackQuest_13:
# 432 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 433 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_35
# 435 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 436 "data/maps/LittlerootMausoleum/scripts.pory"
	destroyfollowernpc
# 437 "data/maps/LittlerootMausoleum/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 438 "data/maps/LittlerootMausoleum/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 4
# 439 "data/maps/LittlerootMausoleum/scripts.pory"
	clearflag Samanthaleavesmausoleum
# 441 "data/maps/LittlerootMausoleum/scripts.pory"
	releaseall
	return

MausoleumFinishedSnackQuest_5:
# 407 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 408 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_30
	goto MausoleumFinishedSnackQuest_4

MausoleumFinishedSnackQuest_8:
# 413 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 414 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_31
	goto MausoleumFinishedSnackQuest_7

MausoleumFinishedSnackQuest_11:
# 419 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 420 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_32
	goto MausoleumFinishedSnackQuest_10

MausoleumFinishedSnackQuest_14:
# 428 "data/maps/LittlerootMausoleum/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 429 "data/maps/LittlerootMausoleum/scripts.pory"
	msgbox LittlerootMausoleum_HexGirl_Text_34
# 430 "data/maps/LittlerootMausoleum/scripts.pory"
	giveitem ITEM_DESTINY_KNOT
	goto MausoleumFinishedSnackQuest_13

MausoleumFinishedSnackQuest_15:
# 426 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaJoelInteraction, MausoleumFinishedSnackQuest_14
	goto MausoleumFinishedSnackQuest_13

MausoleumFinishedSnackQuest_16:
# 426 "data/maps/LittlerootMausoleum/scripts.pory"
	goto_if_set SamanthaBalsamInteraction, MausoleumFinishedSnackQuest_15
	goto MausoleumFinishedSnackQuest_13


# 14 "data/maps/LittlerootMausoleum/scripts.pory"
MausoleumMourningLady_Movement_0:
# 14 "data/maps/LittlerootMausoleum/scripts.pory"
	face_player
	step_end

# 20 "data/maps/LittlerootMausoleum/scripts.pory"
MausoleumMourningLady_Movement_1:
# 20 "data/maps/LittlerootMausoleum/scripts.pory"
	face_up
	step_end

# 52 "data/maps/LittlerootMausoleum/scripts.pory"
LittlerootMausoleum_Shuppet_Movement_0:
# 52 "data/maps/LittlerootMausoleum/scripts.pory"
	emote_exclamation_mark
# 52 "data/maps/LittlerootMausoleum/scripts.pory"
	face_right
	step_end

# 56 "data/maps/LittlerootMausoleum/scripts.pory"
LittlerootMausoleum_Shuppet_Movement_1:
# 56 "data/maps/LittlerootMausoleum/scripts.pory"
	face_down
	step_end

# 386 "data/maps/LittlerootMausoleum/scripts.pory"
MausoleumNogoDownstairs_Movement_0:
# 386 "data/maps/LittlerootMausoleum/scripts.pory"
	walk_slow_down
	step_end

MausoleumMourningLady_Text_0:
# 11 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Some days, I feel like I can't get out of\n"
	.string "bed at all...\p"
	.string "Like there's no meaning in it anymore.\p"
	.string "But then, I go through the motions, and\n"
	.string "I find myself here again.\p"
	.string "And it gets a bit better, one day at a\n"
	.string "time.$"

MausoleumMourningLady_Text_1:
# 15 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "You too, should hang in there. For them.\n"
	.string "For you. Here.$"

MausoleumMourningLady_Text_2:
# 19 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "You don't need to forget the past. But\n"
	.string "don't let it drag you down either.$"

LittlerootMausoleum_Shuppet_Text_0:
# 41 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "The girl seems to be having a bad dream,\n"
	.string "while the Shuppet floats next to her...$"

LittlerootMausoleum_Shuppet_Text_1:
# 42 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "What to do?$"

LittlerootMausoleum_Shuppet_Text_2:
# 43 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Battle$"

LittlerootMausoleum_Shuppet_Text_3:
# 43 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Shoo away$"

LittlerootMausoleum_Shuppet_Text_4:
# 43 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Leave$"

LittlerootMausoleum_Shuppet_Text_5:
# 54 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Wait... it's not... trying to hurt me...!\n"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Cough cough...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

LittlerootMausoleum_Shuppet_Text_6:
# 57 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I'm just, very cold... Shuppet is trying\n"
	.string "to keep me warm...\p"
	.string "But Ghost Pokémon can't do that... their\n"
	.string "bodies just go right through...\p"
	.string "Ah... if only I had... a {COLOR RED}blanket{COLOR DARK_GRAY} or\n"
	.string "something to cover myself...\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... may have some {COLOR GREEN}extra bedding{COLOR DARK_GRAY} back\n"
	.string "home.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

LittlerootMausoleum_Shuppet_Text_7:
# 73 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "The Shuppet keeps trying to warm the\n"
	.string "girl on the floor, to no avail...$"

LittlerootMausoleum_Shuppet_Text_8:
# 79 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "The Shuppet regards you knowingly and\n"
	.string "lets you pass...$"

LittlerootMausoleum_HexGirl_Text_0:
# 102 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "BRRT... o-oh... is that... for me?$"

LittlerootMausoleum_HexGirl_Text_1:
# 103 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Yes$"

LittlerootMausoleum_HexGirl_Text_2:
# 103 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "No$"

LittlerootMausoleum_HexGirl_Text_3:
# 106 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "R-really...? Thank you...!$"

LittlerootMausoleum_HexGirl_Text_4:
# 113 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Aah, yes... this is much better.$"

LittlerootMausoleum_HexGirl_Text_5:
# 115 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I'm Samantha, the caretaker of this\n"
	.string "mausoleum...$"

LittlerootMausoleum_HexGirl_Text_6:
# 117 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Many of the Pokémon and people that\n"
	.string "lost their lives during the war rest\l"
	.string "here now.\p"
	.string "People used to visit all the time - but\n"
	.string "not so much anymore.$"

LittlerootMausoleum_HexGirl_Text_7:
# 122 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I guess people move on, or mourn in\n"
	.string "different ways... that's okay...$"

LittlerootMausoleum_HexGirl_Text_8:
# 125 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "But my employers at Devon Co., they also\n"
	.string "stopped sending me supplies...$"

LittlerootMausoleum_HexGirl_Text_9:
# 127 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} What should I do?$"

LittlerootMausoleum_HexGirl_Text_10:
# 129 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "You should go home$"

LittlerootMausoleum_HexGirl_Text_11:
# 129 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I will help you$"

LittlerootMausoleum_HexGirl_Text_12:
# 133 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "W-well... I just can't leave everyone\n"
	.string "behind, you know...\p"
	.string "They may be dead... but some still feel\n"
	.string "lonely...$"

LittlerootMausoleum_HexGirl_Text_13:
# 137 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I... I will figure something out. Don't\n"
	.string "worry...$"

LittlerootMausoleum_HexGirl_Text_14:
# 147 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Y-you will... thank you! I-I will gladly\n"
	.string "accept your help...\p"
	.string "I mean, you've done more than enough\n"
	.string "for now...\p"
	.string "B-but if I need something else... could\n"
	.string "I... could I call you?\p"
	.string "Here, this is my Devonav number...$"

LittlerootMausoleum_HexGirl_Text_15:
# 152 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Oh, and this - this is for your\n"
	.string "trouble...!$"

LittlerootMausoleum_HexGirl_Text_16:
# 155 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Thank so much again... now, please be\n"
	.string "safe out there.$"

LittlerootMausoleum_HexGirl_Text_17:
# 161 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, of course not... I'm sorry for\n"
	.string "assuming...$"

LittlerootMausoleum_HexGirl_Text_18:
# 165 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh... have you... changed your mind?\n"
	.string "Will you help me care for the mausoleum?$"

LittlerootMausoleum_HexGirl_Text_19:
# 173 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "R-right, sorry... I understand... it's not\n"
	.string "a very good job...\p"
	.string "Though I happen to like it.$"

LittlerootMausoleum_HexGirl_Text_20:
# 181 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Don't worry, I am okay now. And warm!\p"
	.string "And I don't feel lonely - I have Shuppet\n"
	.string "and the rest, keeping me company!$"

LittlerootMausoleum_HexGirl_Text_21:
# 185 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I will give you a call if I need\n"
	.string "something again. Thank you...$"

LittlerootMausoleum_HexGirl_Text_22:
# 191 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, {PLAYER}, you've come to help!?\n"
	.string "I'm glad...\p"
	.string "Y-you see, my employers at Devon Co....\n"
	.string "stopped sending me food.\p"
	.string "I-I'm not mad at them, I'm sure they're\n"
	.string "busy with the Safemon project, but...$"

LittlerootMausoleum_HexGirl_Text_23:
# 196 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "...I'm very hungry.\p"
	.string "I want to get some snacks in Oldale, but\n"
	.string "I'm scared of Rebels...\p"
	.string "C-can... can you come with me?$"

LittlerootMausoleum_HexGirl_Text_24:
# 199 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Yes, let's go$"

LittlerootMausoleum_HexGirl_Text_25:
# 199 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Sorry, not right now$"

LittlerootMausoleum_HexGirl_Text_26:
# 203 "data/maps/LittlerootMausoleum/scripts.pory"
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
# 216 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, that's okay... it's a hassle, I\n"
	.string "know...\p"
	.string "And it's something I should do on my\n"
	.string "own.\p"
	.string "I'll just... try to muster the courage to\n"
	.string "go by myself. Yes. I'll do that...$"

LittlerootMausoleum_HexGirl_Text_28:
# 219 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "...$"

LittlerootMausoleum_HexGirl_Text_29:
# 227 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "T-thank you for your help... these\n"
	.string "snacks will last me a while...$"

LittlerootMausoleum_HexGirl_Text_30:
# 231 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I didn't know Professor Birch was your\n"
	.string "grandfather...\p"
	.string "He is so kind, but he also looks very\n"
	.string "sad...$"

LittlerootMausoleum_HexGirl_Text_31:
# 237 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "And thank you for introducing me to\n"
	.string "Professor Balsam.\p"
	.string "S-she is... not as scary as I thought...$"

LittlerootMausoleum_HexGirl_Text_32:
# 243 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I liked meeting Joel too. He is a tough\n"
	.string "kid.$"

LittlerootMausoleum_HexGirl_Text_33:
# 246 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "H-here... I want to give you this as...\n"
	.string "t-thanks...!$"

LittlerootMausoleum_HexGirl_Text_34:
# 252 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "A-and... I also m-made... this...!$"

LittlerootMausoleum_HexGirl_Text_35:
# 256 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I'm sorry I don't have... m-more to\n"
	.string "give you... for your help...\p"
	.string "T-thanks again... it was... v-very fun!$"

LittlerootMausoleum_HexGirl_Text_36:
# 266 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Don't worry, {PLAYER}. The snacks will\n"
	.string "last me a while.\p"
	.string "A-and I sleep well, thanks to the\n"
	.string "blanket you gave me...\p"
	.string "I-I don't know what I would have done\n"
	.string "without you... thanks again!$"

Samanthafollowchat_Text_0:
# 281 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "{PLAYER}... what's the matter?$"

Samanthafollowchat_Text_1:
# 282 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "What's up?$"

Samanthafollowchat_Text_2:
# 282 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Where to?$"

Samanthafollowchat_Text_3:
# 282 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I need to go$"

Samanthafollowchat_Text_4:
# 282 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "It's nothing$"

Samanthafollowchat_Text_5:
# 286 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I'm good... just a big hungry...$"

Samanthafollowchat_Text_6:
# 292 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Nom-nom-nom... gulp.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "O-oh, I'm sorry! I couldn't help myself...$"

Samanthafollowchat_Text_7:
# 301 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "I-I want to go to the vending machine\n"
	.string "next to Oldale Town's Devon Center.\p"
	.string "There's some... t-tasty snacks there...$"

Samanthafollowchat_Text_8:
# 306 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "L-let's go back... to the Mausoleum... I\n"
	.string "have all the snacks... hehe...$"

Samanthafollowchat_Text_9:
# 313 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, did something came up? T-that's\n"
	.string "okay...\p"
	.string "I-I'll go back to the Mausoleum... we can\n"
	.string "do this some other time!\p"
	.string "B-bye... {PLAYER}...$"

Samanthafollowchat_Text_10:
# 324 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "O-oh, okay... I-I guess you helped me\n"
	.string "get the snacks...\p"
	.string "Y-yes, I... I can go back to the\n"
	.string "Mausoleum by myself...\p"
	.string "B-bye... {PLAYER}...$"

LittlerootMausoleum_ShuppetPost1stquest_Text_0:
# 343 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "Shuuu...$"

MausoleumTombstone_Text_0:
# 360 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "It's a tombstone. The name on it does\n"
	.string "not seem familiar.$"

MausoleumBouquet_Text_0:
# 366 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "A flower bouquet. The vase is far from\n"
	.string "new, but the flowers are well tended.$"

MausoleumBlanket_Text_0:
# 372 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "A spare bedding set from home. It looks\n"
	.string "a bit out of place...$"

MausoleumSigns_Text_0:
# 378 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "'Littleroot Mausoleum.'$"

MausoleumNogoDownstairs_Text_0:
# 385 "data/maps/LittlerootMausoleum/scripts.pory"
	.string "...\p"
	.string "There is... no need to go there right\n"
	.string "now...$"
