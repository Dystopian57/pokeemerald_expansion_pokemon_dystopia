# 1 "data/maps/GreatCraterHotSprings/scripts.pory"

# 2 "data/maps/GreatCraterHotSprings/scripts.pory"
GreatCraterHotSprings_MapScripts::
# 3 "data/maps/GreatCraterHotSprings/scripts.pory"
	.byte 0

GreatCraterHotSpringsPainting::
# 8 "data/maps/GreatCraterHotSprings/scripts.pory"
	lockall
# 9 "data/maps/GreatCraterHotSprings/scripts.pory"
	msgbox GreatCraterHotSpringsPainting_Text_0
# 12 "data/maps/GreatCraterHotSprings/scripts.pory"
	releaseall
	return


GreatCraterHotSpringsBaldGuy::
# 16 "data/maps/GreatCraterHotSprings/scripts.pory"
	lockall
# 17 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 4, GreatCraterHotSpringsBaldGuy_Movement_0
# 18 "data/maps/GreatCraterHotSprings/scripts.pory"
	msgbox GreatCraterHotSpringsBaldGuy_Text_0
# 20 "data/maps/GreatCraterHotSprings/scripts.pory"
	releaseall
	return


GreatCraterHotSpringsOldGuy::
# 24 "data/maps/GreatCraterHotSprings/scripts.pory"
	lockall
# 25 "data/maps/GreatCraterHotSprings/scripts.pory"
	msgbox GreatCraterHotSpringsOldGuy_Text_0
# 28 "data/maps/GreatCraterHotSprings/scripts.pory"
	releaseall
	return


GreatCraterHotSpringsNumel::
# 32 "data/maps/GreatCraterHotSprings/scripts.pory"
	lockall
# 33 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 5, GreatCraterHotSpringsBaldGuy_Movement_0
# 34 "data/maps/GreatCraterHotSprings/scripts.pory"
	playmoncry SPECIES_NUMEL, CRY_MODE_NORMAL
# 35 "data/maps/GreatCraterHotSprings/scripts.pory"
	msgbox GreatCraterHotSpringsNumel_Text_0
# 36 "data/maps/GreatCraterHotSprings/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, GreatCraterHotSpringsNumel_2
GreatCraterHotSpringsNumel_1:
# 38 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 5, GreatCraterHotSpringsNumel_Movement_0
# 39 "data/maps/GreatCraterHotSprings/scripts.pory"
	waitmovement 5
# 40 "data/maps/GreatCraterHotSprings/scripts.pory"
	releaseall
	return

GreatCraterHotSpringsNumel_2:
# 37 "data/maps/GreatCraterHotSprings/scripts.pory"
	setseenmon SPECIES_NUMEL
	goto GreatCraterHotSpringsNumel_1


GreatCraterHotSpringsBathingladyknot::
# 44 "data/maps/GreatCraterHotSprings/scripts.pory"
	lockall
# 45 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 3, GreatCraterHotSpringsBaldGuy_Movement_0
# 46 "data/maps/GreatCraterHotSprings/scripts.pory"
	msgbox GreatCraterHotSpringsBathingladyknot_Text_0
# 48 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 3, GreatCraterHotSpringsNumel_Movement_0
# 49 "data/maps/GreatCraterHotSprings/scripts.pory"
	waitmovement 3
# 50 "data/maps/GreatCraterHotSprings/scripts.pory"
	releaseall
	return


GreatCraterHotSpringsBathingladyloosehair::
# 54 "data/maps/GreatCraterHotSprings/scripts.pory"
	lockall
# 55 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 2, GreatCraterHotSpringsBaldGuy_Movement_0
# 56 "data/maps/GreatCraterHotSprings/scripts.pory"
	msgbox GreatCraterHotSpringsBathingladyloosehair_Text_0
# 58 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 2, GreatCraterHotSpringsNumel_Movement_0
# 59 "data/maps/GreatCraterHotSprings/scripts.pory"
	waitmovement 2
# 60 "data/maps/GreatCraterHotSprings/scripts.pory"
	releaseall
	return


GreatCraterHotSpringsYoungerWoman::
# 64 "data/maps/GreatCraterHotSprings/scripts.pory"
	lock
# 65 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 6, GreatCraterHotSpringsBaldGuy_Movement_0
# 66 "data/maps/GreatCraterHotSprings/scripts.pory"
	msgbox GreatCraterHotSpringsYoungerWoman_Text_0
# 69 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 6, GreatCraterHotSpringsYoungerWoman_Movement_0
# 70 "data/maps/GreatCraterHotSprings/scripts.pory"
	waitmovement 6
