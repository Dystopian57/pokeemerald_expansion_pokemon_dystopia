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
	msgbox GreenSanctumScientistWartzFind_Text_1
# 51 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_4
# 52 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_LEDGE
# 53 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 3, GreenSanctumScientistWartzFind_Movement_5
# 54 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 55 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playmoncry SPECIES_WARTZ, CRY_MODE_WEAK
# 56 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_2
# 58 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_3
# 59 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, GreenSanctumScientistWartzFind_Movement_4
# 61 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_3
# 63 "data/maps/Route102RaltsSanctuary/scripts.pory"
scientistbegstocatchwartz:
# 64 "data/maps/Route102RaltsSanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, GreenSanctumScientistWartzFind_Text_4, GreenSanctumScientistWartzFind_Text_5, GreenSanctumScientistWartzFind_Text_6
# 65 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GreenSanctumScientistWartzFind_2
GreenSanctumScientistWartzFind_1:
# 76 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GreenSanctumScientistWartzFind_5
GreenSanctumScientistWartzFind_4:
# 87 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GreenSanctumScientistWartzFind_11
GreenSanctumScientistWartzFind_10:
# 95 "data/maps/Route102RaltsSanctuary/scripts.pory"
endofscientistfollow:
# 96 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag scientistarrivedinsanctum
# 97 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setvar VAR_102_SCIENTIST, 3
# 98 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, GreenSanctumScientistWartzFind_Movement_6
# 99 "data/maps/Route102RaltsSanctuary/scripts.pory"
	destroyfollowernpc
# 100 "data/maps/Route102RaltsSanctuary/scripts.pory"
	clearflag scientistinsanctum
# 101 "data/maps/Route102RaltsSanctuary/scripts.pory"
	addobject 4
# 102 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistWartzFind_Movement_7
# 104 "data/maps/Route102RaltsSanctuary/scripts.pory"
endofscientist:
# 105 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return

GreenSanctumScientistWartzFind_2:
# 66 "data/maps/Route102RaltsSanctuary/scripts.pory"
playersaysyestoscientist:
# 67 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_7
# 68 "data/maps/Route102RaltsSanctuary/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 69 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_8
# 70 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set scientistarrivedinsanctum, GreenSanctumScientistWartzFind_7
# 72 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofscientistfollow
	goto GreenSanctumScientistWartzFind_1

GreenSanctumScientistWartzFind_5:
# 77 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_9
# 81 "data/maps/Route102RaltsSanctuary/scripts.pory"
	closemessage
# 82 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set scientistarrivedinsanctum, GreenSanctumScientistWartzFind_13
# 84 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofscientistfollow
	goto GreenSanctumScientistWartzFind_4

GreenSanctumScientistWartzFind_7:
# 71 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofscientist
	goto GreenSanctumScientistWartzFind_1

GreenSanctumScientistWartzFind_11:
# 88 "data/maps/Route102RaltsSanctuary/scripts.pory"
playersayswhytoscientist:
# 89 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_10
# 92 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto scientistbegstocatchwartz
	goto GreenSanctumScientistWartzFind_10

GreenSanctumScientistWartzFind_13:
# 83 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofscientist
	goto GreenSanctumScientistWartzFind_4


GreenSanctumScientistDontgo::
# 111 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 112 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_lt GreenSanctumScientistDontgo_2
# 122 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
GreenSanctumScientistDontgo_1:
# 124 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
	return

GreenSanctumScientistDontgo_2:
# 113 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 114 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 115 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_PIN
# 116 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistDontgo_Movement_0
# 117 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 118 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistDontgo_Text_0
# 119 "data/maps/Route102RaltsSanctuary/scripts.pory"
	closemessage
# 120 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistDontgo_Movement_1
# 121 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto GreenSanctumScientistDontgo_1


GreenSactumWartzFight::
# 129 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 130 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playmoncry SPECIES_WARTZ, CRY_MODE_NORMAL
# 131 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_2
# 134 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 135 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq GreenSactumWartzFight_1
# 148 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setwildbattle SPECIES_WARTZ, 10
# 149 "data/maps/Route102RaltsSanctuary/scripts.pory"
	dowildbattle
