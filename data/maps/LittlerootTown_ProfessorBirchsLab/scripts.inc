# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_AIDE, 1
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BIRCH, 2
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_RIVAL, 3
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CYNDAQUIL, 4
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_TOTODILE, 5
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CHIKORITA, 6
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Received National Dex
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Left lab after receiving National Dex
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 6: Chose Johto starter
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Never occurs
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Chose starter
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Received starter in lab
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Defeated rival on Route 103
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Received pokedex
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition:
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCH
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_AIDE, DIR_EAST
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_AIDE, 10, 10
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CYNDAQUIL
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_TOTODILE
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CHIKORITA
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CYNDAQUIL, DIR_SOUTH
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CYNDAQUIL, 8, 4
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_TOTODILE, DIR_SOUTH
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_TOTODILE, 9, 4
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CHIKORITA, DIR_SOUTH
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CHIKORITA, 10, 4
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_EAST
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_YESNO
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? PROF. BIRCH?\p"
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF's away on fieldwork.\n"
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH is studying the habitats\n"
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of POKéMON.\p"
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF enjoys {RIVAL}'s help, too.\n"
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: So, {PLAYER}{KUN}.\p"
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard so much about you from\n"
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your father.\p"
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard that you don't have your\n"
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "own POKéMON yet.\p"
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you pulled it off with aplomb!\p"
# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I guess you have your father's blood\n"
# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in your veins after all!\p"
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd like you to have the POKéMON you\l"
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "used earlier.\p"
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: While you're at it, why not\n"
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "give a nickname to that {STR_VAR_1}?$"
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: If you work at POKéMON\n"
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and gain experience, I think you'll make\l"
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "an extremely good TRAINER.\p"
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON while helping me out.\p"
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, don't you think it might be\n"
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a good idea to go see {RIVAL}?$"
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Great!\n"
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} should be happy, too.\p"
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "means to be a TRAINER.$"
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, don't be that way.\n"
# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You should go meet my kid.$"
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: {RIVAL}?\n"
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gone home, I think.\p"
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you or your POKéMON get tired,\n"
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you should get some rest at home.$"
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, hi, {PLAYER}{KUN}!\p"
# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a long time.\p"
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a TRAINER already.\p"
# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, {PLAYER}{KUN}, I ordered this for my\n"
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "research, but I think you should have\l"
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéDEX.$"
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The POKéDEX is a high-tech\n"
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tool that automatically makes a record\l"
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of any POKéMON you meet or catch.\p"
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, goes everywhere\n"
# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "with it.\p"
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Whenever my kid catches a rare POKéMON\n"
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and records its data in the POKéDEX,\l"
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "why, {RIVAL} looks for me while I'm out\l"
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "doing fieldwork, and shows me.$"
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Countless POKéMON\n"
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "await you!\p"
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and do fieldwork again!$"
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, wow, {PLAYER}{KUN}!\n"
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You got a POKéDEX, too!\p"
# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: It's fun if you can get a lot of\n"
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON!\p"
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different POKéMON.\p"
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute POKéMON, I'll catch\n"
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with POKé BALLS!$"
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your BAG's full.$"
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I wonder where I should go look\n"
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for POKéMON next?$"
# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Huh…\n"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you got a POKéDEX, too.\p"
# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: You know it's more fun to\n"
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of POKéMON.\p"
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different POKéMON.\p"
# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool POKéMON, you bet\n"
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with POKé BALLS.$"
# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your BAG's full.$"
# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Where should I look for\n"
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON next…$"
# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF must use this for research.$"
# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not mess around with it.$"
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on POKéMON.$"
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Now…\p"
# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study POKéMON.\p"
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the HOENN region,\n"
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also POKéMON from other\l"
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "regions.\p"
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of HOENN\l"
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your POKéDEX to\l"
# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode.\p"
# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your POKéDEX units.$"
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Eheheh!\p"
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my POKéDEX\n"
# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting updated!\p"
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many POKéMON, {PLAYER}{KUN}!$"
# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: I went out all over HOENN\n"
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out POKéMON.\p"
# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for getting\n"
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode POKéDEX.\p"
# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Okay, all done!$"
# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded\n"
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to the NATIONAL Mode!$"
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: But listen.\n"
# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the CHAMPION,\l"
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I think I'll take a short break\n"
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the PROF here for\n"
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: For the time being,\n"
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the PROF here\n"
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your POKéDEX.\p"
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the HOENN\n"
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's POKéDEX.\p"
# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare POKéMON only found\n"
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: These are rare POKéMON\n"
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "only found in another region!\p"
# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The FIRE POKéMON\n"
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CYNDAQUIL caught your eye!\p"
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the CYNDAQUIL is your choice?$"
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The WATER POKéMON\n"
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "TOTODILE is your choice!\p"
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the TOTODILE?$"
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The GRASS POKéMON\n"
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CHIKORITA is your choice!\p"
# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the CHIKORITA?$"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Take your time before\n"
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you decide.\p"
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable POKéMON.$"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: I see!\n"
# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You picked a fine POKéMON!$"
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from PROF. BIRCH!$"
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Want to give a nickname to\n"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the HOENN POKéDEX,\l"
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised POKéMON.\n"
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéMON.$"
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL POKéDEX?\p"
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the PROF.$"
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Rather than collecting\n"
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON, I prefer slowly and \l"
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n"
# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, SCOTT.\p"
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. TIDAL now.\n"
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either SLATEPORT or LILYCOVE.\p"
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"

LittlerootTown_ProfessorBirchsLab_MapScripts::
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Lights
	.byte 0


Lights::
# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 5
	goto_if_eq Lights_2
Lights_1:
# 1008 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 6
	goto_if_eq Lights_5
Lights_4:
# 1012 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 7
	goto_if_eq Lights_7
	return

Lights_2:
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setweather WEATHER_NONE
	goto Lights_1

Lights_5:
# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setweather WEATHER_NONE
	goto Lights_4

Lights_7:
# 1013 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setweather WEATHER_NONE
	return


Littleroot_Idletalk_Aidee::
# 1019 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1020 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1021 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 5, Littleroot_Idletalk_Aidee_Movement_0
# 1022 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1023 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 3
	goto_if_eq Littleroot_Idletalk_Aidee_2
Littleroot_Idletalk_Aidee_1:
# 1032 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 4
	goto_if_eq Littleroot_Idletalk_Aidee_5
Littleroot_Idletalk_Aidee_4:
# 1043 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 5
	goto_if_eq Littleroot_Idletalk_Aidee_9
Littleroot_Idletalk_Aidee_7:
# 1054 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 5
	goto_if_eq Littleroot_Idletalk_Aidee_14
