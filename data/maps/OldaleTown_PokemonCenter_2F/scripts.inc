# 1 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_MapScripts::
# 3 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.byte 0
# 8 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 10 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_EventScript_Colosseum::
# 11 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 12 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	end
# 13 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 14 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_EventScript_TradeCenter::
# 15 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 16 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	end
# 17 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"

# 18 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
OldaleTown_PokemonCenter_2F_EventScript_RecordCorner::
# 19 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 20 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	end

MyScript::
# 26 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox MyScript_Text_0
	return


MyScript_Text_0:
# 26 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "They say those Rebels are all about\n"
	.string "fighting Devon, and things like the\l"
	.string "Safemon project...\p"
	.string "But most of them are old Team Aqua and\n"
	.string "Team Magma members.\p"
	.string "If you ask me, they're the same\n"
	.string "hoodlums, with a different name!$"
