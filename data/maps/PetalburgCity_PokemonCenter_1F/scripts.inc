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
	gettimeofday
# 108 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq PetalburgCity_PokemonCenter_1FMapscriptbundle_2
PetalburgCity_PokemonCenter_1FMapscriptbundle_1:
# 111 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq PetalburgCity_PokemonCenter_1FMapscriptbundle_5
PetalburgCity_PokemonCenter_1FMapscriptbundle_4:
# 114 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq PetalburgCity_PokemonCenter_1FMapscriptbundle_8
PetalburgCity_PokemonCenter_1FMapscriptbundle_7:
# 117 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgCity_PokemonCenter_1FMapscriptbundle_11
PetalburgCity_PokemonCenter_1FMapscriptbundle_10:
# 120 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto DayNightNPC
	return

PetalburgCity_PokemonCenter_1FMapscriptbundle_2:
# 109 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgCity_PokemonCenter_1FMapscriptbundle_1

PetalburgCity_PokemonCenter_1FMapscriptbundle_5:
# 112 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgCity_PokemonCenter_1FMapscriptbundle_4

PetalburgCity_PokemonCenter_1FMapscriptbundle_8:
# 115 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgCity_PokemonCenter_1FMapscriptbundle_7

PetalburgCity_PokemonCenter_1FMapscriptbundle_11:
# 118 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setweather WEATHER_SHADE
	goto PetalburgCity_PokemonCenter_1FMapscriptbundle_10


PetalburgDevonCenterHideCivilians::
# 126 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 0
	goto_if_eq PetalburgDevonCenterHideCivilians_3
PetalburgDevonCenterHideCivilians_1:
# 131 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgDevonCenterHideCivilians_6
	return

PetalburgDevonCenterHideCivilians_2:
# 128 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriothidecivilians
	goto PetalburgDevonCenterHideCivilians_1

PetalburgDevonCenterHideCivilians_3:
# 126 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset petalburgriotstopped, PetalburgDevonCenterHideCivilians_2
	goto PetalburgDevonCenterHideCivilians_1

PetalburgDevonCenterHideCivilians_6:
# 132 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriotstopped
	return


PetalburgDevonCenterHideTalkversion::
# 138 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 139 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterHideTalkversion_Text_0
# 140 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 142 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_PETALBURG_RIOT_POSITION, 0
	goto_if_eq PetalburgDevonCenterHideTalkversion_3
PetalburgDevonCenterHideTalkversion_1:
# 147 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgDevonCenterHideTalkversion_6
	return

PetalburgDevonCenterHideTalkversion_2:
# 144 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriothidecivilians
	goto PetalburgDevonCenterHideTalkversion_1

PetalburgDevonCenterHideTalkversion_3:
# 142 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset petalburgriotstopped, PetalburgDevonCenterHideTalkversion_2
	goto PetalburgDevonCenterHideTalkversion_1

PetalburgDevonCenterHideTalkversion_6:
# 148 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriotstopped
	return


PetalburgCity_PokemonCenter_1F_TVOn::
# 152 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 153 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special TurnOnTVScreen
	return


PetalburgDevonCenterFakeMedic::
# 158 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 159 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 161 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_PETALBURG_HEALING_SCAM, 5
	goto_if_eq PetalburgDevonCenterFakeMedic_2
PetalburgDevonCenterFakeMedic_1:
# 166 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_PETALBURG_HEALING_SCAM, 3
	goto_if_eq PetalburgDevonCenterFakeMedic_5
PetalburgDevonCenterFakeMedic_4:
# 194 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_PETALBURG_HEALING_SCAM, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_8
# 194 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_PETALBURG_HEALING_SCAM, 2
	goto_if_eq PetalburgDevonCenterFakeMedic_8
