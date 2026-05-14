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
	.byte 0


OldaleDevonCenter_TVOn::
# 63 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 64 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special TurnOnTVScreen
	return


CarRebel::
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 9, CarRebel_Movement_0
# 76 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox CarRebel_Text_0
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 9, CarRebel_Movement_1
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldaleTown_Devon_Nurse::
# 85 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	GetGameStat GAME_STAT_USED_POKECENTER
# 87 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 88 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq OldaleTown_Devon_Nurse_2
OldaleTown_Devon_Nurse_1:
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_eq OldaleTown_Devon_Nurse_5
OldaleTown_Devon_Nurse_4:
# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 50
	goto_if_eq OldaleTown_Devon_Nurse_8
OldaleTown_Devon_Nurse_7:
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 0
	goto_if_eq OldaleTown_Devon_Nurse_11
OldaleTown_Devon_Nurse_10:
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 1
	goto_if_eq OldaleTown_Devon_Nurse_14
OldaleTown_Devon_Nurse_13:
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 2
	goto_if_eq OldaleTown_Devon_Nurse_17
OldaleTown_Devon_Nurse_16:
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_DEVONCENTERLOYALTY, 3
	goto_if_eq OldaleTown_Devon_Nurse_20
OldaleTown_Devon_Nurse_19:
# 121 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_Devon_Nurse_23
OldaleTown_Devon_Nurse_22:
# 187 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldaleTown_Devon_Nurse_26
OldaleTown_Devon_Nurse_25:
# 189 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
finishhealscript:
# 190 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return

OldaleTown_Devon_Nurse_2:
# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_DEVONCENTERLOYALTY, 1
	goto OldaleTown_Devon_Nurse_1

OldaleTown_Devon_Nurse_5:
# 92 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_DEVONCENTERLOYALTY, 2
	goto OldaleTown_Devon_Nurse_4

OldaleTown_Devon_Nurse_8:
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_DEVONCENTERLOYALTY, 3
	goto OldaleTown_Devon_Nurse_7

OldaleTown_Devon_Nurse_11:
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_0, MSGBOX_YESNO
	goto OldaleTown_Devon_Nurse_10

OldaleTown_Devon_Nurse_14:
# 104 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_1, MSGBOX_YESNO
	goto OldaleTown_Devon_Nurse_13

OldaleTown_Devon_Nurse_17:
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_2, MSGBOX_YESNO
	goto OldaleTown_Devon_Nurse_16

OldaleTown_Devon_Nurse_20:
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_3, MSGBOX_YESNO
	goto OldaleTown_Devon_Nurse_19

OldaleTown_Devon_Nurse_23:
# 123 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset devoncenterdebt, OldaleTown_Devon_Nurse_28
# 167 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_8
# 169 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 100
# 170 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleTown_Devon_Nurse_35
OldaleTown_Devon_Nurse_34:
# 178 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_Devon_Nurse_39
	goto OldaleTown_Devon_Nurse_22

OldaleTown_Devon_Nurse_26:
# 188 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_11
	goto OldaleTown_Devon_Nurse_25

OldaleTown_Devon_Nurse_28:
# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_4
# 126 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
healpokes:
# 127 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidefollower 0
# 128 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_0
# 129 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 130 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 131 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special HealPlayerParty
# 132 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, CarRebel_Movement_1
# 133 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 134 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_5
# 136 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 100
# 137 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleTown_Devon_Nurse_32
OldaleTown_Devon_Nurse_31:
# 156 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_Devon_Nurse_37
	goto OldaleTown_Devon_Nurse_22

OldaleTown_Devon_Nurse_32:
# 138 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 139 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 140 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 100
# 141 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 142 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 143 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_6
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 150 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 151 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto finishhealscript
# 153 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 154 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement
	goto OldaleTown_Devon_Nurse_31

OldaleTown_Devon_Nurse_35:
# 171 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 172 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 173 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 100
# 174 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_9
# 175 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	clearflag devoncenterdebt
# 176 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto healpokes
	goto OldaleTown_Devon_Nurse_34

OldaleTown_Devon_Nurse_37:
# 157 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_2
# 158 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 159 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 160 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_7
# 163 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag devoncenterdebt
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto finishhealscript
	goto OldaleTown_Devon_Nurse_22

OldaleTown_Devon_Nurse_39:
# 179 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_10
# 181 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto finishhealscript
	goto OldaleTown_Devon_Nurse_22


