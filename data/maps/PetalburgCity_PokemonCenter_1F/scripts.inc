# 1 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_OnTransition:
# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 6 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 9 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PETALBURG_NURSE
# 10 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 21 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 25 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 26 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 29 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
# 30 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 31 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 38 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
# 42 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That PC-based POKéMON Storage\n"
# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "System…\p"
# 55 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Whoever made it must be some kind\n"
# 56 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "of a scientific wizard!$"
# 57 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
# 59 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "When my POKéMON ate an\n"
# 60 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "ORAN BERRY, it regained HP!$"
# 61 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
# 63 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "There are many types of POKéMON.\p"
# 64 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All types have their strengths and\n"
# 65 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "weaknesses against other types.\p"
# 66 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Depending on the types of POKéMON,\n"
# 67 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "a battle could be easy or hard.$"
# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 69 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
# 70 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TREECKO\n"
# 71 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a GRASS type.\p"
# 72 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the WATER and\n"
# 73 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "GROUND types.\p"
# 74 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against FIRE-type\n"
# 75 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.$"
# 76 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 77 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
# 78 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TORCHIC\n"
# 79 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a FIRE type.\p"
# 80 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the GRASS and\n"
# 81 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "BUG types.\p"
# 82 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against WATER-type\n"
# 83 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.$"
# 84 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 85 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
# 86 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your MUDKIP\n"
# 87 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a WATER type.\p"
# 88 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the FIRE type.\p"
# 89 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against GRASS-type\n"
# 90 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "and ELECTRIC-type POKéMON.$"

PetalburgCity_PokemonCenter_1F_MapScripts::
# 95 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_PokemonCenter_1FMapscriptbundle
# 96 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1FMapscriptbundle
	.byte 0


PetalburgCity_PokemonCenter_1FMapscriptbundle::
# 107 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 109 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	gettimeofday
# 110 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq PetalburgCity_PokemonCenter_1FMapscriptbundle_2
PetalburgCity_PokemonCenter_1FMapscriptbundle_1:
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq PetalburgCity_PokemonCenter_1FMapscriptbundle_5
PetalburgCity_PokemonCenter_1FMapscriptbundle_4:
# 116 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq PetalburgCity_PokemonCenter_1FMapscriptbundle_8
PetalburgCity_PokemonCenter_1FMapscriptbundle_7:
# 119 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgCity_PokemonCenter_1FMapscriptbundle_11
PetalburgCity_PokemonCenter_1FMapscriptbundle_10:
# 122 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto DayNightNPC
	return

PetalburgCity_PokemonCenter_1FMapscriptbundle_2:
# 111 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgCity_PokemonCenter_1FMapscriptbundle_1

PetalburgCity_PokemonCenter_1FMapscriptbundle_5:
# 114 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgCity_PokemonCenter_1FMapscriptbundle_4

PetalburgCity_PokemonCenter_1FMapscriptbundle_8:
# 117 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgCity_PokemonCenter_1FMapscriptbundle_7

PetalburgCity_PokemonCenter_1FMapscriptbundle_11:
# 120 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setweather WEATHER_SHADE
	goto PetalburgCity_PokemonCenter_1FMapscriptbundle_10


PetalburgDevonCenterHideCivilians::
# 128 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 0
	goto_if_eq PetalburgDevonCenterHideCivilians_3
PetalburgDevonCenterHideCivilians_1:
# 133 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgDevonCenterHideCivilians_6
	return

PetalburgDevonCenterHideCivilians_2:
# 130 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriothidecivilians
	goto PetalburgDevonCenterHideCivilians_1

PetalburgDevonCenterHideCivilians_3:
# 128 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset petalburgriotstopped, PetalburgDevonCenterHideCivilians_2
	goto PetalburgDevonCenterHideCivilians_1

PetalburgDevonCenterHideCivilians_6:
# 134 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriotstopped
	return


PetalburgDevonCenterHideTalkversion::
# 140 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 141 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterHideTalkversion_Text_0
# 142 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 144 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 0
	goto_if_eq PetalburgDevonCenterHideTalkversion_3
PetalburgDevonCenterHideTalkversion_1:
# 149 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgDevonCenterHideTalkversion_6
	return

