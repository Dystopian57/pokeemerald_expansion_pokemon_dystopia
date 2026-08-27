# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_OLDALE_NURSE
# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is\n"
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "for any POKéMON TRAINER to use.\p"
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS are great!\p"
# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But they say they're still making\n"
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "adjustments.$"
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I traded POKéMON right away.$"

OldaleTown_PokemonCenter_1F_MapScripts::
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OldaleDevonCenter_TVOn
# 62 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
	.byte 0


OldaleDevonCenter_TVOn::
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special TurnOnTVScreen
	return


DayNightAmbientLight::
# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightAmbientLight_2
DayNightAmbientLight_1:
# 76 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightAmbientLight_5
DayNightAmbientLight_4:
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightAmbientLight_8
DayNightAmbientLight_7:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightAmbientLight_11
DayNightAmbientLight_10:
# 85 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	return

DayNightAmbientLight_2:
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setweather WEATHER_NONE
	goto DayNightAmbientLight_1

DayNightAmbientLight_5:
# 77 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setweather WEATHER_NONE
	goto DayNightAmbientLight_4

DayNightAmbientLight_8:
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setweather WEATHER_NONE
	goto DayNightAmbientLight_7

DayNightAmbientLight_11:
# 83 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setweather WEATHER_SHADE
	goto DayNightAmbientLight_10


CarRebel::
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 96 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 9, CarRebel_Movement_0
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox CarRebel_Text_0
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 9, CarRebel_Movement_1
# 100 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldaleTown_Devon_Nurse::
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 108 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choserudenurse, OldaleTown_Devon_Nurse_2
OldaleTown_Devon_Nurse_1:
# 112 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenormalnurse, OldaleTown_Devon_Nurse_5
OldaleTown_Devon_Nurse_4:
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenicenurse, OldaleTown_Devon_Nurse_8
OldaleTown_Devon_Nurse_7:
# 120 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choseflatterynurse, OldaleTown_Devon_Nurse_11
# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	GetGameStat GAME_STAT_USED_POKECENTER
# 126 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 127 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq OldaleTown_Devon_Nurse_18
OldaleTown_Devon_Nurse_17:
# 130 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 26
	goto_if_eq OldaleTown_Devon_Nurse_27
OldaleTown_Devon_Nurse_26:
# 133 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 51
	goto_if_eq OldaleTown_Devon_Nurse_39
OldaleTown_Devon_Nurse_38:
# 138 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_50
OldaleTown_Devon_Nurse_10:
# 145 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_15
OldaleTown_Devon_Nurse_14:
# 166 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_21
OldaleTown_Devon_Nurse_20:
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_30
OldaleTown_Devon_Nurse_29:
# 212 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_Devon_Nurse_42
OldaleTown_Devon_Nurse_41:
# 562 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_Devon_Nurse_53
OldaleTown_Devon_Nurse_52:
# 607 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
finishhealscript:
# 608 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return

OldaleTown_Devon_Nurse_2:
# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto startrudenursegreeting
	goto OldaleTown_Devon_Nurse_1

OldaleTown_Devon_Nurse_5:
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto startnormalnursegreeting
	goto OldaleTown_Devon_Nurse_4

OldaleTown_Devon_Nurse_8:
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto startnicenursegreeting
	goto OldaleTown_Devon_Nurse_7

OldaleTown_Devon_Nurse_11:
# 122 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto startflatterynursegreeting
	goto OldaleTown_Devon_Nurse_10

OldaleTown_Devon_Nurse_15:
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
startnormalnursegreeting:
# 148 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 149 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq OldaleTown_Devon_Nurse_24
OldaleTown_Devon_Nurse_23:
# 153 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq OldaleTown_Devon_Nurse_36
OldaleTown_Devon_Nurse_35:
# 157 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq OldaleTown_Devon_Nurse_48
OldaleTown_Devon_Nurse_47:
# 161 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Devon_Nurse_61
	goto OldaleTown_Devon_Nurse_14

OldaleTown_Devon_Nurse_18:
# 128 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_DEVONCENTERLOYALTY, 1
	goto OldaleTown_Devon_Nurse_17

OldaleTown_Devon_Nurse_21:
# 168 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
startnicenursegreeting:
# 169 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 170 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq OldaleTown_Devon_Nurse_33
OldaleTown_Devon_Nurse_32:
# 178 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq OldaleTown_Devon_Nurse_45
OldaleTown_Devon_Nurse_44:
# 186 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq OldaleTown_Devon_Nurse_59
OldaleTown_Devon_Nurse_58:
# 194 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Devon_Nurse_72
	goto OldaleTown_Devon_Nurse_20

OldaleTown_Devon_Nurse_24:
# 150 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_3
# 151 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_23

OldaleTown_Devon_Nurse_27:
# 131 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_DEVONCENTERLOYALTY, 2
	goto OldaleTown_Devon_Nurse_26

OldaleTown_Devon_Nurse_30:
# 205 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
startflatterynursegreeting:
# 206 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_11
# 209 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_29

OldaleTown_Devon_Nurse_33:
# 172 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_7
# 175 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_32

OldaleTown_Devon_Nurse_36:
# 154 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_4
# 155 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_35

OldaleTown_Devon_Nurse_39:
# 134 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_DEVONCENTERLOYALTY, 3
	goto OldaleTown_Devon_Nurse_38

OldaleTown_Devon_Nurse_42:
# 214 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset devoncenterdebt, OldaleTown_Devon_Nurse_55
# 496 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_45
# 498 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 100
# 499 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleTown_Devon_Nurse_70
OldaleTown_Devon_Nurse_69:
# 509 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_Devon_Nurse_80
	goto OldaleTown_Devon_Nurse_41

OldaleTown_Devon_Nurse_45:
# 180 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_8
# 183 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_44

OldaleTown_Devon_Nurse_48:
# 158 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_5
# 159 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_47

OldaleTown_Devon_Nurse_50:
# 140 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
startrudenursegreeting:
# 141 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_0
# 142 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_10

OldaleTown_Devon_Nurse_53:
# 564 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_64
OldaleTown_Devon_Nurse_63:
# 567 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_75
OldaleTown_Devon_Nurse_74:
# 570 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_83
OldaleTown_Devon_Nurse_82:
# 576 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_92
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_55:
# 217 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_67
OldaleTown_Devon_Nurse_66:
# 220 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_78
OldaleTown_Devon_Nurse_77:
# 223 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_86
OldaleTown_Devon_Nurse_85:
# 227 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_103
OldaleTown_Devon_Nurse_101:
# 234 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_122
OldaleTown_Devon_Nurse_120:
# 238 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_135
OldaleTown_Devon_Nurse_133:
# 242 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_156
OldaleTown_Devon_Nurse_154:
# 246 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_170
OldaleTown_Devon_Nurse_168:
# 251 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
healpokes:
# 252 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidefollower 0
# 253 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_0
# 254 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 255 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 256 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special HealPlayerParty
# 257 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, CarRebel_Movement_1
# 258 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 259 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_16
# 261 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 100
# 262 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleTown_Devon_Nurse_179
OldaleTown_Devon_Nurse_178:
# 432 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_Devon_Nurse_186
	goto OldaleTown_Devon_Nurse_41

