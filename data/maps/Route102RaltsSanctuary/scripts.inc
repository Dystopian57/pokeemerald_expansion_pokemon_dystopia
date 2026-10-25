# 1 "data/maps/Route102RaltsSanctuary/scripts.pory"


Route102RaltsSanctuary_MapScripts::
# 7 "data/maps/Route102RaltsSanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicRaltsSanctuary
# 8 "data/maps/Route102RaltsSanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicRaltsSanctuary
	.byte 0


DayNightMusicRaltsSanctuary::
# 12 "data/maps/Route102RaltsSanctuary/scripts.pory"
	gettimeofday
# 13 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicRaltsSanctuary_2
DayNightMusicRaltsSanctuary_1:
# 16 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicRaltsSanctuary_5
DayNightMusicRaltsSanctuary_4:
# 19 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicRaltsSanctuary_8
DayNightMusicRaltsSanctuary_7:
# 22 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicRaltsSanctuary_11
DayNightMusicRaltsSanctuary_10:
# 26 "data/maps/Route102RaltsSanctuary/scripts.pory"
enddaynightraltssanctuary:
	return

DayNightMusicRaltsSanctuary_2:
# 14 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto enddaynightraltssanctuary
	goto DayNightMusicRaltsSanctuary_1

DayNightMusicRaltsSanctuary_5:
# 17 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto enddaynightraltssanctuary
	goto DayNightMusicRaltsSanctuary_4

DayNightMusicRaltsSanctuary_8:
# 20 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto enddaynightraltssanctuary
	goto DayNightMusicRaltsSanctuary_7

DayNightMusicRaltsSanctuary_11:
# 23 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, TRUE
# 24 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto enddaynightraltssanctuary
	goto DayNightMusicRaltsSanctuary_10


GreenSanctumScientistWartzFind::
# 31 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 32 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 34 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_PIN
# 35 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, GreenSanctumScientistWartzFind_Movement_0
# 36 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 38 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, GreenSanctumScientistWartzFind_Movement_1
# 39 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 40 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, GreenSanctumScientistWartzFind_Movement_2
# 41 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 42 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, GreenSanctumScientistWartzFind_Movement_3
# 43 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 45 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_0
# 46 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_3
# 47 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, GreenSanctumScientistWartzFind_Movement_4
# 48 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_1
# 52 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_4
# 53 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_LEDGE
# 54 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 3, GreenSanctumScientistWartzFind_Movement_5
# 55 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 56 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playmoncry SPECIES_WARTZ, CRY_MODE_WEAK
# 57 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_2
# 59 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_3
# 60 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, GreenSanctumScientistWartzFind_Movement_4
# 62 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_3
# 64 "data/maps/Route102RaltsSanctuary/scripts.pory"
scientistbegstocatchwartz:
# 65 "data/maps/Route102RaltsSanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, GreenSanctumScientistWartzFind_Text_4, GreenSanctumScientistWartzFind_Text_5, GreenSanctumScientistWartzFind_Text_6
# 66 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GreenSanctumScientistWartzFind_2
GreenSanctumScientistWartzFind_1:
# 77 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GreenSanctumScientistWartzFind_5
GreenSanctumScientistWartzFind_4:
# 89 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GreenSanctumScientistWartzFind_11
GreenSanctumScientistWartzFind_10:
# 97 "data/maps/Route102RaltsSanctuary/scripts.pory"
endofscientistfollow:
# 98 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag scientistarrivedinsanctum
# 99 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setvar VAR_102_SCIENTIST, 4
# 100 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, GreenSanctumScientistWartzFind_Movement_6
# 101 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 102 "data/maps/Route102RaltsSanctuary/scripts.pory"
	destroyfollowernpc
# 103 "data/maps/Route102RaltsSanctuary/scripts.pory"
	clearflag scientistinsanctum
# 104 "data/maps/Route102RaltsSanctuary/scripts.pory"
	addobject 4
# 106 "data/maps/Route102RaltsSanctuary/scripts.pory"
endofscientist:
# 107 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistWartzFind_Movement_7
# 108 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return

GreenSanctumScientistWartzFind_2:
# 67 "data/maps/Route102RaltsSanctuary/scripts.pory"
playersaysyestoscientist:
# 68 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_7
# 69 "data/maps/Route102RaltsSanctuary/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 70 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag scientistinsanctumgavedevonballs
# 71 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set scientistarrivedinsanctum, GreenSanctumScientistWartzFind_7
# 73 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofscientistfollow
	goto GreenSanctumScientistWartzFind_1

GreenSanctumScientistWartzFind_5:
# 78 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_8
# 82 "data/maps/Route102RaltsSanctuary/scripts.pory"
	closemessage
# 83 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, GreenSanctumScientistWartzFind_Movement_6
# 84 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set scientistarrivedinsanctum, GreenSanctumScientistWartzFind_13
# 86 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofscientistfollow
	goto GreenSanctumScientistWartzFind_4

