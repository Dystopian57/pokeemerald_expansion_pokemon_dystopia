# 1 "data/maps/OldaleTown_House1/scripts.pory"


OldaleTown_House1_MapScripts::
# 7 "data/maps/OldaleTown_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightNPC
	.byte 0


OldaleHouse1Vase::
# 12 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 13 "data/maps/OldaleTown_House1/scripts.pory"
	goto_if_unset FLAG_ITEM_OLDALEHOUSE1VASE, OldaleHouse1Vase_2
# 18 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Vase_Text_1
OldaleHouse1Vase_1:
# 19 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return

OldaleHouse1Vase_2:
# 14 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Vase_Text_0
# 15 "data/maps/OldaleTown_House1/scripts.pory"
	giveitem ITEM_RED_SHARD
# 16 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_ITEM_OLDALEHOUSE1VASE
	goto OldaleHouse1Vase_1


OldaleHouse1Fridge::
# 24 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 25 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Fridge_Text_0
# 26 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Sink::
# 30 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 31 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Sink_Text_0
# 32 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Cabinet::
# 36 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 37 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Cabinet_Text_0
# 38 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Bookshelf::
# 42 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 43 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Bookshelf_Text_0
# 44 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Drawer::
# 48 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 49 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Drawer_Text_0
# 50 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1BoyNight::
# 55 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 56 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 8, OldaleHouse1BoyNight_Movement_0
# 57 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 58 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1BoyNight_Text_0
# 60 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 8, OldaleHouse1BoyNight_Movement_1
# 61 "data/maps/OldaleTown_House1/scripts.pory"
	waitmovement 8
# 62 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1TVDay::
# 66 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 67 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1TVDay_Text_0
# 68 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1TVNight::
# 72 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 73 "data/maps/OldaleTown_House1/scripts.pory"
	showmonpic SPECIES_PIKACHU_LIBRE, 10, 3
# 74 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1TVNight_Text_0
# 76 "data/maps/OldaleTown_House1/scripts.pory"
	hidemonpic
# 77 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1GirlDay::
# 81 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 82 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlDay_Text_0
# 83 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1GirlNight::
# 87 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 88 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 89 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlNight_Text_0
# 91 "data/maps/OldaleTown_House1/scripts.pory"
	playmoncry SPECIES_SHIITAKO, CRY_MODE_WEAK
# 92 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 5, OldaleHouse1GirlNight_Movement_0
# 93 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlNight_Text_1
# 94 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Shiiko::
# 98 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 99 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 100 "data/maps/OldaleTown_House1/scripts.pory"
	playmoncry SPECIES_SHIITAKO, CRY_MODE_WEAK
# 101 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 3, OldaleHouse1GirlNight_Movement_0
# 102 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Shiiko_Text_0
# 103 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1WomanDay::
# 107 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 108 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1BoyNight_Movement_0
# 109 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 110 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1WomanDay_Text_0
# 112 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1BoyNight_Movement_1
# 113 "data/maps/OldaleTown_House1/scripts.pory"
	waitmovement 1
# 114 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1WomanNight::
# 119 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 120 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 7, OldaleHouse1BoyNight_Movement_0
# 121 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 122 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1WomanNight_Text_0
# 125 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 7, OldaleHouse1BoyNight_Movement_1
# 126 "data/maps/OldaleTown_House1/scripts.pory"
	waitmovement 7
# 127 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouseOldWomanNight::
# 131 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 132 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouseOldWomanNight_Text_0
# 133 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


# 56 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1BoyNight_Movement_0:
# 56 "data/maps/OldaleTown_House1/scripts.pory"
	face_player
	step_end

# 60 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1BoyNight_Movement_1:
# 60 "data/maps/OldaleTown_House1/scripts.pory"
	face_up
	step_end

# 92 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1GirlNight_Movement_0:
# 92 "data/maps/OldaleTown_House1/scripts.pory"
	walk_in_place_slow_up
# 92 "data/maps/OldaleTown_House1/scripts.pory"
	walk_in_place_slow_up
	step_end

OldaleHouse1Vase_Text_0:
# 14 "data/maps/OldaleTown_House1/scripts.pory"
	.string "There's something at the bottom of the\n"
	.string "vase...$"

OldaleHouse1Vase_Text_1:
# 18 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The vase is empty.$"

OldaleHouse1Fridge_Text_0:
# 25 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The fridge contains a few cheap, home\n"
	.string "cooked meals.$"

OldaleHouse1Sink_Text_0:
# 31 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The sink is pristine.$"

OldaleHouse1Cabinet_Text_0:
# 37 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's probably full of clothes. Better\n"
	.string "not to open it.$"

OldaleHouse1Bookshelf_Text_0:
# 43 "data/maps/OldaleTown_House1/scripts.pory"
	.string "None of the books seem too interesting.$"

OldaleHouse1Drawer_Text_0:
# 49 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The drawers are full of worthless\n"
	.string "knicknacks.$"

OldaleHouse1BoyNight_Text_0:
# 58 "data/maps/OldaleTown_House1/scripts.pory"
	.string "We can't afford a Devon TV License… so\n"
	.string "I'm watching video tapes!\p"
	.string "This one is a bit scary, though...$"

OldaleHouse1TVDay_Text_0:
# 67 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The TV is turned off.$"

OldaleHouse1TVNight_Text_0:
# 74 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's the movie “War of the Worlds” by\n"
	.string "H.G. Weedle.\p"
	.string "A giant, spider-like robot is capturing\n"
	.string "panicked humans.\p"
	.string "Some people think it's a critique on\n"
	.string "Pokémon training.$"

OldaleHouse1GirlDay_Text_0:
# 82 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Don't worry Shiiko. I would never eat\n"
	.string "you!\p"
	.string "No matter how hungry I am, or how tasty\n"
	.string "you look!$"

OldaleHouse1GirlNight_Text_0:
# 89 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Come on Shiiko… I know I bit you, but I\n"
	.string "was sleep walking!\p"
	.string "I swear I won't eat you, so come down\n"
	.string "here!$"

OldaleHouse1GirlNight_Text_1:
# 93 "data/maps/OldaleTown_House1/scripts.pory"
	.string "S-shiii...$"

OldaleHouse1Shiiko_Text_0:
# 102 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Shiii...$"

OldaleHouse1WomanDay_Text_0:
# 110 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's been hard raising my kids without\n"
	.string "my husband.\p"
	.string "If only he had not enlisted... I begged\n"
	.string "him not to.$"

OldaleHouse1WomanNight_Text_0:
# 122 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Don't yOu thInk it's... {COLOR LIGHT_GRAY}{SHADOW WHITE}Hic...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} a bIt lAte\n"
	.string "tO... {COLOR LIGHT_GRAY}{SHADOW WHITE}hic...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} vIssIt random houses?\p"
	.string "I nEed tO ssAve Up... frr a lOck... {COLOR LIGHT_GRAY}{SHADOW WHITE}hic...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleHouseOldWomanNight_Text_0:
# 132 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Dear, I think you've drank enough...\n"
	.string "let's get you to bed.$"