OldaleTown_Mart_Clerk::
# 197 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 198 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 199 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 5, CarRebel_Movement_0
# 200 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_0
# 201 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 202 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_PostWarehouse
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_PreWarehouse
# 204 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_1
# 205 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldaleTown_Mart_PostWarehouse::
# 211 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_PostWarehouse
# 212 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_PostWarehouse_Text_0
# 213 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


	.align 2
# 216 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Mart_Pokemart_PreWarehouse:
# 217 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
	.2byte ITEM_NONE

	.align 2
# 220 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Mart_Pokemart_PostWarehouse:
# 221 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 222 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
	.2byte ITEM_NONE

OldalePokeCenterOldLady::
# 229 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 230 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 3, CarRebel_Movement_0
# 231 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterOldLady_Text_0
# 234 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterInjuredGuy::
# 238 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, CarRebel_Movement_0
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterInjuredGuy_Text_0
# 242 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterMapBoy::
# 246 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 247 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 6, CarRebel_Movement_0
# 248 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterMapBoy_Text_0
# 251 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 7, OldalePokeCenterMapBoy_Movement_0
# 252 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterInnSign::
# 256 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 257 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterInnSign_Text_0
# 258 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterBookshelf::
# 262 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 263 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterBookshelf_Text_0
# 264 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterTVKid::
# 268 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 269 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 8, CarRebel_Movement_0
# 270 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterTVKid_Text_0
# 272 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 8, OldalePokeCenterMapBoy_Movement_0
# 273 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterTVAds::
# 278 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 279 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	random 7
# 280 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 282 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 283 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, OldalePokeCenterTVAds_3
# 284 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, OldalePokeCenterTVAds_4
# 285 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, OldalePokeCenterTVAds_5
# 286 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, OldalePokeCenterTVAds_6
# 287 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, OldalePokeCenterTVAds_7
# 288 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, OldalePokeCenterTVAds_8
# 289 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 6, OldalePokeCenterTVAds_9
# 290 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 7, OldalePokeCenterTVAds_10
OldalePokeCenterTVAds_1:
# 295 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return

OldalePokeCenterTVAds_3:
# 283 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devonballad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_4:
# 284 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devotionad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_5:
# 285 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Safemonad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_6:
# 286 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Lifeindustriesad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_7:
# 287 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devoncenterad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_8:
# 288 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Rebelhackersad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_9:
# 289 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devonnetad
	goto OldalePokeCenterTVAds_1

OldalePokeCenterTVAds_10:
# 290 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto Devongruntad
	goto OldalePokeCenterTVAds_1


Devonballad::
# 300 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_ARCHIPELAGO, 10, 3
# 301 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonballad_Text_0
# 304 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 305 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_CONTINENTAL, 10, 3
# 306 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonballad_Text_1
# 307 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 308 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Devotionad::
# 312 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devotionad_Text_0
# 315 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_ELEGANT, 10, 3
# 316 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devotionad_Text_1
# 319 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 320 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Safemonad::
# 326 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_FANCY, 10, 3
# 327 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Safemonad_Text_0
# 328 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 329 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_GARDEN, 10, 3
# 330 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Safemonad_Text_1
# 331 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 332 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Safemonad_Text_2
# 333 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Lifeindustriesad::
# 337 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_HIGH_PLAINS, 10, 3
# 338 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Lifeindustriesad_Text_0
# 340 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 341 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_JUNGLE, 10, 3
# 342 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Lifeindustriesad_Text_1
# 344 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 345 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_MARINE, 10, 3
# 346 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Lifeindustriesad_Text_2
# 347 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 348 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Devoncenterad::
# 352 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_MEADOW, 10, 3
# 353 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devoncenterad_Text_0
# 355 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 356 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_MODERN, 10, 3
# 357 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devoncenterad_Text_1
# 359 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 360 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Rebelhackersad::
# 364 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_MONSOON, 10, 3
# 365 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_0
# 367 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 368 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_OCEAN, 10, 3
# 369 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_1
# 370 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 371 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_POKEBALL, 10, 3
# 372 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_2
# 374 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_POLAR, 10, 3
# 375 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_3
# 376 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_RIVER, 10, 3
# 377 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Rebelhackersad_Text_4
# 378 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 379 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Devonnetad::
# 383 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_SANDSTORM, 10, 3
# 384 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonnetad_Text_0
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 388 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_SAVANNA, 10, 3
# 389 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonnetad_Text_1
# 391 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 392 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_VIVILLON_SUN, 10, 3
# 393 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devonnetad_Text_2
# 394 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Devongruntad::
# 398 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devongruntad_Text_0
# 400 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 401 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmonpic SPECIES_PIKACHU_COSPLAY, 10, 3
# 402 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devongruntad_Text_1
# 403 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Devongruntad_Text_2
# 404 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemonpic
# 405 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
CarRebel_Movement_0:
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
CarRebel_Movement_1:
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