OldaleTown_Devon_Nurse_59:
# 188 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_9
# 191 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_58

OldaleTown_Devon_Nurse_61:
# 162 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_6
# 163 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_14

OldaleTown_Devon_Nurse_64:
# 565 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_51
	goto OldaleTown_Devon_Nurse_63

OldaleTown_Devon_Nurse_67:
# 218 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_12
	goto OldaleTown_Devon_Nurse_66

OldaleTown_Devon_Nurse_70:
# 500 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 501 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 502 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 100
# 503 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 504 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 505 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_46
# 506 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	clearflag devoncenterdebt
# 507 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto healpokes
	goto OldaleTown_Devon_Nurse_69

OldaleTown_Devon_Nurse_72:
# 196 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_10
# 199 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_20

OldaleTown_Devon_Nurse_75:
# 568 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_52
	goto OldaleTown_Devon_Nurse_74

OldaleTown_Devon_Nurse_78:
# 221 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_13
	goto OldaleTown_Devon_Nurse_77

OldaleTown_Devon_Nurse_80:
# 510 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_89
OldaleTown_Devon_Nurse_88:
# 514 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_113
OldaleTown_Devon_Nurse_112:
# 517 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_126
OldaleTown_Devon_Nurse_125:
# 523 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_140
OldaleTown_Devon_Nurse_138:
# 534 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_161
OldaleTown_Devon_Nurse_159:
# 539 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_175
OldaleTown_Devon_Nurse_173:
# 543 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_183
OldaleTown_Devon_Nurse_181:
# 548 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_193
OldaleTown_Devon_Nurse_191:
# 556 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto finishhealscript
	goto OldaleTown_Devon_Nurse_41

OldaleTown_Devon_Nurse_83:
# 571 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_53
# 572 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 573 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_82

OldaleTown_Devon_Nurse_86:
# 224 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_14
	goto OldaleTown_Devon_Nurse_85

OldaleTown_Devon_Nurse_89:
# 511 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_47
	goto OldaleTown_Devon_Nurse_88

OldaleTown_Devon_Nurse_91:
# 581 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_54
# 582 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 583 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 586 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_117
OldaleTown_Devon_Nurse_115:
# 590 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_130
OldaleTown_Devon_Nurse_128:
# 594 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_151
OldaleTown_Devon_Nurse_149:
# 598 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_165
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_92:
# 577 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choserudenurse, OldaleTown_Devon_Nurse_94
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_94:
# 578 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenormalnurse, OldaleTown_Devon_Nurse_96
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_96:
# 579 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenicenurse, OldaleTown_Devon_Nurse_98
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_98:
# 580 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choseflatterynurse, OldaleTown_Devon_Nurse_91
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_102:
# 232 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_15
	goto OldaleTown_Devon_Nurse_101

OldaleTown_Devon_Nurse_103:
# 228 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choserudenurse, OldaleTown_Devon_Nurse_105
	goto OldaleTown_Devon_Nurse_101

OldaleTown_Devon_Nurse_105:
# 229 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenormalnurse, OldaleTown_Devon_Nurse_107
	goto OldaleTown_Devon_Nurse_101

OldaleTown_Devon_Nurse_107:
# 230 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenicenurse, OldaleTown_Devon_Nurse_109
	goto OldaleTown_Devon_Nurse_101

OldaleTown_Devon_Nurse_109:
# 231 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choseflatterynurse, OldaleTown_Devon_Nurse_102
	goto OldaleTown_Devon_Nurse_101

OldaleTown_Devon_Nurse_113:
# 515 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_48
	goto OldaleTown_Devon_Nurse_112

OldaleTown_Devon_Nurse_116:
# 587 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_51
	goto OldaleTown_Devon_Nurse_115

OldaleTown_Devon_Nurse_117:
# 586 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choserudenurse, OldaleTown_Devon_Nurse_116
	goto OldaleTown_Devon_Nurse_115

OldaleTown_Devon_Nurse_121:
# 235 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_12
	goto OldaleTown_Devon_Nurse_120

OldaleTown_Devon_Nurse_122:
# 234 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choserudenurse, OldaleTown_Devon_Nurse_121
	goto OldaleTown_Devon_Nurse_120

OldaleTown_Devon_Nurse_126:
# 518 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_49
# 520 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 521 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_125

OldaleTown_Devon_Nurse_129:
# 591 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_52
	goto OldaleTown_Devon_Nurse_128

OldaleTown_Devon_Nurse_130:
# 590 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenormalnurse, OldaleTown_Devon_Nurse_129
	goto OldaleTown_Devon_Nurse_128

OldaleTown_Devon_Nurse_134:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_13
	goto OldaleTown_Devon_Nurse_133

OldaleTown_Devon_Nurse_135:
# 238 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenormalnurse, OldaleTown_Devon_Nurse_134
	goto OldaleTown_Devon_Nurse_133

OldaleTown_Devon_Nurse_139:
# 528 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_50
# 530 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 531 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_138

OldaleTown_Devon_Nurse_140:
# 524 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choserudenurse, OldaleTown_Devon_Nurse_142
	goto OldaleTown_Devon_Nurse_138

OldaleTown_Devon_Nurse_142:
# 525 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenormalnurse, OldaleTown_Devon_Nurse_144
	goto OldaleTown_Devon_Nurse_138

OldaleTown_Devon_Nurse_144:
# 526 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenicenurse, OldaleTown_Devon_Nurse_146
	goto OldaleTown_Devon_Nurse_138

OldaleTown_Devon_Nurse_146:
# 527 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choseflatterynurse, OldaleTown_Devon_Nurse_139
	goto OldaleTown_Devon_Nurse_138

OldaleTown_Devon_Nurse_150:
# 595 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_53
	goto OldaleTown_Devon_Nurse_149

OldaleTown_Devon_Nurse_151:
# 594 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenicenurse, OldaleTown_Devon_Nurse_150
	goto OldaleTown_Devon_Nurse_149

OldaleTown_Devon_Nurse_155:
# 243 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_14
	goto OldaleTown_Devon_Nurse_154

OldaleTown_Devon_Nurse_156:
# 242 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenicenurse, OldaleTown_Devon_Nurse_155
	goto OldaleTown_Devon_Nurse_154

OldaleTown_Devon_Nurse_160:
# 535 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_47
	goto OldaleTown_Devon_Nurse_159

OldaleTown_Devon_Nurse_161:
# 534 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choserudenurse, OldaleTown_Devon_Nurse_160
	goto OldaleTown_Devon_Nurse_159

OldaleTown_Devon_Nurse_164:
# 599 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_54
# 600 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 601 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_165:
# 598 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choseflatterynurse, OldaleTown_Devon_Nurse_164
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_169:
# 247 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_15
	goto OldaleTown_Devon_Nurse_168

