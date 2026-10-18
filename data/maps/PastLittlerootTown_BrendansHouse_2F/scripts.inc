# 1 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"


PastLittlerootTown_BrendansHouse_2F_MapScripts::
# 6 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DisablePastFollowers
	.byte 0


DisablePastFollowers::
# 12 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FLASHBACK_DREAM, 0
	goto_if_eq DisablePastFollowers_1
	return

DisablePastFollowers_1:
# 14 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 15 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_SYS_POKENAV_GET
# 16 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 17 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
	return


Playersaysmyoldroom::
# 25 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	lock
# 26 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker [ SP_NAME_PLAYER ]
# 27 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Playersaysmyoldroom_Text_0
# 28 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	return


FlashbackTV::
# 32 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	lock
# 33 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 34 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox FlashbackTV_Text_0
# 39 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker NULL
# 40 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox FlashbackTV_Text_1
# 41 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	return


PastPlayerPC::
# 46 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	lock
# 47 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PastPlayerPC_Text_0
# 48 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	return


PastMap::
# 54 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	lock
# 55 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PastMap_Text_0
# 56 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	return


PastBattleTrophy::
# 62 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 63 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 64 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PastBattleTrophy_2
# 66 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PastBattleTrophy_Text_1
PastBattleTrophy_1:
# 67 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

PastBattleTrophy_2:
# 65 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PastBattleTrophy_Text_0
	goto PastBattleTrophy_1


PastPlayerRoomDiary::
# 71 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 72 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker [ SP_NAME_PLAYER ]
# 73 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PastPlayerRoomDiary_Text_0
# 74 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker NULL
# 75 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_ALCREMIE, 10, 3
# 76 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PastPlayerRoomDiary_Text_1
# 82 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 83 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	return


PastMankeyFollow::
# 87 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_FLASHBACK_DREAM, 1
# 88 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PastMankeyFollow_Movement_0
# 89 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 90 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_NORMAL
# 91 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 92 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PastMankeyFollow_Text_0
# 93 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker NULL
# 94 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PastMankeyFollow_Text_1
# 95 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 96 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 97 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setfollowernpc LOCALID_MANKEYFOLLOW, FNPC_ALL, MankeyFollowChat, PARTNER_RIVAL_FEMALE
# 98 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag pastmankey
# 99 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	return


MankeyFollowChat::
# 103 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	lock
# 105 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FLASHBACK_DREAM, 1
	goto_if_eq MankeyFollowChat_2
MankeyFollowChat_1:
# 146 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FLASHBACK_DREAM, 2
	goto_if_eq MankeyFollowChat_5
MankeyFollowChat_4:
# 170 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FLASHBACK_DREAM, 3
	goto_if_ge MankeyFollowChat_12
MankeyFollowChat_11:
# 206 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	return

MankeyFollowChat_2:
# 107 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	random 3
# 108 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 109 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_RESULT
# 110 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, MankeyFollowChat_8
# 124 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, MankeyFollowChat_9
# 137 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, MankeyFollowChat_10
	goto MankeyFollowChat_1

MankeyFollowChat_5:
# 148 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	random 2
# 149 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 150 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, MankeyFollowChat_15
# 160 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, MankeyFollowChat_16
	goto MankeyFollowChat_4

MankeyFollowChat_8:
# 111 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_LEDGE
# 112 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MankeyFollowChat_Movement_0
# 113 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 114 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_LEDGE
# 115 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MankeyFollowChat_Movement_1
# 116 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 117 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PastMankeyFollow_Movement_0
# 118 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 119 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_HIGH_PITCH
# 120 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 121 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_0
# 122 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker NULL
# 123 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_1
	goto MankeyFollowChat_1

MankeyFollowChat_9:
# 126 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 127 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8005, 6
# 128 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8006, 4
# 129 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 130 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	special ShakeCamera
# 131 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_M_BRICK_BREAK
# 132 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	waitse
# 133 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_HIGH_PITCH
# 134 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 135 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_2
	goto MankeyFollowChat_1

MankeyFollowChat_10:
# 139 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_HIGH_PITCH
# 140 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 141 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_3
# 142 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker NULL
# 143 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_4
	goto MankeyFollowChat_1

MankeyFollowChat_12:
# 172 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	random 3
# 173 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 174 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_RESULT
# 175 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, MankeyFollowChat_18
# 184 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, MankeyFollowChat_19
# 194 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, MankeyFollowChat_20
	goto MankeyFollowChat_11

MankeyFollowChat_15:
# 153 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_HIGH_PITCH
# 154 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 155 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_3
# 156 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker NULL
# 157 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_5
	goto MankeyFollowChat_4

MankeyFollowChat_16:
# 162 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_HIGH_PITCH
# 163 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 164 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_3
# 165 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker NULL
# 166 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_6
	goto MankeyFollowChat_4