GreenSanctumScientistWartzFind_7:
# 72 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofscientist
	goto GreenSanctumScientistWartzFind_1

GreenSanctumScientistWartzFind_11:
# 90 "data/maps/Route102RaltsSanctuary/scripts.pory"
playersayswhytoscientist:
# 91 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_9
# 94 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto scientistbegstocatchwartz
	goto GreenSanctumScientistWartzFind_10

GreenSanctumScientistWartzFind_13:
# 85 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofscientist
	goto GreenSanctumScientistWartzFind_4


GreenSanctumScientistDontgo::
# 114 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 115 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_lt GreenSanctumScientistDontgo_1
# 126 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return

GreenSanctumScientistDontgo_1:
# 116 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 117 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 118 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_PIN
# 119 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistDontgo_Movement_0
# 120 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 121 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistDontgo_Text_0
# 122 "data/maps/Route102RaltsSanctuary/scripts.pory"
	closemessage
# 123 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistDontgo_Movement_1
# 124 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 125 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistWartzFind_Movement_4
	return


GreenSactumWartzFight::
# 133 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 134 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playmoncry SPECIES_WARTZ, CRY_MODE_NORMAL
# 135 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_2
# 138 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 139 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq GreenSactumWartzFight_2
# 152 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setwildbattle SPECIES_WARTZ, 10
# 153 "data/maps/Route102RaltsSanctuary/scripts.pory"
	dowildbattle
# 154 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 155 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 156 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq GreenSactumWartzFight_5
# 183 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GreenSactumWartzFight_6
# 439 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq GreenSactumWartzFight_7
# 446 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq GreenSactumWartzFight_8
GreenSactumWartzFight_1:
# 455 "data/maps/Route102RaltsSanctuary/scripts.pory"
endofwartzquest:
# 456 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return

GreenSactumWartzFight_2:
# 140 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_LEDGE
# 141 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSactumWartzFight_Movement_0
# 142 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 143 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_3
# 144 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_0
	goto GreenSactumWartzFight_1

GreenSactumWartzFight_5:
# 157 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setvar VAR_102_SCIENTIST, 4
# 159 "data/maps/Route102RaltsSanctuary/scripts.pory"
	removeobject 3
# 160 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag SanctumWartz
# 161 "data/maps/Route102RaltsSanctuary/scripts.pory"
	clearflag SanctumBall
# 162 "data/maps/Route102RaltsSanctuary/scripts.pory"
	addobject 5
# 163 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_BALL_OPEN
# 164 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 166 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_4
# 167 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag SanctumBall
# 168 "data/maps/Route102RaltsSanctuary/scripts.pory"
	removeobject 5
# 169 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 172 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_3
# 174 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSactumWartzFight_Movement_1
# 175 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 177 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_1
# 180 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto wartztradeexplained
	goto GreenSactumWartzFight_1

GreenSactumWartzFight_6:
# 184 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_3
# 185 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSactumWartzFight_Movement_1
# 186 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 187 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_2
# 189 "data/maps/Route102RaltsSanctuary/scripts.pory"
	closemessage
# 190 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_BALL_THROW
# 191 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 192 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_BALL_OPEN
# 193 "data/maps/Route102RaltsSanctuary/scripts.pory"
	removeobject 3
# 194 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag SanctumWartz
# 195 "data/maps/Route102RaltsSanctuary/scripts.pory"
	clearflag SanctumBall
# 196 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 5, GreenSactumWartzFight_Movement_2
# 197 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 5
# 199 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_4
# 201 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistWartzFind_Movement_4
# 202 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 203 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_3
# 204 "data/maps/Route102RaltsSanctuary/scripts.pory"
	closemessage
# 206 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_4
# 207 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 208 "data/maps/Route102RaltsSanctuary/scripts.pory"
	removeobject 5
# 209 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag SanctumBall
# 210 "data/maps/Route102RaltsSanctuary/scripts.pory"
	givemon SPECIES_WARTZ, 10, ITEM_EXP_SHARE, ITEM_POKE_BALL, 1, MALE, 0, 0, 0, 0, 0, 0, 25, 25, 25, 25, 25, 25