PetalburgDevonCenterHideTalkversion_2:
# 146 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriothidecivilians
	goto PetalburgDevonCenterHideTalkversion_1

PetalburgDevonCenterHideTalkversion_3:
# 144 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset petalburgriotstopped, PetalburgDevonCenterHideTalkversion_2
	goto PetalburgDevonCenterHideTalkversion_1

PetalburgDevonCenterHideTalkversion_6:
# 150 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriotstopped
	return


PetalburgCity_PokemonCenter_1F_TVOn::
# 154 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 155 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special TurnOnTVScreen
	return


PetalburgDevonCenterFakeMedic::
# 160 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 161 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 162 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 164 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_PETALBURG_HEALING_SCAM, 5
	goto_if_eq PetalburgDevonCenterFakeMedic_2
PetalburgDevonCenterFakeMedic_1:
# 169 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_PETALBURG_HEALING_SCAM, 3
	goto_if_eq PetalburgDevonCenterFakeMedic_5
PetalburgDevonCenterFakeMedic_4:
# 197 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_PETALBURG_HEALING_SCAM, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_8
# 197 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_PETALBURG_HEALING_SCAM, 2
	goto_if_eq PetalburgDevonCenterFakeMedic_8
PetalburgDevonCenterFakeMedic_7:
# 313 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset petalburgriotendedforgood, PetalburgDevonCenterFakeMedic_16
PetalburgDevonCenterFakeMedic_15:
# 360 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgDevonCenterFakeMedic_24
PetalburgDevonCenterFakeMedic_23:
# 387 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
endofpetalburgfakemedic:
# 388 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return

PetalburgDevonCenterFakeMedic_2:
# 165 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_0
# 166 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_1

PetalburgDevonCenterFakeMedic_5:
# 170 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_1
# 173 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDevonCenterFakeMedic_Text_2, PetalburgDevonCenterFakeMedic_Text_3
# 177 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDevonCenterFakeMedic_13
PetalburgDevonCenterFakeMedic_12:
# 191 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_21
	goto PetalburgDevonCenterFakeMedic_4

PetalburgDevonCenterFakeMedic_8:
# 198 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_6
# 200 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDevonCenterFakeMedic_Text_7, PetalburgDevonCenterFakeMedic_Text_8, PetalburgDevonCenterFakeMedic_Text_9
# 205 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDevonCenterFakeMedic_19
PetalburgDevonCenterFakeMedic_18:
# 230 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_30
PetalburgDevonCenterFakeMedic_29:
# 301 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgDevonCenterFakeMedic_39
PetalburgDevonCenterFakeMedic_38:
# 308 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_7

PetalburgDevonCenterFakeMedic_13:
# 178 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 179 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 180 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 181 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_4
# 183 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	destroyfollowernpc
# 184 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_BALL_OPEN
# 185 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 186 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag scamfeebas
# 188 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto healscammerreturnspokemon
	goto PetalburgDevonCenterFakeMedic_12

PetalburgDevonCenterFakeMedic_16:
# 315 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	showmoneybox 18, 0
# 316 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_24
# 318 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDevonCenterFakeMedic_Text_13, PetalburgDevonCenterFakeMedic_Text_14
# 320 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDevonCenterFakeMedic_27
PetalburgDevonCenterFakeMedic_26:
# 353 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_33
PetalburgDevonCenterFakeMedic_32:
# 356 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_15

PetalburgDevonCenterFakeMedic_19:
# 206 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_M_SKETCH
# 207 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_1
# 208 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 209 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_10
# 210 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 212 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 213 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 214 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 216 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_11
# 218 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 219 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_BALL_OPEN
# 220 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 221 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag scamfeebas
# 222 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 11
# 224 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_FEEBAS, CRY_MODE_NORMAL
# 225 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setfollowernpc LOCALID_FEEBAS, FNPC_ALL, ScamFeebasfollowchat, PARTNER_RIVAL_FEMALE
# 226 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 3
# 227 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_18

PetalburgDevonCenterFakeMedic_21:
# 192 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_5
# 193 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_4

