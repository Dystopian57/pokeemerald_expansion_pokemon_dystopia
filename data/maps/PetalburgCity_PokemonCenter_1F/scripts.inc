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
# 308 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset petalburgriotendedforgood, PetalburgDevonCenterFakeMedic_16
PetalburgDevonCenterFakeMedic_15:
# 355 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgDevonCenterFakeMedic_24
PetalburgDevonCenterFakeMedic_23:
# 382 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
endofpetalburgfakemedic:
# 383 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
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
# 296 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgDevonCenterFakeMedic_39
PetalburgDevonCenterFakeMedic_38:
# 303 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
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
# 310 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	showmoneybox 18, 0
# 311 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_24
# 313 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDevonCenterFakeMedic_Text_13, PetalburgDevonCenterFakeMedic_Text_14
# 315 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDevonCenterFakeMedic_27
PetalburgDevonCenterFakeMedic_26:
# 348 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_33
PetalburgDevonCenterFakeMedic_32:
# 351 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
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
# 358 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_31
# 361 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER
# 362 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hidefollower 0
# 363 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_2
# 364 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 365 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 366 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special HealPlayerParty
# 367 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_3
# 368 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 370 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 375 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_32
# 378 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 1
	goto PetalburgDevonCenterFakeMedic_23

PetalburgDevonCenterFakeMedic_27:
# 316 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkmoney 200
# 317 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgDevonCenterFakeMedic_36
PetalburgDevonCenterFakeMedic_35:
# 336 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgDevonCenterFakeMedic_44
	goto PetalburgDevonCenterFakeMedic_26

PetalburgDevonCenterFakeMedic_30:
# 229 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_12
# 231 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDevonCenterFakeMedic_Text_13, PetalburgDevonCenterFakeMedic_Text_14, PetalburgDevonCenterFakeMedic_Text_15
# 235 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDevonCenterFakeMedic_42
PetalburgDevonCenterFakeMedic_41:
# 267 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_47
PetalburgDevonCenterFakeMedic_46:
# 272 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgDevonCenterFakeMedic_55
	goto PetalburgDevonCenterFakeMedic_29

PetalburgDevonCenterFakeMedic_33:
# 349 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_30
	goto PetalburgDevonCenterFakeMedic_32

PetalburgDevonCenterFakeMedic_36:
# 318 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removemoney 200
# 319 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 320 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 321 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 322 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 324 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_25
# 325 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hidefollower 0
# 326 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_2
# 327 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 328 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 329 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special HealPlayerParty
# 330 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_3
# 331 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 332 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_26
# 333 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_35

PetalburgDevonCenterFakeMedic_39:
# 297 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_23
# 298 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_38

PetalburgDevonCenterFakeMedic_42:
# 236 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 237 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 238 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 239 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_16
# 243 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
healscammerreturnspokemon:
# 247 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 249 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 250 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 251 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 252 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 253 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgDevonCenterFakeMedic_50
PetalburgDevonCenterFakeMedic_49:
# 255 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgDevonCenterFakeMedic_58
PetalburgDevonCenterFakeMedic_57:
# 257 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_19
# 258 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 4
# 261 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 262 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
# 264 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_41

PetalburgDevonCenterFakeMedic_44:
# 338 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 339 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgDevonCenterFakeMedic_53
PetalburgDevonCenterFakeMedic_52:
# 341 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgDevonCenterFakeMedic_61
PetalburgDevonCenterFakeMedic_60:
# 343 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_29
	goto PetalburgDevonCenterFakeMedic_26

PetalburgDevonCenterFakeMedic_47:
# 268 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_20
# 270 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_46

PetalburgDevonCenterFakeMedic_50:
# 253 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_17
	goto PetalburgDevonCenterFakeMedic_49

PetalburgDevonCenterFakeMedic_53:
# 339 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_27
	goto PetalburgDevonCenterFakeMedic_52

PetalburgDevonCenterFakeMedic_55:
# 273 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 274 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 275 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 276 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_21
# 279 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 280 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 281 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 282 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgDevonCenterFakeMedic_64
PetalburgDevonCenterFakeMedic_63:
# 284 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgDevonCenterFakeMedic_67
PetalburgDevonCenterFakeMedic_66:
# 286 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_22
# 287 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 4
# 289 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 290 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
# 292 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_29

PetalburgDevonCenterFakeMedic_58:
# 255 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_18
	goto PetalburgDevonCenterFakeMedic_57

PetalburgDevonCenterFakeMedic_61:
# 341 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_28
	goto PetalburgDevonCenterFakeMedic_60

PetalburgDevonCenterFakeMedic_64:
# 282 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_17
	goto PetalburgDevonCenterFakeMedic_63

PetalburgDevonCenterFakeMedic_67:
# 284 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_18
	goto PetalburgDevonCenterFakeMedic_66


