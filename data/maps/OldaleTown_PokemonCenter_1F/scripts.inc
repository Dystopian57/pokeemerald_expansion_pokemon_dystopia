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


OldaleRivalRespawn::
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	clearflag rivalappearsinOldale
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag OldaleDevonFightLost
	return


OldaleDevonCenterTrashCan1F::
# 101 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 103 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset oldaledevoncentertrashcan1f, OldaleDevonCenterTrashCan1F_2
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleDevonCenterTrashCan1F_Text_1
OldaleDevonCenterTrashCan1F_1:
# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	return

OldaleDevonCenterTrashCan1F_2:
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleDevonCenterTrashCan1F_Text_0
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_EON_TICKET
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag oldaledevoncentertrashcan1f
	goto OldaleDevonCenterTrashCan1F_1


CarRebel::
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 9, CarRebel_Movement_0
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox CarRebel_Text_0
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 9, CarRebel_Movement_1
# 119 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldaleTown_Devon_Nurse::
# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 127 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choserudenurse, OldaleTown_Devon_Nurse_2
OldaleTown_Devon_Nurse_1:
# 131 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenormalnurse, OldaleTown_Devon_Nurse_5
OldaleTown_Devon_Nurse_4:
# 135 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenicenurse, OldaleTown_Devon_Nurse_8
OldaleTown_Devon_Nurse_7:
# 139 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choseflatterynurse, OldaleTown_Devon_Nurse_11
# 144 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	GetGameStat GAME_STAT_USED_POKECENTER
# 145 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq OldaleTown_Devon_Nurse_18
OldaleTown_Devon_Nurse_17:
# 149 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 26
	goto_if_eq OldaleTown_Devon_Nurse_27
OldaleTown_Devon_Nurse_26:
# 152 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 51
	goto_if_eq OldaleTown_Devon_Nurse_39
OldaleTown_Devon_Nurse_38:
# 157 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_50
OldaleTown_Devon_Nurse_10:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_15
OldaleTown_Devon_Nurse_14:
# 185 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_21
OldaleTown_Devon_Nurse_20:
# 222 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_30
OldaleTown_Devon_Nurse_29:
# 231 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_Devon_Nurse_42
OldaleTown_Devon_Nurse_41:
# 585 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_Devon_Nurse_53
OldaleTown_Devon_Nurse_52:
# 630 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
finishhealscript:
# 631 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return

OldaleTown_Devon_Nurse_2:
# 129 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto startrudenursegreeting
	goto OldaleTown_Devon_Nurse_1

OldaleTown_Devon_Nurse_5:
# 133 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto startnormalnursegreeting
	goto OldaleTown_Devon_Nurse_4

OldaleTown_Devon_Nurse_8:
# 137 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto startnicenursegreeting
	goto OldaleTown_Devon_Nurse_7

OldaleTown_Devon_Nurse_11:
# 141 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto startflatterynursegreeting
	goto OldaleTown_Devon_Nurse_10

OldaleTown_Devon_Nurse_15:
# 166 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
startnormalnursegreeting:
# 167 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 168 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq OldaleTown_Devon_Nurse_24
OldaleTown_Devon_Nurse_23:
# 172 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq OldaleTown_Devon_Nurse_36
OldaleTown_Devon_Nurse_35:
# 176 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq OldaleTown_Devon_Nurse_48
OldaleTown_Devon_Nurse_47:
# 180 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Devon_Nurse_61
	goto OldaleTown_Devon_Nurse_14

OldaleTown_Devon_Nurse_18:
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_DEVONCENTERLOYALTY, 1
	goto OldaleTown_Devon_Nurse_17

OldaleTown_Devon_Nurse_21:
# 187 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
startnicenursegreeting:
# 188 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 189 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq OldaleTown_Devon_Nurse_33
OldaleTown_Devon_Nurse_32:
# 197 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq OldaleTown_Devon_Nurse_45
OldaleTown_Devon_Nurse_44:
# 205 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq OldaleTown_Devon_Nurse_59
OldaleTown_Devon_Nurse_58:
# 213 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Devon_Nurse_72
	goto OldaleTown_Devon_Nurse_20

OldaleTown_Devon_Nurse_24:
# 169 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_3
# 170 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_23

OldaleTown_Devon_Nurse_27:
# 150 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_DEVONCENTERLOYALTY, 2
	goto OldaleTown_Devon_Nurse_26

OldaleTown_Devon_Nurse_30:
# 224 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
startflatterynursegreeting:
# 225 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_11
# 228 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_29

OldaleTown_Devon_Nurse_33:
# 191 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_7
# 194 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_32

OldaleTown_Devon_Nurse_36:
# 173 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_4
# 174 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_35

OldaleTown_Devon_Nurse_39:
# 153 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_DEVONCENTERLOYALTY, 3
	goto OldaleTown_Devon_Nurse_38

OldaleTown_Devon_Nurse_42:
# 233 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset devoncenterdebt, OldaleTown_Devon_Nurse_55
# 517 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 518 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_45
# 520 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 100
# 521 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleTown_Devon_Nurse_70
OldaleTown_Devon_Nurse_69:
# 531 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_Devon_Nurse_80
	goto OldaleTown_Devon_Nurse_41

OldaleTown_Devon_Nurse_45:
# 199 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_8
# 202 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_44

OldaleTown_Devon_Nurse_48:
# 177 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_5
# 178 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_47

OldaleTown_Devon_Nurse_50:
# 159 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
startrudenursegreeting:
# 160 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_0
# 161 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_10

OldaleTown_Devon_Nurse_53:
# 587 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_64
OldaleTown_Devon_Nurse_63:
# 590 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_75
OldaleTown_Devon_Nurse_74:
# 593 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_83
OldaleTown_Devon_Nurse_82:
# 599 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_92
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_55:
# 236 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_67
OldaleTown_Devon_Nurse_66:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_78
OldaleTown_Devon_Nurse_77:
# 242 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_86
OldaleTown_Devon_Nurse_85:
# 246 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_103
OldaleTown_Devon_Nurse_101:
# 253 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_122
OldaleTown_Devon_Nurse_120:
# 257 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_135
OldaleTown_Devon_Nurse_133:
# 261 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_156
OldaleTown_Devon_Nurse_154:
# 265 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_170
OldaleTown_Devon_Nurse_168:
# 270 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
healpokes:
# 271 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidefollower 0
# 272 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_0
# 273 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 274 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 275 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special HealPlayerParty
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, CarRebel_Movement_1
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 278 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 279 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_16
# 281 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 100
# 282 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleTown_Devon_Nurse_179
OldaleTown_Devon_Nurse_178:
# 453 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_Devon_Nurse_186
	goto OldaleTown_Devon_Nurse_41

OldaleTown_Devon_Nurse_59:
# 207 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_9
# 210 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_58

OldaleTown_Devon_Nurse_61:
# 181 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_6
# 182 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_14

OldaleTown_Devon_Nurse_64:
# 588 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_51
	goto OldaleTown_Devon_Nurse_63

OldaleTown_Devon_Nurse_67:
# 237 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_12
	goto OldaleTown_Devon_Nurse_66