PetalburgDevonCenterFakeMedic_7:
# 310 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset petalburgriotendedforgood, PetalburgDevonCenterFakeMedic_16
PetalburgDevonCenterFakeMedic_15:
# 357 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgDevonCenterFakeMedic_24
PetalburgDevonCenterFakeMedic_23:
# 384 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
endofpetalburgfakemedic:
# 385 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return

PetalburgDevonCenterFakeMedic_2:
# 162 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_0
# 163 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_1

PetalburgDevonCenterFakeMedic_5:
# 167 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_1
# 170 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDevonCenterFakeMedic_Text_2, PetalburgDevonCenterFakeMedic_Text_3
# 174 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDevonCenterFakeMedic_13
PetalburgDevonCenterFakeMedic_12:
# 188 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_21
	goto PetalburgDevonCenterFakeMedic_4

PetalburgDevonCenterFakeMedic_8:
# 195 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_6
# 197 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDevonCenterFakeMedic_Text_7, PetalburgDevonCenterFakeMedic_Text_8, PetalburgDevonCenterFakeMedic_Text_9
# 202 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDevonCenterFakeMedic_19
PetalburgDevonCenterFakeMedic_18:
# 227 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_30
PetalburgDevonCenterFakeMedic_29:
# 298 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgDevonCenterFakeMedic_39
PetalburgDevonCenterFakeMedic_38:
# 305 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_7

PetalburgDevonCenterFakeMedic_13:
# 175 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 176 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 177 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 178 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_4
# 180 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	destroyfollowernpc
# 181 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_BALL_OPEN
# 182 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 183 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag scamfeebas
# 185 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto healscammerreturnspokemon
	goto PetalburgDevonCenterFakeMedic_12

PetalburgDevonCenterFakeMedic_16:
# 312 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	showmoneybox 18, 0
# 313 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_24
# 315 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDevonCenterFakeMedic_Text_13, PetalburgDevonCenterFakeMedic_Text_14
# 317 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDevonCenterFakeMedic_27
PetalburgDevonCenterFakeMedic_26:
# 350 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_33
PetalburgDevonCenterFakeMedic_32:
# 353 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_15

PetalburgDevonCenterFakeMedic_19:
# 203 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_M_SKETCH
# 204 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_1
# 205 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 206 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_10
# 207 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 209 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 210 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 211 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 213 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_11
# 215 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 216 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_BALL_OPEN
# 217 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 218 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag scamfeebas
# 219 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 11
# 221 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_FEEBAS, CRY_MODE_NORMAL
# 222 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setfollowernpc LOCALID_FEEBAS, FNPC_ALL, ScamFeebasfollowchat, PARTNER_RIVAL_FEMALE
# 223 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 3
# 224 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_18

PetalburgDevonCenterFakeMedic_21:
# 189 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_5
# 190 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_4

PetalburgDevonCenterFakeMedic_24:
# 360 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_31
# 363 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER
# 364 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hidefollower 0
# 365 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_3
# 366 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 367 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 368 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special HealPlayerParty
# 369 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_4
# 370 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 372 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 377 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_32
# 380 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 1
	goto PetalburgDevonCenterFakeMedic_23

PetalburgDevonCenterFakeMedic_27:
# 318 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkmoney 200
# 319 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgDevonCenterFakeMedic_36
PetalburgDevonCenterFakeMedic_35:
# 338 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgDevonCenterFakeMedic_44
	goto PetalburgDevonCenterFakeMedic_26

PetalburgDevonCenterFakeMedic_30:
# 229 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_M_METRONOME
# 230 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_2
# 231 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_12
# 233 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDevonCenterFakeMedic_Text_13, PetalburgDevonCenterFakeMedic_Text_14, PetalburgDevonCenterFakeMedic_Text_15
# 237 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDevonCenterFakeMedic_42
PetalburgDevonCenterFakeMedic_41:
# 269 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_47
PetalburgDevonCenterFakeMedic_46:
# 274 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgDevonCenterFakeMedic_55
	goto PetalburgDevonCenterFakeMedic_29