PetalburgDevonCenterFakeMedic_24:
# 363 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_31
# 366 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER
# 367 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hidefollower 0
# 368 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_3
# 369 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 370 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 371 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special HealPlayerParty
# 372 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_4
# 373 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 375 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 380 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_32
# 383 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 1
	goto PetalburgDevonCenterFakeMedic_23

PetalburgDevonCenterFakeMedic_27:
# 321 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkmoney 200
# 322 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgDevonCenterFakeMedic_36
PetalburgDevonCenterFakeMedic_35:
# 341 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgDevonCenterFakeMedic_44
	goto PetalburgDevonCenterFakeMedic_26

PetalburgDevonCenterFakeMedic_30:
# 232 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_M_METRONOME
# 233 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_2
# 234 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_12
# 236 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDevonCenterFakeMedic_Text_13, PetalburgDevonCenterFakeMedic_Text_14, PetalburgDevonCenterFakeMedic_Text_15
# 240 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDevonCenterFakeMedic_42
PetalburgDevonCenterFakeMedic_41:
# 272 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_47
PetalburgDevonCenterFakeMedic_46:
# 277 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgDevonCenterFakeMedic_55
	goto PetalburgDevonCenterFakeMedic_29

PetalburgDevonCenterFakeMedic_33:
# 354 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_30
	goto PetalburgDevonCenterFakeMedic_32

PetalburgDevonCenterFakeMedic_36:
# 323 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removemoney 200
# 324 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 325 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 326 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 327 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 329 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_25
# 330 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hidefollower 0
# 331 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_3
# 332 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 333 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 334 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special HealPlayerParty
# 335 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_4
# 336 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 337 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_26
# 338 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_35

PetalburgDevonCenterFakeMedic_39:
# 302 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_23
# 303 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_38

PetalburgDevonCenterFakeMedic_42:
# 241 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 242 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 243 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 244 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_16
# 248 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
healscammerreturnspokemon:
# 252 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 254 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 255 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 256 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 257 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 258 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgDevonCenterFakeMedic_50
PetalburgDevonCenterFakeMedic_49:
# 260 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgDevonCenterFakeMedic_58
PetalburgDevonCenterFakeMedic_57:
# 262 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_19
# 263 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 4
# 266 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 267 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
# 269 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_41

PetalburgDevonCenterFakeMedic_44:
# 343 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 344 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgDevonCenterFakeMedic_53
PetalburgDevonCenterFakeMedic_52:
# 346 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgDevonCenterFakeMedic_61
PetalburgDevonCenterFakeMedic_60:
# 348 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_29
	goto PetalburgDevonCenterFakeMedic_26

PetalburgDevonCenterFakeMedic_47:
# 273 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_20
# 275 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_46

PetalburgDevonCenterFakeMedic_50:
# 258 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_17
	goto PetalburgDevonCenterFakeMedic_49

PetalburgDevonCenterFakeMedic_53:
# 344 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_27
	goto PetalburgDevonCenterFakeMedic_52

PetalburgDevonCenterFakeMedic_55:
# 278 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 279 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 280 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 281 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_21
# 284 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 285 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 286 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 287 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgDevonCenterFakeMedic_64
PetalburgDevonCenterFakeMedic_63:
# 289 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgDevonCenterFakeMedic_67
PetalburgDevonCenterFakeMedic_66:
# 291 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_22
# 292 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 4
# 294 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 295 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
# 297 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_29

PetalburgDevonCenterFakeMedic_58:
# 260 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_18
	goto PetalburgDevonCenterFakeMedic_57

PetalburgDevonCenterFakeMedic_61:
# 346 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_28
	goto PetalburgDevonCenterFakeMedic_60

PetalburgDevonCenterFakeMedic_64:
# 287 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_17
	goto PetalburgDevonCenterFakeMedic_63

PetalburgDevonCenterFakeMedic_67:
# 289 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_18
	goto PetalburgDevonCenterFakeMedic_66


ScamFeebasfollowchat::
# 394 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 395 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_FEEBAS, CRY_MODE_NORMAL
# 396 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox ScamFeebasfollowchat_Text_0
# 397 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


