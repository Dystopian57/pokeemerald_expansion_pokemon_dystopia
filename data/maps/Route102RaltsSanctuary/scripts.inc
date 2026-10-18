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
	destroyfollowernpc
# 102 "data/maps/Route102RaltsSanctuary/scripts.pory"
	clearflag scientistinsanctum
# 103 "data/maps/Route102RaltsSanctuary/scripts.pory"
	addobject 4
# 105 "data/maps/Route102RaltsSanctuary/scripts.pory"
endofscientist:
# 106 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistWartzFind_Movement_7
# 107 "data/maps/Route102RaltsSanctuary/scripts.pory"
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
# 113 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 114 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_lt GreenSanctumScientistDontgo_1
# 125 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return

GreenSanctumScientistDontgo_1:
# 115 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 116 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 117 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_PIN
# 118 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistDontgo_Movement_0
# 119 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 120 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistDontgo_Text_0
# 121 "data/maps/Route102RaltsSanctuary/scripts.pory"
	closemessage
# 122 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistDontgo_Movement_1
# 123 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 124 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistWartzFind_Movement_4
	return


GreenSactumWartzFight::
# 132 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 133 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playmoncry SPECIES_WARTZ, CRY_MODE_NORMAL
# 134 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistWartzFind_Text_2
# 137 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 138 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq GreenSactumWartzFight_2
# 151 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setwildbattle SPECIES_WARTZ, 10
# 152 "data/maps/Route102RaltsSanctuary/scripts.pory"
	dowildbattle
# 153 "data/maps/Route102RaltsSanctuary/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 154 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 155 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq GreenSactumWartzFight_5
# 179 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GreenSactumWartzFight_6
# 182 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq GreenSactumWartzFight_7
# 185 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq GreenSactumWartzFight_8
GreenSactumWartzFight_1:
# 190 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return

GreenSactumWartzFight_2:
# 139 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_PIN
# 140 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSactumWartzFight_Movement_0
# 141 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitmovement 4
# 142 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GreenSanctumScientistWartzFind_Movement_3
# 143 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_0
	goto GreenSactumWartzFight_1

GreenSactumWartzFight_5:
# 156 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_1
# 158 "data/maps/Route102RaltsSanctuary/scripts.pory"
	getseenmon SPECIES_WARTZ
# 159 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GreenSactumWartzFight_14
GreenSactumWartzFight_13:
# 171 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GreenSactumWartzFight_16
	goto GreenSactumWartzFight_1

GreenSactumWartzFight_6:
# 180 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_5
	goto GreenSactumWartzFight_1

GreenSactumWartzFight_7:
# 183 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	goto GreenSactumWartzFight_1

GreenSactumWartzFight_8:
# 186 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	goto GreenSactumWartzFight_1

GreenSactumWartzFight_14:
# 160 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_2
# 162 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER1, GreenSactumWartzFight_19
GreenSactumWartzFight_18:
# 165 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER2, GreenSactumWartzFight_22
GreenSactumWartzFight_21:
# 168 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set GOTSTARTER3, GreenSactumWartzFight_24
	goto GreenSactumWartzFight_13

GreenSactumWartzFight_16:
# 172 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_4
	goto GreenSactumWartzFight_1

GreenSactumWartzFight_19:
# 163 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_3
	goto GreenSactumWartzFight_18

GreenSactumWartzFight_22:
# 166 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_3
	goto GreenSactumWartzFight_21

GreenSactumWartzFight_24:
# 169 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSactumWartzFight_Text_3
	goto GreenSactumWartzFight_13


GreenSanctumScientistIdle::
# 194 "data/maps/Route102RaltsSanctuary/scripts.pory"
	lock
# 196 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto_if_set scientistinsanctumgavedevonballs, GreenSanctumScientistIdle_2
GreenSanctumScientistIdle_1:
# 203 "data/maps/Route102RaltsSanctuary/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 204 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_POKENAV_CALL
# 205 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 206 "data/maps/Route102RaltsSanctuary/scripts.pory"
	playse SE_POKENAV_CALL
# 207 "data/maps/Route102RaltsSanctuary/scripts.pory"
	waitse