OldaleTown_Devon_Nurse_70:
# 522 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 100
# 523 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 524 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 525 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 526 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 527 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_46
# 528 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	clearflag devoncenterdebt
# 529 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto healpokes
	goto OldaleTown_Devon_Nurse_69

OldaleTown_Devon_Nurse_72:
# 215 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_10
# 218 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_1, OldaleTown_Devon_Nurse_Text_2
	goto OldaleTown_Devon_Nurse_20

OldaleTown_Devon_Nurse_75:
# 591 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_52
	goto OldaleTown_Devon_Nurse_74

OldaleTown_Devon_Nurse_78:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_13
	goto OldaleTown_Devon_Nurse_77

OldaleTown_Devon_Nurse_80:
# 532 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 533 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_89
OldaleTown_Devon_Nurse_88:
# 537 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_113
OldaleTown_Devon_Nurse_112:
# 540 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_126
OldaleTown_Devon_Nurse_125:
# 546 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_140
OldaleTown_Devon_Nurse_138:
# 557 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_161
OldaleTown_Devon_Nurse_159:
# 562 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_175
OldaleTown_Devon_Nurse_173:
# 566 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_183
OldaleTown_Devon_Nurse_181:
# 571 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_193
OldaleTown_Devon_Nurse_191:
# 579 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto finishhealscript
	goto OldaleTown_Devon_Nurse_41

OldaleTown_Devon_Nurse_83:
# 594 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_53
# 595 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 596 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_82

OldaleTown_Devon_Nurse_86:
# 243 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_14
	goto OldaleTown_Devon_Nurse_85

OldaleTown_Devon_Nurse_89:
# 534 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_47
	goto OldaleTown_Devon_Nurse_88

OldaleTown_Devon_Nurse_91:
# 604 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_54
# 605 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 606 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 609 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_117
OldaleTown_Devon_Nurse_115:
# 613 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_130
OldaleTown_Devon_Nurse_128:
# 617 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_151
OldaleTown_Devon_Nurse_149:
# 621 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_165
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_92:
# 600 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choserudenurse, OldaleTown_Devon_Nurse_94
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_94:
# 601 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenormalnurse, OldaleTown_Devon_Nurse_96
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_96:
# 602 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenicenurse, OldaleTown_Devon_Nurse_98
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_98:
# 603 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choseflatterynurse, OldaleTown_Devon_Nurse_91
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_102:
# 251 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_15
	goto OldaleTown_Devon_Nurse_101

OldaleTown_Devon_Nurse_103:
# 247 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choserudenurse, OldaleTown_Devon_Nurse_105
	goto OldaleTown_Devon_Nurse_101

OldaleTown_Devon_Nurse_105:
# 248 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenormalnurse, OldaleTown_Devon_Nurse_107
	goto OldaleTown_Devon_Nurse_101

OldaleTown_Devon_Nurse_107:
# 249 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenicenurse, OldaleTown_Devon_Nurse_109
	goto OldaleTown_Devon_Nurse_101

OldaleTown_Devon_Nurse_109:
# 250 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choseflatterynurse, OldaleTown_Devon_Nurse_102
	goto OldaleTown_Devon_Nurse_101

OldaleTown_Devon_Nurse_113:
# 538 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_48
	goto OldaleTown_Devon_Nurse_112

OldaleTown_Devon_Nurse_116:
# 610 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_51
	goto OldaleTown_Devon_Nurse_115

OldaleTown_Devon_Nurse_117:
# 609 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choserudenurse, OldaleTown_Devon_Nurse_116
	goto OldaleTown_Devon_Nurse_115

OldaleTown_Devon_Nurse_121:
# 254 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_12
	goto OldaleTown_Devon_Nurse_120

OldaleTown_Devon_Nurse_122:
# 253 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choserudenurse, OldaleTown_Devon_Nurse_121
	goto OldaleTown_Devon_Nurse_120

OldaleTown_Devon_Nurse_126:
# 541 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_49
# 543 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 544 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_125

OldaleTown_Devon_Nurse_129:
# 614 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_52
	goto OldaleTown_Devon_Nurse_128

OldaleTown_Devon_Nurse_130:
# 613 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenormalnurse, OldaleTown_Devon_Nurse_129
	goto OldaleTown_Devon_Nurse_128

OldaleTown_Devon_Nurse_134:
# 258 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_13
	goto OldaleTown_Devon_Nurse_133

OldaleTown_Devon_Nurse_135:
# 257 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenormalnurse, OldaleTown_Devon_Nurse_134
	goto OldaleTown_Devon_Nurse_133

OldaleTown_Devon_Nurse_139:
# 551 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_50
# 553 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 554 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_138

OldaleTown_Devon_Nurse_140:
# 547 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choserudenurse, OldaleTown_Devon_Nurse_142
	goto OldaleTown_Devon_Nurse_138

OldaleTown_Devon_Nurse_142:
# 548 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenormalnurse, OldaleTown_Devon_Nurse_144
	goto OldaleTown_Devon_Nurse_138

OldaleTown_Devon_Nurse_144:
# 549 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenicenurse, OldaleTown_Devon_Nurse_146
	goto OldaleTown_Devon_Nurse_138

OldaleTown_Devon_Nurse_146:
# 550 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choseflatterynurse, OldaleTown_Devon_Nurse_139
	goto OldaleTown_Devon_Nurse_138

OldaleTown_Devon_Nurse_150:
# 618 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_53
	goto OldaleTown_Devon_Nurse_149

OldaleTown_Devon_Nurse_151:
# 617 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenicenurse, OldaleTown_Devon_Nurse_150
	goto OldaleTown_Devon_Nurse_149

OldaleTown_Devon_Nurse_155:
# 262 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_14
	goto OldaleTown_Devon_Nurse_154

OldaleTown_Devon_Nurse_156:
# 261 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenicenurse, OldaleTown_Devon_Nurse_155
	goto OldaleTown_Devon_Nurse_154

OldaleTown_Devon_Nurse_160:
# 558 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_47
	goto OldaleTown_Devon_Nurse_159

OldaleTown_Devon_Nurse_161:
# 557 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choserudenurse, OldaleTown_Devon_Nurse_160
	goto OldaleTown_Devon_Nurse_159

OldaleTown_Devon_Nurse_164:
# 622 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_54
# 623 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 624 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_165:
# 621 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choseflatterynurse, OldaleTown_Devon_Nurse_164
	goto OldaleTown_Devon_Nurse_52

OldaleTown_Devon_Nurse_169:
# 266 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_15
	goto OldaleTown_Devon_Nurse_168

OldaleTown_Devon_Nurse_170:
# 265 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choseflatterynurse, OldaleTown_Devon_Nurse_169
	goto OldaleTown_Devon_Nurse_168

OldaleTown_Devon_Nurse_174:
# 563 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_48
	goto OldaleTown_Devon_Nurse_173

OldaleTown_Devon_Nurse_175:
# 562 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenormalnurse, OldaleTown_Devon_Nurse_174
	goto OldaleTown_Devon_Nurse_173

