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
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_PokemonCenter_1F_TVOn
# 97 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
	.byte 0


PetalburgCity_PokemonCenter_1F_TVOn::
# 102 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 103 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special TurnOnTVScreen
	return


PetalburgDevonCenterFakeMedic::
# 108 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 109 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 111 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	showmoneybox 18, 0
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset petalburgriotendedforgood, PetalburgDevonCenterFakeMedic_2
PetalburgDevonCenterFakeMedic_1:
# 159 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set petalburgriotendedforgood, PetalburgDevonCenterFakeMedic_5
PetalburgDevonCenterFakeMedic_4:
# 165 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
endofpetalburgfakemedic:
# 166 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return

PetalburgDevonCenterFakeMedic_2:
# 115 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_0
# 117 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgDevonCenterFakeMedic_Text_1, PetalburgDevonCenterFakeMedic_Text_2
# 119 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgDevonCenterFakeMedic_8
PetalburgDevonCenterFakeMedic_7:
# 152 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgDevonCenterFakeMedic_11
PetalburgDevonCenterFakeMedic_10:
# 155 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_1

PetalburgDevonCenterFakeMedic_5:
# 161 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_9
# 162 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag petalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_4

PetalburgDevonCenterFakeMedic_8:
# 120 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkmoney 200
# 121 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgDevonCenterFakeMedic_14
PetalburgDevonCenterFakeMedic_13:
# 140 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgDevonCenterFakeMedic_16
	goto PetalburgDevonCenterFakeMedic_7

PetalburgDevonCenterFakeMedic_11:
# 153 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_8
	goto PetalburgDevonCenterFakeMedic_10

PetalburgDevonCenterFakeMedic_14:
# 122 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removemoney 200
# 123 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 124 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 125 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitse
# 126 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 128 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_3
# 129 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	hidefollower 0
# 130 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_0
# 131 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 132 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 133 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special HealPlayerParty
# 134 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 8, PetalburgDevonCenterFakeMedic_Movement_1
# 135 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 136 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_4
# 137 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgfakemedic
	goto PetalburgDevonCenterFakeMedic_13

PetalburgDevonCenterFakeMedic_16:
# 142 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 143 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgDevonCenterFakeMedic_19
PetalburgDevonCenterFakeMedic_18:
# 145 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgDevonCenterFakeMedic_22
PetalburgDevonCenterFakeMedic_21:
# 147 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_7
	goto PetalburgDevonCenterFakeMedic_7

PetalburgDevonCenterFakeMedic_19:
# 143 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_5
	goto PetalburgDevonCenterFakeMedic_18

PetalburgDevonCenterFakeMedic_22:
# 145 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterFakeMedic_Text_6
	goto PetalburgDevonCenterFakeMedic_21


PetalburgDevonCenterTV::
# 170 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 172 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set rebelswonpetalburgriot, PetalburgDevonCenterTV_1
# 176 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto OldalePokeCenterTVAds
	return

PetalburgDevonCenterTV_1:
# 174 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterTV_Text_0
	return


PetalburgDevonCenterInnBlocker::
# 181 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 182 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 7, PetalburgDevonCenterInnBlocker_Movement_0
# 183 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterInnBlocker_Text_0
# 185 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 7, PetalburgDevonCenterInnBlocker_Movement_1
# 186 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 7
# 187 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return


PetalburgDevonCenterPCTechnician::
# 191 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 192 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, PetalburgDevonCenterInnBlocker_Movement_0
# 193 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterPCTechnician_Text_0
# 194 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, PetalburgDevonCenterPCTechnician_Movement_0
# 195 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 4
# 196 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return


PetalburgDevonCenterMart::
# 200 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 201 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 4, PetalburgDevonCenterInnBlocker_Movement_0
# 203 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset rebelswonpetalburgriot, PetalburgDevonCenterMart_2
PetalburgDevonCenterMart_1:
# 210 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set devonwonpetalburgriot, PetalburgDevonCenterMart_5
PetalburgDevonCenterMart_4:
# 214 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	pokemart Petalburg_DevonMart
# 216 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterMart_Text_2
# 217 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
endofpetalburgdevonmart:
# 218 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement 2, PetalburgDevonCenterFakeMedic_Movement_0
# 219 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 2
# 220 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return

PetalburgDevonCenterMart_2:
# 205 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterMart_Text_0
# 207 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto endofpetalburgdevonmart
	goto PetalburgDevonCenterMart_1

PetalburgDevonCenterMart_5:
# 212 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgDevonCenterMart_Text_1
	goto PetalburgDevonCenterMart_4


	.align 2
# 223 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
Petalburg_DevonMart:
# 224 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 225 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 226 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 227 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 228 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REMEDY
# 229 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 230 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HONEY
# 231 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_TOY
# 232 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
	.2byte ITEM_NONE

# 130 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_0:
# 130 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 134 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterFakeMedic_Movement_1:
# 134 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

# 182 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterInnBlocker_Movement_0:
# 182 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 185 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterInnBlocker_Movement_1:
# 185 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_right
	step_end

# 194 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgDevonCenterPCTechnician_Movement_0:
# 194 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	face_up
	step_end

PetalburgDevonCenterFakeMedic_Text_0:
# 115 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Hello there! Round of healing? It's 200¥\n"
	.string "while we pay for repairs!$"

PetalburgDevonCenterFakeMedic_Text_1:
# 117 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Yes$"

PetalburgDevonCenterFakeMedic_Text_2:
# 117 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "No$"

PetalburgDevonCenterFakeMedic_Text_3:
# 128 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Great - just a moment!$"

PetalburgDevonCenterFakeMedic_Text_4:
# 136 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All in good shape now. Take care!$"

PetalburgDevonCenterFakeMedic_Text_5:
# 143 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Uhm... you ain't got enough, pal- I mean,\n"
	.string "sir.$"

PetalburgDevonCenterFakeMedic_Text_6:
# 145 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Uhm... you ain't got enough, pal- I mean,\n"
	.string "miss.$"

PetalburgDevonCenterFakeMedic_Text_7:
# 147 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Due to the repair costs for the riot, we\n"
	.string "have suspended the one heal loan\l"
	.string "system.\p"
	.string "You want some healing, go get some\n"
	.string "pokeyen!$"

PetalburgDevonCenterFakeMedic_Text_8:
# 153 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Huh? Don't waste my time then!$"

PetalburgDevonCenterFakeMedic_Text_9:
# 161 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Steal sequence commence!$"

PetalburgDevonCenterTV_Text_0:
# 174 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "The TV returns static. The antenna may\n"
	.string "have been damaged after the riot.$"

PetalburgDevonCenterInnBlocker_Text_0:
# 183 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "I'm sorry, but our inn floors suffered\n"
	.string "fire damage during the recent riot.\p"
	.string "They are are unsafe to stay in as a\n"
	.string "result. We apologize for the\l"
	.string "inconvenience.$"

PetalburgDevonCenterPCTechnician_Text_0:
# 193 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Those rebels messed this PC real good.\n"
	.string "I'll take a while to repair it.$"

PetalburgDevonCenterMart_Text_0:
# 205 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Those Rebels stole all our stock in the\n"
	.string "last raid...\p"
	.string "Mart will reopen once we receive a new\n"
	.string "shipment from Oldale Warehouse!$"

PetalburgDevonCenterMart_Text_1:
# 212 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Welcome to Petalburg Devon Mart! How\n"
	.string "may I help you?$"

PetalburgDevonCenterMart_Text_2:
# 216 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Thank you for your patronage!$"