# 150 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 151 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 152 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq GreenSactumWartzFight_4
# 176 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GreenSactumWartzFight_5
# 179 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq GreenSactumWartzFight_6
# 182 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq GreenSactumWartzFight_7
	return

GreenSactumWartzFight_1:
# 136 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_PIN
# 137 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSactumWartzFight_Movement_0
# 138 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 139 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_3
# 140 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_0
	return

GreenSactumWartzFight_4:
# 153 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_1
# 155 "data/maps/Route102RaltsSanctuary/scripts.pory"
	getseenmon SPECIES_WARTZ
# 156 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GreenSactumWartzFight_13
GreenSactumWartzFight_12:
# 168 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GreenSactumWartzFight_15
	return

GreenSactumWartzFight_5:
# 177 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_5
	return

GreenSactumWartzFight_6:
# 180 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return

GreenSactumWartzFight_7:
# 183 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return

GreenSactumWartzFight_13:
# 157 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_2
# 159 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER1, GreenSactumWartzFight_18
GreenSactumWartzFight_17:
# 162 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER2, GreenSactumWartzFight_21
GreenSactumWartzFight_20:
# 165 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER3, GreenSactumWartzFight_23
	goto GreenSactumWartzFight_12

GreenSactumWartzFight_15:
# 169 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_4
	return

GreenSactumWartzFight_18:
# 160 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_3
	goto GreenSactumWartzFight_17

GreenSactumWartzFight_21:
# 163 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_3
	goto GreenSactumWartzFight_20

GreenSactumWartzFight_23:
# 166 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_3
	goto GreenSactumWartzFight_12


GreenSanctumScientistIdle::
# 190 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 191 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 192 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_POKENAV_CALL
# 193 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 194 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_POKENAV_CALL
# 195 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 196 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistIdle_Text_0
# 197 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistIdle_Movement_0
# 198 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistIdle_Text_1
# 200 "data/maps/Route102RaltsSanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, GreenSanctumScientistWartzFind_Text_4, GreenSanctumScientistWartzFind_Text_5, GreenSanctumScientistWartzFind_Text_6
# 201 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GreenSanctumScientistIdle_2
GreenSanctumScientistIdle_1:
# 205 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GreenSanctumScientistIdle_5
GreenSanctumScientistIdle_4:
# 210 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GreenSanctumScientistIdle_7
	return

GreenSanctumScientistIdle_2:
# 202 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto playersaysyestoscientist
	goto GreenSanctumScientistIdle_1

GreenSanctumScientistIdle_5:
# 206 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistIdle_Text_2
	goto GreenSanctumScientistIdle_4

GreenSanctumScientistIdle_7:
# 211 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto playersayswhytoscientist
	return


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

# 51 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_4:
# 51 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_in_place_up
	step_end

# 53 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_5:
# 53 "data/maps/Route102RaltsSanctuary/scripts.pory"
	jump_in_place_down
	step_end

# 98 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_6:
# 98 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_left
# 98 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_in_place_up
	step_end

# 102 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_7:
# 102 "data/maps/Route102RaltsSanctuary/scripts.pory"
	face_up
	step_end

# 116 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistDontgo_Movement_0:
# 116 "data/maps/Route102RaltsSanctuary/scripts.pory"
	face_down
# 116 "data/maps/Route102RaltsSanctuary/scripts.pory"
	emote_exclamation_mark
	step_end

# 120 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistDontgo_Movement_1:
# 120 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_up
	step_end

# 137 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSactumWartzFight_Movement_0:
# 137 "data/maps/Route102RaltsSanctuary/scripts.pory"
	jump_in_place_up
	step_end

# 197 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistIdle_Movement_0:
# 197 "data/maps/Route102RaltsSanctuary/scripts.pory"
	face_player
	step_end

