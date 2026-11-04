# 1 "data/maps/SewersConspiracyHideout/scripts.pory"

# 2 "data/maps/SewersConspiracyHideout/scripts.pory"
SewersConspiracyHideout_MapScripts::
# 3 "data/maps/SewersConspiracyHideout/scripts.pory"
	.byte 0

ConspiracyHideoutTheoristEntrance::
# 8 "data/maps/SewersConspiracyHideout/scripts.pory"
	lock
# 9 "data/maps/SewersConspiracyHideout/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 10 "data/maps/SewersConspiracyHideout/scripts.pory"
	applymovement 3, ConspiracyHideoutTheoristEntrance_Movement_0
# 11 "data/maps/SewersConspiracyHideout/scripts.pory"
	msgbox ConspiracyHideoutTheoristEntrance_Text_0
# 19 "data/maps/SewersConspiracyHideout/scripts.pory"
	applymovement 3, ConspiracyHideoutTheoristEntrance_Movement_1
# 20 "data/maps/SewersConspiracyHideout/scripts.pory"
	waitmovement 3
# 21 "data/maps/SewersConspiracyHideout/scripts.pory"
	releaseall
	return


# 10 "data/maps/SewersConspiracyHideout/scripts.pory"
ConspiracyHideoutTheoristEntrance_Movement_0:
# 10 "data/maps/SewersConspiracyHideout/scripts.pory"
	face_player
	step_end

# 19 "data/maps/SewersConspiracyHideout/scripts.pory"
ConspiracyHideoutTheoristEntrance_Movement_1:
# 19 "data/maps/SewersConspiracyHideout/scripts.pory"
	face_left
	step_end

ConspiracyHideoutTheoristEntrance_Text_0:
# 11 "data/maps/SewersConspiracyHideout/scripts.pory"
	.string "Everything Devon does is part of their\n"
	.string "big project to control Hoenn's economy.\p"
	.string "And it all starts with the Safemon\n"
	.string "project.\p"
	.string "Safemon are often weaker than Pokémon,\n"
	.string "so they need healing more often in Poké\l"
	.string "Centers, And healing now comes with a\l"
	.string "fee!\p"
	.string "Most Safemon are also too weak to carry\n"
	.string "their trainers, which pushes people to\l"
	.string "buy Devon vehicles.\p"
	.string "And where do you drive those vehicles?\n"
	.string "In Devon roads, which have tolls!. Which\l"
	.string "also come with a fee!\p"
	.string "Don't fall for it. Come live with us, and\n"
	.string "enjoy freedom!$"