OldaleTown_Devon_Nurse_170:
# 246 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choseflatterynurse, OldaleTown_Devon_Nurse_169
	goto OldaleTown_Devon_Nurse_168

OldaleTown_Devon_Nurse_174:
# 540 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_48
	goto OldaleTown_Devon_Nurse_173

OldaleTown_Devon_Nurse_175:
# 539 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenormalnurse, OldaleTown_Devon_Nurse_174
	goto OldaleTown_Devon_Nurse_173

OldaleTown_Devon_Nurse_179:
# 263 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 264 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 265 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 100
# 266 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 267 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 268 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_189
OldaleTown_Devon_Nurse_188:
# 272 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_200
OldaleTown_Devon_Nurse_199:
# 275 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_206
OldaleTown_Devon_Nurse_205:
# 290 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_213
OldaleTown_Devon_Nurse_211:
# 316 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_238
OldaleTown_Devon_Nurse_236:
# 321 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_254
OldaleTown_Devon_Nurse_252:
# 325 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_270
OldaleTown_Devon_Nurse_268:
# 339 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_286
OldaleTown_Devon_Nurse_284:
# 361 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 362 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 364 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	GetGameStat GAME_STAT_USED_POKECENTER
# 365 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 366 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq OldaleTown_Devon_Nurse_301
OldaleTown_Devon_Nurse_300:
# 371 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_eq OldaleTown_Devon_Nurse_310
OldaleTown_Devon_Nurse_309:
# 377 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 50
	goto_if_eq OldaleTown_Devon_Nurse_319
OldaleTown_Devon_Nurse_318:
# 386 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 75
	goto_if_eq OldaleTown_Devon_Nurse_328
OldaleTown_Devon_Nurse_327:
# 427 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto finishhealscript
# 429 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 430 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement
	goto OldaleTown_Devon_Nurse_178

OldaleTown_Devon_Nurse_182:
# 544 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_49
	goto OldaleTown_Devon_Nurse_181

OldaleTown_Devon_Nurse_183:
# 543 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenicenurse, OldaleTown_Devon_Nurse_182
	goto OldaleTown_Devon_Nurse_181

OldaleTown_Devon_Nurse_186:
# 433 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_2
# 434 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 435 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 437 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_197
OldaleTown_Devon_Nurse_196:
# 442 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_203
OldaleTown_Devon_Nurse_202:
# 447 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_209
OldaleTown_Devon_Nurse_208:
# 455 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_227
OldaleTown_Devon_Nurse_225:
# 468 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_249
OldaleTown_Devon_Nurse_247:
# 474 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_265
OldaleTown_Devon_Nurse_263:
# 480 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_281
OldaleTown_Devon_Nurse_279:
# 486 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_297
OldaleTown_Devon_Nurse_295:
# 492 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag devoncenterdebt
# 493 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto finishhealscript
	goto OldaleTown_Devon_Nurse_41

OldaleTown_Devon_Nurse_189:
# 269 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_17
	goto OldaleTown_Devon_Nurse_188

OldaleTown_Devon_Nurse_192:
# 549 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_50
# 551 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 552 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_191

OldaleTown_Devon_Nurse_193:
# 548 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choseflatterynurse, OldaleTown_Devon_Nurse_192
	goto OldaleTown_Devon_Nurse_191

OldaleTown_Devon_Nurse_197:
# 438 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_41
	goto OldaleTown_Devon_Nurse_196

OldaleTown_Devon_Nurse_200:
# 273 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_18
	goto OldaleTown_Devon_Nurse_199

OldaleTown_Devon_Nurse_203:
# 443 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_42
	goto OldaleTown_Devon_Nurse_202

OldaleTown_Devon_Nurse_206:
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq OldaleTown_Devon_Nurse_223
OldaleTown_Devon_Nurse_222:
# 279 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq OldaleTown_Devon_Nurse_245
OldaleTown_Devon_Nurse_244:
# 281 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq OldaleTown_Devon_Nurse_261
OldaleTown_Devon_Nurse_260:
# 283 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Devon_Nurse_277
OldaleTown_Devon_Nurse_276:
# 285 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 286 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_205

OldaleTown_Devon_Nurse_209:
# 448 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_43
# 451 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 452 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_208

OldaleTown_Devon_Nurse_212:
# 295 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 296 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq OldaleTown_Devon_Nurse_242
OldaleTown_Devon_Nurse_241:
# 299 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq OldaleTown_Devon_Nurse_258
OldaleTown_Devon_Nurse_257:
# 302 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq OldaleTown_Devon_Nurse_274
OldaleTown_Devon_Nurse_273:
# 305 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Devon_Nurse_293
OldaleTown_Devon_Nurse_292:
# 309 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 310 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 311 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 312 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_211

OldaleTown_Devon_Nurse_213:
# 291 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choserudenurse, OldaleTown_Devon_Nurse_215
	goto OldaleTown_Devon_Nurse_211

OldaleTown_Devon_Nurse_215:
# 292 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenormalnurse, OldaleTown_Devon_Nurse_217
	goto OldaleTown_Devon_Nurse_211

OldaleTown_Devon_Nurse_217:
# 293 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenicenurse, OldaleTown_Devon_Nurse_219
	goto OldaleTown_Devon_Nurse_211

OldaleTown_Devon_Nurse_219:
# 294 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choseflatterynurse, OldaleTown_Devon_Nurse_212
	goto OldaleTown_Devon_Nurse_211

OldaleTown_Devon_Nurse_223:
# 278 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_19
	goto OldaleTown_Devon_Nurse_222

OldaleTown_Devon_Nurse_226:
# 460 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_44
# 462 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 463 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 464 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 465 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_225

OldaleTown_Devon_Nurse_227:
# 456 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choserudenurse, OldaleTown_Devon_Nurse_229
	goto OldaleTown_Devon_Nurse_225

OldaleTown_Devon_Nurse_229:
# 457 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenormalnurse, OldaleTown_Devon_Nurse_231
	goto OldaleTown_Devon_Nurse_225

OldaleTown_Devon_Nurse_231:
# 458 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenicenurse, OldaleTown_Devon_Nurse_233
	goto OldaleTown_Devon_Nurse_225

OldaleTown_Devon_Nurse_233:
# 459 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choseflatterynurse, OldaleTown_Devon_Nurse_226
	goto OldaleTown_Devon_Nurse_225

OldaleTown_Devon_Nurse_237:
# 317 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_17
	goto OldaleTown_Devon_Nurse_236

OldaleTown_Devon_Nurse_238:
# 316 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choserudenurse, OldaleTown_Devon_Nurse_237
	goto OldaleTown_Devon_Nurse_236

OldaleTown_Devon_Nurse_242:
# 297 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_23
	goto OldaleTown_Devon_Nurse_241

OldaleTown_Devon_Nurse_245:
# 280 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_20
	goto OldaleTown_Devon_Nurse_244

OldaleTown_Devon_Nurse_248:
# 469 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_41
	goto OldaleTown_Devon_Nurse_247

