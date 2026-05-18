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


OldaleHouse1Fridge::
# 42 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 43 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Fridge_Text_0
# 44 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Cabinet::
# 48 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 49 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Cabinet_Text_0
# 50 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Bookshelf::
# 54 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 55 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Bookshelf_Text_0
# 56 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Drawer::
# 60 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 61 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Drawer_Text_0
# 62 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1BoyNight::
# 67 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 68 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 8, OldaleHouse1BoyNight_Movement_0
# 69 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 70 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1BoyNight_Text_0
# 72 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1TVDay::
# 76 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 77 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1TVDay_Text_0
# 78 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1TVNight::
# 82 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 83 "data/maps/OldaleTown_House1/scripts.pory"
	showmonpic SPECIES_PIKACHU_HOENN, 10, 3
# 84 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1TVNight_Text_0
# 86 "data/maps/OldaleTown_House1/scripts.pory"
	hidemonpic
# 87 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1GirlDay::
# 91 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 92 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlDay_Text_0
# 93 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1GirlNight::
# 97 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 98 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlNight_Text_0
# 100 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Shiiko::
# 104 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 105 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 106 "data/maps/OldaleTown_House1/scripts.pory"
	playmoncry SPECIES_SHIITAKO, CRY_MODE_WEAK
# 107 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 3, OldaleHouse1Shiiko_Movement_0
# 108 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Shiiko_Text_0
# 109 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1WomanDay::
# 113 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 114 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1BoyNight_Movement_0
# 115 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 116 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1WomanDay_Text_0
# 118 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1WomanDay_Movement_0
# 119 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1WomanNight::
# 124 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 125 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1BoyNight_Movement_0
# 126 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 127 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1WomanNight_Text_0
# 130 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1WomanDay_Movement_0
# 131 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouseOldWomanNight::
# 135 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 136 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouseOldWomanNight_Text_0
# 137 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


# 68 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1BoyNight_Movement_0:
# 68 "data/maps/OldaleTown_House1/scripts.pory"
	face_player
	step_end

# 107 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1Shiiko_Movement_0:
# 107 "data/maps/OldaleTown_House1/scripts.pory"
	walk_in_place_slow_up
# 107 "data/maps/OldaleTown_House1/scripts.pory"
	walk_in_place_slow_up
	step_end

# 118 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1WomanDay_Movement_0:
# 118 "data/maps/OldaleTown_House1/scripts.pory"
	face_up
	step_end

OldaleHouse1Fridge_Text_0:
# 43 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The fridge contains a few cheap, home\n"
	.string "cooked meals.$"

OldaleHouse1Cabinet_Text_0:
# 49 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's probably full of clothes. Better\n"
	.string "not to open it.$"

OldaleHouse1Bookshelf_Text_0:
# 55 "data/maps/OldaleTown_House1/scripts.pory"
	.string "None of the books seem too interesting.$"

OldaleHouse1Drawer_Text_0:
# 61 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The drawers are full of worthless\n"
	.string "knicknacks.$"

OldaleHouse1BoyNight_Text_0:
# 70 "data/maps/OldaleTown_House1/scripts.pory"
	.string "We can't afford a Devon TV License… so\n"
	.string "I'm watching video tapes!\p"
	.string "This one is a bit scary, though...$"

OldaleHouse1TVDay_Text_0:
# 77 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The TV is turned off.$"

OldaleHouse1TVNight_Text_0:
# 84 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's the movie 'War of the Worlds' by H.G.\n"
	.string "Weedle. A giant, spider-like robot is\l"
	.string "capturing panicked humans.\p"
	.string "Some people think it's a critique on\n"
	.string "Pokémon training.$"

OldaleHouse1GirlDay_Text_0:
# 92 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Don't worry Shiiko. I would never eat\n"
	.string "you, no matter how tasty you look!$"

OldaleHouse1GirlNight_Text_0:
# 98 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Come on Shiiko… I know I bit you, but I\n"
	.string "was sleep walking!\p"
	.string "I swear I won't eat you, so come down\n"
	.string "here!$"

OldaleHouse1Shiiko_Text_0:
# 108 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Shiii...$"

OldaleHouse1WomanDay_Text_0:
# 116 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's been hard raising my daugther\n"
	.string "alone without my husband.\p"
	.string "If only he had not enlisted... I begged\n"
	.string "him not to.$"

OldaleHouse1WomanNight_Text_0:
# 127 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Don't yOu thInk it's... {COLOR LIGHT_GRAY}{SHADOW WHITE}Hic...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} a bIt lAte\n"
	.string "tO... {COLOR LIGHT_GRAY}{SHADOW WHITE}hic...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} vIssIt random houses?\p"
	.string "I nEed tO ssAve Up... frr a lOck... {COLOR LIGHT_GRAY}{SHADOW WHITE}hic...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleHouseOldWomanNight_Text_0:
# 136 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Dear, I think you've drank enough...\n"
	.string "let's get you to bed.$"