PetalburgDevonCenterFakeMedic_33:
# 351 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_30
	goto PetalburgDevonCenterFakeMedic_32

PetalburgDevonCenterFakeMedic_36:
# 320 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removemoney 200
# 321 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 322 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 323 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 324 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 326 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_25
# 327 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hidefollower 0
# 328 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_3
# 329 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 330 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 331 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special HealPlayerParty
# 332 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_4
# 333 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 334 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_26
# 335 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_35

PetalburgDevonCenterFakeMedic_39:
# 299 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_23
# 300 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_38

PetalburgDevonCenterFakeMedic_42:
# 238 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 239 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 240 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 241 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_16
# 245 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
healscammerreturnspokemon:
# 249 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 251 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 252 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 253 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 254 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 255 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgDevonCenterFakeMedic_50
PetalburgDevonCenterFakeMedic_49:
# 257 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgDevonCenterFakeMedic_58
PetalburgDevonCenterFakeMedic_57:
# 259 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_19
# 260 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 4
# 263 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 264 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
# 266 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_41

PetalburgDevonCenterFakeMedic_44:
# 340 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 341 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgDevonCenterFakeMedic_53
PetalburgDevonCenterFakeMedic_52:
# 343 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgDevonCenterFakeMedic_61
PetalburgDevonCenterFakeMedic_60:
# 345 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_29
	goto PetalburgDevonCenterFakeMedic_26

PetalburgDevonCenterFakeMedic_47:
# 270 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_20
# 272 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_46

PetalburgDevonCenterFakeMedic_50:
# 255 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_17
	goto PetalburgDevonCenterFakeMedic_49

PetalburgDevonCenterFakeMedic_53:
# 341 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_27
	goto PetalburgDevonCenterFakeMedic_52

PetalburgDevonCenterFakeMedic_55:
# 275 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 276 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 277 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 278 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_21
# 281 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 282 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 283 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 284 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgDevonCenterFakeMedic_64
PetalburgDevonCenterFakeMedic_63:
# 286 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgDevonCenterFakeMedic_67
PetalburgDevonCenterFakeMedic_66:
# 288 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_22
# 289 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 4
# 291 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 292 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
# 294 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_29

PetalburgDevonCenterFakeMedic_58:
# 257 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_18
	goto PetalburgDevonCenterFakeMedic_57

PetalburgDevonCenterFakeMedic_61:
# 343 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_28
	goto PetalburgDevonCenterFakeMedic_60

PetalburgDevonCenterFakeMedic_64:
# 284 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_17
	goto PetalburgDevonCenterFakeMedic_63

PetalburgDevonCenterFakeMedic_67:
# 286 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_18
	goto PetalburgDevonCenterFakeMedic_66


ScamFeebasfollowchat::
# 391 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 392 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_FEEBAS, CRY_MODE_NORMAL
# 393 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox ScamFeebasfollowchat_Text_0
# 394 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