DevonGuardsTakeHealScammer::
# 401 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 402 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag healscammerarrestdevons
# 403 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 404 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 406 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDevonCenterFakeMedic_Movement_4
# 408 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 12
# 409 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 13
# 411 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 12, DevonGuardsTakeHealScammer_Movement_0
# 412 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 13, DevonGuardsTakeHealScammer_Movement_0
# 413 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 13
# 415 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 416 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 417 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 14
# 419 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 421 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 14, DevonGuardsTakeHealScammer_Movement_1
# 422 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 14
# 423 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox DevonGuardsTakeHealScammer_Text_0
# 424 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 426 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 427 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 428 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonGuardsTakeHealScammer_Movement_2
# 429 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 12, DevonGuardsTakeHealScammer_Movement_3
# 430 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 12
# 432 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 12, DevonGuardsTakeHealScammer_Movement_1
# 433 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 12
# 434 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox DevonGuardsTakeHealScammer_Text_1
# 435 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 437 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_LEDGE
# 438 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, DevonGuardsTakeHealScammer_Movement_4
# 439 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 441 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox DevonGuardsTakeHealScammer_Text_2
# 443 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 12, DevonGuardsTakeHealScammer_Movement_1
# 444 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 12
# 445 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox DevonGuardsTakeHealScammer_Text_3
# 446 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 448 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 449 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_FLEE
# 450 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 451 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 452 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 453 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject 8
# 454 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject 12
# 455 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject 13
# 456 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject 14
# 458 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag healscammerarrestdevons
# 459 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgfakemedic
# 460 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag petalburgnurse
# 462 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriotendedforgood
# 463 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriotstopped
# 465 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 1
# 470 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	fadeoutbgm 1
# 471 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	fadeinbgm 1
# 472 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_GYMNOPEDIE, TRUE
# 474 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 5
# 475 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 476 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpsilent MAP_PETALBURG_CITY_POKEMON_CENTER_1F, 3
# 477 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpsilent MAP_PETALBURG_CITY, 2
# 480 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


PlayerRealizesHealScam::
# 484 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 486 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 487 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRealizesHealScam_2
PlayerRealizesHealScam_1:
# 489 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerRealizesHealScam_5
PlayerRealizesHealScam_4:
# 491 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 492 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDevonCenterFakeMedic_Movement_0
# 493 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 495 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 496 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRealizesHealScam_8
PlayerRealizesHealScam_7:
# 498 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerRealizesHealScam_11
PlayerRealizesHealScam_10:
# 500 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 2
# 501 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return

PlayerRealizesHealScam_2:
# 487 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerRealizesHealScam_Text_0
	goto PlayerRealizesHealScam_1

PlayerRealizesHealScam_5:
# 489 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerRealizesHealScam_Text_1
	goto PlayerRealizesHealScam_4

PlayerRealizesHealScam_8:
# 496 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerRealizesHealScam_Text_2
	goto PlayerRealizesHealScam_7

PlayerRealizesHealScam_11:
# 498 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerRealizesHealScam_Text_3
	goto PlayerRealizesHealScam_10


PlayerHealScamForceDown::
# 505 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 506 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerHealScamForceDown_Text_0
# 507 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 508 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHealScamForceDown_Movement_0
# 509 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 510 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


PlayerHealScamForceUp::
# 514 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 515 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerHealScamForceUp_Text_0
# 516 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 517 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonGuardsTakeHealScammer_Movement_0
# 518 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 519 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


PlayerHealScamForceRight::
# 523 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 524 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerHealScamForceUp_Text_0
# 525 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 526 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHealScamForceRight_Movement_0
# 527 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 528 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


PetalburgDevonCenterTV::
# 534 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 536 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset rebelswonpetalburgriot, PetalburgDevonCenterTV_1
# 540 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto OldalePokeCenterTVAds
	return

PetalburgDevonCenterTV_1:
# 538 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterTV_Text_0
	return


PetalburgDevonCenterInnBlocker::
# 545 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 546 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 7, PetalburgDevonCenterInnBlocker_Movement_0
# 547 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterInnBlocker_Text_0
# 549 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 7, PetalburgDevonCenterInnBlocker_Movement_1
# 550 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 7
# 551 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return