Littleroot_Idletalk_Aidee_12:
# 1092 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 1
	goto_if_eq Littleroot_Idletalk_Aidee_18
Littleroot_Idletalk_Aidee_17:
# 1095 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 2
	goto_if_eq Littleroot_Idletalk_Aidee_21
Littleroot_Idletalk_Aidee_20:
# 1113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 5, Littleroot_Idletalk_Aidee_Movement_2
# 1114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
aideeisfollowing:
# 1115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

Littleroot_Idletalk_Aidee_2:
# 1024 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 1025 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_0
# 1027 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1028 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1029 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1030 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_1
	goto Littleroot_Idletalk_Aidee_1

Littleroot_Idletalk_Aidee_5:
# 1033 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 1034 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_2
# 1035 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 1036 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_0
# 1038 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1039 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1040 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1041 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_1
	goto Littleroot_Idletalk_Aidee_4

Littleroot_Idletalk_Aidee_8:
# 1044 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 1045 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_2
# 1046 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 1047 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_0
# 1049 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1051 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1052 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_1
	goto Littleroot_Idletalk_Aidee_7

Littleroot_Idletalk_Aidee_9:
# 1043 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE_101_VOLTORB_SHARD, Littleroot_Idletalk_Aidee_8
	goto Littleroot_Idletalk_Aidee_7

Littleroot_Idletalk_Aidee_13:
# 1055 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 1056 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_3
# 1058 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1059 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1060 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1061 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_4
# 1062 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1063 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 1064 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1065 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 5, Littleroot_Idletalk_Aidee_Movement_1
# 1066 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_5
# 1067 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_2
# 1068 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1069 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1070 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1071 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_6
# 1073 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1074 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1075 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1076 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 5, Littleroot_Idletalk_Aidee_Movement_0
# 1077 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_7
# 1079 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1080 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1081 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1082 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1083 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_8
# 1085 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeitem ITEM_COMET_SHARD
# 1086 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setfollowernpc LOCALID_BALSAM_AIDEE, FNPC_ALL, AideeFollowingChat, 0
# 1087 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag Aideeleaveslab
# 1088 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 6
# 1089 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto aideeisfollowing
	goto Littleroot_Idletalk_Aidee_12

Littleroot_Idletalk_Aidee_14:
# 1054 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_ROUTE_101_VOLTORB_SHARD, Littleroot_Idletalk_Aidee_13
	goto Littleroot_Idletalk_Aidee_12

Littleroot_Idletalk_Aidee_18:
# 1093 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 1094 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_9
	goto Littleroot_Idletalk_Aidee_17

Littleroot_Idletalk_Aidee_21:
# 1096 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1097 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_10
# 1098 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1099 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 1100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_11
# 1102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_12
# 1106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 1108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Aidee_Text_13
# 1110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 3
# 1111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag AideeQuestAccepted
	goto Littleroot_Idletalk_Aidee_20


AideeFollowingChat::
# 1120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox AideeFollowingChat_Text_0
# 1124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker NULL
# 1125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox AideeFollowingChat_Text_1
# 1127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


SafemonLore::
# 1131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox SafemonLore_Text_0
# 1134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, SafemonLore_Text_1, SafemonLore_Text_2, SafemonLore_Text_3, SafemonLore_Text_4, SafemonLore_Text_5
# 1136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SafemonLore_2
SafemonLore_1:
# 1145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SafemonLore_5
SafemonLore_4:
# 1154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq SafemonLore_8
SafemonLore_7:
# 1163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq SafemonLore_11
SafemonLore_10:
# 1168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq SafemonLore_14
SafemonLore_13:
# 1170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

SafemonLore_2:
# 1137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox SafemonLore_Text_6
# 1139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SMOTHQUIL, 10, 3
# 1140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox SafemonLore_Text_7
# 1142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
	goto SafemonLore_1

SafemonLore_5:
# 1146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox SafemonLore_Text_8
# 1148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASYNTH, 10, 3
# 1149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox SafemonLore_Text_9
# 1151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
	goto SafemonLore_4

SafemonLore_8:
# 1155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox SafemonLore_Text_10
# 1157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_POOCHAIN, 10, 3
# 1158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox SafemonLore_Text_11
# 1161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
	goto SafemonLore_7

SafemonLore_11:
# 1164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox SafemonLore_Text_11
	goto SafemonLore_10

SafemonLore_14:
# 1169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	goto SafemonLore_13


Littleroot_Idletalk_Prof::
# 1175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_0
# 1180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 1
	goto_if_eq Littleroot_Idletalk_Prof_2
Littleroot_Idletalk_Prof_1:
# 1182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 2
	goto_if_eq Littleroot_Idletalk_Prof_5
Littleroot_Idletalk_Prof_4:
# 1184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 3
	goto_if_eq Littleroot_Idletalk_Prof_8
Littleroot_Idletalk_Prof_7:
# 1191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 5
	goto_if_eq Littleroot_Idletalk_Prof_12
Littleroot_Idletalk_Prof_10:
# 1216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 5
	goto_if_eq Littleroot_Idletalk_Prof_17
Littleroot_Idletalk_Prof_15:
# 1227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 6
	goto_if_eq Littleroot_Idletalk_Prof_25
Littleroot_Idletalk_Prof_23:
# 1232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 6
	goto_if_eq Littleroot_Idletalk_Prof_32
Littleroot_Idletalk_Prof_30:
# 1239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 7
	goto_if_eq Littleroot_Idletalk_Prof_36
Littleroot_Idletalk_Prof_35:
# 1258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement
# 1261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

Littleroot_Idletalk_Prof_2:
# 1181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_0
	goto Littleroot_Idletalk_Prof_1

Littleroot_Idletalk_Prof_5:
# 1183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_1
	goto Littleroot_Idletalk_Prof_4

Littleroot_Idletalk_Prof_8:
# 1185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_2
# 1187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_HAPPY
# 1189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_3
	goto Littleroot_Idletalk_Prof_7

Littleroot_Idletalk_Prof_11:
# 1192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 1193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Littleroot_Idletalk_Prof_21
Littleroot_Idletalk_Prof_20:
# 1204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Littleroot_Idletalk_Prof_28
	goto Littleroot_Idletalk_Prof_10

Littleroot_Idletalk_Prof_12:
# 1191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE_101_VOLTORB_SHARD, Littleroot_Idletalk_Prof_11
	goto Littleroot_Idletalk_Prof_10

Littleroot_Idletalk_Prof_16:
# 1218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_8
# 1221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_2
# 1222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_9
	goto Littleroot_Idletalk_Prof_15