DevonGuardsTakeHealScammer::
# 398 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 399 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag healscammerarrestdevons
# 400 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 401 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 403 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDevonCenterFakeMedic_Movement_4
# 405 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 12
# 406 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 13
# 408 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 12, DevonGuardsTakeHealScammer_Movement_0
# 409 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 13, DevonGuardsTakeHealScammer_Movement_0
# 410 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 13
# 412 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 413 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 414 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 14
# 416 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 418 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 14, DevonGuardsTakeHealScammer_Movement_1
# 419 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 14
# 420 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox DevonGuardsTakeHealScammer_Text_0
# 421 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 423 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 424 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 425 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonGuardsTakeHealScammer_Movement_2
# 426 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 12, DevonGuardsTakeHealScammer_Movement_3
# 427 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 12
# 429 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 12, DevonGuardsTakeHealScammer_Movement_1
# 430 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 12
# 431 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox DevonGuardsTakeHealScammer_Text_1
# 432 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 434 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_LEDGE
# 435 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, DevonGuardsTakeHealScammer_Movement_4
# 436 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 438 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox DevonGuardsTakeHealScammer_Text_2
# 440 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 12, DevonGuardsTakeHealScammer_Movement_1
# 441 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 12
# 442 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox DevonGuardsTakeHealScammer_Text_3
# 443 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 445 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 446 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_FLEE
# 447 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 448 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 449 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 450 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject 8
# 451 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject 12
# 452 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject 13
# 453 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject 14
# 455 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag healscammerarrestdevons
# 456 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgfakemedic
# 457 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag petalburgnurse
# 459 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriotendedforgood
# 460 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriotstopped
# 462 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 1
# 467 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	fadeoutbgm 1
# 468 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	fadeinbgm 1
# 469 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_GYMNOPEDIE, TRUE
# 471 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 5
# 472 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 473 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpsilent MAP_PETALBURG_CITY_POKEMON_CENTER_1F, 3
# 474 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpsilent MAP_PETALBURG_CITY, 2
# 477 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


PlayerRealizesHealScam::
# 481 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 483 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 484 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRealizesHealScam_2
PlayerRealizesHealScam_1:
# 486 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerRealizesHealScam_5
PlayerRealizesHealScam_4:
# 488 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 489 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDevonCenterFakeMedic_Movement_0
# 490 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 492 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 493 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRealizesHealScam_8
PlayerRealizesHealScam_7:
# 495 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerRealizesHealScam_11
PlayerRealizesHealScam_10:
# 497 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 2
# 498 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return

PlayerRealizesHealScam_2:
# 484 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerRealizesHealScam_Text_0
	goto PlayerRealizesHealScam_1

PlayerRealizesHealScam_5:
# 486 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerRealizesHealScam_Text_1
	goto PlayerRealizesHealScam_4

PlayerRealizesHealScam_8:
# 493 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerRealizesHealScam_Text_2
	goto PlayerRealizesHealScam_7

PlayerRealizesHealScam_11:
# 495 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerRealizesHealScam_Text_3
	goto PlayerRealizesHealScam_10


PlayerHealScamForceDown::
# 502 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 503 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerHealScamForceDown_Text_0
# 504 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 505 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHealScamForceDown_Movement_0
# 506 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 507 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


PlayerHealScamForceUp::
# 511 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 512 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerHealScamForceUp_Text_0
# 513 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 514 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonGuardsTakeHealScammer_Movement_0
# 515 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 516 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


PlayerHealScamForceRight::
# 520 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 521 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerHealScamForceUp_Text_0
# 522 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 523 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHealScamForceRight_Movement_0
# 524 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 525 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


PetalburgDevonCenterTV::
# 531 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 533 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset rebelswonpetalburgriot, PetalburgDevonCenterTV_1
# 537 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto OldalePokeCenterTVAds
	return

PetalburgDevonCenterTV_1:
# 535 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterTV_Text_0
	return


PetalburgDevonCenterInnBlocker::
# 542 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 543 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 7, PetalburgDevonCenterInnBlocker_Movement_0
# 544 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterInnBlocker_Text_0
# 546 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 7, PetalburgDevonCenterInnBlocker_Movement_1
# 547 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 7
# 548 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return


PetalburgDevonCenterPCTechnicianRepairing::
# 552 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 553 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, PetalburgDevonCenterInnBlocker_Movement_0
# 554 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnicianRepairing_Text_0
# 555 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, PetalburgDevonCenterPCTechnicianRepairing_Movement_0
# 556 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 557 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return


PetalburgDevonCenterTableNPC1::
# 561 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 562 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 3, PetalburgDevonCenterInnBlocker_Movement_0
# 563 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterTableNPC1_Text_0
# 567 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 3, PetalburgDevonCenterInnBlocker_Movement_1
# 568 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 3
# 569 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return


