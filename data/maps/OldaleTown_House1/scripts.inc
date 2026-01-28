# 1 "data/maps/OldaleTown_House1/scripts.pory"

# 2 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_MapScripts::
# 3 "data/maps/OldaleTown_House1/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_House1/scripts.pory"

# 5 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_EventScript_Woman::
# 6 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
# 7 "data/maps/OldaleTown_House1/scripts.pory"
	end
# 8 "data/maps/OldaleTown_House1/scripts.pory"

# 9 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
# 10 "data/maps/OldaleTown_House1/scripts.pory"
	.string "When a POKéMON battle starts, the one\n"
# 11 "data/maps/OldaleTown_House1/scripts.pory"
	.string "at the left of the list goes out first.\p"
# 12 "data/maps/OldaleTown_House1/scripts.pory"
	.string "So, when you get more POKéMON in your\n"
# 13 "data/maps/OldaleTown_House1/scripts.pory"
	.string "party, try switching around the order\l"
# 14 "data/maps/OldaleTown_House1/scripts.pory"
	.string "of your POKéMON.\p"
# 15 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It could give you an advantage.$"

OldaleHouse1Girl::
# 21 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 22 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 23 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Girl_Text_0
# 24 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Shiiko::
# 28 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 29 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 30 "data/maps/OldaleTown_House1/scripts.pory"
	playmoncry SPECIES_SHIITAKO, CRY_MODE_WEAK
# 31 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Shiiko_Text_0
# 32 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


OldaleHouse1Woman::
# 36 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 37 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1Woman_Movement_0
# 38 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 39 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleHouse1Woman_Text_0
# 41 "data/maps/OldaleTown_House1/scripts.pory"
	applymovement 1, OldaleHouse1Woman_Movement_1
# 42 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	return


# 37 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1Woman_Movement_0:
# 37 "data/maps/OldaleTown_House1/scripts.pory"
	face_player
	step_end

# 41 "data/maps/OldaleTown_House1/scripts.pory"
OldaleHouse1Woman_Movement_1:
# 41 "data/maps/OldaleTown_House1/scripts.pory"
	face_up
	step_end

OldaleHouse1Girl_Text_0:
# 23 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Don't worry Shiiko. I would never eat\n"
	.string "you, no matter how tasty you look!$"

OldaleHouse1Shiiko_Text_0:
# 31 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Shiii...$"

OldaleHouse1Woman_Text_0:
# 39 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's been hard raising my daugther\n"
	.string "alone without my husband.\p"
	.string "If only he had not enlisted... I begged\n"
	.string "him not to.$"