OldaleTown_Devon_Nurse_179:
# 283 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 100
# 284 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 285 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 286 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 287 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 288 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_189
OldaleTown_Devon_Nurse_188:
# 292 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_200
OldaleTown_Devon_Nurse_199:
# 295 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_206
OldaleTown_Devon_Nurse_205:
# 310 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_213
OldaleTown_Devon_Nurse_211:
# 336 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_238
OldaleTown_Devon_Nurse_236:
# 341 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_254
OldaleTown_Devon_Nurse_252:
# 345 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_270
OldaleTown_Devon_Nurse_268:
# 359 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_286
OldaleTown_Devon_Nurse_284:
# 381 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 382 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 384 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	GetGameStat GAME_STAT_USED_POKECENTER
# 385 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 386 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq OldaleTown_Devon_Nurse_301
OldaleTown_Devon_Nurse_300:
# 392 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_eq OldaleTown_Devon_Nurse_310
OldaleTown_Devon_Nurse_309:
# 398 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 50
	goto_if_eq OldaleTown_Devon_Nurse_319
OldaleTown_Devon_Nurse_318:
# 407 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 75
	goto_if_eq OldaleTown_Devon_Nurse_328
OldaleTown_Devon_Nurse_327:
# 448 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto finishhealscript
# 450 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 451 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement
	goto OldaleTown_Devon_Nurse_178

OldaleTown_Devon_Nurse_182:
# 567 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_49
	goto OldaleTown_Devon_Nurse_181

OldaleTown_Devon_Nurse_183:
# 566 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenicenurse, OldaleTown_Devon_Nurse_182
	goto OldaleTown_Devon_Nurse_181

OldaleTown_Devon_Nurse_186:
# 454 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_2
# 455 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 456 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 458 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_197
OldaleTown_Devon_Nurse_196:
# 463 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_203
OldaleTown_Devon_Nurse_202:
# 468 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_209
OldaleTown_Devon_Nurse_208:
# 476 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_227
OldaleTown_Devon_Nurse_225:
# 489 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_249
OldaleTown_Devon_Nurse_247:
# 495 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_265
OldaleTown_Devon_Nurse_263:
# 501 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_281
OldaleTown_Devon_Nurse_279:
# 507 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_297
OldaleTown_Devon_Nurse_295:
# 513 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag devoncenterdebt
# 514 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto finishhealscript
	goto OldaleTown_Devon_Nurse_41

OldaleTown_Devon_Nurse_189:
# 289 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_17
	goto OldaleTown_Devon_Nurse_188

OldaleTown_Devon_Nurse_192:
# 572 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_50
# 574 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 575 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_191

OldaleTown_Devon_Nurse_193:
# 571 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choseflatterynurse, OldaleTown_Devon_Nurse_192
	goto OldaleTown_Devon_Nurse_191

OldaleTown_Devon_Nurse_197:
# 459 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_41
	goto OldaleTown_Devon_Nurse_196

OldaleTown_Devon_Nurse_200:
# 293 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_18
	goto OldaleTown_Devon_Nurse_199

OldaleTown_Devon_Nurse_203:
# 464 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_42
	goto OldaleTown_Devon_Nurse_202

OldaleTown_Devon_Nurse_206:
# 296 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 297 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq OldaleTown_Devon_Nurse_223
OldaleTown_Devon_Nurse_222:
# 299 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq OldaleTown_Devon_Nurse_245
OldaleTown_Devon_Nurse_244:
# 301 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq OldaleTown_Devon_Nurse_261
OldaleTown_Devon_Nurse_260:
# 303 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Devon_Nurse_277
OldaleTown_Devon_Nurse_276:
# 305 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 306 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_205

OldaleTown_Devon_Nurse_209:
# 469 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_43
# 472 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 473 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_208

OldaleTown_Devon_Nurse_212:
# 315 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 316 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq OldaleTown_Devon_Nurse_242
OldaleTown_Devon_Nurse_241:
# 319 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq OldaleTown_Devon_Nurse_258
OldaleTown_Devon_Nurse_257:
# 322 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq OldaleTown_Devon_Nurse_274
OldaleTown_Devon_Nurse_273:
# 325 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Devon_Nurse_293
OldaleTown_Devon_Nurse_292:
# 329 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 330 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 331 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 332 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_211

OldaleTown_Devon_Nurse_213:
# 311 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choserudenurse, OldaleTown_Devon_Nurse_215
	goto OldaleTown_Devon_Nurse_211

OldaleTown_Devon_Nurse_215:
# 312 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenormalnurse, OldaleTown_Devon_Nurse_217
	goto OldaleTown_Devon_Nurse_211

OldaleTown_Devon_Nurse_217:
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenicenurse, OldaleTown_Devon_Nurse_219
	goto OldaleTown_Devon_Nurse_211

OldaleTown_Devon_Nurse_219:
# 314 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choseflatterynurse, OldaleTown_Devon_Nurse_212
	goto OldaleTown_Devon_Nurse_211

OldaleTown_Devon_Nurse_223:
# 298 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_19
	goto OldaleTown_Devon_Nurse_222

OldaleTown_Devon_Nurse_226:
# 481 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_44
# 483 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 484 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 485 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 486 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_225

OldaleTown_Devon_Nurse_227:
# 477 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choserudenurse, OldaleTown_Devon_Nurse_229
	goto OldaleTown_Devon_Nurse_225

OldaleTown_Devon_Nurse_229:
# 478 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenormalnurse, OldaleTown_Devon_Nurse_231
	goto OldaleTown_Devon_Nurse_225

OldaleTown_Devon_Nurse_231:
# 479 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset chosenicenurse, OldaleTown_Devon_Nurse_233
	goto OldaleTown_Devon_Nurse_225

OldaleTown_Devon_Nurse_233:
# 480 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset choseflatterynurse, OldaleTown_Devon_Nurse_226
	goto OldaleTown_Devon_Nurse_225

OldaleTown_Devon_Nurse_237:
# 337 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_17
	goto OldaleTown_Devon_Nurse_236

OldaleTown_Devon_Nurse_238:
# 336 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choserudenurse, OldaleTown_Devon_Nurse_237
	goto OldaleTown_Devon_Nurse_236

OldaleTown_Devon_Nurse_242:
# 317 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_23
	goto OldaleTown_Devon_Nurse_241

OldaleTown_Devon_Nurse_245:
# 300 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_20
	goto OldaleTown_Devon_Nurse_244

OldaleTown_Devon_Nurse_248:
# 490 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_41
	goto OldaleTown_Devon_Nurse_247

OldaleTown_Devon_Nurse_249:
# 489 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choserudenurse, OldaleTown_Devon_Nurse_248
	goto OldaleTown_Devon_Nurse_247

OldaleTown_Devon_Nurse_253:
# 342 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_18
	goto OldaleTown_Devon_Nurse_252

OldaleTown_Devon_Nurse_254:
# 341 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenormalnurse, OldaleTown_Devon_Nurse_253
	goto OldaleTown_Devon_Nurse_252

OldaleTown_Devon_Nurse_258:
# 320 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_24
	goto OldaleTown_Devon_Nurse_257

OldaleTown_Devon_Nurse_261:
# 302 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_21
	goto OldaleTown_Devon_Nurse_260

OldaleTown_Devon_Nurse_264:
# 496 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_42
	goto OldaleTown_Devon_Nurse_263

OldaleTown_Devon_Nurse_265:
# 495 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenormalnurse, OldaleTown_Devon_Nurse_264
	goto OldaleTown_Devon_Nurse_263

