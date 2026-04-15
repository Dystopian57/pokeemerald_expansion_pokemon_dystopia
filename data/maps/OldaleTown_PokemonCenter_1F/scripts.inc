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


OldaleTown_Devon_Nurse::
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_0, MSGBOX_YESNO
# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_Devon_Nurse_2
OldaleTown_Devon_Nurse_1:
# 129 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldaleTown_Devon_Nurse_5
OldaleTown_Devon_Nurse_4:
# 131 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
finishhealscript:
# 132 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return

OldaleTown_Devon_Nurse_2:
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset devoncenterdebt, OldaleTown_Devon_Nurse_7
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_5
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 100
# 112 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleTown_Devon_Nurse_14
OldaleTown_Devon_Nurse_13:
# 120 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_Devon_Nurse_18
	goto OldaleTown_Devon_Nurse_1

OldaleTown_Devon_Nurse_5:
# 130 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_8
	goto OldaleTown_Devon_Nurse_4

OldaleTown_Devon_Nurse_7:
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_1
# 76 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
healpokes:
# 77 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidefollower 0
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_0
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 81 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special HealPlayerParty
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_1
# 83 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 84 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_2
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkmoney 100
# 87 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleTown_Devon_Nurse_11
OldaleTown_Devon_Nurse_10:
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_Devon_Nurse_16
	goto OldaleTown_Devon_Nurse_1

OldaleTown_Devon_Nurse_11:
# 88 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 100
# 92 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 93 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_3
# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_2
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 96 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmovement
	goto OldaleTown_Devon_Nurse_10

OldaleTown_Devon_Nurse_14:
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_SHOP
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removemoney 100
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_6
# 117 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	clearflag devoncenterdebt
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto healpokes
	goto OldaleTown_Devon_Nurse_13

OldaleTown_Devon_Nurse_16:
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 1, OldaleTown_Devon_Nurse_Movement_3
# 100 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 101 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitse
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_4
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag devoncenterdebt
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto finishhealscript
	goto OldaleTown_Devon_Nurse_1

OldaleTown_Devon_Nurse_18:
# 121 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Devon_Nurse_Text_7
# 123 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto finishhealscript
	goto OldaleTown_Devon_Nurse_1


OldaleTown_Mart_Clerk::
# 139 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 140 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 141 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 5, OldaleTown_Mart_Clerk_Movement_0
# 142 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_0
# 143 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 144 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_PostWarehouse
# 145 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_PreWarehouse
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_Clerk_Text_1
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldaleTown_Mart_PostWarehouse::
# 153 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_PostWarehouse
# 154 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_Mart_PostWarehouse_Text_0
# 155 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


	.align 2
# 158 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Mart_Pokemart_PreWarehouse:
# 159 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
	.2byte ITEM_NONE

	.align 2
# 162 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Mart_Pokemart_PostWarehouse:
# 163 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
	.2byte ITEM_NONE

OldalePokeCenterOldLady::
# 171 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 172 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 3, OldaleTown_Mart_Clerk_Movement_0
# 173 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterOldLady_Text_0
# 175 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterInjuredGuy::
# 179 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 180 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, OldaleTown_Mart_Clerk_Movement_0
# 181 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterInjuredGuy_Text_0
# 183 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterMapBoy::
# 187 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 188 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 7, OldaleTown_Mart_Clerk_Movement_0
# 189 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterMapBoy_Text_0
# 192 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 7, OldalePokeCenterMapBoy_Movement_0
# 193 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterInnSign::
# 197 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 198 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterInnSign_Text_0
# 199 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterBookshelf::
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 204 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterBookshelf_Text_0
# 205 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldalePokeCenterTVKid::
# 209 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 210 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, OldaleTown_Mart_Clerk_Movement_0
# 211 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldalePokeCenterTVKid_Text_0
# 213 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	applymovement 4, OldalePokeCenterMapBoy_Movement_0
# 214 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_0:
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_1:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_2:
# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	nurse_joy_bow
	step_end

# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Devon_Nurse_Movement_3:
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 141 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_Mart_Clerk_Movement_0:
# 141 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 192 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldalePokeCenterMapBoy_Movement_0:
# 192 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	face_up
	step_end

OldaleTown_Devon_Nurse_Text_0:
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hey... Heal?$"

OldaleTown_Devon_Nurse_Text_1:
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Right... just a sec.$"

OldaleTown_Devon_Nurse_Text_2:
# 84 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That will be 100¥...$"

OldaleTown_Devon_Nurse_Text_3:
# 93 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thank you for your patronage. Now\n"
	.string "please make way for other customers...$"

OldaleTown_Devon_Nurse_Text_4:
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Wait... you don't have enough pokeyen.\n"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Are you dense...?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Well, you don't need to pay right now,\n"
	.string "but you will need to clear this debt\l"
	.string "before using our services again.\p"
	.string "Now go out there, and get a job or\n"
	.string "something.$"

OldaleTown_Devon_Nurse_Text_5:
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You have a 100¥ debt from last time you\n"
	.string "used our services, so I'll be taking\l"
	.string "that...$"

OldaleTown_Devon_Nurse_Text_6:
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Great. Now let's proceed with your\n"
	.string "current heal...$"

OldaleTown_Devon_Nurse_Text_7:
# 121 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Of course... you still don't have enough.\p"
	.string "Look, we're not running a charity here.\n"
	.string "If you want your buddies healed, go get\l"
	.string "some money.$"

OldaleTown_Devon_Nurse_Text_8:
# 130 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Then please get off the way.$"

OldaleTown_Mart_Clerk_Text_0:
# 142 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Welcome to Devon Mall! How may I help\n"
	.string "you?$"

OldaleTown_Mart_Clerk_Text_1:
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Wait, I know what you are thinking...\n"
	.string "that I have no BALLS!$"

OldaleTown_Mart_PostWarehouse_Text_0:
# 154 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thank you for your patronage - and for\n"
	.string "your help liberating our warehouse!$"

OldalePokeCenterOldLady_Text_0:
# 173 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "It's so sad... it's mostly kids and old\n"
	.string "people like me round these parts.\p"
	.string "Most people your age were sent to the\n"
	.string "war, and never returned.\p"
	.string "Like my son...$"

OldalePokeCenterInjuredGuy_Text_0:
# 181 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I miss the days when Pokémon\n"
	.string "healthcare was free…\p"
	.string "Then again, Safemon are so weak, they\n"
	.string "barely get hurt when fighting each\l"
	.string "other.$"

OldalePokeCenterMapBoy_Text_0:
# 189 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "In school we learnt that the region\n"
	.string "from Route 103 to Route 104 is called\l"
	.string "the {COLOR GREEN}'Internment Zone'{COLOR DARK_GRAY}.\p"
	.string "It's a dangerous place where people who\n"
	.string "hate Devon have gathered, and you need\l"
	.string "a {COLOR BLUE}Devon Visa{COLOR DARK_GRAY} to get out of it.$"

OldalePokeCenterInnSign_Text_0:
# 198 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "To 2F - Inn Rooms.$"

OldalePokeCenterBookshelf_Text_0:
# 204 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The shelf is full of magazines with ads\n"
	.string "about Devon products.$"

OldalePokeCenterTVKid_Text_0:
# 211 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I've been watching this TV for half an\n"
	.string "hour, and there's been nothing but\l"
	.string "ads...\p"
	.string "They say you can watch actual programs\n"
	.string "from the TVs in the inn rooms, but I'm a\l"
	.string "bit too broke for those.$"