OldaleTown_Devon_Nurse_249:
# 468 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choserudenurse, OldaleTown_Devon_Nurse_248
	goto OldaleTown_Devon_Nurse_247

OldaleTown_Devon_Nurse_253:
# 322 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_18
	goto OldaleTown_Devon_Nurse_252

OldaleTown_Devon_Nurse_254:
# 321 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenormalnurse, OldaleTown_Devon_Nurse_253
	goto OldaleTown_Devon_Nurse_252

OldaleTown_Devon_Nurse_258:
# 300 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_24
	goto OldaleTown_Devon_Nurse_257

OldaleTown_Devon_Nurse_261:
# 282 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_21
	goto OldaleTown_Devon_Nurse_260

OldaleTown_Devon_Nurse_264:
# 475 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_42
	goto OldaleTown_Devon_Nurse_263

OldaleTown_Devon_Nurse_265:
# 474 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenormalnurse, OldaleTown_Devon_Nurse_264
	goto OldaleTown_Devon_Nurse_263

OldaleTown_Devon_Nurse_269:
# 326 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 327 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq OldaleTown_Devon_Nurse_290
OldaleTown_Devon_Nurse_289:
# 329 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq OldaleTown_Devon_Nurse_307
OldaleTown_Devon_Nurse_306:
# 331 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq OldaleTown_Devon_Nurse_316
OldaleTown_Devon_Nurse_315:
# 333 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Devon_Nurse_325
OldaleTown_Devon_Nurse_324:
# 335 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 336 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_268

OldaleTown_Devon_Nurse_270:
# 325 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenicenurse, OldaleTown_Devon_Nurse_269
	goto OldaleTown_Devon_Nurse_268

OldaleTown_Devon_Nurse_274:
# 303 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_25
	goto OldaleTown_Devon_Nurse_273

OldaleTown_Devon_Nurse_277:
# 284 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_22
	goto OldaleTown_Devon_Nurse_276

OldaleTown_Devon_Nurse_280:
# 481 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_43
	goto OldaleTown_Devon_Nurse_279

OldaleTown_Devon_Nurse_281:
# 480 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenicenurse, OldaleTown_Devon_Nurse_280
	goto OldaleTown_Devon_Nurse_279

OldaleTown_Devon_Nurse_285:
# 340 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq OldaleTown_Devon_Nurse_304
OldaleTown_Devon_Nurse_303:
# 343 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq OldaleTown_Devon_Nurse_313
OldaleTown_Devon_Nurse_312:
# 346 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq OldaleTown_Devon_Nurse_322
OldaleTown_Devon_Nurse_321:
# 349 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Devon_Nurse_331
OldaleTown_Devon_Nurse_330:
# 352 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 353 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 354 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 355 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 356 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_284

OldaleTown_Devon_Nurse_286:
# 339 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choseflatterynurse, OldaleTown_Devon_Nurse_285
	goto OldaleTown_Devon_Nurse_284

OldaleTown_Devon_Nurse_290:
# 328 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_19
	goto OldaleTown_Devon_Nurse_289

OldaleTown_Devon_Nurse_293:
# 306 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_26
# 308 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	goto OldaleTown_Devon_Nurse_292

OldaleTown_Devon_Nurse_296:
# 487 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_44
	goto OldaleTown_Devon_Nurse_295

OldaleTown_Devon_Nurse_297:
# 486 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choseflatterynurse, OldaleTown_Devon_Nurse_296
	goto OldaleTown_Devon_Nurse_295

OldaleTown_Devon_Nurse_301:
# 367 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_27
# 369 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	givedecoration DECOR_BALL_CUSHION
	goto OldaleTown_Devon_Nurse_300

OldaleTown_Devon_Nurse_304:
# 341 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_23
	goto OldaleTown_Devon_Nurse_303

OldaleTown_Devon_Nurse_307:
# 330 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_20
	goto OldaleTown_Devon_Nurse_306

OldaleTown_Devon_Nurse_310:
# 372 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_28
# 374 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	givedecoration DECOR_AZURILL_DOLL
	goto OldaleTown_Devon_Nurse_309

OldaleTown_Devon_Nurse_313:
# 344 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_24
	goto OldaleTown_Devon_Nurse_312

OldaleTown_Devon_Nurse_316:
# 332 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_21
	goto OldaleTown_Devon_Nurse_315

OldaleTown_Devon_Nurse_319:
# 378 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_29
# 381 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	givedecoration DECOR_FIRE_BLAST_MAT
# 382 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 383 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_318

OldaleTown_Devon_Nurse_322:
# 347 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_25
	goto OldaleTown_Devon_Nurse_321

OldaleTown_Devon_Nurse_325:
# 334 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_22
	goto OldaleTown_Devon_Nurse_324

OldaleTown_Devon_Nurse_328:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_30
# 389 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_31
# 391 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_32, OldaleTown_Devon_Nurse_Text_33, OldaleTown_Devon_Nurse_Text_34, OldaleTown_Devon_Nurse_Text_35
# 394 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_Devon_Nurse_334
OldaleTown_Devon_Nurse_333:
# 400 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_Devon_Nurse_337
OldaleTown_Devon_Nurse_336:
# 405 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleTown_Devon_Nurse_340
OldaleTown_Devon_Nurse_339:
# 412 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldaleTown_Devon_Nurse_342
	goto OldaleTown_Devon_Nurse_327

OldaleTown_Devon_Nurse_331:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_26
	goto OldaleTown_Devon_Nurse_330

OldaleTown_Devon_Nurse_334:
# 395 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_36
# 397 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag choserudenurse
	goto OldaleTown_Devon_Nurse_333

OldaleTown_Devon_Nurse_337:
# 401 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_37
# 402 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag chosenormalnurse
	goto OldaleTown_Devon_Nurse_336

OldaleTown_Devon_Nurse_340:
# 406 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_38
# 407 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag chosenicenurse
# 408 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 409 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_339

OldaleTown_Devon_Nurse_342:
# 413 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_39
# 416 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 417 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 418 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 419 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 420 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag choseflatterynurse
# 421 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_40
	goto OldaleTown_Devon_Nurse_327


OldaleATM::
# 613 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 614 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 615 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_0
# 616 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, OldaleATM_Text_1, OldaleATM_Text_2, OldaleATM_Text_3, OldaleATM_Text_4, OldaleATM_Text_5
# 618 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleATM_2
OldaleATM_1:
# 641 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleATM_5
OldaleATM_4:
# 669 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleATM_11
OldaleATM_10:
# 699 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldaleATM_17
OldaleATM_16:
# 706 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
endofatm:
# 707 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return

OldaleATM_2:
# 619 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 1000
# 620 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleATM_7
# 635 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_FAILURE
# 636 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_7
	goto OldaleATM_1

OldaleATM_5:
# 642 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_lt OldaleATM_13
# 648 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 5000
# 649 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleATM_22
# 664 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_FAILURE
# 665 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_7
	goto OldaleATM_4

OldaleATM_7:
# 621 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 622 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 623 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 1000
# 624 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 625 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 626 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_6
# 627 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 628 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 629 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 630 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_STRAWBERRY_SWEET
# 631 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto endofatm
	goto OldaleATM_1