OldaleTown_Devon_Nurse_269:
# 346 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 347 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq OldaleTown_Devon_Nurse_290
OldaleTown_Devon_Nurse_289:
# 349 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq OldaleTown_Devon_Nurse_307
OldaleTown_Devon_Nurse_306:
# 351 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq OldaleTown_Devon_Nurse_316
OldaleTown_Devon_Nurse_315:
# 353 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Devon_Nurse_325
OldaleTown_Devon_Nurse_324:
# 355 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 356 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_268

OldaleTown_Devon_Nurse_270:
# 345 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenicenurse, OldaleTown_Devon_Nurse_269
	goto OldaleTown_Devon_Nurse_268

OldaleTown_Devon_Nurse_274:
# 323 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_25
	goto OldaleTown_Devon_Nurse_273

OldaleTown_Devon_Nurse_277:
# 304 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_22
	goto OldaleTown_Devon_Nurse_276

OldaleTown_Devon_Nurse_280:
# 502 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_43
	goto OldaleTown_Devon_Nurse_279

OldaleTown_Devon_Nurse_281:
# 501 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set chosenicenurse, OldaleTown_Devon_Nurse_280
	goto OldaleTown_Devon_Nurse_279

OldaleTown_Devon_Nurse_285:
# 360 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq OldaleTown_Devon_Nurse_304
OldaleTown_Devon_Nurse_303:
# 363 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq OldaleTown_Devon_Nurse_313
OldaleTown_Devon_Nurse_312:
# 366 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq OldaleTown_Devon_Nurse_322
OldaleTown_Devon_Nurse_321:
# 369 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Devon_Nurse_331
OldaleTown_Devon_Nurse_330:
# 372 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 373 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 374 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 375 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 376 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_284

OldaleTown_Devon_Nurse_286:
# 359 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choseflatterynurse, OldaleTown_Devon_Nurse_285
	goto OldaleTown_Devon_Nurse_284

OldaleTown_Devon_Nurse_290:
# 348 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_19
	goto OldaleTown_Devon_Nurse_289

OldaleTown_Devon_Nurse_293:
# 326 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_26
# 328 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	goto OldaleTown_Devon_Nurse_292

OldaleTown_Devon_Nurse_296:
# 508 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_44
	goto OldaleTown_Devon_Nurse_295

OldaleTown_Devon_Nurse_297:
# 507 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set choseflatterynurse, OldaleTown_Devon_Nurse_296
	goto OldaleTown_Devon_Nurse_295

OldaleTown_Devon_Nurse_301:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_27
# 389 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	givedecoration DECOR_BALL_CUSHION
# 390 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_DEVONCENTERLOYALTY, 1
	goto OldaleTown_Devon_Nurse_300

OldaleTown_Devon_Nurse_304:
# 361 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_23
	goto OldaleTown_Devon_Nurse_303

OldaleTown_Devon_Nurse_307:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_20
	goto OldaleTown_Devon_Nurse_306

OldaleTown_Devon_Nurse_310:
# 393 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_28
# 395 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	givedecoration DECOR_AZURILL_DOLL
# 396 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_DEVONCENTERLOYALTY, 2
	goto OldaleTown_Devon_Nurse_309

OldaleTown_Devon_Nurse_313:
# 364 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_24
	goto OldaleTown_Devon_Nurse_312

OldaleTown_Devon_Nurse_316:
# 352 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_21
	goto OldaleTown_Devon_Nurse_315

OldaleTown_Devon_Nurse_319:
# 399 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_29
# 402 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	givedecoration DECOR_FIRE_BLAST_MAT
# 403 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 404 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 405 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_DEVONCENTERLOYALTY, 3
	goto OldaleTown_Devon_Nurse_318

OldaleTown_Devon_Nurse_322:
# 367 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_25
	goto OldaleTown_Devon_Nurse_321

OldaleTown_Devon_Nurse_325:
# 354 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_22
	goto OldaleTown_Devon_Nurse_324

OldaleTown_Devon_Nurse_328:
# 408 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_30
# 410 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_31
# 412 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_Devon_Nurse_Text_32, OldaleTown_Devon_Nurse_Text_33, OldaleTown_Devon_Nurse_Text_34, OldaleTown_Devon_Nurse_Text_35
# 415 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_Devon_Nurse_334
OldaleTown_Devon_Nurse_333:
# 421 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_Devon_Nurse_337
OldaleTown_Devon_Nurse_336:
# 426 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleTown_Devon_Nurse_340
OldaleTown_Devon_Nurse_339:
# 433 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldaleTown_Devon_Nurse_342
	goto OldaleTown_Devon_Nurse_327

OldaleTown_Devon_Nurse_331:
# 370 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_26
	goto OldaleTown_Devon_Nurse_330

OldaleTown_Devon_Nurse_334:
# 416 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_36
# 418 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag choserudenurse
	goto OldaleTown_Devon_Nurse_333

OldaleTown_Devon_Nurse_337:
# 422 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_37
# 423 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag chosenormalnurse
	goto OldaleTown_Devon_Nurse_336

OldaleTown_Devon_Nurse_340:
# 427 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_38
# 428 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag chosenicenurse
# 429 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 430 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
	goto OldaleTown_Devon_Nurse_339

OldaleTown_Devon_Nurse_342:
# 434 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_39
# 437 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 438 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 439 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 440 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 1
# 441 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag choseflatterynurse
# 442 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_40
	goto OldaleTown_Devon_Nurse_327


OldaleATM::
# 636 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 637 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 638 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_0
# 639 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, OldaleATM_Text_1, OldaleATM_Text_2, OldaleATM_Text_3, OldaleATM_Text_4, OldaleATM_Text_5
# 641 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleATM_2
OldaleATM_1:
# 664 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleATM_5
OldaleATM_4:
# 692 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleATM_11
OldaleATM_10:
# 722 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldaleATM_17
OldaleATM_16:
# 729 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
endofatm:
# 730 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return

OldaleATM_2:
# 642 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 1000
# 643 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleATM_7
# 658 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_FAILURE
# 659 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_7
	goto OldaleATM_1

OldaleATM_5:
# 665 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_lt OldaleATM_13
# 671 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 5000
# 672 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleATM_22
# 687 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_FAILURE
# 688 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_7
	goto OldaleATM_4

OldaleATM_7:
# 644 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 645 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 1000
# 646 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 647 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 648 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 649 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_6
# 650 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 651 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 652 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 653 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_STRAWBERRY_SWEET
# 654 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto endofatm
	goto OldaleATM_1

OldaleATM_11:
# 693 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_lt OldaleATM_19
# 699 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 10000
# 700 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleATM_25
# 716 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_FAILURE
# 717 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_7
	goto OldaleATM_10

OldaleATM_13:
# 666 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_FAILURE
# 667 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_8
	goto OldaleATM_4

OldaleATM_17:
# 723 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_11
	goto OldaleATM_16

OldaleATM_19:
# 694 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_FAILURE
# 695 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_10
	goto OldaleATM_10

OldaleATM_22:
# 673 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 674 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 5000
# 675 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 676 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 677 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 678 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_9
# 679 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 680 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 681 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 682 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_BERRY_SWEET
# 683 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto endofatm
	goto OldaleATM_4