# 71 "data/maps/GreatCraterHotSprings/scripts.pory"
	releaseall
	return


GreatCraterScaldOldman::
# 75 "data/maps/GreatCraterHotSprings/scripts.pory"
	lock
# 76 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 7, GreatCraterHotSpringsBaldGuy_Movement_0
# 77 "data/maps/GreatCraterHotSprings/scripts.pory"
	goto_if_unset hotspringguygavescald, GreatCraterScaldOldman_2
# 86 "data/maps/GreatCraterHotSprings/scripts.pory"
	msgbox GreatCraterScaldOldman_Text_1
GreatCraterScaldOldman_1:
# 87 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 7, GreatCraterHotSpringsYoungerWoman_Movement_0
# 88 "data/maps/GreatCraterHotSprings/scripts.pory"
	waitmovement 7
# 89 "data/maps/GreatCraterHotSprings/scripts.pory"
	releaseall
	return

GreatCraterScaldOldman_2:
# 78 "data/maps/GreatCraterHotSprings/scripts.pory"
	msgbox GreatCraterScaldOldman_Text_0
# 82 "data/maps/GreatCraterHotSprings/scripts.pory"
	giveitem ITEM_TM_SCALD
# 83 "data/maps/GreatCraterHotSprings/scripts.pory"
	setflag hotspringguygavescald
	goto GreatCraterScaldOldman_1


# 17 "data/maps/GreatCraterHotSprings/scripts.pory"
GreatCraterHotSpringsBaldGuy_Movement_0:
# 17 "data/maps/GreatCraterHotSprings/scripts.pory"
	face_player
	step_end

# 38 "data/maps/GreatCraterHotSprings/scripts.pory"
GreatCraterHotSpringsNumel_Movement_0:
# 38 "data/maps/GreatCraterHotSprings/scripts.pory"
	walk_in_place_down
	step_end

# 69 "data/maps/GreatCraterHotSprings/scripts.pory"
GreatCraterHotSpringsYoungerWoman_Movement_0:
# 69 "data/maps/GreatCraterHotSprings/scripts.pory"
	walk_in_place_up
	step_end

GreatCraterHotSpringsPainting_Text_0:
# 9 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "It's a painting of Mt Chimney.\p"
	.string "It evokes the immensity of the volcano,\n"
	.string "juxtaposed with the gentleness of its\l"
	.string "slowly falling ash.$"

GreatCraterHotSpringsBaldGuy_Text_0:
# 18 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "Please, feel free to bathe in any of the\n"
	.string "pools.\p"
	.string "Us Lavaridge refugees built this place\n"
	.string "for everyone to enjoy.$"

GreatCraterHotSpringsOldGuy_Text_0:
# 25 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "With Devon's help, our sons and\n"
	.string "daughters built a huge thermal plant in\l"
	.string "our home of Lavaridge Town.\p"
	.string "I'm happy they all have work in these\n"
	.string "hard times, but it changed so fast...\p"
	.string "Many of us decided to move here to the\n"
	.string "countryside.$"

GreatCraterHotSpringsNumel_Text_0:
# 35 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "Num-num!$"

GreatCraterHotSpringsBathingladyknot_Text_0:
# 46 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "When that huge Electrode fell in this\n"
	.string "part of the forest, it revealed these\l"
	.string "natural hot springs.\p"
	.string "It's a testament that good things\n"
	.string "sometimes come out of bad ones.$"

GreatCraterHotSpringsBathingladyloosehair_Text_0:
# 56 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "The water is warm... but not as warm as\n"
	.string "back home.\p"
	.string "And the sights are worse too!$"

GreatCraterHotSpringsYoungerWoman_Text_0:
# 66 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "I'm a bit worried about Flannery... she\n"
	.string "got so upset when Devon built that\l"
	.string "thermal plant in our town.\p"
	.string "I fear she may do something reckless...$"

GreatCraterScaldOldman_Text_0:
# 78 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "While we travelled from Lavaridge to\n"
	.string "this place, I had to spend some time\l"
	.string "without taking hot baths.\p"
	.string "For the first time on my life, too!\p"
	.string "It made me stop taking them for\n"
	.string "granted, and I began to feel bad for\l"
	.string "people who can't have them regularly.\p"
	.string "So I asked my son to make this, and I've\n"
	.string "been handing them out.\p"
	.string "This one is for you!$"

GreatCraterScaldOldman_Text_1:
# 86 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "Now you can make your own little\n"
	.string "Lavaridge, everywhere you go! Ho ho...$"