ScamFeebasfollowchat::
# 389 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 390 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_FEEBAS, CRY_MODE_NORMAL
# 391 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox ScamFeebasfollowchat_Text_0
# 392 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


DevonGuardsTakeHealScammer::
# 396 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 397 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag healscammerarrestdevons
# 398 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 399 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 401 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDevonCenterFakeMedic_Movement_3
# 403 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 12
# 404 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 13
# 406 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 12, DevonGuardsTakeHealScammer_Movement_0
# 407 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 13, DevonGuardsTakeHealScammer_Movement_0
# 408 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 13
# 410 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 411 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 412 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 14
# 414 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 416 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 14, DevonGuardsTakeHealScammer_Movement_1
# 417 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 14
# 418 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox DevonGuardsTakeHealScammer_Text_0
# 419 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 421 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 422 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, DevonGuardsTakeHealScammer_Movement_2
# 423 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonGuardsTakeHealScammer_Movement_3
# 424 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 12, DevonGuardsTakeHealScammer_Movement_4
# 425 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 12
# 427 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 12, DevonGuardsTakeHealScammer_Movement_1
# 428 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 12
# 429 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox DevonGuardsTakeHealScammer_Text_1
# 430 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 432 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_LEDGE
# 433 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, DevonGuardsTakeHealScammer_Movement_5
# 434 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 8
# 436 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox DevonGuardsTakeHealScammer_Text_2
# 438 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 12, DevonGuardsTakeHealScammer_Movement_1
# 439 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 12
# 440 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox DevonGuardsTakeHealScammer_Text_3
# 441 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 443 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 444 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_FLEE
# 445 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 446 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 447 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 448 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject 8
# 449 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject 12
# 450 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject 13
# 451 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeobject 14
# 453 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag healscammerarrestdevons
# 454 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgfakemedic
# 455 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag petalburgnurse
# 457 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriotendedforgood
# 458 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgriotstopped
# 460 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addobject 1
# 465 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	fadeoutbgm 1
# 466 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	fadeinbgm 1
# 467 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_GYMNOPEDIE, TRUE
# 469 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 5
# 470 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 471 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpsilent MAP_PETALBURG_CITY_POKEMON_CENTER_1F, 3
# 472 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpsilent MAP_PETALBURG_CITY, 2
# 475 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


PlayerRealizesHealScam::
# 479 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 481 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 482 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRealizesHealScam_2
PlayerRealizesHealScam_1:
# 484 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerRealizesHealScam_5
PlayerRealizesHealScam_4:
# 486 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 487 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgDevonCenterFakeMedic_Movement_0
# 488 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 490 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 491 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerRealizesHealScam_8
PlayerRealizesHealScam_7:
# 493 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerRealizesHealScam_11
PlayerRealizesHealScam_10:
# 495 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_PETALBURG_HEALING_SCAM, 2
# 496 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return

PlayerRealizesHealScam_2:
# 482 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerRealizesHealScam_Text_0
	goto PlayerRealizesHealScam_1

PlayerRealizesHealScam_5:
# 484 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerRealizesHealScam_Text_1
	goto PlayerRealizesHealScam_4

PlayerRealizesHealScam_8:
# 491 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerRealizesHealScam_Text_2
	goto PlayerRealizesHealScam_7

PlayerRealizesHealScam_11:
# 493 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerRealizesHealScam_Text_3
	goto PlayerRealizesHealScam_10


PlayerHealScamForceDown::
# 500 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 501 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerHealScamForceDown_Text_0
# 502 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 503 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHealScamForceDown_Movement_0
# 504 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 505 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


PlayerHealScamForceUp::
# 509 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 510 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerHealScamForceUp_Text_0
# 511 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 512 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DevonGuardsTakeHealScammer_Movement_0
# 513 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 514 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


PlayerHealScamForceRight::
# 518 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 519 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PlayerHealScamForceUp_Text_0
# 520 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 521 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHealScamForceRight_Movement_0
# 522 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 523 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return


PetalburgDevonCenterTV::
# 529 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 531 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset rebelswonpetalburgriot, PetalburgDevonCenterTV_1
# 535 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto OldalePokeCenterTVAds
	return

PetalburgDevonCenterTV_1:
# 533 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterTV_Text_0
	return


PetalburgDevonCenterInnBlocker::
# 540 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 541 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 7, PetalburgDevonCenterInnBlocker_Movement_0
# 542 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterInnBlocker_Text_0
# 544 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 7, PetalburgDevonCenterInnBlocker_Movement_1
# 545 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 7
# 546 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return


PetalburgDevonCenterPCTechnicianRepairing::
# 550 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 551 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, PetalburgDevonCenterInnBlocker_Movement_0
# 552 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnicianRepairing_Text_0
# 553 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, PetalburgDevonCenterPCTechnicianRepairing_Movement_0
# 554 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 555 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return