OldaleATM_25:
# 701 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 702 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 10000
# 703 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 704 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 705 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 706 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleATM_Text_9
# 707 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 708 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 709 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 710 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 711 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_CLOVER_SWEET
# 712 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto endofatm
	goto OldaleATM_10


OldaleTown_Mart_Clerk::
# 736 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 737 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 738 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 5, CarRebel_Movement_0
# 739 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 10, CarRebel_Movement_0
# 740 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_0
# 741 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 742 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set oldalewarehouserebelscleared, OldaleTown_Mart_PostWarehouse
# 743 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_PreWarehouse
# 745 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set oldalecenterwarehousecomplaint, OldaleTown_Mart_Clerk_2
OldaleTown_Mart_Clerk_1:
# 747 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 748 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq OldaleTown_Mart_Clerk_5
# 753 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 754 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleTown_Mart_Clerk_9
OldaleTown_Mart_Clerk_8:
# 757 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleTown_Mart_Clerk_11
OldaleTown_Mart_Clerk_4:
# 761 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 5, OldaleTown_Mart_Clerk_Movement_0
# 762 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 10, OldaleTown_Mart_Clerk_Movement_0
# 763 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_3
# 766 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 5, CarRebel_Movement_0
# 767 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 10, CarRebel_Movement_0
# 769 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_4
# 772 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag oldalecenterwarehousecomplaint
# 773 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
endofoldalemartclerk:
# 774 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_Mart_Clerk_2:
# 746 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto endofoldalemartclerk
	goto OldaleTown_Mart_Clerk_1

OldaleTown_Mart_Clerk_5:
# 749 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_1
	goto OldaleTown_Mart_Clerk_4

OldaleTown_Mart_Clerk_9:
# 755 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_2
	goto OldaleTown_Mart_Clerk_8

OldaleTown_Mart_Clerk_11:
# 758 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_2
	goto OldaleTown_Mart_Clerk_4


OldaleTown_Mart_PostWarehouse::
# 780 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_PostWarehouse
# 781 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_PostWarehouse_Text_0
# 782 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


	.align 2
# 785 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Mart_Pokemart_PreWarehouse:
# 786 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_PARK_BALL
# 787 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
	.2byte ITEM_NONE

	.align 2
# 790 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Mart_Pokemart_PostWarehouse:
# 791 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 792 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 793 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 794 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REMEDY
# 795 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 796 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HONEY
# 797 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_TOY
	.2byte ITEM_NONE

OldalePokeCenterOldLady::
# 804 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 805 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 3, CarRebel_Movement_0
# 806 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterOldLady_Text_0
# 809 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterInjuredGuyDay::
# 813 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 814 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, CarRebel_Movement_0
# 815 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterInjuredGuyDay_Text_0
# 819 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, CarRebel_Movement_1
# 820 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 821 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterInjuredGuyNight::
# 825 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 826 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, CarRebel_Movement_0
# 827 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterInjuredGuyNight_Text_0
# 828 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_SNORE
# 829 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterInjuredGuyNight_Text_1
# 830 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterMapBoyDay::
# 835 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 836 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 6, CarRebel_Movement_0
# 837 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterMapBoyDay_Text_0
# 840 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 6, OldalePokeCenterMapBoyDay_Movement_0
# 841 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 6
# 842 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterMapBoyNight::
# 846 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 847 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterMapBoyNight_Text_0
# 848 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterInnSign::
# 852 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 853 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterInnSign_Text_0
# 854 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterBookshelf::
# 858 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 859 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterBookshelf_Text_0
# 860 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterPlant::
# 864 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 865 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterPlant_Text_0
# 866 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterTVKid::
# 870 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 871 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 8, CarRebel_Movement_0
# 872 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterTVKid_Text_0
# 875 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 8, OldalePokeCenterMapBoyDay_Movement_0
# 876 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 877 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterTVAds::
# 882 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 883 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	random 9
# 884 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 886 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 887 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, OldalePokeCenterTVAds_3
# 888 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, OldalePokeCenterTVAds_4
# 889 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, OldalePokeCenterTVAds_5
# 890 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, OldalePokeCenterTVAds_6
# 891 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, OldalePokeCenterTVAds_7
# 892 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, OldalePokeCenterTVAds_8
# 893 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 6, OldalePokeCenterTVAds_9
# 894 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 7, OldalePokeCenterTVAds_10
# 895 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 8, OldalePokeCenterTVAds_11
OldalePokeCenterTVAds_1:
# 900 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return

OldalePokeCenterTVAds_3:
# 887 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devonballad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_4:
# 888 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devotionad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_5:
# 889 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Safemonad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_6:
# 890 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Lifeindustriesad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_7:
# 891 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devoncenterad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_8:
# 892 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Rebelhackersad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_9:
# 893 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devonnetad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_10:
# 894 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devongruntad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_11:
# 895 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Azuresortad
	goto OldalePokeCenterTVAds_1


Devonballad::
# 905 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_ARCHIPELAGO, 10, 3
# 906 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_ESCALATOR
# 907 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonballad_Text_0
# 910 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 911 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_CONTINENTAL, 10, 3
# 912 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_BALL_THROW
# 913 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonballad_Text_1
# 914 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 915 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Devotionad::
# 919 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devotionad_Text_0
# 922 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 923 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_ELEGANT, 10, 3
# 924 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devotionad_Text_1
# 927 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 928 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Safemonad::
# 934 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_FANCY, 10, 3
# 935 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_FLAMETHROWER
# 936 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Safemonad_Text_0
# 937 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 938 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_GARDEN, 10, 3
# 939 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_ABSORB_2
# 940 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Safemonad_Text_1
# 941 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 942 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Safemonad_Text_2
# 943 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Lifeindustriesad::
# 947 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_HIGH_PLAINS, 10, 3
# 948 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Lifeindustriesad_Text_0
# 950 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 951 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_JUNGLE, 10, 3
# 952 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_FLY
# 953 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Lifeindustriesad_Text_1
# 955 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 956 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_MARINE, 10, 3
# 957 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_ABSORB_2
# 958 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Lifeindustriesad_Text_2
# 959 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 960 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Devoncenterad::
# 964 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_MEADOW, 10, 3
# 965 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 966 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devoncenterad_Text_0
# 968 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 969 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_HEAL
# 970 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_MODERN, 10, 3
# 971 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devoncenterad_Text_1
# 973 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 974 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Rebelhackersad::
# 978 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_MONSOON, 10, 3
# 979 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_FAILURE
# 980 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_0
# 982 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 983 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_OCEAN, 10, 3
# 984 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_MUGSHOT
# 985 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_1
# 986 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 987 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_POKEBALL, 10, 3
# 988 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_WEAK
# 989 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_2
# 991 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 992 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_POLAR, 10, 3
# 993 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_DEX_SEARCH
# 994 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_3
# 995 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 996 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_RIVER, 10, 3
# 997 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_4
# 998 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 999 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Devonnetad::
# 1003 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_SANDSTORM, 10, 3
# 1004 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_SWIFT
# 1005 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonnetad_Text_0
# 1008 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 1009 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_SAVANNA, 10, 3
# 1010 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_PC_LOGIN
# 1011 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonnetad_Text_1
# 1013 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 1014 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_SUN, 10, 3
# 1016 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_PETAL_DANCE
# 1017 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonnetad_Text_2
# 1018 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 1019 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Devongruntad::
# 1023 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devongruntad_Text_0
# 1025 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 1026 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_PIKACHU_COSPLAY, 10, 3
# 1027 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_ENCORE2
# 1028 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devongruntad_Text_1
# 1029 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devongruntad_Text_2
# 1030 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 1031 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Azuresortad::
# 1035 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_BASCULIN, 10, 3
# 1036 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_HAZE
# 1037 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Azuresortad_Text_0
# 1039 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 1040 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_BASCULIN_WHITE_STRIPED, 10, 3
# 1041 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_M_SURF
# 1042 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Azuresortad_Text_1
# 1044 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 1045 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterTipNurse::
# 1049 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 1050 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterTipNurse_Text_0
# 1056 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
CarRebel_Movement_0:
# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
CarRebel_Movement_1:
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