PetalburgDevonCenterPCTechnician::
# 573 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 574 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 10, PetalburgDevonCenterInnBlocker_Movement_0
# 575 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgDevonCenterPCTechnician_2
# 583 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset rebelswonpetalburgriot, PetalburgDevonCenterPCTechnician_6
PetalburgDevonCenterPCTechnician_5:
# 588 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set rebelswonpetalburgriot, PetalburgDevonCenterPCTechnician_8
PetalburgDevonCenterPCTechnician_1:
# 595 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 10, PetalburgDevonCenterFakeMedic_Movement_4
# 596 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 10
# 598 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return

PetalburgDevonCenterPCTechnician_2:
# 577 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnician_Text_0
	goto PetalburgDevonCenterPCTechnician_1

PetalburgDevonCenterPCTechnician_6:
# 585 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnician_Text_1
	goto PetalburgDevonCenterPCTechnician_5

PetalburgDevonCenterPCTechnician_8:
# 590 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnician_Text_2
	goto PetalburgDevonCenterPCTechnician_1


PetalburgDevonCenterMart::
# 604 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 605 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, PetalburgDevonCenterInnBlocker_Movement_0
# 607 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset rebelswonpetalburgriot, PetalburgDevonCenterMart_2
PetalburgDevonCenterMart_1:
# 614 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set devonwonpetalburgriot, PetalburgDevonCenterMart_5
PetalburgDevonCenterMart_4:
# 618 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	pokemart Petalburg_DevonMart
# 620 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterMart_Text_2
# 621 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
endofpetalburgdevonmart:
# 622 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 2, PetalburgDevonCenterFakeMedic_Movement_3
# 623 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 2
# 624 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return

PetalburgDevonCenterMart_2:
# 609 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterMart_Text_0
# 611 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgdevonmart
	goto PetalburgDevonCenterMart_1

PetalburgDevonCenterMart_5:
# 616 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterMart_Text_1
	goto PetalburgDevonCenterMart_4


	.align 2
# 627 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
Petalburg_DevonMart:
# 628 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 629 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 630 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 631 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 632 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REMEDY
# 633 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 634 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HONEY
# 635 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_TOY
# 636 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
	.2byte ITEM_NONE

# 176 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_0:
# 176 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 204 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_1:
# 204 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	emote_x
	step_end

# 230 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_2:
# 230 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	emote_question_mark
	step_end

# 328 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_3:
# 328 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 332 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_4:
# 332 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

# 408 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_0:
# 408 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_up
	step_end

# 418 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_1:
# 418 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
	step_end

# 425 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_2:
# 425 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_right
# 425 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_right
# 425 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 426 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_3:
# 426 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_up
# 426 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_up
# 426 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_up
	step_end

# 435 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_4:
# 435 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	jump_in_place_down
	step_end

# 505 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PlayerHealScamForceDown_Movement_0:
# 505 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_down
	step_end

# 523 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PlayerHealScamForceRight_Movement_0:
# 523 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_right
	step_end

# 543 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterInnBlocker_Movement_0:
# 543 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 546 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterInnBlocker_Movement_1:
# 546 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_right
	step_end

# 555 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterPCTechnicianRepairing_Movement_0:
# 555 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_up
	step_end

PetalburgDevonCenterHideTalkversion_Text_0:
# 139 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Daily flag set. Riot objects will not\n"
	.string "respawn now.$"

PetalburgDevonCenterFakeMedic_Text_0:
# 162 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Don't get sour. We all need a bit of\n"
	.string "humour in these dark times!$"

PetalburgDevonCenterFakeMedic_Text_1:
# 167 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "You again? What's wrong now? Huh?\n"
	.string "That's not your Pokémon?\p"
	.string "That means you're a thief. Is that a\n"
	.string "confession?\p"
	.string "Want me to call the Devon grunts?$"

