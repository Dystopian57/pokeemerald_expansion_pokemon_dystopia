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


OldaleHouse1Vase::
# 44 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 45 "data/maps/OldaleTown_House1/scripts.pory"
	goto_if_unset FLAG_ITEM_OLDALEHOUSE1VASE, OldaleHouse1Vase_2
# 50 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Vase_Text_1
OldaleHouse1Vase_1:
# 51 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return

OldaleHouse1Vase_2:
# 46 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Vase_Text_0
# 47 "data/maps/OldaleTown_House1/scripts.pory"
	giveitem ITEM_RED_SHARD
# 48 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_ITEM_OLDALEHOUSE1VASE
	goto OldaleHouse1Vase_1


OldaleHouse1Fridge::
# 56 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 57 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Fridge_Text_0
# 58 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Sink::
# 62 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 63 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Sink_Text_0
# 64 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Cabinet::
# 68 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 69 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Cabinet_Text_0
# 70 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Bookshelf::
# 74 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 75 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Bookshelf_Text_0
# 76 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Drawer::
# 80 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 81 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Drawer_Text_0
# 82 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1BoyNight::
# 87 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 88 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 8, OldaleHouse1BoyNight_Movement_0
# 89 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 90 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1BoyNight_Text_0
# 92 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 8, OldaleHouse1BoyNight_Movement_1
# 93 "data/maps/OldaleTown_House1/scripts.pory"
	waitmovement 8
# 94 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1TVDay::
# 98 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 99 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1TVDay_Text_0
# 100 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1TVNight::
# 104 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 105 "data/maps/OldaleTown_House1/scripts.pory"
	showmonpic SPECIES_PIKACHU_LIBRE, 10, 3
# 106 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1TVNight_Text_0
# 108 "data/maps/OldaleTown_House1/scripts.pory"
	hidemonpic
# 109 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1GirlDay::
# 113 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 114 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlDay_Text_0
# 115 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1GirlNight::
# 119 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 120 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 121 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlNight_Text_0
# 123 "data/maps/OldaleTown_House1/scripts.pory"
	playmoncry SPECIES_SHIITAKO, CRY_MODE_WEAK
# 124 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 5, OldaleHouse1GirlNight_Movement_0
# 125 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1GirlNight_Text_1
# 126 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Shiiko::
# 130 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 131 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 132 "data/maps/OldaleTown_House1/scripts.pory"
	playmoncry SPECIES_SHIITAKO, CRY_MODE_WEAK
# 133 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 3, OldaleHouse1GirlNight_Movement_0
# 134 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Shiiko_Text_0
# 135 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1WomanDay::
# 139 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 140 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1BoyNight_Movement_0
# 141 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 142 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1WomanDay_Text_0
# 144 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1BoyNight_Movement_1
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
	releaseall
	return


OldaleHouseOldWomanNight::
# 161 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 162 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouseOldWomanNight_Text_0
# 163 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


# 88 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1BoyNight_Movement_0:
# 88 "data/maps/OldaleTown_House1/scripts.pory"
	face_player
	step_end

# 92 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1BoyNight_Movement_1:
# 92 "data/maps/OldaleTown_House1/scripts.pory"
	face_up
	step_end

# 124 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1GirlNight_Movement_0:
# 124 "data/maps/OldaleTown_House1/scripts.pory"
	walk_in_place_slow_up
# 124 "data/maps/OldaleTown_House1/scripts.pory"
	walk_in_place_slow_up
	step_end

OldaleHouse1Vase_Text_0:
# 46 "data/maps/OldaleTown_House1/scripts.pory"
	.string "There's something at the bottom of the\n"
	.string "vase...$"

OldaleHouse1Vase_Text_1:
# 50 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The vase is empty.$"

OldaleHouse1Fridge_Text_0:
# 57 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The fridge contains a few cheap, home\n"
	.string "cooked meals.$"

OldaleHouse1Sink_Text_0:
# 63 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The sink is pristine.$"

OldaleHouse1Cabinet_Text_0:
# 69 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's probably full of clothes. Better\n"
	.string "not to open it.$"

OldaleHouse1Bookshelf_Text_0:
# 75 "data/maps/OldaleTown_House1/scripts.pory"
	.string "None of the books seem too interesting.$"

OldaleHouse1Drawer_Text_0:
# 81 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The drawers are full of worthless\n"
	.string "knicknacks.$"

OldaleHouse1BoyNight_Text_0:
# 90 "data/maps/OldaleTown_House1/scripts.pory"
	.string "We can't afford a Devon TV License… so\n"
	.string "I'm watching video tapes!\p"
	.string "This one is a bit scary, though...$"

OldaleHouse1TVDay_Text_0:
# 99 "data/maps/OldaleTown_House1/scripts.pory"
	.string "The TV is turned off.$"

OldaleHouse1TVNight_Text_0:
# 106 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's the movie 'War of the Worlds' by H.G.\n"
	.string "Weedle. A giant, spider-like robot is\l"
	.string "capturing panicked humans.\p"
	.string "Some people think it's a critique on\n"
	.string "Pokémon training.$"

OldaleHouse1GirlDay_Text_0:
# 114 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Don't worry Shiiko. I would never eat\n"
	.string "you, no matter how tasty you look!$"

OldaleHouse1GirlNight_Text_0:
# 121 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Come on Shiiko… I know I bit you, but I\n"
	.string "was sleep walking!\p"
	.string "I swear I won't eat you, so come down\n"
	.string "here!$"

OldaleHouse1GirlNight_Text_1:
# 125 "data/maps/OldaleTown_House1/scripts.pory"
	.string "S-shiii...$"

OldaleHouse1Shiiko_Text_0:
# 134 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Shiii...$"

OldaleHouse1WomanDay_Text_0:
# 142 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's been hard raising my daugther\n"
	.string "alone without my husband.\p"
	.string "If only he had not enlisted... I begged\n"
	.string "him not to.$"

OldaleHouse1WomanNight_Text_0:
# 153 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Don't yOu thInk it's... {COLOR LIGHT_GRAY}{SHADOW WHITE}Hic...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} a bIt lAte\n"
	.string "tO... {COLOR LIGHT_GRAY}{SHADOW WHITE}hic...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} vIssIt random houses?\p"
	.string "I nEed tO ssAve Up... frr a lOck... {COLOR LIGHT_GRAY}{SHADOW WHITE}hic...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleHouseOldWomanNight_Text_0:
# 162 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Dear, I think you've drank enough...\n"
	.string "let's get you to bed.$"