# 272 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_0:
# 272 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 305 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_1:
# 305 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	nurse_joy_bow
	step_end

# 454 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_2:
# 454 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 761 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Mart_Clerk_Movement_0:
# 761 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_right
	step_end

# 840 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldalePokeCenterMapBoyDay_Movement_0:
# 840 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_up
	step_end

OldaleDevonCenterTrashCan1F_Text_0:
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Someone has thrown a casette tape to\n"
	.string "the trash can...$"

OldaleDevonCenterTrashCan1F_Text_1:
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The trash can is empty.$"

CarRebel_Text_0:
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Dammit, I'm broke as hell... I don't have\n"
	.string "enough pokeyen to heal my Electrike...\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Guess I'll have to pickpocket the next\n"
	.string "geezer I see, hehe...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_Devon_Nurse_Text_0:
# 160 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hey... Heal?$"

OldaleTown_Devon_Nurse_Text_1:
# 161 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Yes$"

OldaleTown_Devon_Nurse_Text_2:
# 161 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "No$"

OldaleTown_Devon_Nurse_Text_3:
# 169 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Morning. The usual?$"

OldaleTown_Devon_Nurse_Text_4:
# 173 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "G'day. The usual?$"

OldaleTown_Devon_Nurse_Text_5:
# 177 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Evening. The usual?$"

OldaleTown_Devon_Nurse_Text_6:
# 181 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Night. The usual?$"

OldaleTown_Devon_Nurse_Text_7:
# 191 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Good morning, and welcome back. Need\n"
	.string "some healing, d-... {COLOR LIGHT_GRAY}{SHADOW WHITE}sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} DEAR\l"
	.string "customer?$"

OldaleTown_Devon_Nurse_Text_8:
# 199 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Good day, and welcome back. Need some\n"
	.string "healing, d-... {COLOR LIGHT_GRAY}{SHADOW WHITE}sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "DEAR customer?$"

OldaleTown_Devon_Nurse_Text_9:
# 207 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Good evening, and welcome back. Need\n"
	.string "some healing, d-... {COLOR LIGHT_GRAY}{SHADOW WHITE}sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "DEAR customer?$"

OldaleTown_Devon_Nurse_Text_10:
# 215 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Good night, and welcome back. Need some\n"
	.string "healing, d-... {COLOR LIGHT_GRAY}{SHADOW WHITE}sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "DEAR customer?$"

OldaleTown_Devon_Nurse_Text_11:
# 225 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, {PLAYER}, we're SOO happy to have\n"
	.string "you back! {COLOR LIGHT_GRAY}{SHADOW WHITE}As if...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "May I take your WONDERFUL Pokémon for\n"
	.string "some express healing?$"

OldaleTown_Devon_Nurse_Text_12:
# 237 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Right... just a sec.$"

OldaleTown_Devon_Nurse_Text_13:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Alright, let's see.$"

OldaleTown_Devon_Nurse_Text_14:
# 243 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Very well - just a moment, please.$"

OldaleTown_Devon_Nurse_Text_15:
# 251 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "With GREAT pleasure! Here we go!$"

OldaleTown_Devon_Nurse_Text_16:
# 279 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That will be 100¥...$"

OldaleTown_Devon_Nurse_Text_17:
# 289 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "It's done.\n"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Now get out...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_Devon_Nurse_Text_18:
# 293 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thanks. Bye.$"

OldaleTown_Devon_Nurse_Text_19:
# 298 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "They are back to full health! Have a\n"
	.string "good morning.$"

OldaleTown_Devon_Nurse_Text_20:
# 300 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "They are back to full health! Have a\n"
	.string "good day.$"

OldaleTown_Devon_Nurse_Text_21:
# 302 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "They are back to full health! Have a\n"
	.string "good rest of the evening.$"

OldaleTown_Devon_Nurse_Text_22:
# 304 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "They are back to full health! Have a\n"
	.string "good night.$"

OldaleTown_Devon_Nurse_Text_23:
# 317 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm SO sorry for the wait! Please enjoy\n"
	.string "the rest of your morning...! {COLOR LIGHT_GRAY}{SHADOW WHITE}Just not\l"
	.string "here{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

OldaleTown_Devon_Nurse_Text_24:
# 320 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm SO sorry for the wait! Please enjoy\n"
	.string "the rest of your day...! {COLOR LIGHT_GRAY}{SHADOW WHITE}Just not here{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

OldaleTown_Devon_Nurse_Text_25:
# 323 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm SO sorry for the wait! Please enjoy\n"
	.string "the rest of your evening...! {COLOR LIGHT_GRAY}{SHADOW WHITE}Just not\l"
	.string "here{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

OldaleTown_Devon_Nurse_Text_26:
# 326 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm SO sorry for the wait! Please enjoy\n"
	.string "the rest of your night...! {COLOR LIGHT_GRAY}{SHADOW WHITE}Just not here{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

OldaleTown_Devon_Nurse_Text_27:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Wait... this is your 10th visit...\p"
	.string "You are now a Bronze Client, so I'm\n"
	.string "contractually obligated to give you\l"
	.string "this.$"

OldaleTown_Devon_Nurse_Text_28:
# 393 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ah, this marks your 25th visit.\p"
	.string "As per the Devon Center Loyalty\n"
	.string "Program, you are now a Silver Client.\p"
	.string "And that means, this is for you.$"

OldaleTown_Devon_Nurse_Text_29:
# 399 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, but please wait, dear customer! This\n"
	.string "is a special occassion - it's the 50th\l"
	.string "time you've used our services! {COLOR LIGHT_GRAY}{SHADOW WHITE}Yay...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "You are now a esteemed Gold Client.\n"
	.string "Please, accept this humble present on\l"
	.string "behalf of Devon Co.!$"

OldaleTown_Devon_Nurse_Text_30:
# 408 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Before you go, dear {PLAYER} - we\n"
	.string "were wondering if you could spare a few\l"
	.string "minutes for a short customer survey!$"

OldaleTown_Devon_Nurse_Text_31:
# 410 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "We were wondering - what is your\n"
	.string "preference in regards to how our staff\l"
	.string "addresses you?$"

