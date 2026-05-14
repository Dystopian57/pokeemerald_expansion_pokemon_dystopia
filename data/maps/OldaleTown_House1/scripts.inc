# 1 "data/maps/OldaleTown_House1/scripts.pory"


OldaleTown_House1_MapScripts::
# 7 "data/maps/OldaleTown_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightNPC
	.byte 0


DayNightNPC::
# 15 "data/maps/OldaleTown_House1/scripts.pory"
	gettimeofday
# 16 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightNPC_2
DayNightNPC_1:
# 21 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightNPC_5
DayNightNPC_4:
# 26 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightNPC_8
DayNightNPC_7:
# 31 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightNPC_11
DayNightNPC_10:
# 36 "data/maps/OldaleTown_House1/scripts.pory"
endofdaynightnpc:
# 37 "data/maps/OldaleTown_House1/scripts.pory"
	release
	return

DayNightNPC_2:
# 17 "data/maps/OldaleTown_House1/scripts.pory"
	clearflag daynpc
# 18 "data/maps/OldaleTown_House1/scripts.pory"
	setflag nightnpc
# 19 "data/maps/OldaleTown_House1/scripts.pory"
	goto endofdaynightnpc
	goto DayNightNPC_1

DayNightNPC_5:
# 22 "data/maps/OldaleTown_House1/scripts.pory"
	clearflag daynpc
# 23 "data/maps/OldaleTown_House1/scripts.pory"
	setflag nightnpc
# 24 "data/maps/OldaleTown_House1/scripts.pory"
	goto endofdaynightnpc
	goto DayNightNPC_4

DayNightNPC_8:
# 27 "data/maps/OldaleTown_House1/scripts.pory"
	clearflag nightnpc
# 28 "data/maps/OldaleTown_House1/scripts.pory"
	setflag daynpc
# 29 "data/maps/OldaleTown_House1/scripts.pory"
	goto endofdaynightnpc
	goto DayNightNPC_7

DayNightNPC_11:
# 32 "data/maps/OldaleTown_House1/scripts.pory"
	clearflag nightnpc
# 33 "data/maps/OldaleTown_House1/scripts.pory"
	setflag daynpc
# 34 "data/maps/OldaleTown_House1/scripts.pory"
	goto endofdaynightnpc
	goto DayNightNPC_10


OldaleHouse1GirlDay::
# 43 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 44 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 45 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlDay_Text_0
# 46 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1GirlNight::
# 50 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 51 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 52 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlNight_Text_0
# 54 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Shiiko::
# 58 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 59 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 60 "data/maps/OldaleTown_House1/scripts.pory"
	playmoncry SPECIES_SHIITAKO, CRY_MODE_WEAK
# 61 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 3, OldaleHouse1Shiiko_Movement_0
# 62 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Shiiko_Text_0
# 63 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1WomanDay::
# 67 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 68 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1WomanDay_Movement_0
# 69 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 70 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1WomanDay_Text_0
# 72 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1WomanDay_Movement_1
# 73 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1WomanNight::
# 78 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 79 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1WomanDay_Movement_0
# 80 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 81 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1WomanNight_Text_0
# 84 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1WomanDay_Movement_1
# 85 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouseOldWomanNight::
# 89 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 90 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouseOldWomanNight_Text_0
# 91 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


# 61 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1Shiiko_Movement_0:
# 61 "data/maps/OldaleTown_House1/scripts.pory"
	walk_in_place_slow_up
# 61 "data/maps/OldaleTown_House1/scripts.pory"
	walk_in_place_slow_up
	step_end

# 68 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1WomanDay_Movement_0:
# 68 "data/maps/OldaleTown_House1/scripts.pory"
	face_player
	step_end

# 72 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1WomanDay_Movement_1:
# 72 "data/maps/OldaleTown_House1/scripts.pory"
	face_up
	step_end

OldaleHouse1GirlDay_Text_0:
# 45 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Don't worry Shiiko. I would never eat\n"
	.string "you, no matter how tasty you look!$"

OldaleHouse1GirlNight_Text_0:
# 52 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Come on Shiiko… I know I bit you, but I\n"
	.string "was sleep walking!\p"
	.string "I swear I won't eat you, so come down\n"
	.string "here!$"

OldaleHouse1Shiiko_Text_0:
# 62 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Shiii...$"

OldaleHouse1WomanDay_Text_0:
# 70 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's been hard raising my daugther\n"
	.string "alone without my husband.\p"
	.string "If only he had not enlisted... I begged\n"
	.string "him not to.$"

OldaleHouse1WomanNight_Text_0:
# 81 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Don't yOu thInk it's... {COLOR LIGHT_GRAY}{SHADOW WHITE}Hic...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} a bIt lAte\n"
	.string "tO... {COLOR LIGHT_GRAY}{SHADOW WHITE}hic...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} vIssIt random houses?\p"
	.string "I nEed tO ssAve Up... frr a lOck... {COLOR LIGHT_GRAY}{SHADOW WHITE}hic...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleHouseOldWomanNight_Text_0:
# 90 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Dear, I think you've drank enough...\n"
	.string "let's get you to bed.$"