# 211 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 212 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_4
# 214 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_3
# 215 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistWartzFind_Movement_4
# 216 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 218 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_5
# 220 "data/maps/Route102RaltsSanctuary/scripts.pory"
wartztradeexplained:
# 222 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set researcherin102sawdevondex, GreenSactumWartzFight_14
GreenSactumWartzFight_13:
# 234 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER1, GreenSactumWartzFight_17
GreenSactumWartzFight_16:
# 242 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER2, GreenSactumWartzFight_23
GreenSactumWartzFight_22:
# 249 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER3, GreenSactumWartzFight_29
GreenSactumWartzFight_28:
# 258 "data/maps/Route102RaltsSanctuary/scripts.pory"
wartztradesafemonchoice:
# 260 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER1, GreenSactumWartzFight_34
GreenSactumWartzFight_33:
# 263 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER2, GreenSactumWartzFight_37
GreenSactumWartzFight_36:
# 266 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER3, GreenSactumWartzFight_40
GreenSactumWartzFight_39:
# 270 "data/maps/Route102RaltsSanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, GreenSactumWartzFight_Text_13, GreenSactumWartzFight_Text_14, GreenSactumWartzFight_Text_15
# 273 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GreenSactumWartzFight_43
GreenSactumWartzFight_42:
# 305 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GreenSactumWartzFight_46
GreenSactumWartzFight_45:
# 341 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GreenSactumWartzFight_52
GreenSactumWartzFight_51:
# 365 "data/maps/Route102RaltsSanctuary/scripts.pory"
chosesomethingotherthanwartz:
# 366 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_26
# 368 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto wartztradesafemonchoice
# 370 "data/maps/Route102RaltsSanctuary/scripts.pory"
refusedtogivewartz2:
# 371 "data/maps/Route102RaltsSanctuary/scripts.pory"
	fadeoutbgm 1
# 372 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playbgm MUS_NONE, FALSE
# 375 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_27
# 376 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playbgm MUS_RG_SILPH, FALSE
# 377 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_28
# 382 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setrespawn HEAL_LOCATION_HERMIT_TREE
# 384 "data/maps/Route102RaltsSanctuary/scripts.pory"
battleresearchersanctum:
# 385 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER1, GreenSactumWartzFight_61
GreenSactumWartzFight_60:
# 390 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER2, GreenSactumWartzFight_73
GreenSactumWartzFight_72:
# 395 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER3, GreenSactumWartzFight_82
GreenSactumWartzFight_81:
# 400 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_29
# 404 "data/maps/Route102RaltsSanctuary/scripts.pory"
	closemessage
# 405 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 406 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSactumWartzFight_Movement_3
# 407 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement
# 408 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_EXIT
# 409 "data/maps/Route102RaltsSanctuary/scripts.pory"
	removeobject 4
# 410 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag scientistinsanctum
# 411 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setvar VAR_102_SCIENTIST, 11
# 412 "data/maps/Route102RaltsSanctuary/scripts.pory"
	addvar VAR_DEVON_REPUTATION, + 1
# 413 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofwartzquest
# 415 "data/maps/Route102RaltsSanctuary/scripts.pory"
tradedwartz:
# 417 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_102_SCIENTIST, 4
	goto_if_eq GreenSactumWartzFight_87
GreenSactumWartzFight_86:
# 420 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_102_SCIENTIST, 5
	goto_if_eq GreenSactumWartzFight_90
GreenSactumWartzFight_89:
# 423 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_32
# 425 "data/maps/Route102RaltsSanctuary/scripts.pory"
	closemessage
# 426 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSactumWartzFight_Movement_3
# 427 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 428 "data/maps/Route102RaltsSanctuary/scripts.pory"
	removeobject 4
# 429 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag scientistinsanctum
# 430 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_EXIT
# 431 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setvar VAR_102_SCIENTIST, 10
# 432 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofwartzquest
	goto GreenSactumWartzFight_1

GreenSactumWartzFight_7:
# 440 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistWartzFind_Movement_4
# 441 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 442 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_33
# 444 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	goto GreenSactumWartzFight_1

GreenSactumWartzFight_8:
# 447 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistWartzFind_Movement_4
# 448 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 449 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_33
# 451 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	goto GreenSactumWartzFight_1

GreenSactumWartzFight_14:
# 223 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_6
# 226 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER1, GreenSactumWartzFight_20
GreenSactumWartzFight_19:
# 228 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER2, GreenSactumWartzFight_26
GreenSactumWartzFight_25:
# 230 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER3, GreenSactumWartzFight_31
	goto GreenSactumWartzFight_13

GreenSactumWartzFight_17:
# 237 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_10
	goto GreenSactumWartzFight_16

GreenSactumWartzFight_20:
# 227 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_7
	goto GreenSactumWartzFight_19

GreenSactumWartzFight_23:
# 244 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_11
	goto GreenSactumWartzFight_22

GreenSactumWartzFight_26:
# 229 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_8
	goto GreenSactumWartzFight_25

GreenSactumWartzFight_29:
# 251 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_12
	goto GreenSactumWartzFight_28

GreenSactumWartzFight_31:
# 231 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_9
	goto GreenSactumWartzFight_13

GreenSactumWartzFight_34:
# 261 "data/maps/Route102RaltsSanctuary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SMOTHQUIL
# 262 "data/maps/Route102RaltsSanctuary/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_PIKACHU_SAFE
	goto GreenSactumWartzFight_33