OldaleTown_Devon_Nurse_Text_32:
# 412 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Be yourself$"

OldaleTown_Devon_Nurse_Text_33:
# 412 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Keep it casual$"

OldaleTown_Devon_Nurse_Text_34:
# 412 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Just polite$"

OldaleTown_Devon_Nurse_Text_35:
# 412 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Flattery, please$"

OldaleTown_Devon_Nurse_Text_36:
# 416 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thank the heavens. If I had to kiss\n"
	.string "your ass one more time, I would have\l"
	.string "slammed your head against the counter.$"

OldaleTown_Devon_Nurse_Text_37:
# 422 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Casual... fair enough, I can do that.$"

OldaleTown_Devon_Nurse_Text_38:
# 427 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Great...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I mean, of course! It is duly\n"
	.string "noted.$"

OldaleTown_Devon_Nurse_Text_39:
# 434 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}You're so full of s...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I-I mean...!\p"
	.string "Most definitely - a esteemed customer\n"
	.string "such as you deserves nothing but the\l"
	.string "warmest of treatments!$"

OldaleTown_Devon_Nurse_Text_40:
# 442 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}One day I'll get you...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_Devon_Nurse_Text_41:
# 459 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Wait... you don't have enough pokeyen.\n"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Are you dense...?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Well, I'll write your name in our list of\n"
	.string "defaulters. Before using the machine\l"
	.string "anymore, you'll have to pay what you\l"
	.string "owe.\p"
	.string "Now go out there, and get a job or\n"
	.string "something.$"

OldaleTown_Devon_Nurse_Text_42:
# 464 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Well... it seems you are a bit short.\p"
	.string "You don't need to pay right now, but you\n"
	.string "will need to clear this debt before\l"
	.string "using our services again.$"

OldaleTown_Devon_Nurse_Text_43:
# 469 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Oh... dear customer, I'm afraid your\n"
	.string "funds don't cover the requisite fee.\p"
	.string "If you would be so kind as to pay your\n"
	.string "debt upon your return, that would be\l"
	.string "MOST appreciated.$"

OldaleTown_Devon_Nurse_Text_44:
# 481 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ah, of course, dear {PLAYER} - we will\n"
	.string "gladly upfront the cost for this\l"
	.string "healing session!\p"
	.string "We merely ask you cover this expense on\n"
	.string "your next visit. {COLOR LIGHT_GRAY}{SHADOW WHITE}If you aren't broke\l"
	.string "still.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_Devon_Nurse_Text_45:
# 518 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You have a 100¥ debt from last time you\n"
	.string "used our services, so I'll be taking\l"
	.string "that...$"

OldaleTown_Devon_Nurse_Text_46:
# 527 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Great. Now let's proceed with your\n"
	.string "current heal...$"

OldaleTown_Devon_Nurse_Text_47:
# 534 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Of course... you still don't have enough.\p"
	.string "Look, we're not running a charity here.\n"
	.string "If you want your buddies healed, go get\l"
	.string "some money.$"

OldaleTown_Devon_Nurse_Text_48:
# 538 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Well... you're a bit short on the fee. We\n"
	.string "can't go ahead with the heal.$"

OldaleTown_Devon_Nurse_Text_49:
# 541 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, it would seem you do not have the\n"
	.string "requisite funds... Please, {PLAYER},\l"
	.string "consider visiting when you do!$"

OldaleTown_Devon_Nurse_Text_50:
# 551 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm so sorry, dear {PLAYER}... even\n"
	.string "though you are one of our best\l"
	.string "customers, we cannot upfront the cost\l"
	.string "for more than one heal at a time.\p"
	.string "Therefore, we will be looking forward to\n"
	.string "a more bounteous occassion!$"

OldaleTown_Devon_Nurse_Text_51:
# 588 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Then get off the way.$"

OldaleTown_Devon_Nurse_Text_52:
# 591 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "See you then.$"

OldaleTown_Devon_Nurse_Text_53:
# 594 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Of course - till next time then!$"

OldaleTown_Devon_Nurse_Text_54:
# 604 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Truly? Well, we look forward to your\n"
	.string "next visit, dear customer!$"

OldaleATM_Text_0:
# 638 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hello! I am a Devon Pokeyen Card\n"
	.string "Terminal. Which card will you buy?$"

OldaleATM_Text_1:
# 639 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Gem Card - 1000¥$"

OldaleATM_Text_2:
# 639 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Gold Card - 5000¥$"

OldaleATM_Text_3:
# 639 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Diamond Card - 10000¥$"

OldaleATM_Text_4:
# 639 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Information$"

OldaleATM_Text_5:
# 639 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Leave$"

OldaleATM_Text_6:
# 649 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Transaction complete. Your card is\n"
	.string "coming out!$"

OldaleATM_Text_7:
# 659 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Error - insufficient funds.$"

OldaleATM_Text_8:
# 667 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Error. This card is only available to\n"
	.string "Bronze Clients.$"

OldaleATM_Text_9:
# 678 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Transaction Completed. Your card is\n"
	.string "coming out!$"

OldaleATM_Text_10:
# 695 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Error. This card is only available to\n"
	.string "Silver Clients.$"

OldaleATM_Text_11:
# 723 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
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
# 740 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Welcome to Devon Mall! How may I help\n"
	.string "you?$"

OldaleTown_Mart_Clerk_Text_1:
# 749 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Wait, I know what you are thinking...\n"
	.string "that I have no BALLS!\p"
	.string "W-why are you looking at me like that!?\n"
	.string "I mean Devon Balls, of course!$"

OldaleTown_Mart_Clerk_Text_2:
# 755 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm so very sorry, sir... you must have\n"
	.string "realized our stock is quite lacking at\l"
	.string "present.$"

OldaleTown_Mart_Clerk_Text_3:
# 763 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But it's not our fault... since those\n"
	.string "{COLOR RED}Rebels{COLOR DARK_GRAY} invaded the {COLOR RED}Warehouse{COLOR DARK_GRAY}, the\l"
	.string "supply trucks have stopped coming.$"

OldaleTown_Mart_Clerk_Text_4:
# 769 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I hate to admit it, but we could be\n"
	.string "waiting ages for Devon to send enough\l"
	.string "guards to take care of them.\p"
	.string "If only a strong, selfless trainer came\n"
	.string "around... but those are so scarce\l"
	.string "lately!$"

OldaleTown_Mart_PostWarehouse_Text_0:
# 781 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thank you for your patronage - and for\n"
	.string "your help liberating our warehouse!$"

OldalePokeCenterOldLady_Text_0:
# 806 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "It's so sad... it's mostly kids and old\n"
	.string "people like me round these parts.\p"
	.string "Most people your age were sent to the\n"
	.string "war, and never returned.\p"
	.string "Like my... ah, I'm sorry. I shouldn't vent\n"
	.string "to strangers like this...$"

OldalePokeCenterInjuredGuyDay_Text_0:
# 815 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Soon after the war broke out, Devon Co.\n"
	.string "ran out of the ingredients use to make\l"
	.string "things like Potions.\p"
	.string "There was just too high of a demand\n"
	.string "spike.\p"
	.string "So now we are back to older things like\n"
	.string "bandages.\p"
	.string "But now that the war is over, Devon Co.\n"
	.string "has promised Potion production will\l"
	.string "resume soon!$"