PetalburgDevonCenterTableNPC1::
# 559 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 560 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 3, PetalburgDevonCenterInnBlocker_Movement_0
# 561 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterTableNPC1_Text_0
# 565 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 3, PetalburgDevonCenterInnBlocker_Movement_1
# 566 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 3
# 567 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return


PetalburgDevonCenterPCTechnician::
# 571 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 572 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 10, PetalburgDevonCenterInnBlocker_Movement_0
# 573 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgDevonCenterPCTechnician_2
# 581 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset rebelswonpetalburgriot, PetalburgDevonCenterPCTechnician_6
PetalburgDevonCenterPCTechnician_5:
# 586 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set rebelswonpetalburgriot, PetalburgDevonCenterPCTechnician_8
PetalburgDevonCenterPCTechnician_1:
# 593 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 10, PetalburgDevonCenterFakeMedic_Movement_3
# 594 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 10
# 596 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return

PetalburgDevonCenterPCTechnician_2:
# 575 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnician_Text_0
	goto PetalburgDevonCenterPCTechnician_1

PetalburgDevonCenterPCTechnician_6:
# 583 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnician_Text_1
	goto PetalburgDevonCenterPCTechnician_5

PetalburgDevonCenterPCTechnician_8:
# 588 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnician_Text_2
	goto PetalburgDevonCenterPCTechnician_1


PetalburgDevonCenterMart::
# 602 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 603 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, PetalburgDevonCenterInnBlocker_Movement_0
# 605 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset rebelswonpetalburgriot, PetalburgDevonCenterMart_2
PetalburgDevonCenterMart_1:
# 612 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set devonwonpetalburgriot, PetalburgDevonCenterMart_5
PetalburgDevonCenterMart_4:
# 616 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	pokemart Petalburg_DevonMart
# 618 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterMart_Text_2
# 619 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
endofpetalburgdevonmart:
# 620 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 2, PetalburgDevonCenterFakeMedic_Movement_2
# 621 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 2
# 622 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return

PetalburgDevonCenterMart_2:
# 607 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterMart_Text_0
# 609 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgdevonmart
	goto PetalburgDevonCenterMart_1

PetalburgDevonCenterMart_5:
# 614 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterMart_Text_1
	goto PetalburgDevonCenterMart_4


	.align 2
# 625 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
Petalburg_DevonMart:
# 626 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 627 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 628 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 629 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 630 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REMEDY
# 631 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 632 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HONEY
# 633 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_TOY
# 634 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
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

# 326 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_2:
# 326 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 330 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_3:
# 330 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

# 406 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_0:
# 406 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_up
	step_end

# 416 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_1:
# 416 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
	step_end

# 422 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_2:
# 422 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 423 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_3:
# 423 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 424 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_4:
# 424 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_up
# 424 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_up
# 424 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_up
	step_end

# 433 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
DevonGuardsTakeHealScammer_Movement_5:
# 433 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	jump_in_place_down
	step_end

# 503 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PlayerHealScamForceDown_Movement_0:
# 503 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_down
	step_end

# 521 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PlayerHealScamForceRight_Movement_0:
# 521 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	walk_right
	step_end

# 541 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterInnBlocker_Movement_0:
# 541 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 544 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterInnBlocker_Movement_1:
# 544 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_right
	step_end

# 553 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterPCTechnicianRepairing_Movement_0:
# 553 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
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
# 229 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Woah, what are you talking about?\n"
	.string "That's a serious accusation!\p"
	.string "Do you have any proof to back it up?$"

PetalburgDevonCenterFakeMedic_Text_13:
# 232 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Yes$"

PetalburgDevonCenterFakeMedic_Text_14:
# 233 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "No$"

PetalburgDevonCenterFakeMedic_Text_15:
# 234 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I don't need any$"

PetalburgDevonCenterFakeMedic_Text_16:
# 239 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Y-you do!? Why, aren't you a smart\n"
	.string "fellow...\p"
	.string "... I'll cut you a sweet deal then.\p"
	.string "I give you your Pokémon back, and you\n"
	.string "forget this ever happened.$"

PetalburgDevonCenterFakeMedic_Text_17:
# 253 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} got his Pokémon back!$"

PetalburgDevonCenterFakeMedic_Text_18:
# 255 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} got her Pokémon back!$"

PetalburgDevonCenterFakeMedic_Text_19:
# 257 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Don't look at me like that - it was just\n"
	.string "a joke! Have a good one now.$"

PetalburgDevonCenterFakeMedic_Text_20:
# 268 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Heh, thought so. Then stop harrasing me\n"
	.string "then, or I'll call the grunts on you.$"

PetalburgDevonCenterFakeMedic_Text_21:
# 276 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I-is that a threat? Y-you do look\n"
	.string "rather... seasoned.\p"
	.string "O-okay, here's your Pokémon!$"