GreenSactumWartzFight_37:
# 264 "data/maps/Route102RaltsSanctuary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASYNTH
# 265 "data/maps/Route102RaltsSanctuary/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_PIKACHU_SAFE
	goto GreenSactumWartzFight_36

GreenSactumWartzFight_40:
# 267 "data/maps/Route102RaltsSanctuary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASYNTH
# 268 "data/maps/Route102RaltsSanctuary/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SMOTHQUIL
	goto GreenSactumWartzFight_39

GreenSactumWartzFight_43:
# 274 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER1, GreenSactumWartzFight_49
GreenSactumWartzFight_48:
# 279 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER2, GreenSactumWartzFight_58
GreenSactumWartzFight_57:
# 284 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER3, GreenSactumWartzFight_70
GreenSactumWartzFight_69:
# 289 "data/maps/Route102RaltsSanctuary/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 290 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 291 "data/maps/Route102RaltsSanctuary/scripts.pory"
	special ChoosePartyMon
# 292 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitstate
# 293 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, refusedtogivewartz1
# 294 "data/maps/Route102RaltsSanctuary/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 295 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 296 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, chosesomethingotherthanwartz
# 297 "data/maps/Route102RaltsSanctuary/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 298 "data/maps/Route102RaltsSanctuary/scripts.pory"
	special CreateInGameTradePokemon
# 299 "data/maps/Route102RaltsSanctuary/scripts.pory"
	special DoInGameTradeScene
# 300 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitstate
# 301 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto tradedwartz
	goto GreenSactumWartzFight_42

GreenSactumWartzFight_46:
# 307 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER1, GreenSactumWartzFight_55
GreenSactumWartzFight_54:
# 312 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER2, GreenSactumWartzFight_67
GreenSactumWartzFight_66:
# 317 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER3, GreenSactumWartzFight_79
GreenSactumWartzFight_78:
# 322 "data/maps/Route102RaltsSanctuary/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 323 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 324 "data/maps/Route102RaltsSanctuary/scripts.pory"
	special ChoosePartyMon
# 325 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitstate
# 326 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, refusedtogivewartz1
# 327 "data/maps/Route102RaltsSanctuary/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 328 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 329 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, chosesomethingotherthanwartz
# 330 "data/maps/Route102RaltsSanctuary/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 331 "data/maps/Route102RaltsSanctuary/scripts.pory"
	special CreateInGameTradePokemon
# 332 "data/maps/Route102RaltsSanctuary/scripts.pory"
	special DoInGameTradeScene
# 333 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitstate
# 334 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto tradedwartz
	goto GreenSactumWartzFight_45

GreenSactumWartzFight_49:
# 276 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_16
# 277 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SMOTHQUIL
	goto GreenSactumWartzFight_48

GreenSactumWartzFight_52:
# 342 "data/maps/Route102RaltsSanctuary/scripts.pory"
refusedtogivewartz1:
# 344 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_102_SCIENTIST, 5
	goto_if_eq GreenSactumWartzFight_64
GreenSactumWartzFight_63:
# 351 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_22
# 352 "data/maps/Route102RaltsSanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, GreenSactumWartzFight_Text_23, GreenSactumWartzFight_Text_24
# 355 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GreenSactumWartzFight_76
GreenSactumWartzFight_75:
# 358 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GreenSactumWartzFight_84
	goto GreenSactumWartzFight_51

GreenSactumWartzFight_55:
# 309 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_18
# 310 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_PURACHU
	goto GreenSactumWartzFight_54

GreenSactumWartzFight_58:
# 281 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_17
# 282 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_BULBASYNTH
	goto GreenSactumWartzFight_57

GreenSactumWartzFight_61:
# 387 "data/maps/Route102RaltsSanctuary/scripts.pory"
	trainerbattle_no_intro TRAINER_DUSTY_1, DevonResearcherSanctumWinMessage
	goto GreenSactumWartzFight_60

GreenSactumWartzFight_64:
# 345 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_20
# 346 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playbgm MUS_RG_SILPH, FALSE
# 347 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_21
# 348 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto battleresearchersanctum
	goto GreenSactumWartzFight_63

GreenSactumWartzFight_67:
# 314 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_19
# 315 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_PURACHU
	goto GreenSactumWartzFight_66

GreenSactumWartzFight_70:
# 286 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_17
# 287 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_BULBASYNTH
	goto GreenSactumWartzFight_69

GreenSactumWartzFight_73:
# 392 "data/maps/Route102RaltsSanctuary/scripts.pory"
	trainerbattle_no_intro TRAINER_DUSTY_2, DevonResearcherSanctumWinMessage
	goto GreenSactumWartzFight_72

GreenSactumWartzFight_76:
# 356 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto refusedtogivewartz2
	goto GreenSactumWartzFight_75