PetalburgDevonCenterPCTechnicianRepairing::
# 555 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 556 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, PetalburgDevonCenterInnBlocker_Movement_0
# 557 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnicianRepairing_Text_0
# 558 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, PetalburgDevonCenterPCTechnicianRepairing_Movement_0
# 559 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 560 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return


PetalburgDevonCenterTableNPC1::
# 564 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 565 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 3, PetalburgDevonCenterInnBlocker_Movement_0
# 566 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterTableNPC1_Text_0
# 570 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 3, PetalburgDevonCenterInnBlocker_Movement_1
# 571 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 3
# 572 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return


PetalburgDevonCenterPCTechnician::
# 576 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 577 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 10, PetalburgDevonCenterInnBlocker_Movement_0
# 578 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgDevonCenterPCTechnician_2
# 586 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset rebelswonpetalburgriot, PetalburgDevonCenterPCTechnician_6
PetalburgDevonCenterPCTechnician_5:
# 591 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set rebelswonpetalburgriot, PetalburgDevonCenterPCTechnician_8
PetalburgDevonCenterPCTechnician_1:
# 598 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 10, PetalburgDevonCenterFakeMedic_Movement_4
# 599 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 10
# 601 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return

PetalburgDevonCenterPCTechnician_2:
# 580 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnician_Text_0
	goto PetalburgDevonCenterPCTechnician_1

PetalburgDevonCenterPCTechnician_6:
# 588 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnician_Text_1
	goto PetalburgDevonCenterPCTechnician_5

PetalburgDevonCenterPCTechnician_8:
# 593 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnician_Text_2
	goto PetalburgDevonCenterPCTechnician_1


PetalburgDevonCenterMart::
# 607 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 608 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, PetalburgDevonCenterInnBlocker_Movement_0
# 610 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset rebelswonpetalburgriot, PetalburgDevonCenterMart_2
PetalburgDevonCenterMart_1:
# 617 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set devonwonpetalburgriot, PetalburgDevonCenterMart_5
PetalburgDevonCenterMart_4:
# 621 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	pokemart Petalburg_DevonMart
# 623 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterMart_Text_2
# 624 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
endofpetalburgdevonmart:
# 625 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 2, PetalburgDevonCenterFakeMedic_Movement_3
# 626 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 2
# 627 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return

PetalburgDevonCenterMart_2:
# 612 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterMart_Text_0
# 614 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgdevonmart
	goto PetalburgDevonCenterMart_1

PetalburgDevonCenterMart_5:
# 619 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterMart_Text_1
	goto PetalburgDevonCenterMart_4


	.align 2
# 630 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
Petalburg_DevonMart:
# 631 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 632 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 633 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 634 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 635 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REMEDY
# 636 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 637 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HONEY
# 638 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_TOY
# 639 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
	.2byte ITEM_NONE

# 179 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_0:
# 179 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 207 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_1:
# 207 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	emote_x
	step_end

# 233 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_2:
# 233 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	emote_question_mark
	step_end

# 331 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_3:
# 331 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 335 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_4:
# 335 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

# 411 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_0:
# 411 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_up
	step_end

# 421 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_1:
# 421 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
	step_end

# 428 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_2:
# 428 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 429 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_3:
# 429 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_up
# 429 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_up
# 429 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_up
	step_end

# 438 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_4:
# 438 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	jump_in_place_down
	step_end

# 508 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PlayerHealScamForceDown_Movement_0:
# 508 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_down
	step_end

# 526 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PlayerHealScamForceRight_Movement_0:
# 526 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_right
	step_end

# 546 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterInnBlocker_Movement_0:
# 546 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 549 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterInnBlocker_Movement_1:
# 549 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_right
	step_end

# 558 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterPCTechnicianRepairing_Movement_0:
# 558 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_up
	step_end

PetalburgDevonCenterHideTalkversion_Text_0:
# 141 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Daily flag set. Riot objects will not\n"
	.string "respawn now.$"

PetalburgDevonCenterFakeMedic_Text_0:
# 165 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Don't get sour. We all need a bit of\n"
	.string "humour in these dark times!$"

PetalburgDevonCenterFakeMedic_Text_1:
# 170 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "You again? What's wrong now? Huh?\n"
	.string "That's not your Pokémon?\p"
	.string "That means you're a thief. Is that a\n"
	.string "confession?\p"
	.string "Want me to call the Devon grunts?$"