PetalburgDevonCenterFakeMedic_Text_22:
# 286 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "We're good now, right? Let's pretend\n"
	.string "this never happened, please?$"

PetalburgDevonCenterFakeMedic_Text_23:
# 297 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Then clear the way for customers,\n"
	.string "please!$"

PetalburgDevonCenterFakeMedic_Text_24:
# 311 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Hello there! Round of healing? It's 200¥\n"
	.string "while we pay for repairs!$"

PetalburgDevonCenterFakeMedic_Text_25:
# 324 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Great - just a moment!$"

PetalburgDevonCenterFakeMedic_Text_26:
# 332 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All in good shape now. Take care!$"

PetalburgDevonCenterFakeMedic_Text_27:
# 339 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Uhm... you ain't got enough, pal- I mean,\n"
	.string "sir.$"

PetalburgDevonCenterFakeMedic_Text_28:
# 341 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Uhm... you ain't got enough, pal- I mean,\n"
	.string "miss.$"

PetalburgDevonCenterFakeMedic_Text_29:
# 343 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Due to the repair costs for the riot, we\n"
	.string "have suspended the one heal loan\l"
	.string "system.\p"
	.string "You want some healing, go get some\n"
	.string "pokeyen!$"

PetalburgDevonCenterFakeMedic_Text_30:
# 349 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Huh? Don't waste my time then!$"

PetalburgDevonCenterFakeMedic_Text_31:
# 358 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Welcome, dear customer!\p"
	.string "To celebrate the end of the riots,\n"
	.string "healing is on the house today!\p"
	.string "Let me see those Pokémon...$"

PetalburgDevonCenterFakeMedic_Text_32:
# 375 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All in good shape now. Take care! Hehe...$"

ScamFeebasfollowchat_Text_0:
# 391 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Fee...$"

DevonGuardsTakeHealScammer_Text_0:
# 418 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That's him! The nurse who stole my\n"
	.string "Pokémon! Get him!$"

DevonGuardsTakeHealScammer_Text_1:
# 429 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I hope you like the cold. There's a cell\n"
	.string "with your name in Dewford Prison!$"

DevonGuardsTakeHealScammer_Text_2:
# 436 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "W-WAIT, no, this is a TERRIBLE\n"
	.string "misunderstanding! I can explain!$"

DevonGuardsTakeHealScammer_Text_3:
# 440 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Save it for the trial! Off with you!$"

PlayerRealizesHealScam_Text_0:
# 482 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} feels his Pokéballs a bit\n"
	.string "ligther...$"

PlayerRealizesHealScam_Text_1:
# 484 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} feels her Pokéballs a bit\n"
	.string "ligther...$"

PlayerRealizesHealScam_Text_2:
# 491 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} realizes his Pokémon are\n"
	.string "gone!$"

PlayerRealizesHealScam_Text_3:
# 493 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} realizes her Pokémon are\n"
	.string "gone!$"

PlayerHealScamForceDown_Text_0:
# 501 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Must take back the Pokémon...!$"

PlayerHealScamForceUp_Text_0:
# 510 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Can't leave without the Pokémon...!$"

PetalburgDevonCenterTV_Text_0:
# 533 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "The TV returns static. The antenna may\n"
	.string "have been damaged after the riot.$"

PetalburgDevonCenterInnBlocker_Text_0:
# 542 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I'm sorry, but our inn floors suffered\n"
	.string "fire damage during the recent riot.\p"
	.string "They are are unsafe to stay in as a\n"
	.string "result. We apologize for the\l"
	.string "inconvenience.$"

PetalburgDevonCenterPCTechnicianRepairing_Text_0:
# 552 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Those rebels messed this PC real good.\n"
	.string "I'll take a while to repair it.$"

PetalburgDevonCenterTableNPC1_Text_0:
# 561 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
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
# 575 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I work on a contract basis, so now that\n"
	.string "Rebels have calmed down, I get less\l"
	.string "work.\p"
	.string "Maybe I should break something\n"
	.string "myself...$"

PetalburgDevonCenterPCTechnician_Text_1:
# 583 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Let us work, please. The sooner we're\n"
	.string "done, the sooner PC service returns.$"

PetalburgDevonCenterPCTechnician_Text_2:
# 588 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Just finished repairing the PC. Have at\n"
	.string "it!$"

PetalburgDevonCenterMart_Text_0:
# 607 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Those Rebels stole all our stock in the\n"
	.string "last raid...\p"
	.string "Mart will reopen once we receive a new\n"
	.string "shipment from Oldale Warehouse!$"

PetalburgDevonCenterMart_Text_1:
# 614 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Welcome to Petalburg Devon Mart! How\n"
	.string "may I help you?$"

PetalburgDevonCenterMart_Text_2:
# 618 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Thank you for your patronage!$"