Littleroot_Idletalk_Prof_17:
# 1216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_ROUTE_101_VOLTORB_SHARD, Littleroot_Idletalk_Prof_16
	goto Littleroot_Idletalk_Prof_15

Littleroot_Idletalk_Prof_21:
# 1194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_4
# 1198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_M_LICK
# 1200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 1201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_5
	goto Littleroot_Idletalk_Prof_20

Littleroot_Idletalk_Prof_24:
# 1228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_10
	goto Littleroot_Idletalk_Prof_23

Littleroot_Idletalk_Prof_25:
# 1227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset AttendedOldaleTherapy, Littleroot_Idletalk_Prof_24
	goto Littleroot_Idletalk_Prof_23

Littleroot_Idletalk_Prof_28:
# 1205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_6
# 1209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_M_LICK
# 1211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 1212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_7
	goto Littleroot_Idletalk_Prof_10

Littleroot_Idletalk_Prof_31:
# 1234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_11
	goto Littleroot_Idletalk_Prof_30

Littleroot_Idletalk_Prof_32:
# 1232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set AttendedOldaleTherapy, Littleroot_Idletalk_Prof_31
	goto Littleroot_Idletalk_Prof_30

Littleroot_Idletalk_Prof_36:
# 1241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_12
# 1245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	fadeoutbgm 0
# 1246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_13
# 1247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_MENACING
# 1248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidefollower
# 1250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_M_LEER
# 1251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_14
# 1252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_HAPPY
# 1253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	fadeinbgm 0
# 1255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Prof_Text_15
	goto Littleroot_Idletalk_Prof_35


Littleroot_Idletalk_Pikachu1::
# 1274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_PIKACHU_SAFE, 10, 3
# 1276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playmoncry SPECIES_PIKACHU_SAFE, CRY_MODE_NORMAL
# 1277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_0
# 1278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 1
	goto_if_eq Littleroot_Idletalk_Pikachu1_4
Littleroot_Idletalk_Pikachu1_1:
# 1294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 1
	goto_if_eq Littleroot_Idletalk_Pikachu1_10
Littleroot_Idletalk_Pikachu1_8:
# 1307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 1
	goto_if_eq Littleroot_Idletalk_Pikachu1_17
Littleroot_Idletalk_Pikachu1_15:
# 1365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_11
Littleroot_Idletalk_Pikachu1_13:
# 1366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
finishPikascript:
# 1368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Profbacktowork1
# 1370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

Littleroot_Idletalk_Pikachu1_2:
# 1283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_1
# 1285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_1
# 1289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag InsistonPika1
# 1290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto finishPikascript
	goto Littleroot_Idletalk_Pikachu1_1

Littleroot_Idletalk_Pikachu1_3:
# 1282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset InsistonPika2, Littleroot_Idletalk_Pikachu1_2
	goto Littleroot_Idletalk_Pikachu1_1

Littleroot_Idletalk_Pikachu1_4:
# 1282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset InsistonPika1, Littleroot_Idletalk_Pikachu1_3
	goto Littleroot_Idletalk_Pikachu1_1

Littleroot_Idletalk_Pikachu1_9:
# 1295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_1
# 1297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 1299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_M_SWAGGER2
# 1300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_2
# 1301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag InsistonPika1
# 1302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag InsistonPika2
# 1303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto finishPikascript
	goto Littleroot_Idletalk_Pikachu1_8

Littleroot_Idletalk_Pikachu1_10:
# 1294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set InsistonPika1, Littleroot_Idletalk_Pikachu1_9
	goto Littleroot_Idletalk_Pikachu1_8

Littleroot_Idletalk_Pikachu1_14:
# 1308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_1
# 1310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 1313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_M_LICK
# 1314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_3
# 1315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_4
# 1319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_5, MSGBOX_YESNO
# 1321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Littleroot_Idletalk_Pikachu1_22
# 1355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_10
Littleroot_Idletalk_Pikachu1_21:
# 1358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto finishPikascript
	goto Littleroot_Idletalk_Pikachu1_13

Littleroot_Idletalk_Pikachu1_16:
# 1307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset GotPika, Littleroot_Idletalk_Pikachu1_14
	goto Littleroot_Idletalk_Pikachu1_15

Littleroot_Idletalk_Pikachu1_17:
# 1307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set InsistonPika2, Littleroot_Idletalk_Pikachu1_16
	goto Littleroot_Idletalk_Pikachu1_15

Littleroot_Idletalk_Pikachu1_22:
# 1324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_6
# 1326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_M_YAWN
# 1328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_7
# 1329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag GotPika
# 1330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag GOTSTARTER3
# 1331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 7
# 1332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_PIKACHU_SAFE, 5
# 1334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Littleroot_Idletalk_Pikachu1_25
# 1348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Littleroot_Idletalk_Pikachu1_26
	goto Littleroot_Idletalk_Pikachu1_21

Littleroot_Idletalk_Pikachu1_25:
# 1335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon3
# 1336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 2
# 1338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_8
# 1341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_2
# 1343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_9
# 1345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
	goto Littleroot_Idletalk_Pikachu1_21

Littleroot_Idletalk_Pikachu1_26:
# 1349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknameBoxMon3
# 1350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 2
	goto Littleroot_Idletalk_Pikachu1_21


# 1371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Profnopika1:
# 1371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_right
	step_end

# 1372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Profbacktowork1:
# 1372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_down
	step_end

NicknamePartyMon3::
# 1376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon3_Text_0, MSGBOX_YESNO
# 1377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon3_1
	return

NicknamePartyMon3_1:
# 1379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon3::
# 1384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknameBoxMon3_Text_0, MSGBOX_YESNO
# 1385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon3_2
NicknameBoxMon3_1:
# 1388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknameBoxMon3_Text_1
	return

NicknameBoxMon3_2:
# 1387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon3_1


LittlerootTown_Eventscript_ProffessorChoosePokeDialogue::
# 1394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SpawnCameraObject
# 1396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_0
# 1397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special RemoveCameraObject
# 1399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_1
# 1400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_0
# 1405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_1, LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_2
# 1406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_2
# 1430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_3
LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_1:
# 1455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SpawnCameraObject
# 1456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_2
# 1457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special RemoveCameraObject
# 1459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 1
# 1462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special RemoveCameraObject
# 1464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_2:
# 1407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_3
# 1408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_HAPPY
# 1410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_4
# 1413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_5
# 1417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_M_SWAGGER2
# 1419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 1420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_6
# 1423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_7
	goto LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_1

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_3:
# 1431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_8
# 1434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_M_SWAGGER2
# 1436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 1437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_6
# 1440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_9
# 1445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_HAPPY
# 1447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_10
# 1449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_11
	goto LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_1