PetalburgDevonCenterFakeMedic_Text_2:
# 174 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Yes, call them$"

PetalburgDevonCenterFakeMedic_Text_3:
# 175 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "No, that's okay$"

PetalburgDevonCenterFakeMedic_Text_4:
# 181 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Y-you know what...? Maybe that's not my\n"
	.string "best idea today, hehe.\p"
	.string "Here's your Pokémon - let's forget his\n"
	.string "ever happened, hey?$"

PetalburgDevonCenterFakeMedic_Text_5:
# 192 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Thought so. Off you go then, you and\n"
	.string "your great partner!$"

PetalburgDevonCenterFakeMedic_Text_6:
# 198 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Hm? What's the funny look about?$"

PetalburgDevonCenterFakeMedic_Text_7:
# 201 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "My Pokémon are missing$"

PetalburgDevonCenterFakeMedic_Text_8:
# 202 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "You stole my Pokémon!$"

PetalburgDevonCenterFakeMedic_Text_9:
# 203 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Nothing$"

PetalburgDevonCenterFakeMedic_Text_10:
# 209 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I'm sorry to hear that. But we heal\n"
	.string "Pokémon here, we don't find them.$"

PetalburgDevonCenterFakeMedic_Text_11:
# 216 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Wait... now that you mention it! Oh, I'm\n"
	.string "so sorry, you're right!\p"
	.string "I forgot to load your Pokémon in from\n"
	.string "the machine. Here it is!$"

PetalburgDevonCenterFakeMedic_Text_12:
# 234 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Woah, what are you talking about?\n"
	.string "That's a serious accusation!\p"
	.string "Do you have any proof to back it up?$"

PetalburgDevonCenterFakeMedic_Text_13:
# 237 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Yes$"

PetalburgDevonCenterFakeMedic_Text_14:
# 238 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "No$"

PetalburgDevonCenterFakeMedic_Text_15:
# 239 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I don't need any$"

PetalburgDevonCenterFakeMedic_Text_16:
# 244 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Y-you do!? Why, aren't you a smart\n"
	.string "fellow...\p"
	.string "... I'll cut you a sweet deal then.\p"
	.string "I give you your Pokémon back, and you\n"
	.string "forget this ever happened.$"

PetalburgDevonCenterFakeMedic_Text_17:
# 258 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} got his Pokémon back!$"

PetalburgDevonCenterFakeMedic_Text_18:
# 260 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} got her Pokémon back!$"

PetalburgDevonCenterFakeMedic_Text_19:
# 262 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Don't look at me like that - it was just\n"
	.string "a joke! Have a good one now.$"

PetalburgDevonCenterFakeMedic_Text_20:
# 273 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Heh, thought so. Then stop harrasing me\n"
	.string "then, or I'll call the grunts on you.$"

PetalburgDevonCenterFakeMedic_Text_21:
# 281 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I-is that a threat? Y-you do look\n"
	.string "rather... seasoned.\p"
	.string "O-okay, here's your Pokémon!$"

PetalburgDevonCenterFakeMedic_Text_22:
# 291 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "We're good now, right? Let's pretend\n"
	.string "this never happened, please?$"

PetalburgDevonCenterFakeMedic_Text_23:
# 302 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Then clear the way for customers,\n"
	.string "please!$"

PetalburgDevonCenterFakeMedic_Text_24:
# 316 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Hello there! Round of healing? It's 200¥\n"
	.string "while we pay for repairs!$"

PetalburgDevonCenterFakeMedic_Text_25:
# 329 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Great - just a moment!$"

PetalburgDevonCenterFakeMedic_Text_26:
# 337 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All in good shape now. Take care!$"

PetalburgDevonCenterFakeMedic_Text_27:
# 344 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Uhm... you ain't got enough, pal- I mean,\n"
	.string "sir.$"

PetalburgDevonCenterFakeMedic_Text_28:
# 346 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Uhm... you ain't got enough, pal- I mean,\n"
	.string "miss.$"

