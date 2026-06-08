# 1 "data/maps/PokeInnRoom2/scripts.pory"


PokeInnRoom2_MapScripts::
# 9 "data/maps/PokeInnRoom2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DisableInnFollowers
	.byte 0


DisableInnFollowers::
# 12 "data/maps/PokeInnRoom2/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	return


DevonInnSignAboutFreezer::
# 19 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 20 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSignAboutFreezer_Text_0
# 21 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


OldalePokeCenterInnPrograms::
# 27 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 28 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldalePokeCenterInnPrograms_Text_0, OldalePokeCenterInnPrograms_Text_1
# 30 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldalePokeCenterInnPrograms_2
OldalePokeCenterInnPrograms_1:
# 45 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldalePokeCenterInnPrograms_5
OldalePokeCenterInnPrograms_4:
# 66 "data/maps/PokeInnRoom2/scripts.pory"
	releaseall
	return

OldalePokeCenterInnPrograms_2:
# 31 "data/maps/PokeInnRoom2/scripts.pory"
	random 0
# 32 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 34 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 35 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, OldalePokeCenterInnPrograms_8
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_5:
# 46 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset seenweatheratinnvisit, OldalePokeCenterInnPrograms_9
# 60 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldalePokeCenterInnPrograms_Text_2
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_8:
# 35 "data/maps/PokeInnRoom2/scripts.pory"
	goto OldaleWarehouseNews
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_9:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	random 2
# 48 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 49 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 50 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, OldalePokeCenterInnPrograms_13
# 51 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, OldalePokeCenterInnPrograms_14
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_13:
# 50 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route103WeatherNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_14:
# 51 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route102WeatherNews
	goto OldalePokeCenterInnPrograms_4


OldaleWarehouseNews::
# 72 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_0
	end


Route103WeatherNews::
# 79 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route103WeatherNews_Text_0
# 80 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 1
# 81 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 82 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


Route102WeatherNews::
# 86 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route102WeatherNews_Text_0
# 87 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 1
# 88 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 89 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DevonInnSignAboutFreezer_Text_0:
# 20 "data/maps/PokeInnRoom2/scripts.pory"
	.string "With each visit, remember to check the\n"
	.string "freezer for a free drink!$"

OldalePokeCenterInnPrograms_Text_0:
# 28 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Devon News$"

OldalePokeCenterInnPrograms_Text_1:
# 28 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Channel$"

OldalePokeCenterInnPrograms_Text_2:
# 60 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The weather broadcast has ended...$"

OldaleWarehouseNews_Text_0:
# 72 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Oldale Warehouse News go here.$"

Route103WeatherNews_Text_0:
# 79 "data/maps/PokeInnRoom2/scripts.pory"
	.string "There is rain in Route 103!$"

Route102WeatherNews_Text_0:
# 86 "data/maps/PokeInnRoom2/scripts.pory"
	.string "There is a sandstorm in Route 102!$"