# 128 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_0:
# 128 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_1:
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	nurse_joy_bow
	step_end

# 157 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_2:
# 157 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 251 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldalePokeCenterMapBoy_Movement_0:
# 251 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_up
	step_end

CarRebel_Text_0:
# 76 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Dammit, I'm broke a hell... I don't have\n"
	.string "enough pokeyen to heal my Electrike...\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Guess I'll have to pickpocket the next\n"
	.string "geezer I see, hehe...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_Devon_Nurse_Text_0:
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hey... Heal?$"

OldaleTown_Devon_Nurse_Text_1:
# 104 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Morning. The usual?$"

OldaleTown_Devon_Nurse_Text_2:
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Good morning, and welcome back. Need some healing, d-...  {COLOR LIGHT_GRAY}{SHADOW WHITE}sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} \n DEAR customer?$"

OldaleTown_Devon_Nurse_Text_3:
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, {PLAYER}, we're SOO happy to have you back!  {COLOR LIGHT_GRAY}{SHADOW WHITE}As if...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}  \p May I take your WONDERFUL Pokémon?$"

OldaleTown_Devon_Nurse_Text_4:
# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Right... just a sec.$"

OldaleTown_Devon_Nurse_Text_5:
# 134 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That will be 100¥...$"

OldaleTown_Devon_Nurse_Text_6:
# 143 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thank you for your patronage.\n"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Now get out...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_Devon_Nurse_Text_7:
# 160 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Wait... you don't have enough pokeyen.\n"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Are you dense...?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Well, you don't need to pay right now,\n"
	.string "but you will need to clear this debt\l"
	.string "before using our services again.\p"
	.string "Now go out there, and get a job or\n"
	.string "something.$"

OldaleTown_Devon_Nurse_Text_8:
# 167 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You have a 100¥ debt from last time you\n"
	.string "used our services, so I'll be taking\l"
	.string "that...$"

OldaleTown_Devon_Nurse_Text_9:
# 174 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Great. Now let's proceed with your\n"
	.string "current heal...$"

OldaleTown_Devon_Nurse_Text_10:
# 179 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Of course... you still don't have enough.\p"
	.string "Look, we're not running a charity here.\n"
	.string "If you want your buddies healed, go get\l"
	.string "some money.$"

OldaleTown_Devon_Nurse_Text_11:
# 188 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Then please get off the way.$"

OldaleTown_Mart_Clerk_Text_0:
# 200 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Welcome to Devon Mall! How may I help\n"
	.string "you?$"

OldaleTown_Mart_Clerk_Text_1:
# 204 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Wait, I know what you are thinking...\n"
	.string "that I have no BALLS!$"

OldaleTown_Mart_PostWarehouse_Text_0:
# 212 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thank you for your patronage - and for\n"
	.string "your help liberating our warehouse!$"

OldalePokeCenterOldLady_Text_0:
# 231 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "It's so sad... it's mostly kids and old\n"
	.string "people like me round these parts.\p"
	.string "Most people your age were sent to the\n"
	.string "war, and never returned.\p"
	.string "Like my... ah, I'm sorry. vent to\n"
	.string "strangers like this...$"

OldalePokeCenterInjuredGuy_Text_0:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I miss the days when Pokémon\n"
	.string "healthcare was free…\p"
	.string "Then again, Safemon are so weak, they\n"
	.string "barely get hurt when fighting each\l"
	.string "other.$"

OldalePokeCenterMapBoy_Text_0:
# 248 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "In school we learnt that the area from\n"
	.string "Route 103 to Route 104 is called the\l"
	.string "{COLOR GREEN}'Rebel Zone'{COLOR DARK_GRAY}.\p"
	.string "It's a dangerous place where people who\n"
	.string "hate Devon have gathered, and you need\l"
	.string "a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY} to get out of it.$"

OldalePokeCenterInnSign_Text_0:
# 257 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "To 2F - Inn Rooms.$"

OldalePokeCenterBookshelf_Text_0:
# 263 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The shelf is full of magazines with ads\n"
	.string "about Devon products.$"