GreenSactumWartzFight_79:
# 319 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_16
# 320 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SMOTHQUIL
	goto GreenSactumWartzFight_78

GreenSactumWartzFight_82:
# 397 "data/maps/Route102RaltsSanctuary/scripts.pory"
	trainerbattle_no_intro TRAINER_DUSTY_3, DevonResearcherSanctumWinMessage
	goto GreenSactumWartzFight_81

GreenSactumWartzFight_84:
# 359 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_25
# 361 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto wartztradesafemonchoice
	goto GreenSactumWartzFight_51

GreenSactumWartzFight_87:
# 418 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_30
	goto GreenSactumWartzFight_86

GreenSactumWartzFight_90:
# 421 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_31
	goto GreenSactumWartzFight_89


GreenSanctumScientistDemandsWartz::
# 465 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 466 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 467 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSactumWartzFight_Movement_1
# 468 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 469 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistDemandsWartz_Text_0
# 475 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto wartztradesafemonchoice
	return


GreenSanctumScientistIdle::
# 485 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 487 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set scientistinsanctumgavedevonballs, GreenSanctumScientistIdle_2
GreenSanctumScientistIdle_1:
# 494 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 495 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_POKENAV_CALL
# 496 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 497 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_POKENAV_CALL
# 498 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 499 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistIdle_Text_1
# 500 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistIdle_Movement_0
# 501 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistIdle_Text_2
# 503 "data/maps/Route102RaltsSanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, GreenSanctumScientistWartzFind_Text_4, GreenSanctumScientistWartzFind_Text_5, GreenSanctumScientistWartzFind_Text_6
# 504 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GreenSanctumScientistIdle_5
GreenSanctumScientistIdle_4:
# 508 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GreenSanctumScientistIdle_8
GreenSanctumScientistIdle_7:
# 513 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GreenSanctumScientistIdle_11
GreenSanctumScientistIdle_10:
# 517 "data/maps/Route102RaltsSanctuary/scripts.pory"
endofscientist102idle:
# 518 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistWartzFind_Movement_7
# 519 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 520 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return

GreenSanctumScientistIdle_2:
# 490 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistIdle_Movement_0
# 491 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistIdle_Text_0
# 492 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofscientist102idle
	goto GreenSanctumScientistIdle_1

GreenSanctumScientistIdle_5:
# 505 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto playersaysyestoscientist
	goto GreenSanctumScientistIdle_4

GreenSanctumScientistIdle_8:
# 509 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistIdle_Text_3
	goto GreenSanctumScientistIdle_7

GreenSanctumScientistIdle_11:
# 514 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto playersayswhytoscientist
	goto GreenSanctumScientistIdle_10


SanctumFlowerBasket::
# 524 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 525 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox SanctumFlowerBasket_Text_0
# 526 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return


SanctumBerryBasket::
# 530 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 531 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox SanctumBerryBasket_Text_0
# 532 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return


SanctumPlantedBush::
# 536 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 537 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox SanctumPlantedBush_Text_0
# 538 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return


SanctumVeriwoodo::
# 545 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 546 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 547 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playmoncry SPECIES_VERIWOODO, CRY_MODE_NORMAL
# 548 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox SanctumVeriwoodo_Text_0
# 549 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox SanctumVeriwoodo_Text_1
	checkitem ITEM_COMET_SHARD
# 0 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SanctumVeriwoodo_2
# 556 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox SanctumVeriwoodo_Text_3
# 558 "data/maps/Route102RaltsSanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SanctumVeriwoodo_Text_4, GreenSanctumScientistWartzFind_Text_5
# 560 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SanctumVeriwoodo_5
SanctumVeriwoodo_1:
# 598 "data/maps/Route102RaltsSanctuary/scripts.pory"
endofsanctumveriwoodo:
# 599 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return

SanctumVeriwoodo_2:
# 553 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox SanctumVeriwoodo_Text_2
	goto SanctumVeriwoodo_1

SanctumVeriwoodo_5:
# 561 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox SanctumVeriwoodo_Text_5
# 562 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_M_EMBER
# 563 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 564 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_LEDGE
# 565 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 6, GreenSanctumScientistWartzFind_Movement_5
# 566 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 567 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playmoncry SPECIES_VERIWOODO, CRY_MODE_HIGH_PITCH
# 568 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox SanctumVeriwoodo_Text_6
# 569 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setwildbattle SPECIES_VERIWOODO, 15
# 570 "data/maps/Route102RaltsSanctuary/scripts.pory"
	dowildbattle
# 571 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 572 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 573 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SanctumVeriwoodo_7
# 578 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SanctumVeriwoodo_8
# 587 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SanctumVeriwoodo_9
# 590 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SanctumVeriwoodo_10
	goto SanctumVeriwoodo_1