PetalburgDevonCenterFakeMedic_Text_2:
# 171 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Yes, call them$"

PetalburgDevonCenterFakeMedic_Text_3:
# 172 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "No, that's okay$"

PetalburgDevonCenterFakeMedic_Text_4:
# 178 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Y-you know what...? Maybe that's not my\n"
	.string "best idea today, hehe.\p"
	.string "Here's your Pokémon - let's forget his\n"
	.string "ever happened, hey?$"

PetalburgDevonCenterFakeMedic_Text_5:
# 189 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Thought so. Off you go then, you and\n"
	.string "your great partner!$"

PetalburgDevonCenterFakeMedic_Text_6:
# 195 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Hm? What's the funny look about?$"

PetalburgDevonCenterFakeMedic_Text_7:
# 198 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "My Pokémon are missing$"

PetalburgDevonCenterFakeMedic_Text_8:
# 199 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "You stole my Pokémon!$"

PetalburgDevonCenterFakeMedic_Text_9:
# 200 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Nothing$"

PetalburgDevonCenterFakeMedic_Text_10:
# 206 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I'm sorry to hear that. But we heal\n"
	.string "Pokémon here, we don't find them.$"

PetalburgDevonCenterFakeMedic_Text_11:
# 213 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Wait... now that you mention it! Oh, I'm\n"
	.string "so sorry, you're right!\p"
	.string "I forgot to load your Pokémon in from\n"
	.string "the machine. Here it is!$"

PetalburgDevonCenterFakeMedic_Text_12:
# 231 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Woah, what are you talking about?\n"
	.string "That's a serious accusation!\p"
	.string "Do you have any proof to back it up?$"

PetalburgDevonCenterFakeMedic_Text_13:
# 234 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Yes$"

PetalburgDevonCenterFakeMedic_Text_14:
# 235 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "No$"

PetalburgDevonCenterFakeMedic_Text_15:
# 236 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I don't need any$"

PetalburgDevonCenterFakeMedic_Text_16:
# 241 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Y-you do!? Why, aren't you a smart\n"
	.string "fellow...\p"
	.string "... I'll cut you a sweet deal then.\p"
	.string "I give you your Pokémon back, and you\n"
	.string "forget this ever happened.$"

PetalburgDevonCenterFakeMedic_Text_17:
# 255 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} got his Pokémon back!$"

PetalburgDevonCenterFakeMedic_Text_18:
# 257 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} got her Pokémon back!$"

PetalburgDevonCenterFakeMedic_Text_19:
# 259 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Don't look at me like that - it was just\n"
	.string "a joke! Have a good one now.$"

PetalburgDevonCenterFakeMedic_Text_20:
# 270 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Heh, thought so. Then stop harrasing me\n"
	.string "then, or I'll call the grunts on you.$"

PetalburgDevonCenterFakeMedic_Text_21:
# 278 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I-is that a threat? Y-you do look\n"
	.string "rather... seasoned.\p"
	.string "O-okay, here's your Pokémon!$"

PetalburgDevonCenterFakeMedic_Text_22:
# 288 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "We're good now, right? Let's pretend\n"
	.string "this never happened, please?$"

PetalburgDevonCenterFakeMedic_Text_23:
# 299 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Then clear the way for customers,\n"
	.string "please!$"

PetalburgDevonCenterFakeMedic_Text_24:
# 313 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Hello there! Round of healing? It's 200¥\n"
	.string "while we pay for repairs!$"

PetalburgDevonCenterFakeMedic_Text_25:
# 326 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Great - just a moment!$"

PetalburgDevonCenterFakeMedic_Text_26:
# 334 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All in good shape now. Take care!$"

PetalburgDevonCenterFakeMedic_Text_27:
# 341 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Uhm... you ain't got enough, pal- I mean,\n"
	.string "sir.$"

PetalburgDevonCenterFakeMedic_Text_28:
# 343 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Uhm... you ain't got enough, pal- I mean,\n"
	.string "miss.$"

