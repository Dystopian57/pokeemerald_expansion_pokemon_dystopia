# 1 "data/maps/LittlerootCemetery/scripts.pory"


LittlerootCemetery_MapScripts::
# 5 "data/maps/LittlerootCemetery/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicCemetery
# 6 "data/maps/LittlerootCemetery/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicCemetery
	.byte 0


DayNightMusicCemetery::
# 10 "data/maps/LittlerootCemetery/scripts.pory"
	gettimeofday
# 11 "data/maps/LittlerootCemetery/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicCemetery_2
DayNightMusicCemetery_1:
# 14 "data/maps/LittlerootCemetery/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicCemetery_5
DayNightMusicCemetery_4:
# 17 "data/maps/LittlerootCemetery/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicCemetery_8
DayNightMusicCemetery_7:
# 20 "data/maps/LittlerootCemetery/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicCemetery_11
DayNightMusicCemetery_10:
# 24 "data/maps/LittlerootCemetery/scripts.pory"
enddaynightmusiccemetery:
	return

DayNightMusicCemetery_2:
# 12 "data/maps/LittlerootCemetery/scripts.pory"
	goto enddaynightmusiccemetery
	goto DayNightMusicCemetery_1

DayNightMusicCemetery_5:
# 15 "data/maps/LittlerootCemetery/scripts.pory"
	goto enddaynightmusiccemetery
	goto DayNightMusicCemetery_4

DayNightMusicCemetery_8:
# 18 "data/maps/LittlerootCemetery/scripts.pory"
	goto enddaynightmusiccemetery
	goto DayNightMusicCemetery_7

DayNightMusicCemetery_11:
# 21 "data/maps/LittlerootCemetery/scripts.pory"
	playbgm MUS_SCHOOLATNIGHT, TRUE
# 22 "data/maps/LittlerootCemetery/scripts.pory"
	goto enddaynightmusiccemetery
	goto DayNightMusicCemetery_10


LittlerootCemetery_CemeterySign::
# 29 "data/maps/LittlerootCemetery/scripts.pory"
	lockall
# 30 "data/maps/LittlerootCemetery/scripts.pory"
	msgbox LittlerootCemetery_CemeterySign_Text_0
# 31 "data/maps/LittlerootCemetery/scripts.pory"
	releaseall
	return


SamanthaDontgotoMausoleum::
# 36 "data/maps/LittlerootCemetery/scripts.pory"
	lock
# 37 "data/maps/LittlerootCemetery/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoMausoleum_2
SamanthaDontgotoMausoleum_1:
# 70 "data/maps/LittlerootCemetery/scripts.pory"
	releaseall
	return

SamanthaDontgotoMausoleum_2:
# 40 "data/maps/LittlerootCemetery/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoMausoleum_Movement_0
# 41 "data/maps/LittlerootCemetery/scripts.pory"
	playse SE_PIN
# 42 "data/maps/LittlerootCemetery/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 43 "data/maps/LittlerootCemetery/scripts.pory"
	msgbox SamanthaDontgotoMausoleum_Text_0
# 45 "data/maps/LittlerootCemetery/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, SamanthaDontgotoMausoleum_Text_1, SamanthaDontgotoMausoleum_Text_2
# 47 "data/maps/LittlerootCemetery/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SamanthaDontgotoMausoleum_5
SamanthaDontgotoMausoleum_4:
# 55 "data/maps/LittlerootCemetery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SamanthaDontgotoMausoleum_7
	goto SamanthaDontgotoMausoleum_1

SamanthaDontgotoMausoleum_5:
# 49 "data/maps/LittlerootCemetery/scripts.pory"
	msgbox SamanthaDontgotoMausoleum_Text_3
# 50 "data/maps/LittlerootCemetery/scripts.pory"
	closemessage
# 51 "data/maps/LittlerootCemetery/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoMausoleum_Movement_1
# 52 "data/maps/LittlerootCemetery/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoMausoleum_Movement_1
# 53 "data/maps/LittlerootCemetery/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto SamanthaDontgotoMausoleum_4

SamanthaDontgotoMausoleum_7:
# 56 "data/maps/LittlerootCemetery/scripts.pory"
	msgbox SamanthaDontgotoMausoleum_Text_4
# 58 "data/maps/LittlerootCemetery/scripts.pory"
	closemessage
# 59 "data/maps/LittlerootCemetery/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 60 "data/maps/LittlerootCemetery/scripts.pory"
	destroyfollowernpc
# 61 "data/maps/LittlerootCemetery/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 62 "data/maps/LittlerootCemetery/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 2
# 63 "data/maps/LittlerootCemetery/scripts.pory"
	clearflag Samanthaleavesmausoleum
	goto SamanthaDontgotoMausoleum_1


# 40 "data/maps/LittlerootCemetery/scripts.pory"
SamanthaDontgotoMausoleum_Movement_0:
# 40 "data/maps/LittlerootCemetery/scripts.pory"
	face_player
# 40 "data/maps/LittlerootCemetery/scripts.pory"
	emote_exclamation_mark
	step_end

# 51 "data/maps/LittlerootCemetery/scripts.pory"
SamanthaDontgotoMausoleum_Movement_1:
# 51 "data/maps/LittlerootCemetery/scripts.pory"
	walk_down
	step_end

LittlerootCemetery_CemeterySign_Text_0:
# 30 "data/maps/LittlerootCemetery/scripts.pory"
	.string "Littleroot Cemetery.\n"
	.string "Where souls come to rest.$"

SamanthaDontgotoMausoleum_Text_0:
# 43 "data/maps/LittlerootCemetery/scripts.pory"
	.string "O-oh, {PLAYER}... don't you want to go\n"
	.string "after all?$"

SamanthaDontgotoMausoleum_Text_1:
# 45 "data/maps/LittlerootCemetery/scripts.pory"
	.string "Yes, let's go$"

SamanthaDontgotoMausoleum_Text_2:
# 45 "data/maps/LittlerootCemetery/scripts.pory"
	.string "No, let's do this later$"

SamanthaDontgotoMausoleum_Text_3:
# 49 "data/maps/LittlerootCemetery/scripts.pory"
	.string "G-good... then let's get going...! I'm so\n"
	.string "hungry...$"

SamanthaDontgotoMausoleum_Text_4:
# 56 "data/maps/LittlerootCemetery/scripts.pory"
	.string "T-that's okay... till later then - I'll be\n"
	.string "waiting...!$"