OldaleATM_11:
# 670 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_lt OldaleATM_19
# 676 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 10000
# 677 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleATM_25
# 693 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_FAILURE
# 694 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_7
	goto OldaleATM_10

OldaleATM_13:
# 643 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_FAILURE
# 644 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_8
	goto OldaleATM_4

OldaleATM_17:
# 700 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_10
	goto OldaleATM_16

OldaleATM_19:
# 671 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_FAILURE
# 672 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_9
	goto OldaleATM_10

OldaleATM_22:
# 650 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 651 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 652 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 1000
# 653 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 654 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 655 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_6
# 656 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 657 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 658 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 659 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_BERRY_SWEET
# 660 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto endofatm
	goto OldaleATM_4

OldaleATM_25:
# 678 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 679 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 680 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 1000
# 681 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 682 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 683 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_6
# 684 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 685 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 686 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 687 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 688 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_CLOVER_SWEET
# 689 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto endofatm
	goto OldaleATM_10


OldaleTown_Mart_Clerk::
# 713 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 714 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 715 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 5, CarRebel_Movement_0
# 716 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 10, CarRebel_Movement_0
# 717 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_0
# 718 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 719 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_PostWarehouse
# 720 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_PreWarehouse
# 722 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set oldalecenterwarehousecomplaint, OldaleTown_Mart_Clerk_2
OldaleTown_Mart_Clerk_1:
# 724 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 725 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Mart_Clerk_5
# 730 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 731 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleTown_Mart_Clerk_9
OldaleTown_Mart_Clerk_8:
# 734 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleTown_Mart_Clerk_11
OldaleTown_Mart_Clerk_4:
# 738 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 5, OldaleTown_Mart_Clerk_Movement_0
# 739 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 10, OldaleTown_Mart_Clerk_Movement_0
# 740 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_3
# 743 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 5, CarRebel_Movement_0
# 744 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 10, CarRebel_Movement_0
# 746 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_4
# 749 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag oldalecenterwarehousecomplaint
# 750 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
endofoldalemartclerk:
# 751 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_Mart_Clerk_2:
# 723 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto endofoldalemartclerk
	goto OldaleTown_Mart_Clerk_1

OldaleTown_Mart_Clerk_5:
# 726 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_1
	goto OldaleTown_Mart_Clerk_4

OldaleTown_Mart_Clerk_9:
# 732 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_2
	goto OldaleTown_Mart_Clerk_8

OldaleTown_Mart_Clerk_11:
# 735 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_2
	goto OldaleTown_Mart_Clerk_4


OldaleTown_Mart_PostWarehouse::
# 757 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_PostWarehouse
# 758 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_PostWarehouse_Text_0
# 759 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


	.align 2
# 762 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Mart_Pokemart_PreWarehouse:
# 763 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
	.2byte ITEM_NONE

	.align 2
# 766 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Mart_Pokemart_PostWarehouse:
# 767 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 768 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
	.2byte ITEM_NONE

OldalePokeCenterOldLady::
# 775 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 776 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 3, CarRebel_Movement_0
# 777 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterOldLady_Text_0
# 780 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterInjuredGuyDay::
# 784 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 785 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, CarRebel_Movement_0
# 786 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterInjuredGuyDay_Text_0
# 788 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterInjuredGuyNight::
# 792 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 793 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, CarRebel_Movement_0
# 794 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterInjuredGuyNight_Text_0
# 795 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_SNORE
# 796 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterInjuredGuyNight_Text_1
# 797 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterMapBoyDay::
# 802 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 803 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 6, CarRebel_Movement_0
# 804 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterMapBoyDay_Text_0
# 807 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 6, OldalePokeCenterMapBoyDay_Movement_0
# 808 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterMapBoyNight::
# 812 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 813 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterMapBoyNight_Text_0
# 814 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterInnSign::
# 818 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 819 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterInnSign_Text_0
# 820 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterBookshelf::
# 824 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 825 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterBookshelf_Text_0
# 826 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterTVKid::
# 830 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 831 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 8, CarRebel_Movement_0
# 832 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterTVKid_Text_0
# 835 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 8, OldalePokeCenterMapBoyDay_Movement_0
# 836 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterTVAds::
# 841 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 842 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	random 8
# 843 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 845 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 846 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, OldalePokeCenterTVAds_3
# 847 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, OldalePokeCenterTVAds_4
# 848 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, OldalePokeCenterTVAds_5
# 849 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, OldalePokeCenterTVAds_6
# 850 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, OldalePokeCenterTVAds_7
# 851 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, OldalePokeCenterTVAds_8
# 852 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 6, OldalePokeCenterTVAds_9
# 853 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 7, OldalePokeCenterTVAds_10
# 854 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 8, OldalePokeCenterTVAds_11
OldalePokeCenterTVAds_1:
# 859 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return

OldalePokeCenterTVAds_3:
# 846 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devonballad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_4:
# 847 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devotionad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_5:
# 848 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Safemonad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_6:
# 849 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Lifeindustriesad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_7:
# 850 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devoncenterad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_8:
# 851 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Rebelhackersad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_9:
# 852 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devonnetad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_10:
# 853 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devongruntad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_11:
# 854 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Azuresortad
	goto OldalePokeCenterTVAds_1


Devonballad::
# 864 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_ARCHIPELAGO, 10, 3
# 865 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_ESCALATOR
# 866 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonballad_Text_0
# 869 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 870 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_CONTINENTAL, 10, 3
# 871 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_BALL_THROW
# 872 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonballad_Text_1
# 873 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 874 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Devotionad::
# 878 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devotionad_Text_0
# 881 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 882 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_ELEGANT, 10, 3
# 883 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devotionad_Text_1
# 886 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 887 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Safemonad::
# 893 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_FANCY, 10, 3
# 894 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_FLAMETHROWER
# 895 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Safemonad_Text_0
# 896 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 897 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_GARDEN, 10, 3
# 898 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_ABSORB_2
# 899 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Safemonad_Text_1
# 900 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 901 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Safemonad_Text_2
# 902 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Lifeindustriesad::
# 906 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_HIGH_PLAINS, 10, 3
# 907 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Lifeindustriesad_Text_0
# 909 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 910 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_JUNGLE, 10, 3
# 911 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_FLY
# 912 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Lifeindustriesad_Text_1
# 914 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 915 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_MARINE, 10, 3
# 916 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_ABSORB_2
# 917 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Lifeindustriesad_Text_2
# 918 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 919 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Devoncenterad::
# 923 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_MEADOW, 10, 3
# 924 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 925 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devoncenterad_Text_0
# 927 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 928 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_HEAL
# 929 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_MODERN, 10, 3
# 930 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devoncenterad_Text_1
# 932 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 933 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Rebelhackersad::
# 937 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_MONSOON, 10, 3
# 938 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_FAILURE
# 939 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_0
# 941 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 942 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_OCEAN, 10, 3
# 943 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_MUGSHOT
# 944 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_1
# 945 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 946 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_POKEBALL, 10, 3
# 947 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_WEAK
# 948 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_2
# 950 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 951 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_POLAR, 10, 3
# 952 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_DEX_SEARCH
# 953 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_3
# 954 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 955 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_RIVER, 10, 3
# 956 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_4
# 957 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 958 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Devonnetad::
# 962 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_SANDSTORM, 10, 3
# 963 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_SWIFT
# 964 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonnetad_Text_0
# 967 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 968 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_SAVANNA, 10, 3
# 969 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_PC_LOGIN
# 970 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonnetad_Text_1
# 972 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 973 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_SUN, 10, 3
# 975 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_PETAL_DANCE
# 976 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonnetad_Text_2
# 977 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 978 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Devongruntad::
# 982 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devongruntad_Text_0
# 984 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 985 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_PIKACHU_COSPLAY, 10, 3
# 986 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_ENCORE2
# 987 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devongruntad_Text_1
# 988 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devongruntad_Text_2
# 989 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 990 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Azuresortad::
# 994 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_BASCULIN, 10, 3
# 995 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_HAZE
# 996 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Azuresortad_Text_0
# 998 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 999 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_BASCULIN_WHITE_STRIPED, 10, 3
# 1000 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_SURF
# 1001 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Azuresortad_Text_1
# 1003 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 1004 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