# 208 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistIdle_Text_1
# 209 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistIdle_Movement_0
# 210 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistIdle_Text_2
# 212 "data/maps/Route102RaltsSanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, GreenSanctumScientistWartzFind_Text_4, GreenSanctumScientistWartzFind_Text_5, GreenSanctumScientistWartzFind_Text_6
# 213 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GreenSanctumScientistIdle_5
GreenSanctumScientistIdle_4:
# 217 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GreenSanctumScientistIdle_8
GreenSanctumScientistIdle_7:
# 222 "data/maps/Route102RaltsSanctuary/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GreenSanctumScientistIdle_11
GreenSanctumScientistIdle_10:
# 226 "data/maps/Route102RaltsSanctuary/scripts.pory"
endofscientist102idle:
# 227 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistWartzFind_Movement_7
# 228 "data/maps/Route102RaltsSanctuary/scripts.pory"
	release
	return

GreenSanctumScientistIdle_2:
# 199 "data/maps/Route102RaltsSanctuary/scripts.pory"
	applymovement 4, GreenSanctumScientistIdle_Movement_0
# 200 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistIdle_Text_0
# 201 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto endofscientist102idle
	goto GreenSanctumScientistIdle_1

GreenSanctumScientistIdle_5:
# 214 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto playersaysyestoscientist
	goto GreenSanctumScientistIdle_4

GreenSanctumScientistIdle_8:
# 218 "data/maps/Route102RaltsSanctuary/scripts.pory"
	msgbox GreenSanctumScientistIdle_Text_3
	goto GreenSanctumScientistIdle_7

GreenSanctumScientistIdle_11:
# 223 "data/maps/Route102RaltsSanctuary/scripts.pory"
	goto playersayswhytoscientist
	goto GreenSanctumScientistIdle_10


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

# 106 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistWartzFind_Movement_7:
# 106 "data/maps/Route102RaltsSanctuary/scripts.pory"
	face_up
	step_end

# 118 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistDontgo_Movement_0:
# 118 "data/maps/Route102RaltsSanctuary/scripts.pory"
	face_down
# 118 "data/maps/Route102RaltsSanctuary/scripts.pory"
	emote_exclamation_mark
	step_end

# 122 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistDontgo_Movement_1:
# 122 "data/maps/Route102RaltsSanctuary/scripts.pory"
	walk_up
	step_end

# 140 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSactumWartzFight_Movement_0:
# 140 "data/maps/Route102RaltsSanctuary/scripts.pory"
	jump_in_place_up
	step_end

# 199 "data/maps/Route102RaltsSanctuary/scripts.pory"
GreenSanctumScientistIdle_Movement_0:
# 199 "data/maps/Route102RaltsSanctuary/scripts.pory"
	face_player
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
# 120 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "My good youth, surely you must at least\n"
	.string "try before fleeing!$"

GreenSactumWartzFight_Text_0:
# 143 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Wait, my young helper! I see from here\n"
	.string "you have six Pokémon on your party, do\l"
	.string "you not?\p"
	.string "Before engaging the speciment, you\n"
	.string "must make room in your party for it.\p"
	.string "I cannot allow this dangerous Pokémon\n"
	.string "to be stored in a civilian's Storage PC.\l"
	.string "I hope you understand.$"

GreenSactumWartzFight_Text_1:
# 156 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Excellent work. You would make for an\n"
	.string "excellent Safemon field researcher!\p"
	.string "Now, as for your reward...$"

GreenSactumWartzFight_Text_2:
# 160 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "When I accessed your Devon Dex earlier,\n"
	.string "I could not help but notice...$"

GreenSactumWartzFight_Text_3:
# 163 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "You picked Bulbasynth as your starter\n"
	.string "Safemon, did you not?$"

GreenSactumWartzFight_Text_4:
# 172 "data/maps/Route102RaltsSanctuary/scripts.pory"
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
# 180 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Excellent. (Throw ball + givemon)$"

GreenSanctumScientistIdle_Text_0:
# 200 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "What are you waiting for? Make haste -\n"
	.string "it might flee at any minute!$"

GreenSanctumScientistIdle_Text_1:
# 208 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "These Devon guards... they are far from\n"
	.string "reliable. I must submit a complaint upon\l"
	.string "my...$"

GreenSanctumScientistIdle_Text_2:
# 210 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "Ah, you are returned. Are you, then,\n"
	.string "ready to help me catch this specimen?$"

GreenSanctumScientistIdle_Text_3:
# 218 "data/maps/Route102RaltsSanctuary/scripts.pory"
	.string "I beg of you. If you intend to assist at\n"
	.string "all, and not simply toy with this most\l"
	.string "serious matter, make haste!$"