SanctumVeriwoodo_7:
# 574 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag sanctumveriwoodo
# 575 "data/maps/Route102RaltsSanctuary/scripts.pory"
	removeobject 6
# 576 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofsanctumveriwoodo
	goto SanctumVeriwoodo_1

SanctumVeriwoodo_8:
# 579 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_FLEE
# 580 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 6, SanctumVeriwoodo_Movement_0
# 581 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 6
# 582 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag sanctumveriwoodo
# 583 "data/maps/Route102RaltsSanctuary/scripts.pory"
	removeobject 6
# 584 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playmoncry SPECIES_VERIWOODO, CRY_MODE_HIGH_PITCH
# 585 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofsanctumveriwoodo
	goto SanctumVeriwoodo_1

SanctumVeriwoodo_9:
# 588 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofsanctumveriwoodo
	goto SanctumVeriwoodo_1

SanctumVeriwoodo_10:
# 591 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofsanctumveriwoodo
	goto SanctumVeriwoodo_1


# 35 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_0:
# 35 "data/maps/Route102RaltsSanctuary/scripts.pory"
	face_player
# 35 "data/maps/Route102RaltsSanctuary/scripts.pory"
	emote_exclamation_mark
	step_end

# 38 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_1:
# 38 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_in_place_right
	step_end

# 40 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_2:
# 40 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_in_place_left
	step_end

# 42 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_3:
# 42 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_in_place_down
	step_end

# 47 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_4:
# 47 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_in_place_up
	step_end

# 54 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_5:
# 54 "data/maps/Route102RaltsSanctuary/scripts.pory"
	jump_in_place_down
	step_end

# 83 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_6:
# 83 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_left
# 83 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_in_place_up
	step_end

# 107 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_7:
# 107 "data/maps/Route102RaltsSanctuary/scripts.pory"
	face_up
	step_end

# 119 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistDontgo_Movement_0:
# 119 "data/maps/Route102RaltsSanctuary/scripts.pory"
	face_down
# 119 "data/maps/Route102RaltsSanctuary/scripts.pory"
	emote_exclamation_mark
	step_end

# 123 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistDontgo_Movement_1:
# 123 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_up
	step_end

# 141 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSactumWartzFight_Movement_0:
# 141 "data/maps/Route102RaltsSanctuary/scripts.pory"
	jump_in_place_up
	step_end

# 174 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSactumWartzFight_Movement_1:
# 174 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_right
# 174 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_up
	step_end

# 196 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSactumWartzFight_Movement_2:
# 196 "data/maps/Route102RaltsSanctuary/scripts.pory"
	face_down
	step_end

# 406 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSactumWartzFight_Movement_3:
# 406 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_down
# 406 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_down
	step_end

# 490 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistIdle_Movement_0:
# 490 "data/maps/Route102RaltsSanctuary/scripts.pory"
	face_player
	step_end

# 580 "data/maps/Route102RaltsSanctuary/scripts.pory"
SanctumVeriwoodo_Movement_0:
# 580 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_fast_up
# 580 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_fast_up
# 580 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_fast_up
# 580 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_fast_up
# 580 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_fast_up
# 580 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_fast_up
	step_end

GreenSanctumScientistWartzFind_Text_0:
# 45 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "By the primordial two... this is\n"
	.string "remarkable! No, it is astounding!$"

GreenSanctumScientistWartzFind_Text_1:
# 48 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "This part of the forest... it seems to\n"
	.string "remain unscathed from the damage and\l"
	.string "pollution cause by recent armed\l"
	.string "conflict!\p"
	.string "But most importantly - look!$"

GreenSanctumScientistWartzFind_Text_2:
# 57 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Waaa...$"

GreenSanctumScientistWartzFind_Text_3:
# 62 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "That is the specimen we've been looking\n"
	.string "for!\p"
	.string "I beseech you - you must capture it for\n"
	.string "me!$"

GreenSanctumScientistWartzFind_Text_4:
# 65 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Okay$"

GreenSanctumScientistWartzFind_Text_5:
# 65 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "No$"

GreenSanctumScientistWartzFind_Text_6:
# 65 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Why?$"

GreenSanctumScientistWartzFind_Text_7:
# 68 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Wonderful! Here, take these Devon\n"
	.string "Balls.$"

GreenSanctumScientistWartzFind_Text_8:
# 78 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "My young fellow, you are most cruel...\p"
	.string "We find ourselves on the verge of\n"
	.string "success, and it is now you would\l"
	.string "forsake me?\p"
	.string "Very well... know that by doing so, you\n"
	.string "also lose right to your reward.\p"
	.string "I will now contact a Devon Guard to\n"
	.string "assist me. Should you change your mind\l"
	.string "before they arrive, I'd be inclined to\l"
	.string "resume our arrangement.$"