# 96 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
CarRebel_Movement_0:
# 96 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
CarRebel_Movement_1:
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

# 253 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_0:
# 253 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 285 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_1:
# 285 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	nurse_joy_bow
	step_end

# 433 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_2:
# 433 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 738 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Mart_Clerk_Movement_0:
# 738 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_right
	step_end

# 807 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldalePokeCenterMapBoyDay_Movement_0:
# 807 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_up
	step_end

CarRebel_Text_0:
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Dammit, I'm broke a hell... I don't have\n"
	.string "enough pokeyen to heal my Electrike...\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Guess I'll have to pickpocket the next\n"
	.string "geezer I see, hehe...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_Devon_Nurse_Text_0:
# 141 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hey... Heal?$"

OldaleTown_Devon_Nurse_Text_1:
# 142 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Yes$"

OldaleTown_Devon_Nurse_Text_2:
# 142 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "No$"

OldaleTown_Devon_Nurse_Text_3:
# 150 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Morning. The usual?$"

OldaleTown_Devon_Nurse_Text_4:
# 154 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "G'day. The usual?$"

OldaleTown_Devon_Nurse_Text_5:
# 158 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Evening. The usual?$"

OldaleTown_Devon_Nurse_Text_6:
# 162 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Night. The usual?$"

OldaleTown_Devon_Nurse_Text_7:
# 172 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Good morning, and welcome back. Need\n"
	.string "some healing, d-... {COLOR LIGHT_GRAY}{SHADOW WHITE}sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} DEAR\l"
	.string "customer?$"

OldaleTown_Devon_Nurse_Text_8:
# 180 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Good day, and welcome back. Need some\n"
	.string "healing, d-... {COLOR LIGHT_GRAY}{SHADOW WHITE}sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "DEAR customer?$"

OldaleTown_Devon_Nurse_Text_9:
# 188 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Good evening, and welcome back. Need\n"
	.string "some healing, d-... {COLOR LIGHT_GRAY}{SHADOW WHITE}sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "DEAR customer?$"

OldaleTown_Devon_Nurse_Text_10:
# 196 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Good night, and welcome back. Need some\n"
	.string "healing, d-... {COLOR LIGHT_GRAY}{SHADOW WHITE}sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "DEAR customer?$"

OldaleTown_Devon_Nurse_Text_11:
# 206 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, {PLAYER}, we're SOO happy to have\n"
	.string "you back! {COLOR LIGHT_GRAY}{SHADOW WHITE}As if...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "May I take your WONDERFUL Pokémon for\n"
	.string "some express healing?$"

OldaleTown_Devon_Nurse_Text_12:
# 218 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Right... just a sec.$"

OldaleTown_Devon_Nurse_Text_13:
# 221 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Alright, let's see.$"

OldaleTown_Devon_Nurse_Text_14:
# 224 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Very well - just a moment, please.$"

OldaleTown_Devon_Nurse_Text_15:
# 232 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "With GREAT pleasure! Here we go!$"

OldaleTown_Devon_Nurse_Text_16:
# 259 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That will be 100¥...$"

OldaleTown_Devon_Nurse_Text_17:
# 269 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "It's done.\n"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Now get out...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_Devon_Nurse_Text_18:
# 273 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thanks. Bye.$"

OldaleTown_Devon_Nurse_Text_19:
# 278 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "They are back to full health! Have a\n"
	.string "good morning.$"

OldaleTown_Devon_Nurse_Text_20:
# 280 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "They are back to full health! Have a\n"
	.string "good day.$"

OldaleTown_Devon_Nurse_Text_21:
# 282 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "They are back to full health! Have a\n"
	.string "good rest of the evening.$"

OldaleTown_Devon_Nurse_Text_22:
# 284 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "They are back to full health! Have a\n"
	.string "good night.$"

OldaleTown_Devon_Nurse_Text_23:
# 297 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm SO sorry for the wait! Please enjoy\n"
	.string "the rest of your morning...! {COLOR LIGHT_GRAY}{SHADOW WHITE}Just not\l"
	.string "here{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

OldaleTown_Devon_Nurse_Text_24:
# 300 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm SO sorry for the wait! Please enjoy\n"
	.string "the rest of your day...! {COLOR LIGHT_GRAY}{SHADOW WHITE}Just not here{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

OldaleTown_Devon_Nurse_Text_25:
# 303 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm SO sorry for the wait! Please enjoy\n"
	.string "the rest of your evening...! {COLOR LIGHT_GRAY}{SHADOW WHITE}Just not\l"
	.string "here{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

OldaleTown_Devon_Nurse_Text_26:
# 306 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm SO sorry for the wait! Please enjoy\n"
	.string "the rest of your night...! {COLOR LIGHT_GRAY}{SHADOW WHITE}Just not here{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

OldaleTown_Devon_Nurse_Text_27:
# 367 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Wait... this is your 10th visit...\p"
	.string "You are now a Bronze Client, so I'm\n"
	.string "contractually obligated to give you\l"
	.string "this.$"

OldaleTown_Devon_Nurse_Text_28:
# 372 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ah, this marks your 25th visit.\p"
	.string "As per the Devon Center Loyalty\n"
	.string "Program, you are now a Silver Client.\p"
	.string "And that means, this is for you.$"

OldaleTown_Devon_Nurse_Text_29:
# 378 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, but please wait, dear customer! This\n"
	.string "is a special occassion - it's the 50th\l"
	.string "time you've used our services! {COLOR LIGHT_GRAY}{SHADOW WHITE}Yay...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "You are now a esteemed Gold Client.\n"
	.string "Please, accept this humble present on\l"
	.string "behalf of Devon Co.!$"