PetalburgDevonCenterFakeMedic_Text_29:
# 348 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Due to the repair costs for the riot, we\n"
	.string "have suspended the one heal loan\l"
	.string "system.\p"
	.string "You want some healing, go get some\n"
	.string "pokeyen!$"

PetalburgDevonCenterFakeMedic_Text_30:
# 354 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Huh? Don't waste my time then!$"

PetalburgDevonCenterFakeMedic_Text_31:
# 363 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Welcome, dear customer!\p"
	.string "To celebrate the end of the riots,\n"
	.string "healing is on the house today!\p"
	.string "Let me see those Pokémon...$"

PetalburgDevonCenterFakeMedic_Text_32:
# 380 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All in good shape now. Take care! Hehe...$"

ScamFeebasfollowchat_Text_0:
# 396 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Fee...$"

DevonGuardsTakeHealScammer_Text_0:
# 423 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That's him! The nurse who stole my\n"
	.string "Pokémon! Get him!$"

DevonGuardsTakeHealScammer_Text_1:
# 434 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I hope you like the cold. There's a cell\n"
	.string "with your name in Dewford Prison!$"

DevonGuardsTakeHealScammer_Text_2:
# 441 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "W-WAIT, no, this is a TERRIBLE\n"
	.string "misunderstanding! I can explain!$"

DevonGuardsTakeHealScammer_Text_3:
# 445 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Save it for the trial! Off with you!$"

PlayerRealizesHealScam_Text_0:
# 487 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} feels his Pokéballs a bit\n"
	.string "ligther...$"

PlayerRealizesHealScam_Text_1:
# 489 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} feels her Pokéballs a bit\n"
	.string "ligther...$"

PlayerRealizesHealScam_Text_2:
# 496 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} realizes his Pokémon are\n"
	.string "gone!$"

PlayerRealizesHealScam_Text_3:
# 498 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} realizes her Pokémon are\n"
	.string "gone!$"

PlayerHealScamForceDown_Text_0:
# 506 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Must take back the Pokémon...!$"

PlayerHealScamForceUp_Text_0:
# 515 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Can't leave without the Pokémon...!$"

PetalburgDevonCenterTV_Text_0:
# 538 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "The TV returns static. The antenna may\n"
	.string "have been damaged after the riot.$"

PetalburgDevonCenterInnBlocker_Text_0:
# 547 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I'm sorry, but our inn floors suffered\n"
	.string "fire damage during the recent riot.\p"
	.string "They are are unsafe to stay in as a\n"
	.string "result. We apologize for the\l"
	.string "inconvenience.$"

PetalburgDevonCenterPCTechnicianRepairing_Text_0:
# 557 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Those rebels messed this PC real good.\n"
	.string "I'll take a while to repair it.$"

PetalburgDevonCenterTableNPC1_Text_0:
# 566 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Apparently Kanto attacked us because\n"
	.string "they thought Hoenn would attack them\l"
	.string "first.\p"
	.string "Did we really lose so much because of a\n"
	.string "misunderstanding…?\p"
	.string "Or did someone plan this out? If so,\n"
	.string "why?\p"
	.string "And most importantly - does it even\n"
	.string "matter…? It's all such a mess…$"

PetalburgDevonCenterPCTechnician_Text_0:
# 580 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I work on a contract basis, so now that\n"
	.string "Rebels have calmed down, I get less\l"
	.string "work.\p"
	.string "Maybe I should break something\n"
	.string "myself...$"

PetalburgDevonCenterPCTechnician_Text_1:
# 588 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Let us work, please. The sooner we're\n"
	.string "done, the sooner PC service returns.$"

PetalburgDevonCenterPCTechnician_Text_2:
# 593 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Just finished repairing the PC. Have at\n"
	.string "it!$"

PetalburgDevonCenterMart_Text_0:
# 612 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Those Rebels stole all our stock in the\n"
	.string "last raid...\p"
	.string "Mart will reopen once we receive a new\n"
	.string "shipment from Oldale Warehouse!$"

PetalburgDevonCenterMart_Text_1:
# 619 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Welcome to Petalburg Devon Mart! How\n"
	.string "may I help you?$"

PetalburgDevonCenterMart_Text_2:
# 623 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Thank you for your patronage!$"
