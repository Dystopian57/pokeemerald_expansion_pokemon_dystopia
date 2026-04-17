# 1 "data/maps/PokeInnRoom2/scripts.pory"

# 2 "data/maps/PokeInnRoom2/scripts.pory"
PokeInnRoom2_MapScripts::
# 3 "data/maps/PokeInnRoom2/scripts.pory"
	.byte 0

DevonInnSignAboutFreezer::
# 8 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 9 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSignAboutFreezer_Text_0
# 10 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DevonInnSignAboutFreezer_Text_0:
# 9 "data/maps/PokeInnRoom2/scripts.pory"
	.string "With each visit, remember to check the\n"
	.string "freezer for a free drink!$"