LittlerootTown_Eventscript_ProffessorDontgo1::
# 1467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_1
# 1469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_M_SWAGGER2
# 1470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 1471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorDontgo1_Text_0
# 1473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Eventscript_ProffessorDontgo1_Movement_0
# 1474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LittlerootTown_Eventscript_ProffessorDontgo2::
# 1481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_1
# 1483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_M_SWAGGER2
# 1484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 1485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorDontgo2_Text_0
# 1488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Eventscript_ProffessorDontgo1_Movement_0
# 1489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LittlerootTown_Eventscript_ProffessorNoPokesUpstairs::
# 1496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_1
# 1498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, LittlerootTown_Eventscript_ProffessorNoPokesUpstairs_Movement_0
# 1500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PIN
# 1502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 1503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorNoPokesUpstairs_Text_0
# 1505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Eventscript_ProffessorNoPokesUpstairs_Movement_1
# 1510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LittlerootTown_Eventscript_ProffessorNoDoor::
# 1514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_1
# 1516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, LittlerootTown_Eventscript_ProffessorNoPokesUpstairs_Movement_0
# 1518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PIN
# 1520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 1521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorNoDoor_Text_0
# 1524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Eventscript_ProffessorNoPokesUpstairs_Movement_1
# 1529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LittlerootTown_Eventscript_Aideenotthere::
# 1534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_1
# 1536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, LittlerootTown_Eventscript_ProffessorNoPokesUpstairs_Movement_0
# 1538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PIN
# 1540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 1541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_Aideenotthere_Text_0
# 1543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Eventscript_ProffessorNoPokesUpstairs_Movement_1
# 1548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LittlerootTown_Eventscript_ProffessorGotoOldale::
# 1552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, LittlerootTown_Eventscript_ProffessorGotoOldale_Movement_0
# 1554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PIN
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 1556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 1557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_ProffessorGotoOldale_Text_0
# 1559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Eventscript_ProffessorNoPokesUpstairs_Movement_1
# 1564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LittlerootTown_Eventscript_AideeGotoback::
# 1568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Littleroot_Idletalk_Aidee_Movement_3
# 1572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Littleroot_Idletalk_Aidee_Movement_0
# 1573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_Eventscript_AideeGotoback_Text_0
# 1576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Eventscript_ProffessorDontgo1_Movement_0
# 1577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


Lab_EventScript_Starter1::
# 1586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset GOTSTARTER1, Lab_EventScript_Starter1_4
Lab_EventScript_Starter1_3:
# 1652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_1
# 1653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_8
# 1657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_9
# 1661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_HAPPY
# 1663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_10
Lab_EventScript_Starter1_1:
# 1665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement
# 1668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Lab_EventScript_Starter1_2:
# 1591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_1
# 1592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASYNTH, 10, 3
# 1593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_0
# 1595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_HAPPY
# 1597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_1
# 1599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_2
# 1603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_3, MSGBOX_YESNO
# 1606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Lab_EventScript_Starter1_10
Lab_EventScript_Starter1_9:
# 1644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Lab_EventScript_Starter1_12
	goto Lab_EventScript_Starter1_1

Lab_EventScript_Starter1_4:
# 1589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset GOTSTARTER2, Lab_EventScript_Starter1_6
	goto Lab_EventScript_Starter1_3

Lab_EventScript_Starter1_6:
# 1589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset GOTSTARTER3, Lab_EventScript_Starter1_2
	goto Lab_EventScript_Starter1_3

Lab_EventScript_Starter1_10:
# 1607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_BULBASYNTH, 5, ITEM_MIRACLE_SEED
# 1608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Lab_EventScript_Starter1_14
# 1629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Lab_EventScript_Starter1_15
# 1639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_7
	goto Lab_EventScript_Starter1_9

Lab_EventScript_Starter1_12:
# 1645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	goto Lab_EventScript_Starter1_1

Lab_EventScript_Starter1_14:
# 1609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_4
# 1612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 1
# 1613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag GOTSTARTER1
# 1614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon1
# 1615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 2
# 1617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_5
# 1620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_2
# 1622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Littleroot_Idletalk_Pikachu1_Text_9
# 1624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement
# 1626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
	goto Lab_EventScript_Starter1_9

Lab_EventScript_Starter1_15:
# 1630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_6
# 1632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 1
# 1633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag GOTSTARTER1
# 1634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknameBoxMon1
# 1635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 2
	goto Lab_EventScript_Starter1_9


NicknamePartyMon1::
# 1675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon1_Text_0, MSGBOX_YESNO
# 1676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon1_1
	return

NicknamePartyMon1_1:
# 1678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon1::
# 1687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknameBoxMon3_Text_0, MSGBOX_YESNO
# 1688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon1_2
NicknameBoxMon1_1:
# 1692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknameBoxMon3_Text_1
	return

NicknameBoxMon1_2:
# 1690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon1_1


# 1696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Profturning1:
# 1697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_down
	step_end

# 1700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Proftoaidee1:
# 1701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_left
	step_end

# 1704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Profturningback1:
# 1705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_up
	step_end

Lab_EventScript_Starter2::
# 1710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_1
# 1714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset GOTSTARTER1, Lab_EventScript_Starter2_4
Lab_EventScript_Starter2_3:
# 1765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_1
# 1766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_M_SWAGGER2
# 1767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 1768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_8
# 1771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_9
# 1775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_HAPPY
# 1777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_10
# 1779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement
# 1782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Lab_EventScript_Starter2_1:
# 1787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement
# 1789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

Lab_EventScript_Starter2_2:
# 1715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SMOTHQUIL, 10, 3
# 1716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter2_Text_0
# 1719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_3, MSGBOX_YESNO
# 1721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Lab_EventScript_Starter2_10
Lab_EventScript_Starter2_9:
# 1758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Lab_EventScript_Starter2_12
	goto Lab_EventScript_Starter2_1

Lab_EventScript_Starter2_4:
# 1714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset GOTSTARTER2, Lab_EventScript_Starter2_6
	goto Lab_EventScript_Starter2_3

Lab_EventScript_Starter2_6:
# 1714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset GOTSTARTER3, Lab_EventScript_Starter2_2
	goto Lab_EventScript_Starter2_3

Lab_EventScript_Starter2_10:
# 1722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SMOTHQUIL, 5, ITEM_CHARCOAL
# 1724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Lab_EventScript_Starter2_14
# 1744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Lab_EventScript_Starter2_15
# 1754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter1_Text_7
	goto Lab_EventScript_Starter2_9