GreenSanctumScientistWartzFind_Text_9:
# 91 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Why, you say!? I must take it back to\n"
	.string "New Rustboro for Safening, what else?\p"
	.string "I would do it myself, but I'm ashamed to\n"
	.string "say my trainer skills are subpar at\l"
	.string "best...\p"
	.string "You seem much more skilled. So catch it,\n"
	.string "I beg of you!$"

GreenSanctumScientistDontgo_Text_0:
# 121 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "My good youth, surely you must at least\n"
	.string "try before fleeing!$"

GreenSactumWartzFight_Text_0:
# 144 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Wait, my young helper! I see from here\n"
	.string "you have six Pokémon on your party, do\l"
	.string "you not?\p"
	.string "Before engaging the speciment, you\n"
	.string "must make room in your party for it.\p"
	.string "I cannot allow this dangerous Pokémon\n"
	.string "to be stored in a civilian's Storage PC.\l"
	.string "I hope you understand.$"

GreenSactumWartzFight_Text_1:
# 177 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Excellent work. You would make for an\n"
	.string "excellent Safemon field researcher!\p"
	.string "Now, as for your reward...$"

GreenSactumWartzFight_Text_2:
# 187 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "A rather excessive show of force... but\n"
	.string "I will not argue with results.\p"
	.string "Allow me to finish the task with this\n"
	.string "Devon Ball!$"

GreenSactumWartzFight_Text_3:
# 203 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Aha, I can at least assist in this\n"
	.string "manner!$"

GreenSactumWartzFight_Text_4:
# 212 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "{PLAYER} picked up the Devon Ball\n"
	.string "containing Wartz!$"

GreenSactumWartzFight_Text_5:
# 218 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Now, as for your reward...$"

GreenSactumWartzFight_Text_6:
# 223 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "When I transfered data to your Devon\n"
	.string "Dex earlier, I could not help but\l"
	.string "notice...$"

GreenSactumWartzFight_Text_7:
# 227 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "You chose Bulbasynth as your\n"
	.string "Devon-sanctioned starter.$"

GreenSactumWartzFight_Text_8:
# 229 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "You chose Smothquil as your\n"
	.string "Devon-sanctioned starter.$"

GreenSactumWartzFight_Text_9:
# 231 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Your first registered Devon Dex entry\n"
	.string "was... Purachu. Rather unfortunate.$"

GreenSactumWartzFight_Text_10:
# 237 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "I happen to have with me two\n"
	.string "Devon-sanctioned Safemon - Smothquil\l"
	.string "and Purachu.\p"
	.string "I would gladly give one of them onto\n"
	.string "your care, in exchange of your help just\l"
	.string "now.\p"
	.string "What do you say?$"

GreenSactumWartzFight_Text_11:
# 244 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "I happen to have with me two\n"
	.string "Devon-sanctioned Safemon -\l"
	.string "Bulbasynth and Purachu.\p"
	.string "I would gladly give one of them onto\n"
	.string "your care, in exchange of your help just\l"
	.string "now.\p"
	.string "What do you say?$"

GreenSactumWartzFight_Text_12:
# 251 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "I happen to have with me two\n"
	.string "Devon-sanctioned Safemon -\l"
	.string "Bulbasynth and Smothquil.\p"
	.string "I would gladly give one of them onto\n"
	.string "your care, in exchange of your help just\l"
	.string "now.\p"
	.string "What do you say?$"

GreenSactumWartzFight_Text_13:
# 271 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Trade Wartz for {STR_VAR_1}$"

GreenSactumWartzFight_Text_14:
# 271 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Trade Wartz for {STR_VAR_2}$"

GreenSactumWartzFight_Text_15:
# 271 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Don't trade Wartz$"

GreenSactumWartzFight_Text_16:
# 276 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Smothquil? Excellent choice - let us\n"
	.string "trade without delay!$"

GreenSactumWartzFight_Text_17:
# 281 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Bulbasynth? Excellent choice - let us\n"
	.string "trade without delay!$"

GreenSactumWartzFight_Text_18:
# 309 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Purachu? Excellent choice - let us\n"
	.string "trade without delay!$"

GreenSactumWartzFight_Text_19:
# 314 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Purachu Excellent choice - let us trade\n"
	.string "without delay!$"

GreenSactumWartzFight_Text_20:
# 345 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "So you persist in your betrayal... a\n"
	.string "shame.$"

GreenSactumWartzFight_Text_21:
# 347 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Then I must persist in my use of force!$"

GreenSactumWartzFight_Text_22:
# 351 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Hm? What is the meaning of this? You\n"
	.string "refuse to follow up on our deal?$"

GreenSactumWartzFight_Text_23:
# 353 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Yes, I will keep Wartz$"

GreenSactumWartzFight_Text_24:
# 353 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "No, I will trade you Wartz$"