PetalburgDevonCenterFakeMedic_Text_29:
# 345 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Due to the repair costs for the riot, we\n"
	.string "have suspended the one heal loan\l"
	.string "system.\p"
	.string "You want some healing, go get some\n"
	.string "pokeyen!$"

PetalburgDevonCenterFakeMedic_Text_30:
# 351 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Huh? Don't waste my time then!$"

PetalburgDevonCenterFakeMedic_Text_31:
# 360 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Welcome, dear customer!\p"
	.string "To celebrate the end of the riots,\n"
	.string "healing is on the house today!\p"
	.string "Let me see those Pokémon...$"

PetalburgDevonCenterFakeMedic_Text_32:
# 377 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All in good shape now. Take care! Hehe...$"

ScamFeebasfollowchat_Text_0:
# 393 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Fee...$"

DevonGuardsTakeHealScammer_Text_0:
# 420 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That's him! The nurse who stole my\n"
	.string "Pokémon! Get him!$"

DevonGuardsTakeHealScammer_Text_1:
# 431 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I hope you like the cold. There's a cell\n"
	.string "with your name in Dewford Prison!$"

DevonGuardsTakeHealScammer_Text_2:
# 438 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "W-WAIT, no, this is a TERRIBLE\n"
	.string "misunderstanding! I can explain!$"

DevonGuardsTakeHealScammer_Text_3:
# 442 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Save it for the trial! Off with you!$"

PlayerRealizesHealScam_Text_0:
# 484 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} feels his Pokéballs a bit\n"
	.string "ligther...$"

PlayerRealizesHealScam_Text_1:
# 486 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} feels her Pokéballs a bit\n"
	.string "ligther...$"

PlayerRealizesHealScam_Text_2:
# 493 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} realizes his Pokémon are\n"
	.string "gone!$"

PlayerRealizesHealScam_Text_3:
# 495 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} realizes her Pokémon are\n"
	.string "gone!$"

PlayerHealScamForceDown_Text_0:
# 503 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Must take back the Pokémon...!$"

PlayerHealScamForceUp_Text_0:
# 512 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Can't leave without the Pokémon...!$"

PetalburgDevonCenterTV_Text_0:
# 535 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "The TV returns static. The antenna may\n"
	.string "have been damaged after the riot.$"

PetalburgDevonCenterInnBlocker_Text_0:
# 544 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I'm sorry, but our inn floors suffered\n"
	.string "fire damage during the recent riot.\p"
	.string "They are are unsafe to stay in as a\n"
	.string "result. We apologize for the\l"
	.string "inconvenience.$"

PetalburgDevonCenterPCTechnicianRepairing_Text_0:
# 554 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Those rebels messed this PC real good.\n"
	.string "I'll take a while to repair it.$"

PetalburgDevonCenterTableNPC1_Text_0:
# 563 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
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
# 577 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I work on a contract basis, so now that\n"
	.string "Rebels have calmed down, I get less\l"
	.string "work.\p"
	.string "Maybe I should break something\n"
	.string "myself...$"

PetalburgDevonCenterPCTechnician_Text_1:
# 585 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Let us work, please. The sooner we're\n"
	.string "done, the sooner PC service returns.$"

PetalburgDevonCenterPCTechnician_Text_2:
# 590 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Just finished repairing the PC. Have at\n"
	.string "it!$"

PetalburgDevonCenterMart_Text_0:
# 609 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Those Rebels stole all our stock in the\n"
	.string "last raid...\p"
	.string "Mart will reopen once we receive a new\n"
	.string "shipment from Oldale Warehouse!$"

PetalburgDevonCenterMart_Text_1:
# 616 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Welcome to Petalburg Devon Mart! How\n"
	.string "may I help you?$"

PetalburgDevonCenterMart_Text_2:
# 620 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Thank you for your patronage!$"
