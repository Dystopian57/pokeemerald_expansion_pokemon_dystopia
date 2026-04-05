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
	releaseall
	return


GreatCraterHotSpringsBathingladyknot::
# 40 "data/maps/GreatCraterHotSprings/scripts.pory"
	lockall
# 41 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 3, GreatCraterHotSpringsBaldGuy_Movement_0
# 42 "data/maps/GreatCraterHotSprings/scripts.pory"
	msgbox GreatCraterHotSpringsBathingladyknot_Text_0
# 44 "data/maps/GreatCraterHotSprings/scripts.pory"
	releaseall
	return


GreatCraterHotSpringsBathingladyloosehair::
# 48 "data/maps/GreatCraterHotSprings/scripts.pory"
	lockall
# 49 "data/maps/GreatCraterHotSprings/scripts.pory"
	applymovement 2, GreatCraterHotSpringsBaldGuy_Movement_0
# 50 "data/maps/GreatCraterHotSprings/scripts.pory"
	msgbox GreatCraterHotSpringsBathingladyloosehair_Text_0
# 52 "data/maps/GreatCraterHotSprings/scripts.pory"
	releaseall
	return


# 17 "data/maps/GreatCraterHotSprings/scripts.pory"
GreatCraterHotSpringsBaldGuy_Movement_0:
# 17 "data/maps/GreatCraterHotSprings/scripts.pory"
	face_player
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
	.string "pools. Us Lavaridge refugees made this\l"
	.string "place for everyone to enjoy.$"

GreatCraterHotSpringsOldGuy_Text_0:
# 25 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "With Devon's help, our sons and\n"
	.string "daughters built a huge thermal plant in\l"
	.string "our home of Lavaridge Town.\p"
	.string "I'm happy they all have work in these\n"
	.string "hard times, but it changed so fast... so\l"
	.string "many of us decided to move here to the\l"
	.string "countryside.$"

GreatCraterHotSpringsNumel_Text_0:
# 35 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "Num-num!$"

GreatCraterHotSpringsBathingladyknot_Text_0:
# 42 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "When that huge Electrode fell in this\n"
	.string "part of the forest, it revealed these\l"
	.string "natural hot springs.\p"
	.string "It's a testament that good things\n"
	.string "sometimes come out of bad ones.$"

GreatCraterHotSpringsBathingladyloosehair_Text_0:
# 50 "data/maps/GreatCraterHotSprings/scripts.pory"
	.string "The water is warm... but not as warm as\n"
	.string "back home. And the sights are worse\l"
	.string "too!$"
