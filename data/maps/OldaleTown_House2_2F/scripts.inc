# 1 "data/maps/OldaleTown_House2_2F/scripts.pory"

# 2 "data/maps/OldaleTown_House2_2F/scripts.pory"
OldaleTown_House2_2F_MapScripts::
# 3 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.byte 0

OldaleTownHouse2Annebrother::
# 8 "data/maps/OldaleTown_House2_2F/scripts.pory"
	lockall
# 9 "data/maps/OldaleTown_House2_2F/scripts.pory"
	applymovement 2, OldaleTownHouse2Annebrother_Movement_0
# 10 "data/maps/OldaleTown_House2_2F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 11 "data/maps/OldaleTown_House2_2F/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleTownHouse2Annebrother_2
OldaleTownHouse2Annebrother_1:
# 16 "data/maps/OldaleTown_House2_2F/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleTownHouse2Annebrother_5
OldaleTownHouse2Annebrother_4:
# 21 "data/maps/OldaleTown_House2_2F/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleTownHouse2Annebrother_8
OldaleTownHouse2Annebrother_7:
# 26 "data/maps/OldaleTown_House2_2F/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleTownHouse2Annebrother_11
OldaleTownHouse2Annebrother_10:
# 31 "data/maps/OldaleTown_House2_2F/scripts.pory"
	releaseall
	return

OldaleTownHouse2Annebrother_2:
# 12 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox OldaleTownHouse2Annebrother_Text_0
	goto OldaleTownHouse2Annebrother_1

OldaleTownHouse2Annebrother_5:
# 17 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox OldaleTownHouse2Annebrother_Text_1
	goto OldaleTownHouse2Annebrother_4

OldaleTownHouse2Annebrother_8:
# 23 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox OldaleTownHouse2Annebrother_Text_2
	goto OldaleTownHouse2Annebrother_7

OldaleTownHouse2Annebrother_11:
# 28 "data/maps/OldaleTown_House2_2F/scripts.pory"
	msgbox OldaleTownHouse2Annebrother_Text_3
	goto OldaleTownHouse2Annebrother_10


# 9 "data/maps/OldaleTown_House2_2F/scripts.pory"
OldaleTownHouse2Annebrother_Movement_0:
# 9 "data/maps/OldaleTown_House2_2F/scripts.pory"
	face_player
	step_end

OldaleTownHouse2Annebrother_Text_0:
# 12 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "Go, Purachu - use Thundershock!\n"
	.string "BZZZTBZ!\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}The kid flashes a Purachu Card in front\n"
	.string "of you.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Hehe... mom says I shouldn't play with\n"
	.string "Pokémon, or even Safemon.\p"
	.string "So I play with cards instead!$"

OldaleTownHouse2Annebrother_Text_1:
# 17 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "Go, Purachu - use Thundershock!\n"
	.string "BZZZTBZ!\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}The kid flashes a Purachu Card in front\n"
	.string "of you.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hehe... mom says I shouldn't play\l"
	.string "with Pokémon, or even Safemon. So I play\l"
	.string "with cards instead!$"

OldaleTownHouse2Annebrother_Text_2:
# 23 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "I just heard mom and sis arguing again...\p"
	.string "I hope we move to Rustboro soon. Dad\n"
	.string "says he'll earn tons of money with his\l"
	.string "new job, and that we won't argue again\l"
	.string "then.$"

OldaleTownHouse2Annebrother_Text_3:
# 28 "data/maps/OldaleTown_House2_2F/scripts.pory"
	.string "Let's go, Purachu. We're off to\n"
	.string "Rustboro!$"