Lab_EventScript_Starter2_12:
# 1759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
	goto Lab_EventScript_Starter2_1

Lab_EventScript_Starter2_14:
# 1725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter2_Text_1
# 1727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 2
# 1728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag GOTSTARTER2
# 1729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon2
# 1730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 2
# 1732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter2_Text_2
# 1735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_2
# 1737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter2_Text_3
# 1739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement
# 1741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
	goto Lab_EventScript_Starter2_9

Lab_EventScript_Starter2_15:
# 1745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter2_Text_4
# 1747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 2
# 1748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag GOTSTARTER2
# 1749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknameBoxMon2
# 1750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 2
	goto Lab_EventScript_Starter2_9


NicknamePartyMon2::
# 1794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon2_Text_0, MSGBOX_YESNO
# 1795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon2_1
	return

NicknamePartyMon2_1:
# 1797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon2::
# 1806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknameBoxMon2_Text_0, MSGBOX_YESNO
# 1807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon2_2
NicknameBoxMon2_1:
# 1811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknameBoxMon2_Text_1
	return

NicknameBoxMon2_2:
# 1809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon2_1


Lab_EventScript_Starter3::
# 1818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset GOTSTARTER1, Lab_EventScript_Starter3_4
Lab_EventScript_Starter3_3:
# 1846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter3_Text_4
Lab_EventScript_Starter3_1:
# 1847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Lab_EventScript_Starter3_2:
# 1820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter3_Text_0
# 1821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_1
# 1823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter3_Text_1
# 1827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_HAPPY
# 1829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter3_Text_2
# 1830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SpawnCameraObject
# 1834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Lab_EventScript_Starter3_Movement_0
# 1835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement
# 1836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special RemoveCameraObject
# 1837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Littleroot_Idletalk_Aidee_Movement_1
# 1838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_EventScript_Starter3_Text_3
# 1839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SpawnCameraObject
# 1841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Lab_EventScript_Starter3_Movement_1
# 1842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement
# 1843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special RemoveCameraObject
	goto Lab_EventScript_Starter3_1

Lab_EventScript_Starter3_4:
# 1819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset GOTSTARTER2, Lab_EventScript_Starter3_6
	goto Lab_EventScript_Starter3_3

Lab_EventScript_Starter3_6:
# 1819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset GOTSTARTER3, Lab_EventScript_Starter3_2
	goto Lab_EventScript_Starter3_3


LabBrokenGlasses::
# 1854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ITEM_LAB_GLASSES, LabBrokenGlasses_2
# 1860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LabBrokenGlasses_Text_1
LabBrokenGlasses_1:
# 1861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LabBrokenGlasses_2:
# 1856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LabBrokenGlasses_Text_0
# 1857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_WISE_GLASSES
# 1858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ITEM_LAB_GLASSES
	goto LabBrokenGlasses_1


LabShelves::
# 1865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LabShelves_Text_0
# 1868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LabMonitor::
# 1872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LabMonitor_Text_0
# 1874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


BalsamDontCheckMyPC::
# 1878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_0
# 1882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BalsamDontCheckMyPC_Text_0
# 1883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement
# 1887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LabBox::
# 1890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LabBox_Text_0
# 1892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LabSealedBox::
# 1896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LabSealedBox_Text_0
# 1898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LabBirchBag::
# 1902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LabBirchBag_Text_0
# 1904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LabDiglettBook::
# 1908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LabDiglettBook_Text_0
# 1911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LabCoffee::
# 1915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ITEM_LAB_COFFEE, LabCoffee_2
# 1936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LabCoffee_Text_3
LabCoffee_1:
# 1937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LabCoffee_2:
# 1917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LabCoffee_Text_0
# 1918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 1919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ITEM_LAB_COFFEE
# 1920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 5, LabCoffee_Movement_0
# 1921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, LabCoffee_Movement_0
# 1922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PIN
# 1923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Littleroot_Idletalk_Aidee_Movement_2
# 1924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 1926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LabCoffee_Text_1
# 1927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LabCoffee_Text_2
# 1931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 5, Littleroot_Idletalk_Aidee_Movement_2
# 1932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement
# 1933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
	goto LabCoffee_1


BalsamgivesPokenav::
# 1941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_0
# 1945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Littleroot_Idletalk_Aidee_Movement_3
# 1946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set AideeQuestAccepted, BalsamgivesPokenav_4
BalsamgivesPokenav_3:
# 1976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto finishpokenavscript
BalsamgivesPokenav_1:
# 1978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
finishpokenavscript:
# 1979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

BalsamgivesPokenav_2:
# 1947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BalsamgivesPokenav_Text_0
# 1948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	fadeoutbgm 0
# 1949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 1950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	fadeinbgm 0
# 1951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker NULL
# 1952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BalsamgivesPokenav_Text_1
# 1954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 1955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BalsamgivesPokenav_Text_2
# 1961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 1962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 1963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
# 1964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ NULL ]
# 1965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playbgm MUS_REGISTER_MATCH_CALL, TRUE
# 1966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BalsamgivesPokenav_Text_3
# 1967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 1968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 1969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 1970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BalsamgivesPokenav_Text_4
# 1971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Littleroot_Idletalk_Aidee_Movement_3
# 1972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement
# 1973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removefieldmugshot
	goto BalsamgivesPokenav_1

BalsamgivesPokenav_4:
# 1946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKENAV_GET, BalsamgivesPokenav_2
	goto BalsamgivesPokenav_3


# 1021 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Littleroot_Idletalk_Aidee_Movement_0:
# 1021 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_player
	step_end

# 1065 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Littleroot_Idletalk_Aidee_Movement_1:
# 1065 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_right
	step_end

# 1067 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Littleroot_Idletalk_Aidee_Movement_2:
# 1067 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_left
	step_end

# 1079 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Littleroot_Idletalk_Aidee_Movement_3:
# 1079 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_up
	step_end

# 1396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_0:
# 1396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 1396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 1396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
	step_end

# 1399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_1:
# 1399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_down
	step_end

# 1456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Movement_2:
# 1456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 1456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 1456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
	step_end

# 1473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_Eventscript_ProffessorDontgo1_Movement_0:
# 1473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
	step_end

# 1499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_Eventscript_ProffessorNoPokesUpstairs_Movement_0:
# 1499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 1509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_Eventscript_ProffessorNoPokesUpstairs_Movement_1:
# 1509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
	step_end

# 1553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_Eventscript_ProffessorGotoOldale_Movement_0:
# 1553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	emote_exclamation_mark
# 1553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_right
	step_end

