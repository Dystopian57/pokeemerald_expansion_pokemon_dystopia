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
	return

DayNightNPC_2:
# 17 "data/maps/OldaleTown_House1/scripts.pory"
	setflag nightnpc
# 18 "data/maps/OldaleTown_House1/scripts.pory"
	clearflag daynpc
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
	setflag nightnpc
# 28 "data/maps/OldaleTown_House1/scripts.pory"
	clearflag daynpc
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


OldaleHouse1Vase::
# 43 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 44 "data/maps/OldaleTown_House1/scripts.pory"
	goto_if_unset FLAG_ITEM_OLDALEHOUSE1VASE, OldaleHouse1Vase_2
# 49 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Vase_Text_1
OldaleHouse1Vase_1:
# 50 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return

OldaleHouse1Vase_2:
# 45 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Vase_Text_0
# 46 "data/maps/OldaleTown_House1/scripts.pory"
	giveitem ITEM_RED_SHARD
# 47 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_ITEM_OLDALEHOUSE1VASE
	goto OldaleHouse1Vase_1


OldaleHouse1Fridge::
# 55 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 56 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Fridge_Text_0
# 57 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Sink::
# 61 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 62 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Sink_Text_0
# 63 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Cabinet::
# 67 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 68 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Cabinet_Text_0
# 69 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Bookshelf::
# 73 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 74 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Bookshelf_Text_0
# 75 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Drawer::
# 79 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 80 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Drawer_Text_0
# 81 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1BoyNight::
# 86 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 87 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 8, OldaleHouse1BoyNight_Movement_0
# 88 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 89 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1BoyNight_Text_0
# 91 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 8, OldaleHouse1BoyNight_Movement_1
# 92 "data/maps/OldaleTown_House1/scripts.pory"
	waitmovement 8
# 93 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1TVDay::
# 97 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 98 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1TVDay_Text_0
# 99 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1TVNight::
# 103 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 104 "data/maps/OldaleTown_House1/scripts.pory"
	showmonpic SPECIES_PIKACHU_LIBRE, 10, 3
# 105 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1TVNight_Text_0
# 107 "data/maps/OldaleTown_House1/scripts.pory"
	hidemonpic
# 108 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1GirlDay::
# 112 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 113 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlDay_Text_0
# 114 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1GirlNight::
# 118 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 119 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 120 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlNight_Text_0
# 122 "data/maps/OldaleTown_House1/scripts.pory"
	playmoncry SPECIES_SHIITAKO, CRY_MODE_WEAK
# 123 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 5, OldaleHouse1GirlNight_Movement_0
# 124 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlNight_Text_1
# 125 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Shiiko::
# 129 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 130 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 131 "data/maps/OldaleTown_House1/scripts.pory"
	playmoncry SPECIES_SHIITAKO, CRY_MODE_WEAK
# 132 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 3, OldaleHouse1GirlNight_Movement_0
# 133 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Shiiko_Text_0
# 134 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1WomanDay::
# 138 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 139 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1BoyNight_Movement_0
# 140 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 141 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1WomanDay_Text_0
# 143 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1BoyNight_Movement_1
# 144 "data/maps/OldaleTown_House1/scripts.pory"
	waitmovement 1
# 145 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1WomanNight::
# 150 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 151 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 7, OldaleHouse1BoyNight_Movement_0
# 152 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 153 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1WomanNight_Text_0
# 156 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 7, OldaleHouse1BoyNight_Movement_1
# 157 "data/maps/OldaleTown_House1/scripts.pory"
	waitmovement 7
# 158 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouseOldWomanNight::
# 162 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 163 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouseOldWomanNight_Text_0
# 164 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


# 87 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1BoyNight_Movement_0:
# 87 "data/maps/OldaleTown_House1/scripts.pory"
	face_player
	step_end

# 91 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1BoyNight_Movement_1:
# 91 "data/maps/OldaleTown_House1/scripts.pory"
	face_up
	step_end

# 123 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1GirlNight_Movement_0:
# 123 "data/maps/OldaleTown_House1/scripts.pory"
	walk_in_place_slow_up
# 123 "data/maps/OldaleTown_House1/scripts.pory"
	walk_in_place_slow_up
	step_end

OldaleHouse1Vase_Text_0:
# 45 "data/maps/OldaleTown_House1/scripts.pory"
	.string "There's something at the bottom of the\n"
	.string "vase...$"

OldaleHouse1Vase_Text_1:
# 49 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The vase is empty.$"

OldaleHouse1Fridge_Text_0:
# 56 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The fridge contains a few cheap, home\n"
	.string "cooked meals.$"

OldaleHouse1Sink_Text_0:
# 62 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The sink is pristine.$"

OldaleHouse1Cabinet_Text_0:
# 68 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's probably full of clothes. Better\n"
	.string "not to open it.$"

OldaleHouse1Bookshelf_Text_0:
# 74 "data/maps/OldaleTown_House1/scripts.pory"
	.string "None of the books seem too interesting.$"

OldaleHouse1Drawer_Text_0:
# 80 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The drawers are full of worthless\n"
	.string "knicknacks.$"

OldaleHouse1BoyNight_Text_0:
# 89 "data/maps/OldaleTown_House1/scripts.pory"
	.string "We can't afford a Devon TV License… so\n"
	.string "I'm watching video tapes!\p"
	.string "This one is a bit scary, though...$"

OldaleHouse1TVDay_Text_0:
# 98 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The TV is turned off.$"

OldaleHouse1TVNight_Text_0:
# 105 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's the movie “War of the Worlds” by\n"
	.string "H.G. Weedle.\p"
	.string "A giant, spider-like robot is capturing\n"
	.string "panicked humans.\p"
	.string "Some people think it's a critique on\n"
	.string "Pokémon training.$"

OldaleHouse1GirlDay_Text_0:
# 113 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Don't worry Shiiko. I would never eat\n"
	.string "you!\p"
	.string "No matter how hungry I am, or how tasty\n"
	.string "you look!$"

OldaleHouse1GirlNight_Text_0:
# 120 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Come on Shiiko… I know I bit you, but I\n"
	.string "was sleep walking!\p"
	.string "I swear I won't eat you, so come down\n"
	.string "here!$"

OldaleHouse1GirlNight_Text_1:
# 124 "data/maps/OldaleTown_House1/scripts.pory"
	.string "S-shiii...$"

OldaleHouse1Shiiko_Text_0:
# 133 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Shiii...$"

OldaleHouse1WomanDay_Text_0:
# 141 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's been hard raising my kids without\n"
	.string "my husband.\p"
	.string "If only he had not enlisted... I begged\n"
	.string "him not to.$"

OldaleHouse1WomanNight_Text_0:
# 153 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Don't yOu thInk it's... {COLOR LIGHT_GRAY}{SHADOW WHITE}Hic...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} a bIt lAte\n"
	.string "tO... {COLOR LIGHT_GRAY}{SHADOW WHITE}hic...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} vIssIt random houses?\p"
	.string "I nEed tO ssAve Up... frr a lOck... {COLOR LIGHT_GRAY}{SHADOW WHITE}hic...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleHouseOldWomanNight_Text_0:
# 163 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Dear, I think you've drank enough...\n"
	.string "let's get you to bed.$"