OldaleTown_Devon_Nurse_Text_30:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Before you go, dear {PLAYER} - we\n"
	.string "were wondering if you could spare a few\l"
	.string "minutes for a short customer survey!$"

OldaleTown_Devon_Nurse_Text_31:
# 389 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "We were wondering - what is your\n"
	.string "preference in regards to how our staff\l"
	.string "addresses you?$"

OldaleTown_Devon_Nurse_Text_32:
# 391 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Be yourself$"

OldaleTown_Devon_Nurse_Text_33:
# 391 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Keep it casual$"

OldaleTown_Devon_Nurse_Text_34:
# 391 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Just polite$"

OldaleTown_Devon_Nurse_Text_35:
# 391 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Flattery, please$"

OldaleTown_Devon_Nurse_Text_36:
# 395 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thank the heavens. If I had to kiss\n"
	.string "your ass one more time, I would have\l"
	.string "slammed your head against the counter.$"

OldaleTown_Devon_Nurse_Text_37:
# 401 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Casual... fair enough, I can do that.$"

OldaleTown_Devon_Nurse_Text_38:
# 406 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Great...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I mean, of course! It is duly\n"
	.string "noted.$"

OldaleTown_Devon_Nurse_Text_39:
# 413 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}You're so full of s...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I-I mean...!\p"
	.string "Most definitely - a esteemed customer\n"
	.string "such as you deserves nothing but the\l"
	.string "warmest of treatments!$"

OldaleTown_Devon_Nurse_Text_40:
# 421 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}One day I'll get you...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_Devon_Nurse_Text_41:
# 438 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Wait... you don't have enough pokeyen.\n"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Are you dense...?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Well, I'll write your name in our list of\n"
	.string "defaulters. Before using the machine\l"
	.string "anymore, you'll have to pay what you\l"
	.string "owe.\p"
	.string "Now go out there, and get a job or\n"
	.string "something.$"

OldaleTown_Devon_Nurse_Text_42:
# 443 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Well... it seems you are a bit short.\p"
	.string "You don't need to pay right now, but you\n"
	.string "will need to clear this debt before\l"
	.string "using our services again.$"

OldaleTown_Devon_Nurse_Text_43:
# 448 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Oh... dear customer, I'm afraid your\n"
	.string "funds don't cover the requisite fee.\p"
	.string "If you would be so kind as to pay your\n"
	.string "debt upon your return, that would be\l"
	.string "MOST appreciated.$"

OldaleTown_Devon_Nurse_Text_44:
# 460 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ah, of course, dear {PLAYER} - we will\n"
	.string "gladly upfront the cost for this\l"
	.string "healing session!\p"
	.string "We merely ask you cover this expense on\n"
	.string "your next visit. {COLOR LIGHT_GRAY}{SHADOW WHITE}If you aren't broke\l"
	.string "still.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_Devon_Nurse_Text_45:
# 496 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You have a 100¥ debt from last time you\n"
	.string "used our services, so I'll be taking\l"
	.string "that...$"

OldaleTown_Devon_Nurse_Text_46:
# 505 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Great. Now let's proceed with your\n"
	.string "current heal...$"

OldaleTown_Devon_Nurse_Text_47:
# 511 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Of course... you still don't have enough.\p"
	.string "Look, we're not running a charity here.\n"
	.string "If you want your buddies healed, go get\l"
	.string "some money.$"

OldaleTown_Devon_Nurse_Text_48:
# 515 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Well... you're a bit short on the fee. We\n"
	.string "can't go ahead with the heal.$"

OldaleTown_Devon_Nurse_Text_49:
# 518 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, it would seem you do not have the\n"
	.string "requisite funds... Please, {PLAYER},\l"
	.string "consider visiting when you do!$"

OldaleTown_Devon_Nurse_Text_50:
# 528 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm so sorry, dear {PLAYER}... even\n"
	.string "though you are one of our best\l"
	.string "customers, we cannot upfront the cost\l"
	.string "for more than one heal at a time.\p"
	.string "Therefore, we will be looking forward to\n"
	.string "a more bounteous occassion!$"

OldaleTown_Devon_Nurse_Text_51:
# 565 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Then get off the way.$"

OldaleTown_Devon_Nurse_Text_52:
# 568 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "See you then.$"

OldaleTown_Devon_Nurse_Text_53:
# 571 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Of course - till next time then!$"

OldaleTown_Devon_Nurse_Text_54:
# 581 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Truly? Well, we look forward to your\n"
	.string "next visit, dear customer!$"

OldaleATM_Text_0:
# 615 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hello! I am a Devon Pokeyen Card\n"
	.string "Terminal. Which card will you buy?$"

OldaleATM_Text_1:
# 616 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Gem Card - 1000¥$"

OldaleATM_Text_2:
# 616 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Gold Card - 5000¥$"

OldaleATM_Text_3:
# 616 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Diamond Card - 10000¥$"

OldaleATM_Text_4:
# 616 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Information$"

OldaleATM_Text_5:
# 616 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Leave$"

OldaleATM_Text_6:
# 626 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Transaction Completed. Your card is\n"
	.string "coming out!$"

OldaleATM_Text_7:
# 636 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Error - insufficient funds.$"

OldaleATM_Text_8:
# 644 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Error. This card is only available to\n"
	.string "Bronze Clients.$"

OldaleATM_Text_9:
# 672 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Error. This card is only available to\n"
	.string "Silver Clients.$"

OldaleATM_Text_10:
# 700 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Carrying cash is not only old-fashioned\n"
	.string "- but risky too.\p"
	.string "You may drop it, need to give it after\n"
	.string "losing a battle - even have it mugged\l"
	.string "from you.\p"
	.string "That's where Pokeyen Cards can help!\p"
	.string "Buy them before braving the dangers of\n"
	.string "the world, and keep your funds safe in\l"
	.string "them.\p"
	.string "Then, when you need to buy things, sell\n"
	.string "them for the same amounts you bought\l"
	.string "them for.\p"
	.string "Ease and convenience, all in small and\n"
	.string "charming designs. That's Pokeyen Cards\l"
	.string "for you!$"

OldaleTown_Mart_Clerk_Text_0:
# 717 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Welcome to Devon Mall! How may I help\n"
	.string "you?$"

OldaleTown_Mart_Clerk_Text_1:
# 726 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Wait, I know what you are thinking...\n"
	.string "that I have no BALLS!\p"
	.string "W-why are you looking at me like that!?\n"
	.string "I mean Devon Balls, of course!$"

OldaleTown_Mart_Clerk_Text_2:
# 732 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm so very sorry, sir... you must have\n"
	.string "realized our stock is quite lacking at\l"
	.string "present.$"

OldaleTown_Mart_Clerk_Text_3:
# 740 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But it's not our fault... since those\n"
	.string "Rebels invaded the Warehouse, the\l"
	.string "supply trucks have stopped coming.$"

OldaleTown_Mart_Clerk_Text_4:
# 746 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I hate to admit it, but we could be\n"
	.string "waiting ages for Devon to send enough\l"
	.string "guards to take care of them.\p"
	.string "If only a strong, selfless trainer came\n"
	.string "around... but those are so scarce\l"
	.string "lately!$"