# 1834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Lab_EventScript_Starter3_Movement_0:
# 1834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 1834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 1834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
	step_end

# 1841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Lab_EventScript_Starter3_Movement_1:
# 1841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 1841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 1841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
	step_end

# 1920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LabCoffee_Movement_0:
# 1920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_player
# 1920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	emote_exclamation_mark
	step_end

Littleroot_Idletalk_Aidee_Text_0:
# 1025 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Remember - there should be {COLOR RED}Voltorb\n"
	.string "Shards{COLOR DARK_GRAY} in the big craters of {COLOR GREEN}Route 101{COLOR DARK_GRAY}.$"

Littleroot_Idletalk_Aidee_Text_1:
# 1030 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm counting on you, soldier!$"

Littleroot_Idletalk_Aidee_Text_2:
# 1034 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "How's the search for {COLOR RED}Voltorb Shards{COLOR DARK_GRAY}\n"
	.string "going?$"

Littleroot_Idletalk_Aidee_Text_3:
# 1056 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aah, you did it - you found a {COLOR RED}Voltorb\n"
	.string "Shard{COLOR DARK_GRAY}! And one in great condition!$"

Littleroot_Idletalk_Aidee_Text_4:
# 1061 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hehehe... excellent. This really helps my\n"
	.string "research...$"

Littleroot_Idletalk_Aidee_Text_5:
# 1066 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Now, as for your reward... Professor, do\n"
	.string "you think it's time?$"

Littleroot_Idletalk_Aidee_Text_6:
# 1071 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes... do it as we've discussed.$"

Littleroot_Idletalk_Aidee_Text_7:
# 1077 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Wonderful! Now, {PLAYER}, if you would\n"
	.string "be so kind as to follow me...\p"
	.string "To my favourite place - the lab\n"
	.string "basement!$"

Littleroot_Idletalk_Aidee_Text_8:
# 1083 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better yet, I'll follow you... I can't get\n"
	.string "my eyes off this {COLOR RED}Voltorb Shard{COLOR DARK_GRAY} right\l"
	.string "now!$"

Littleroot_Idletalk_Aidee_Text_9:
# 1094 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hm? Sorry, I'm a bit busy here. Can't\n"
	.string "help you choose!$"

Littleroot_Idletalk_Aidee_Text_10:
# 1097 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, {PLAYER} - you're a lifesaver! Yes,\n"
	.string "I could use your help with a small task.$"

Littleroot_Idletalk_Aidee_Text_11:
# 1100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's some samples we need to collect\n"
	.string "from {COLOR GREEN}Route 101{COLOR DARK_GRAY} - {COLOR RED}Voltorb Shards{COLOR DARK_GRAY}.\p"
	.string "They are the remains of the Voltorbs\n"
	.string "that Kanto dropped on us during the\l"
	.string "war.$"

Littleroot_Idletalk_Aidee_Text_12:
# 1105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Don't worry, they won't explode! {COLOR LIGHT_GRAY}{SHADOW WHITE}I\n"
	.string "think...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Littleroot_Idletalk_Aidee_Text_13:
# 1109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Look inside the big craters, that's\n"
	.string "where you're most likely to find them.\l"
	.string "I'll make it worth your time, I promise!$"

AideeFollowingChat_Text_0:
# 1123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ooh yes... this time it'll work! It has to!$"

AideeFollowingChat_Text_1:
# 1126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Aide is talking to himself while\n"
	.string "examining the {COLOR RED}Voltorb Shard{COLOR DARK_GRAY}.$"

SafemonLore_Text_0:
# 1132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "'Introduction to Safemon\n"
	.string "Classification, by Devon Corporation.'\p"
	.string "Hmm... which chapter should I read?$"

SafemonLore_Text_1:
# 1134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "1) Genetic Safemon$"

SafemonLore_Text_2:
# 1134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "2) Surgical Safemon$"

SafemonLore_Text_3:
# 1135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "3) Contraption Safemon$"

SafemonLore_Text_4:
# 1135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "4) Addendum$"

SafemonLore_Text_5:
# 1135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Don't read$"

SafemonLore_Text_6:
# 1137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "As their name suggests, Genetic\n"
	.string "Safemon are those whose genes have\l"
	.string "been modified to alter their biological\l"
	.string "traits, often to suppress dangerous\l"
	.string "capabilities.$"

SafemonLore_Text_7:
# 1140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "An example is Smothquil, whose back\n"
	.string "fire-glands can no longer produce\l"
	.string "flames to the dangerous extent they\l"
	.string "could before.$"

SafemonLore_Text_8:
# 1146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Surgical Safemon are Pokémon who have\n"
	.string "been subjected to surgery to remove\l"
	.string "their dangerous traits, or to replace\l"
	.string "them with safe ones.$"

SafemonLore_Text_9:
# 1149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Bulbasynth fall under this category,\n"
	.string "due to their native bulbs having been\l"
	.string "replaced by synthetic organs that can\l"
	.string "only segregate safe substances.$"

SafemonLore_Text_10:
# 1155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "When a Pokémon is made safer for human\n"
	.string "interaction simply by equipping them\l"
	.string "with an artificial restrain or device,\l"
	.string "they are called Contraption Safemon.$"

SafemonLore_Text_11:
# 1158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Due to their large number in Hoenn, it\n"
	.string "was determined faster and more cost-\l"
	.string "effective to make Poochyenas safer\l"
	.string "with this method - more specifically, by\l"
	.string "adjusting special muzzles around their\l"
	.string "jaws.$"

Littleroot_Idletalk_Prof_Text_0:
# 1181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm sorry - would love to help you\n"
	.string "decide, but I'm in the middle of\l"
	.string "something here.$"

Littleroot_Idletalk_Prof_Text_1:
# 1183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you could give my Aide a hand, it\n"
	.string "would be a huge help. We're very busy\l"
	.string "lately.$"

Littleroot_Idletalk_Prof_Text_2:
# 1185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You should get going now - don't be late\n"
	.string "for the therapy session.\p"
	.string "It's in {COLOR GREEN} Oldale{COLOR DARK_GRAY}, in the first building to\n"
	.string "the right, you can't miss it.$"

Littleroot_Idletalk_Prof_Text_3:
# 1189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a group session, by the way - try\n"
	.string "to make some friends!$"

Littleroot_Idletalk_Prof_Text_4:
# 1196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I just saw {RIVAL} yelling and\n"
	.string "running towards {COLOR GREEN}Route 101{COLOR DARK_GRAY} like a\l"
	.string "madwoman...$"

Littleroot_Idletalk_Prof_Text_5:
# 1202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Is she okay? Perhaps I should have\n"
	.string "signed her up for therapy too...$"