OldalePokeCenterInjuredGuyNight_Text_0:
# 827 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can have it all. I'm not hungry.$"

OldalePokeCenterInjuredGuyNight_Text_1:
# 829 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Grrr...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

OldalePokeCenterMapBoyDay_Text_0:
# 837 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "In school we learnt that the area from\n"
	.string "Route 103 to Route 104 is called the\l"
	.string "{COLOR GREEN}“Rebel Zone”{COLOR DARK_GRAY}.\p"
	.string "It's a dangerous place where people who\n"
	.string "hate Devon have gathered, and you need\l"
	.string "a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY} to get out of it.$"

OldalePokeCenterMapBoyNight_Text_0:
# 847 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Are you sure you don't want any, dad?\n"
	.string "It's pretty good!$"

OldalePokeCenterInnSign_Text_0:
# 853 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "To 2F - Inn Rooms.$"

OldalePokeCenterBookshelf_Text_0:
# 859 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The shelf is full of magazines with ads\n"
	.string "about Devon products.$"

OldalePokeCenterPlant_Text_0:
# 865 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "It's a beautiful plant.\p"
	.string "... upon second inspection, it's a\n"
	.string "beautiful plastic plant.$"

OldalePokeCenterTVKid_Text_0:
# 872 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I've been watching this TV for half an\n"
	.string "hour, and there's been nothing but\l"
	.string "ads...\p"
	.string "They say you can watch actual programs\n"
	.string "on the TVs in the inn rooms.\p"
	.string "But they don't give me enough allowance\n"
	.string "to rent one...$"

Devonballad_Text_0:
# 907 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Enhanced catch rate. Better grip. Light\n"
	.string "as a feather.\p"
	.string "In short: engineered to perfection.\p"
	.string "Save time choosing the perfect ball,\n"
	.string "because it's always the same - the\l"
	.string "Devon Ball.$"

Devonballad_Text_1:
# 913 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Devon Ball. The only ball with no catch.$"

Devotionad_Text_0:
# 919 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Health points, Power Points, Status\n"
	.string "Ailments... keeping your companions\l"
	.string "healthy requires a full bag!\p"
	.string "Is there not an easier way?\n"
	.string "Devon Co.'s answer is... yes!$"

Devotionad_Text_1:
# 924 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Our newest potion, 'Devotion', is the\n"
	.string "only medicine your Pokémon will ever\l"
	.string "need.\p"
	.string "Only for 1000¥, now available at Devon\n"
	.string "Centers all over Hoenn!\p"
	.string "Devotion - the only potion devoted to\n"
	.string "health.\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Side effects not tested on all species.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Safemonad_Text_0:
# 936 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Power. Volatility. Danger.\n"
	.string "Those are the defining traits of\l"
	.string "Pokémon.$"

Safemonad_Text_1:
# 940 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Control. Trust. Safety.\n"
	.string "Those are for Safemon.$"

Safemonad_Text_2:
# 942 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "We at Devon choose the latter. And you?$"

Lifeindustriesad_Text_0:
# 948 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "This is Davis. Every morning, in Route\n"
	.string "116, Davis wakes up before dawn to care\l"
	.string "for his crops, tend to his farm, and\l"
	.string "create the best produce in Hoenn.$"

Lifeindustriesad_Text_1:
# 953 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The same produce that us, in Devon Life\n"
	.string "Industries, take fresh from his land,\l"
	.string "directly to your plate.$"

Lifeindustriesad_Text_2:
# 958 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Devon Life Industries. Quality food,\n"
	.string "for quality people.$"

Devoncenterad_Text_0:
# 966 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "When you are tired. When you are ill.\n"
	.string "When you are scared.\p"
	.string "Whenever you are in need, Devon Centers\n"
	.string "are your one safe haven.$"

Devoncenterad_Text_1:
# 971 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Devon Centers. Keeping you safe, 24/7.\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Fees may apply. Loitering not allowed.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Rebelhackersad_Text_0:
# 980 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "We interrupt this commercial broadcast\n"
	.string "to announce our signal is be-1ng\l"
	.string "c0mPromi!iis¥Ed b-bY R3b-… BZZT...$"

Rebelhackersad_Text_1:
# 985 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hey. You. Are you sick of Safemon? Me\n"
	.string "too. Because they suck.$"

Rebelhackersad_Text_2:
# 989 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Everyday, Devon converts more than 100\n"
	.string "Pokémon into Safemon.\p"
	.string "But if you help us, we can get them down\n"
	.string "to 0.$"

Rebelhackersad_Text_3:
# 994 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "If you are a coder - join us. If you\n"
	.string "aren't, we'll make you one.$"

Rebelhackersad_Text_4:
# 997 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Join the Rebel Hackers today. For a\n"
	.string "world where we decide.$"

Devonnetad_Text_0:
# 1005 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "In this day and age, people move fast.\p"
	.string "So fast, you can feel you can't keep up\n"
	.string "with everyone. Like you're being left\l"
	.string "behind.$"

Devonnetad_Text_1:
# 1011 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "If you're feeling like that - then Devon\n"
	.string "Net is for you!\p"
	.string "Devon Net is the place to check what\n"
	.string "your loved ones are up to - and meet\l"
	.string "new ones too!$"

Devonnetad_Text_2:
# 1017 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Devon Net - keeping you closer to\n"
	.string "yours.$"

Devongruntad_Text_0:
# 1023 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Do you seek a stable job in these times\n"
	.string "of uncertainty?\p"
	.string "One when you can make a difference in\n"
	.string "getting Hoenn in a better shape?$"

Devongruntad_Text_1:
# 1028 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Then enlist in the Devon Guards today.\n"
	.string "First 100 recruits get their own\l"
	.string "Manchine!$"

Devongruntad_Text_2:
# 1029 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}All Manchines will be collected by Devon\n"
	.string "Co. upon contract expiration.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Azuresortad_Text_0:
# 1037 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Don't you hate it when you go to the\n"
	.string "beach, and the sea is deadly poisoned?\p"
	.string "\p"
	.string "Devon Co. hears you, and is thus proud\n"
	.string "to present...$"

Azuresortad_Text_1:
# 1042 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The Azuresort!\p"
	.string "Exciting water sports, relaxing bathing\n"
	.string "spots - all in the cleanest bathing\l"
	.string "spot in all of Hoenn.\p"
	.string "Azuresort. Because there's never too\n"
	.string "much water.$"

OldalePokeCenterTipNurse_Text_0:
# 1050 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "As I'm sure you know, modern food\n"
	.string "packaging is designed for Pokémon to\l"
	.string "{COLOR BLUE}hold and eat from{COLOR DARK_GRAY}, even during battle!\p"
	.string "But one can't expect Pokémon to eat\n"
	.string "calmly in the middle of combat.\p"
	.string "They will surely spill some of it, and\n"
	.string "{COLOR RED}gain only half of the nutritional\l"
	.string "effects{COLOR DARK_GRAY}.\p"
	.string "Trainers concerned with that should\n"
	.string "feed their Pokémon themselves.\p"
	.string "However you eat, please keep a safe and\n"
	.string "healthy diet!$"