OldaleTown_Mart_PostWarehouse_Text_0:
# 758 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thank you for your patronage - and for\n"
	.string "your help liberating our warehouse!$"

OldalePokeCenterOldLady_Text_0:
# 777 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "It's so sad... it's mostly kids and old\n"
	.string "people like me round these parts.\p"
	.string "Most people your age were sent to the\n"
	.string "war, and never returned.\p"
	.string "Like my... ah, I'm sorry. vent to\n"
	.string "strangers like this...$"

OldalePokeCenterInjuredGuyDay_Text_0:
# 786 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I miss the days when Pokémon\n"
	.string "healthcare was free…\p"
	.string "Then again, Safemon are so weak, they\n"
	.string "barely get hurt when fighting each\l"
	.string "other.$"

OldalePokeCenterInjuredGuyNight_Text_0:
# 794 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can have it all. I'm not hungry.$"

OldalePokeCenterInjuredGuyNight_Text_1:
# 796 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Grrr...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

OldalePokeCenterMapBoyDay_Text_0:
# 804 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "In school we learnt that the area from\n"
	.string "Route 103 to Route 104 is called the\l"
	.string "{COLOR GREEN}'Rebel Zone'{COLOR DARK_GRAY}.\p"
	.string "It's a dangerous place where people who\n"
	.string "hate Devon have gathered, and you need\l"
	.string "a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY} to get out of it.$"

OldalePokeCenterMapBoyNight_Text_0:
# 813 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Are you sure you don't want any, dad?\n"
	.string "It's pretty good!$"

OldalePokeCenterInnSign_Text_0:
# 819 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "To 2F - Inn Rooms.$"

OldalePokeCenterBookshelf_Text_0:
# 825 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The shelf is full of magazines with ads\n"
	.string "about Devon products.$"

OldalePokeCenterTVKid_Text_0:
# 832 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I've been watching this TV for half an\n"
	.string "hour, and there's been nothing but\l"
	.string "ads...\p"
	.string "They say you can watch actual programs\n"
	.string "from the TVs in the inn rooms, but my\l"
	.string "allowance is not enough to rent a room...$"

Devonballad_Text_0:
# 866 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Enhanced catch rate. Better grip. Light\n"
	.string "as a feather.\p"
	.string "In short: engineered to perfection.\p"
	.string "Save time choosing the perfect ball,\n"
	.string "because it's always the same - the\l"
	.string "Devon Ball.$"

Devonballad_Text_1:
# 872 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Devon Ball. The only ball with no catch.$"

Devotionad_Text_0:
# 878 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Health points, Power Points, Status\n"
	.string "Ailments... keeping your companions\l"
	.string "healthy requires a full bag!\p"
	.string "Is there not an easier way?\n"
	.string "Devon Co.'s answer is... yes!$"

Devotionad_Text_1:
# 883 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Our newest potion, 'Devotion', is the\n"
	.string "only medicine your Pokémon will ever\l"
	.string "need.\p"
	.string "Only for 1000¥, now available at Devon\n"
	.string "Centers all over Hoenn!\p"
	.string "Devotion - the only potion devoted to\n"
	.string "health.\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Side effects not tested on all species.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Safemonad_Text_0:
# 895 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Power. Volatility. Danger.\n"
	.string "Those are the defining traits of\l"
	.string "Pokémon.$"

Safemonad_Text_1:
# 899 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Control. Trust. Safety.\n"
	.string "Those are for Safemon.$"

Safemonad_Text_2:
# 901 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "We at Devon choose the latter. And you?$"

Lifeindustriesad_Text_0:
# 907 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "This is Davis. Every morning, in Route\n"
	.string "116, Davis wakes up before dawn to care\l"
	.string "for his crops, tend to his farm, and\l"
	.string "create the best produce in Hoenn.$"

Lifeindustriesad_Text_1:
# 912 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The same produce that us, in Devon Life\n"
	.string "Industries, take fresh from his land,\l"
	.string "directly to your plate.$"

Lifeindustriesad_Text_2:
# 917 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Devon Life Industries. Quality food,\n"
	.string "for quality people.$"

Devoncenterad_Text_0:
# 925 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "When you are tired. When you are ill.\n"
	.string "When you are scared.\p"
	.string "Whenever you are in need, Devon Centers\n"
	.string "are your one safe haven.$"

Devoncenterad_Text_1:
# 930 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Devon Centers. Keeping you safe, 24/7.\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Fees may apply. Loitering not allowed.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Rebelhackersad_Text_0:
# 939 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "We interrupt this commercial broadcast\n"
	.string "to announce our signal is be-1ng\l"
	.string "c0mPromi!iis¥Ed b-bY R3b-… BZZT...$"

Rebelhackersad_Text_1:
# 944 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hey. You. Are you sick of Safemon? Me\n"
	.string "too. Because they suck.$"

Rebelhackersad_Text_2:
# 948 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Everyday, Devon converts more than 100\n"
	.string "Pokémon into Safemon.\p"
	.string "But if you help us, we can get them down\n"
	.string "to 0.$"

Rebelhackersad_Text_3:
# 953 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "If you are a coder - join us. If you\n"
	.string "aren't, we'll make you one.$"

Rebelhackersad_Text_4:
# 956 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Join the Rebel Hackers today. For a\n"
	.string "world where we decide.$"

Devonnetad_Text_0:
# 964 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "In this day and age, people move fast.\p"
	.string "So fast, you can feel you can't keep up\n"
	.string "with their lives. Like you're being left\l"
	.string "behind.$"

Devonnetad_Text_1:
# 970 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "If you're feeling like that - then Devon\n"
	.string "Net is for you!\p"
	.string "Devon Net is the place to check what\n"
	.string "your loved ones are up to - and meet\l"
	.string "new ones too!$"

Devonnetad_Text_2:
# 976 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Devon Net - keeping you closer to\n"
	.string "yours.$"

Devongruntad_Text_0:
# 982 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Do you seek a stable job in these times\n"
	.string "of uncertainty?\p"
	.string "One when you can make a difference in\n"
	.string "getting Hoenn in a better shape?$"

Devongruntad_Text_1:
# 987 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Then enlist in the Devon Guards today.\n"
	.string "First 100 recruits get their own\l"
	.string "Manchine!$"

Devongruntad_Text_2:
# 988 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}All Manchines will be collected by Devon\n"
	.string "Co. upon contract expiration.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Azuresortad_Text_0:
# 996 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Don't you hate it when you go to the\n"
	.string "beach, and the sea is deadly poisoned?\p"
	.string "\p"
	.string "Devon Co. hears you, and is thus proud\n"
	.string "to present...$"

Azuresortad_Text_1:
# 1001 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The Azuresort!\p"
	.string "Exciting water sports, relaxing bathing\n"
	.string "spots - all in the cleanest bathing\l"
	.string "spot in all of Hoenn.\p"
	.string "Azuresort. Because there's never too\n"
	.string "much water.$"