Littleroot_Idletalk_Prof_Text_6:
# 1207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I just saw {RIVAL} yelling and\n"
	.string "running towards {COLOR GREEN}Route 101{COLOR DARK_GRAY} like a\l"
	.string "madman...$"

Littleroot_Idletalk_Prof_Text_7:
# 1213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Is he okay? Perhaps I should have\n"
	.string "signed him up for therapy too...$"

Littleroot_Idletalk_Prof_Text_8:
# 1220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you found a Voltorb Shard. Well done.$"

Littleroot_Idletalk_Prof_Text_9:
# 1224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Give it to my Aide, please. He'll make\n"
	.string "good use of it.$"

Littleroot_Idletalk_Prof_Text_10:
# 1230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Don't take too long. You still need to go\n"
	.string "to Oldale, remember?$"

Littleroot_Idletalk_Prof_Text_11:
# 1236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The basement is through the tunnel on\n"
	.string "the right side. Watch your step on the\l"
	.string "ladder!$"

Littleroot_Idletalk_Prof_Text_12:
# 1243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you will help us with our research?\n"
	.string "We appreciate it.\p"
	.string "Just don't go telling a word of this to\n"
	.string "anyone, understood?$"

Littleroot_Idletalk_Prof_Text_13:
# 1246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Remember...$"

Littleroot_Idletalk_Prof_Text_14:
# 1251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "We know where you live.$"

Littleroot_Idletalk_Prof_Text_15:
# 1255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Haha - I'm just kidding, of course!$"

Littleroot_Idletalk_Pikachu1_Text_0:
# 1277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pura-pura?$"

Littleroot_Idletalk_Pikachu1_Text_1:
# 1287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Look, I know I asked you to choose a\n"
	.string "Safemon...\p"
	.string "But that one happens to be mine.$"

Littleroot_Idletalk_Pikachu1_Text_2:
# 1300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}... Leave that Purachu alone.\n"
	.string "You're going to spoil it.$"

Littleroot_Idletalk_Pikachu1_Text_3:
# 1314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "... you really want to be a {COLOR RED}Red{COLOR DARK_GRAY} wannabe\n"
	.string "that bad?$"

Littleroot_Idletalk_Pikachu1_Text_4:
# 1317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well, if you like Purachu so much, you\n"
	.string "can take it as your partner.\p"
	.string "I warn you though - it may be cute, but\n"
	.string "it's a piece of work.$"

Littleroot_Idletalk_Pikachu1_Text_5:
# 1320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Will you choose it?$"

Littleroot_Idletalk_Pikachu1_Text_6:
# 1325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Professor has been pressed into\n"
	.string "giving her Purachu!$"

Littleroot_Idletalk_Pikachu1_Text_7:
# 1328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Purachu yawns...$"

Littleroot_Idletalk_Pikachu1_Text_8:
# 1340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well, it's yours now. Don't say I didn't\n"
	.string "warn you.$"

Littleroot_Idletalk_Pikachu1_Text_9:
# 1343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ah, before you go - mind speaking with\n"
	.string "my Aide over there?\p"
	.string "We could use your help with some field\n"
	.string "work we need done in {COLOR GREEN}Route 101{COLOR DARK_GRAY}.\p"
	.string "It will not take you long.$"

Littleroot_Idletalk_Pikachu1_Text_10:
# 1357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Good, then pick from the ones in the\n"
	.string "Pokéballs.$"

Littleroot_Idletalk_Pikachu1_Text_11:
# 1365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It looks like Purachu wants to go on a\n"
	.string "walk.$"

NicknamePartyMon3_Text_0:
# 1376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Give Purachu a nickname...?$"

NicknameBoxMon3_Text_0:
# 1384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon3_Text_1:
# 1388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Transferred to PC$"

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_0:
# 1402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ah, {PLAYER}, you're here. I have good\n"
	.string "and bad news for you...\p"
	.string "Which would you like to hear first?$"

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_1:
# 1405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Good news$"

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_2:
# 1405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Bad news$"

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_3:
# 1407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well, the goods news is...$"

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_4:
# 1411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm sending you on an adventure to\n"
	.string "{COLOR GREEN}Oldale Town{COLOR DARK_GRAY}, with your very own\l"
	.string "Safemon!$"

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_5:
# 1416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "And the 'bad' news is... I have signed\n"
	.string "you up for a therapy session there.$"

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_6:
# 1421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Don't look at me like that. Birch told me\n"
	.string "what you went through, and that you've\l"
	.string "shut yourself home for a year.$"

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_7:
# 1426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But now that you're out, you need some\n"
	.string "help to reconnect with the world.\p"
	.string "Now, pick a Safemon to accompany you.\p"
	.string "I know they're not like your old Mankey,\n"
	.string "but they should get you through {COLOR GREEN}Route\l"
	.string "101{COLOR DARK_GRAY} safely enough.$"

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_8:
# 1431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well, the 'bad' news is...\p"
	.string "I'm sending you to {COLOR GREEN}Oldale Town{COLOR DARK_GRAY} to\n"
	.string "attend a therapy session.$"

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_9:
# 1443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But now that you're out, you need some\n"
	.string "help to reconnect with the world.$"

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_10:
# 1448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The good news is, I'm giving you your\n"
	.string "very own Safemon!$"

LittlerootTown_Eventscript_ProffessorChoosePokeDialogue_Text_11:
# 1452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I know they are not like your old\n"
	.string "Mankey, but they should get you safe\l"
	.string "through {COLOR GREEN}Route 101{COLOR DARK_GRAY}.$"

LittlerootTown_Eventscript_ProffessorDontgo1_Text_0:
# 1472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Come on {PLAYER}, can't you at least\n"
	.string "give this a chance?$"

LittlerootTown_Eventscript_ProffessorDontgo2_Text_0:
# 1486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}, we're helping you out here -\n"
	.string "least you could do is return the favour,\l"
	.string "don't you think?$"

LittlerootTown_Eventscript_ProffessorNoPokesUpstairs_Text_0:
# 1504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're not going to find any Safemon up\n"
	.string "there, {PLAYER}.$"

LittlerootTown_Eventscript_ProffessorNoDoor_Text_0:
# 1522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, just because there's no door,\n"
	.string "doesn't mean you can go in there,\l"
	.string "{PLAYER}.$"

LittlerootTown_Eventscript_Aideenotthere_Text_0:
# 1542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}, my Aide is on the left side\n"
	.string "of the room. Can't miss him.$"

LittlerootTown_Eventscript_ProffessorGotoOldale_Text_0:
# 1558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Mind leaving the same way you entered?\n"
	.string "That is, through the DOOR.$"