OldalePokeCenterTVKid_Text_0:
# 270 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I've been watching this TV for half an\n"
	.string "hour, and there's been nothing but\l"
	.string "ads...\p"
	.string "They say you can watch actual programs\n"
	.string "from the TVs in the inn rooms, but I'm a\l"
	.string "bit too broke for those.$"

Devonballad_Text_0:
# 301 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Enhanced catch rate. Better grip. Light\n"
	.string "as a feather.\p"
	.string "In short: engineered to perfection.\p"
	.string "Save time choosing the perfect ball,\n"
	.string "because it's always the same - the\l"
	.string "Devon Ball.$"

Devonballad_Text_1:
# 306 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Devon Ball. The only ball with no catch.$"

Devotionad_Text_0:
# 312 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Health points, Power Points, Status\n"
	.string "Ailments... keeping your companions\l"
	.string "healthy requires a full bag!\p"
	.string "Is there not an easier way?\n"
	.string "Devon Co.'s answer is... yes!$"

Devotionad_Text_1:
# 316 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Our newest potion, 'Devotion', is the\n"
	.string "only medicine your Pokémon will ever\l"
	.string "need.\p"
	.string "Only for 1000¥, now available at Devon\n"
	.string "Centers all over Hoenn!\p"
	.string "Devotion - the only potion devoted to\n"
	.string "health.\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Side effects not tested on all species.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Safemonad_Text_0:
# 327 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Power. Volatility. Danger.\n"
	.string "Those are the defining traits of\l"
	.string "Pokémon.$"

Safemonad_Text_1:
# 330 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Control. Trust. Safety.\n"
	.string "Those are for Safemon.$"

Safemonad_Text_2:
# 332 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "We at Devon choose the latter. And you?$"

Lifeindustriesad_Text_0:
# 338 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "This is Davis. Every morning, in Route\n"
	.string "116, Davis wakes up before dawn to care\l"
	.string "for his crops, tend to his farm, and\l"
	.string "create the best produce in Hoenn.$"

Lifeindustriesad_Text_1:
# 342 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The same produce that us, in Devon Life\n"
	.string "Industries, take fresh from his land,\l"
	.string "directly to your plate.$"

Lifeindustriesad_Text_2:
# 346 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Devon Life Industries. Quality food,\n"
	.string "for quality people.$"

Devoncenterad_Text_0:
# 353 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "When you are tired. When you are ill.\n"
	.string "When you are scared.\p"
	.string "Whenever you are in need, Devon Centers\n"
	.string "are your one safe haven.$"

Devoncenterad_Text_1:
# 357 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Devon Centers. Keeping you safe, 24/7.\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Fees may apply. Loitering not allowed.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Rebelhackersad_Text_0:
# 365 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "We interrupt this commercial broadcast\n"
	.string "to announce our signal is be-1ng\l"
	.string "c0mPromi!iis¥Ed b-bY R3b-… BZZT...$"

Rebelhackersad_Text_1:
# 369 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hey. You. Are you sick of Safemon? Me\n"
	.string "too. Because they suck.$"

Rebelhackersad_Text_2:
# 372 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Everyday, Devon converts more than 100\n"
	.string "Pokémon into Safemon.\p"
	.string "But if you help us, we can get them down\n"
	.string "to 0.$"

Rebelhackersad_Text_3:
# 375 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "If you are a coder - join us. If you\n"
	.string "aren't, we'll make you one.$"

Rebelhackersad_Text_4:
# 377 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Join the Rebel Hackers today. For a\n"
	.string "world where we decide.$"

Devonnetad_Text_0:
# 384 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "In this day and age, people move fast.\p"
	.string "So fast, you can feel you can't keep up\n"
	.string "with their lives. Like you're being left\l"
	.string "behind.$"

Devonnetad_Text_1:
# 389 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "If you're feeling like that - then Devon\n"
	.string "Net is for you!\p"
	.string "Devon Net is the place to check what\n"
	.string "your loved ones are up to - and meet\l"
	.string "new ones too!$"

Devonnetad_Text_2:
# 393 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Devon Net - keeping you closer to\n"
	.string "yours.$"

Devongruntad_Text_0:
# 398 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Do you seek a stable job in these times\n"
	.string "of uncertainty?\p"
	.string "One when you can make a difference in\n"
	.string "getting Hoenn in a better shape?$"

Devongruntad_Text_1:
# 402 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Then enlist in the Devon Guards today.\n"
	.string "First 100 recruits get their own\l"
	.string "Manchine!$"

Devongruntad_Text_2:
# 403 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}(All Manchines will be collected by\n"
	.string "Devon Co. upon contract expiration).{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
