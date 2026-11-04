# 1 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"

# 2 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
//PetalburgCity_PokemonCenter_2F_MapScripts::
# 3 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	//map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	//map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	//map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	//map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	//.byte 0
# 8 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 10 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
PetalburgCity_PokemonCenter_2F_EventScript_Colosseum::
# 11 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 12 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	end
# 13 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"

# 14 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
PetalburgCity_PokemonCenter_2F_EventScript_TradeCenter::
# 15 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 16 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	end
# 17 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"

# 18 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
PetalburgCity_PokemonCenter_2F_EventScript_RecordCorner::
# 19 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 20 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	end

PetalburgCity_PokemonCenter_2F_MapScripts::
# 26 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_PokemonCenter_2FMapscriptbundle
# 27 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_2FMapscriptbundle
	.byte 0


PetalburgCity_PokemonCenter_2FMapscriptbundle::
# 32 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	gettimeofday
# 33 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq PetalburgCity_PokemonCenter_2FMapscriptbundle_2
PetalburgCity_PokemonCenter_2FMapscriptbundle_1:
# 36 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq PetalburgCity_PokemonCenter_2FMapscriptbundle_5
PetalburgCity_PokemonCenter_2FMapscriptbundle_4:
# 39 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq PetalburgCity_PokemonCenter_2FMapscriptbundle_8
PetalburgCity_PokemonCenter_2FMapscriptbundle_7:
# 42 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgCity_PokemonCenter_2FMapscriptbundle_11
PetalburgCity_PokemonCenter_2FMapscriptbundle_10:
# 45 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	goto DayNightNPC
	return

PetalburgCity_PokemonCenter_2FMapscriptbundle_2:
# 34 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgCity_PokemonCenter_2FMapscriptbundle_1

PetalburgCity_PokemonCenter_2FMapscriptbundle_5:
# 37 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgCity_PokemonCenter_2FMapscriptbundle_4

PetalburgCity_PokemonCenter_2FMapscriptbundle_8:
# 40 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgCity_PokemonCenter_2FMapscriptbundle_7

PetalburgCity_PokemonCenter_2FMapscriptbundle_11:
# 43 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	setweather WEATHER_SHADE
	goto PetalburgCity_PokemonCenter_2FMapscriptbundle_10


PetalburgDevonCenter2FBoyfriend::
# 51 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	lock
# 52 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	msgbox PetalburgDevonCenter2FBoyfriend_Text_0
# 54 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	releaseall
	return


PetalburgDevonCenter2FGirlfriend::
# 58 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	lock
# 59 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	msgbox PetalburgDevonCenter2FGirlfriend_Text_0
# 61 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	releaseall
	return


PetalburgDevonCenter2FBoyfriend_Text_0:
# 52 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	.string "But honey, those Devon Visas are very\n"
	.string "hard to get...\p"
	.string "What's wrong with Petalburg Beach\n"
	.string "anyway.$"

PetalburgDevonCenter2FGirlfriend_Text_0:
# 59 "data/maps/PetalburgCity_PokemonCenter_2F/scripts.pory"
	.string "I'm just sick of that muddy, toxic\n"
	.string "beach.\p"
	.string "Just get a real job and a visa, and we\n"
	.string "could go to Petal Park!$"