LittlerootTown_Eventscript_AideeGotoback_Text_0:
# 1573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You leave now, you don't get your\n"
	.string "reward, {PLAYER}!\p"
	.string "Come on, it's only going to take a minute\n"
	.string "or two! Let's go to the basement,\l"
	.string "through the tunnel next to the\l"
	.string "Professor's desk.$"

Lab_EventScript_Starter1_Text_0:
# 1593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ah, Bulbasynth...? Not the worst choice.\p"
	.string "Bulbasaur have had their natural bulbs\n"
	.string "replaced with artificial ones, which\l"
	.string "synthesise only safe substances.$"

Lab_EventScript_Starter1_Text_1:
# 1597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "No more kids accidentally breathing\n"
	.string "Poison Powder! Hooraay...!$"

Lab_EventScript_Starter1_Text_2:
# 1602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That aside, Bulbasynth is a sturdy,\n"
	.string "reliable Grass type.$"

Lab_EventScript_Starter1_Text_3:
# 1605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So? Do you choose it?$"

Lab_EventScript_Starter1_Text_4:
# 1611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I received a Bulbasynth!$"

Lab_EventScript_Starter1_Text_5:
# 1619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I hope that Bulbasynth and you become\n"
	.string "good friends.$"

Lab_EventScript_Starter1_Text_6:
# 1631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Safe Bulbasaur!$"

Lab_EventScript_Starter1_Text_7:
# 1641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "No More Room$"

Lab_EventScript_Starter1_Text_8:
# 1655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}, you're not going to the\n"
	.string "front lines again. One Pokémon should\l"
	.string "be enough for a trip to the next town.$"

Lab_EventScript_Starter1_Text_9:
# 1659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you want more, buy some Pokéballs in\n"
	.string "{COLOR GREEN}Oldale Town's{COLOR DARK_GRAY} {COLOR BLUE}PokéMart{COLOR DARK_GRAY}.\p"
	.string "You'll be surprised by how many new\n"
	.string "species inhabit Hoenn now.$"

Lab_EventScript_Starter1_Text_10:
# 1664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Go catch some!$"

NicknamePartyMon1_Text_0:
# 1675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Should I give Bulbasynth a nickname...?$"

Lab_EventScript_Starter2_Text_0:
# 1716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That ball contains a Smothquil.\p"
	.string "Cyndaquil's back was a bit of a fire\n"
	.string "hazard, so Devon removed the\l"
	.string "pyroglands from this species' back.\p"
	.string "Their firepower is severely diminished\n"
	.string "now, but Smothquil are still Fire types,\l"
	.string "and trusty ones at that.$"

Lab_EventScript_Starter2_Text_1:
# 1726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I received a Smothquil!$"

Lab_EventScript_Starter2_Text_2:
# 1734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I hope that Smothquil and you become\n"
	.string "good friends.$"

Lab_EventScript_Starter2_Text_3:
# 1737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ah, before you go - mind speaking with\n"
	.string "my Aide over there?\p"
	.string "We could use your help with some field\n"
	.string "work we need done in {COLOR GREEN}Route 101{COLOR DARK_GRAY}. It will\l"
	.string "not take you long.$"

Lab_EventScript_Starter2_Text_4:
# 1746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Smothquil$"

NicknamePartyMon2_Text_0:
# 1794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Should I give Smothquil a nickname...?$"

NicknameBoxMon2_Text_0:
# 1806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Give Cyndaquil a nickname?$"

NicknameBoxMon2_Text_1:
# 1811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Transferred Cyndaquil to the PC$"

Lab_EventScript_Starter3_Text_0:
# 1820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Pokéball is empty...$"

Lab_EventScript_Starter3_Text_1:
# 1825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, sorry about that... Devon retrieved\n"
	.string "all specimens of that Safemon.\p"
	.string "They didn't tell us why - apparently it's\n"
	.string "classified information.$"

Lab_EventScript_Starter3_Text_2:
# 1829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I guess two is still a choice, right?$"

Lab_EventScript_Starter3_Text_3:
# 1838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You are very disappointed... until your\n"
	.string "gaze falls upon a third choice...?$"

Lab_EventScript_Starter3_Text_4:
# 1846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Pokéball is still empty...$"

LabBrokenGlasses_Text_0:
# 1856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Amid some rugged and shredded papers,\n"
	.string "you find something...$"

LabBrokenGlasses_Text_1:
# 1860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The trash can is empty.$"

LabShelves_Text_0:
# 1866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The shelf is full of complicated books.\n"
	.string "The main subjects seem to be Pokémon\l"
	.string "genetics and biology.$"

LabMonitor_Text_0:
# 1873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It seems like a discarded monitor.$"

BalsamDontCheckMyPC_Text_0:
# 1882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's kind of private, if you don't\n"
	.string "mind.$"

LabBox_Text_0:
# 1891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The box is empty.$"

LabSealedBox_Text_0:
# 1897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

LabBirchBag_Text_0:
# 1903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's an old leather bag. It seems\n"
	.string "weathered from years of use.$"

LabDiglettBook_Text_0:
# 1909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "A curious book stands on top of the\n"
	.string "pile. Its title reads 'Diglett Tunneling\l"
	.string "for Dummies.'$"

LabCoffee_Text_0:
# 1917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a plastic cup of coffee by the\n"
	.string "mug...$"

LabCoffee_Text_1:
# 1926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, that's my coffee!$"

LabCoffee_Text_2:
# 1929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Eh... you know what... you can have it.\n"
	.string "You look like you need it more than me!$"

LabCoffee_Text_3:
# 1936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a solitary coffee mug.$"

BalsamgivesPokenav_Text_0:
# 1947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, {PLAYER}, one last thing. Here.$"

BalsamgivesPokenav_Text_1:
# 1953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Obtained the DEVONAV!$"

BalsamgivesPokenav_Text_2:
# 1957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "This is a Devon Nav, or Devonav for\n"
	.string "short. It's got a Hoenn Map app\l"
	.string "installed.\p"
	.string "It will help you to get around - there's\n"
	.string "many changed and new places in Hoenn.\p"
	.string "It also comes with this fad called\n"
	.string "'Devon Net', a site where people upload\l"
	.string "their profiles, and call each other.\p"
	.string "You need to add their profiles first\n"
	.string "though. Let me add mine real quick.$"

BalsamgivesPokenav_Text_3:
# 1966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Balsam's number is registered in\n"
	.string "the Devon Nav!$"

BalsamgivesPokenav_Text_4:
# 1970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There you go. But don't call me unless\n"
	.string "there's an emergency. I'm busy.$"