GreenSanctumScientistWartzFind_Text_0:
# 45 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "By the primordial two... this is\n"
	.string "remarkable! No, it is astounding!$"

GreenSanctumScientistWartzFind_Text_1:
# 47 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "This part of the forest... it seems to\n"
	.string "remain unscathed from the damage and\l"
	.string "pollution cause by recent armed\l"
	.string "conflict!\p"
	.string "But most importantly - look!$"

GreenSanctumScientistWartzFind_Text_2:
# 56 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Waaa...$"

GreenSanctumScientistWartzFind_Text_3:
# 61 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "That is the specimen we've been looking\n"
	.string "for!\p"
	.string "I beseech you - you must capture it for\n"
	.string "me!$"

GreenSanctumScientistWartzFind_Text_4:
# 64 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Okay$"

GreenSanctumScientistWartzFind_Text_5:
# 64 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "No$"

GreenSanctumScientistWartzFind_Text_6:
# 64 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Why?$"

GreenSanctumScientistWartzFind_Text_7:
# 67 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Wonderful! Here, take these Devon\n"
	.string "Balls.$"

GreenSanctumScientistWartzFind_Text_8:
# 69 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Go forth now, and help make Hoenn a\n"
	.string "safer place!$"

GreenSanctumScientistWartzFind_Text_9:
# 77 "data/maps/Route102RaltsSanctuary/scripts.pory"
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

GreenSanctumScientistWartzFind_Text_10:
# 89 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Why, you say!? I must take it back to\n"
	.string "New Rustboro for Safening, what else?\p"
	.string "I would do it myself, but I'm ashamed to\n"
	.string "say my trainer skills are subpar at\l"
	.string "best...\p"
	.string "You seem much more skilled. So catch it,\n"
	.string "I beg of you!$"

GreenSanctumScientistDontgo_Text_0:
# 118 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "My good youth, surely you must at least\n"
	.string "try before fleeing!$"

GreenSactumWartzFight_Text_0:
# 140 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Wait, my young helper! I see from here\n"
	.string "you have six Pokémon on your party, do\l"
	.string "you not?\p"
	.string "Before engaging the speciment, you\n"
	.string "must make room in your party for it.\p"
	.string "I cannot allow this dangerous Pokémon\n"
	.string "to be stored in a civilian's Storage PC.\l"
	.string "I hope you understand.$"

GreenSactumWartzFight_Text_1:
# 153 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Excellent work. You would make for an\n"
	.string "excellent Safemon field researcher!\p"
	.string "Now, as for your reward...$"

GreenSactumWartzFight_Text_2:
# 157 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "When I accessed your Devon Dex earlier,\n"
	.string "I could not help but notice...$"

GreenSactumWartzFight_Text_3:
# 160 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "You picked Bulbasynth as your starter\n"
	.string "Safemon, did you not?$"

GreenSactumWartzFight_Text_4:
# 169 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "I have a deal for you. In exchange of\n"
	.string "your help, I will give you extra starter.\l"
	.string "From X, X and X. I have such three on me.\l"
	.string "Which one would you pick? dynchoice for\l"
	.string "three but option for none. None? I have\l"
	.string "no other suitable reward prepared. I\l"
	.string "suppose having helped Hoenn is reward\l"
	.string "on its own, right? Now, please hand me\l"
	.string "the Devon Ball containing that Wartz.\l"
	.string "yes/no$"

GreenSactumWartzFight_Text_5:
# 177 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Excellent. (Throw ball + givemon)$"

GreenSanctumScientistIdle_Text_0:
# 196 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "These Devon guards... they are far from\n"
	.string "reliable. I must submit a complaint upon\l"
	.string "my...$"

GreenSanctumScientistIdle_Text_1:
# 198 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Ah, you are returned. Are you, then,\n"
	.string "ready to help me catch this specimen?$"

GreenSanctumScientistIdle_Text_2:
# 206 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "I beg of you. If you intend to assist at\n"
	.string "all, and not simply toy with this most\l"
	.string "serious matter, make haste!$"