MankeyFollowChat_18:
# 177 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_WEAK
# 178 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 179 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_7
# 180 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker NULL
# 181 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_8
	goto MankeyFollowChat_11

MankeyFollowChat_19:
# 186 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_WEAK
# 187 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 188 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_9
# 189 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MankeyFollowChat_Movement_2
# 190 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 191 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker NULL
# 192 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_10
	goto MankeyFollowChat_11

MankeyFollowChat_20:
# 196 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_WEAK
# 197 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 198 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_11
# 199 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MankeyFollowChat_Movement_3
# 200 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 201 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	setspeaker NULL
# 202 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MankeyFollowChat_Text_12
	goto MankeyFollowChat_11


# 88 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
PastMankeyFollow_Movement_0:
# 88 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	face_player
	step_end

# 112 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
MankeyFollowChat_Movement_0:
# 112 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	jump_in_place_up
	step_end

# 115 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
MankeyFollowChat_Movement_1:
# 115 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	jump_in_place_down
	step_end

# 189 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
MankeyFollowChat_Movement_2:
# 189 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	face_up
# 189 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
# 189 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
# 189 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
# 189 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	face_player
	step_end

# 199 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
MankeyFollowChat_Movement_3:
# 199 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	face_away_player
# 199 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	face_player
	step_end

Playersaysmyoldroom_Text_0:
# 27 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's my old room, from when I was\n"
	.string "little...$"

FlashbackTV_Text_0:
# 34 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Gabby here, live in Goldenrod City - the\n"
	.string "cornerstone of Jotho's journalism!\p"
	.string "Or so it used to be, before business\n"
	.string "conglomerate Silph Co. turned it into\l"
	.string "its latest mouthpiece.\p"
	.string "Today, we are here to look into the\n"
	.string "matter of {COLOR RED}mysterious radio\l"
	.string "transmissions, {COLOR DARK_GRAY} as reported by our\l"
	.string "correpondants...\p"
	.string "Join us as we unveil this mystery\n"
	.string "together!$"

FlashbackTV_Text_1:
# 40 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "... should get going already.$"

PastPlayerPC_Text_0:
# 47 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's not time for surfing the Devon Net\n"
	.string "right now.$"

PastMap_Text_0:
# 55 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A vibrant map of Hoenn, green and blue\n"
	.string "in equal measure.$"

PastBattleTrophy_Text_0:
# 65 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's dad's Battle Frontier trophy. It's\n"
	.string "so shiny!!$"

PastBattleTrophy_Text_1:
# 66 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's mom's Battle Frontier trophy. It's\n"
	.string "so shiny!$"

PastPlayerRoomDiary_Text_0:
# 73 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "My diary...$"

PastPlayerRoomDiary_Text_1:
# 76 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Today dad and mom gave me the best\n"
	.string "birthday gift ever - my first Pokémon!\p"
	.string "Mommy said it's a Mankey, a Fighting\n"
	.string "type.\p"
	.string "In school I learnt Fighting types are\n"
	.string "strong against Normal types, like the\l"
	.string "ones grandpa uses.\p"
	.string "Speaking of grandpa, daddy said I am\n"
	.string "going to stay with him for a while...\p"
	.string "Because him and mommy are going to be\n"
	.string "very very busy with work.\p"
	.string "I was a bit sad. It was my birthday, but\n"
	.string "I think everyone was sad today.$"

PastMankeyFollow_Text_0:
# 92 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Ki-kiii!$"

PastMankeyFollow_Text_1:
# 94 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mankey is eager to follow {PLAYER}\n"
	.string "around!$"

MankeyFollowChat_Text_0:
# 121 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Man-maaaan!$"

MankeyFollowChat_Text_1:
# 123 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mankey is jumping about in excitement!$"

MankeyFollowChat_Text_2:
# 135 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mankey is Karate Chopping the air.$"

MankeyFollowChat_Text_3:
# 141 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Ki-kiiii!!$"

MankeyFollowChat_Text_4:
# 143 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mankey seems full of energy.$"

MankeyFollowChat_Text_5:
# 157 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mankey is happy to be outdoors!$"

MankeyFollowChat_Text_6:
# 166 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mankey gambols in the grass.$"

MankeyFollowChat_Text_7:
# 179 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Ki... k-kiii...$"

MankeyFollowChat_Text_8:
# 181 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mankey is trying to put up a brave face.$"

MankeyFollowChat_Text_9:
# 188 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "M-maaan...?$"

MankeyFollowChat_Text_10:
# 192 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mankey looks around in confusion.$"

MankeyFollowChat_Text_11:
# 198 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Kiiii...$"

MankeyFollowChat_Text_12:
# 202 "data/maps/PastLittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mankey remains alert, watching\n"
	.string "{PLAYER}'s back.$"