GreenSactumWartzFight_Text_25:
# 359 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Ah, I must have misheard. Such is old\n"
	.string "age - unreleting and unforgiving.\p"
	.string "To make sure I did not misheard you\n"
	.string "prior - what Safemon do you wish?$"

GreenSactumWartzFight_Text_26:
# 366 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "A wondrous specimen, to be sure... but I\n"
	.string "am only interested in Wartz.\p"
	.string "Let's try that again.$"

GreenSactumWartzFight_Text_27:
# 375 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "...\p"
	.string "I see. So this was all a ploy to get your\n"
	.string "hands on Wartz.$"

GreenSactumWartzFight_Text_28:
# 377 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "I should have known better than to\n"
	.string "trust someone from the Rebel Zone.\p"
	.string "You rabble, who wish to undermine our\n"
	.string "work at every turn.\p"
	.string "You who were likely injured by a\n"
	.string "Pokémon. And still do not understand\l"
	.string "the peril they pose.\p"
	.string "But no matter... I was prepared for this\n"
	.string "eventuality.\p"
	.string "I will take that Wartz to Devon Co. - it\n"
	.string "is not the first, and will not be the\l"
	.string "last!$"

GreenSactumWartzFight_Text_29:
# 400 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "... you triumph. And yet the benefits of\n"
	.string "your victory will be short-lived.\p"
	.string "Sooner or later, that Wartz will be\n"
	.string "turned into a Safemon.\p"
	.string "Devon Co. will not relent its efforts to\n"
	.string "bring peace and safety to Hoenn.\p"
	.string "For that purpose, it grows stronger\n"
	.string "every day. You Rebels only delay the\l"
	.string "inevitable.$"

GreenSactumWartzFight_Text_30:
# 418 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Well, that's some successful field work!$"

GreenSactumWartzFight_Text_31:
# 421 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "All is well that ends well. Let us forget\n"
	.string "about our little quarrel.$"

GreenSactumWartzFight_Text_32:
# 423 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "May you rest easy tonight, knowing you\n"
	.string "have helped make Hoenn a safer place.\p"
	.string "Take care now, my young assistant!$"

GreenSactumWartzFight_Text_33:
# 442 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Hmm... some would say that was a rather\n"
	.string "lacking show of mettle.\p"
	.string "But I trust you have merely chosen a\n"
	.string "stratagem of attrition, have you not?$"

GreenSanctumScientistDemandsWartz_Text_0:
# 469 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "My young betrayer... it would seem you\n"
	.string "have a fellow conspirator inside that\l"
	.string "tree.\p"
	.string "But it changes nothing. You may hide in\n"
	.string "there as many times as you wish...\p"
	.string "I will not allow you to leave with that\n"
	.string "Wartz.\p"
	.string "Now, what if we spare our companions a\n"
	.string "fruitless struggle...\p"
	.string "And you hand me that specimen\n"
	.string "willingly? The trade is still on the\l"
	.string "table.$"

GreenSanctumScientistIdle_Text_0:
# 491 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "What are you waiting for? Make haste -\n"
	.string "it might flee at any minute!$"

GreenSanctumScientistIdle_Text_1:
# 499 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "These Devon guards... they are far from\n"
	.string "reliable. I must submit a complaint upon\l"
	.string "my...$"

GreenSanctumScientistIdle_Text_2:
# 501 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Ah, you are returned. Are you, then,\n"
	.string "ready to help me catch this specimen?$"

GreenSanctumScientistIdle_Text_3:
# 509 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "I beg of you. If you intend to assist at\n"
	.string "all, and not simply toy with this most\l"
	.string "serious matter, make haste!$"

SanctumFlowerBasket_Text_0:
# 525 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "A basket of flowers that emits a\n"
	.string "refreshing fragrance.$"

SanctumBerryBasket_Text_0:
# 531 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "The berry basket shows sign of Pokémon\n"
	.string "eating from it.$"

SanctumPlantedBush_Text_0:
# 537 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "A small bush is planted here.$"

SanctumVeriwoodo_Text_0:
# 548 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Wooodoo!$"

SanctumVeriwoodo_Text_1:
# 549 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "The Pokémon does not seem inclined to\n"
	.string "move.$"

SanctumVeriwoodo_Text_2:
# 553 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Perhaps it could be scared away\n"
	.string "somehow...$"

SanctumVeriwoodo_Text_3:
# 556 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Use {COLOR RED}Leaky Lighter{COLOR DARK_GRAY} to scare it away?$"

SanctumVeriwoodo_Text_4:
# 558 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Yes$"

SanctumVeriwoodo_Text_5:
# 561 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "{PLAYER} lighted the Leaky Ligther\n"
	.string "near the Pokémon.$"

SanctumVeriwoodo_Text_6:
# 568 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "WOOODOOOO!!$"

DevonResearcherSanctumWinMessage::
# 460 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "I concede defeat.$"
