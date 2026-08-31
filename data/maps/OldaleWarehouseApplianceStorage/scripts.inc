# 1 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"


OldaleWarehouseApplianceStorage_MapScripts::
# 6 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 7 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 8 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
	.byte 0


OldaleWarehouseApplianceStorageItem::
# 12 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 13 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	finditem ITEM_ROTOM_CATALOG
# 14 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	removeobject 4
# 15 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	releaseall
	return


OldaleWarehouseApplianceStorageScavenger1::
# 18 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	trainerbattle_single TRAINER_SCAVENGER_OLDALEWAREHOUSE_1, ApplianceStorageScavenger1_Intro, ApplianceStorageScavenger1_Outro
# 20 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, OldaleWarehouseApplianceStorageScavenger1_2
# 25 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger1_Text_1
OldaleWarehouseApplianceStorageScavenger1_1:
# 28 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
endofwarehousescavenger1:
# 29 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	end

OldaleWarehouseApplianceStorageScavenger1_2:
# 21 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger1_Text_0
# 22 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto endofwarehousescavenger1
	goto OldaleWarehouseApplianceStorageScavenger1_1


OldaleWarehouseApplianceStorageScavenger2Trigger::
# 41 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 42 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, OldaleWarehouseApplianceStorageScavenger2Trigger_2
# 61 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
OldaleWarehouseApplianceStorageScavenger2Trigger_1:
# 62 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	end

OldaleWarehouseApplianceStorageScavenger2Trigger_2:
# 44 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseApplianceStorageScavenger2Trigger_Movement_0
# 45 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 46 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 47 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	playse SE_PIN
# 48 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	applymovement 2, OldaleWarehouseApplianceStorageScavenger2Trigger_Movement_1
# 49 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger2Trigger_Text_0
# 51 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	trainerbattle_no_intro TRAINER_SCAVENGER_OLDALEWAREHOUSE_2, ApplianceStorageScavenger2_Outro
# 52 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	playbgm MUS_UNDERPIZZA, TRUE
# 53 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger2Trigger_Text_1
# 54 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 55 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger2Trigger_Text_2
# 59 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setflag scavengergivesobjectspotter
	goto OldaleWarehouseApplianceStorageScavenger2Trigger_1


OldaleWarehouseApplianceStorageScavenger2NoTrigger::
# 67 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 68 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, OldaleWarehouseApplianceStorageScavenger2NoTrigger_2
# 72 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger2NoTrigger_Text_0
OldaleWarehouseApplianceStorageScavenger2NoTrigger_1:
# 76 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return

OldaleWarehouseApplianceStorageScavenger2NoTrigger_2:
# 69 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	call OldaleWarehouseApplianceStorageScavenger2Trigger
	goto OldaleWarehouseApplianceStorageScavenger2NoTrigger_1


OldaleWarehouseApplianceStorageGenerator::
# 85 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 86 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageGenerator_Text_0
# 88 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageGrayBox::
# 92 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 93 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageGrayBox_Text_0
# 94 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


WarehouseExposedWiring::
# 97 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSEWIRING, WarehouseExposedWiring_2
WarehouseExposedWiring_1:
# 116 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return

WarehouseExposedWiring_2:
# 98 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox WarehouseExposedWiring_Text_0
# 99 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, WarehouseExposedWiring_Text_1, WarehouseExposedWiring_Text_2
# 101 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WarehouseExposedWiring_4
# 113 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox WarehouseExposedWiring_Text_4
	goto WarehouseExposedWiring_1

WarehouseExposedWiring_4:
# 102 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setvar VAR_0x8004, 2
# 103 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setvar VAR_0x8005, 2
# 104 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setvar VAR_0x8006, 2
# 105 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setvar VAR_0x8007, 4
# 106 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	special ShakeCamera
# 107 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 108 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox WarehouseExposedWiring_Text_3
# 109 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	giveitem ITEM_MAGNET
	goto WarehouseExposedWiring_1


OldaleWarehouseApplianceStorageWeirdMachine::
# 120 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 121 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageWeirdMachine_Text_0
# 122 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageGasTerminal::
# 126 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 127 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageGasTerminal_Text_0
# 128 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageOpenBox::
# 132 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 133 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageOpenBox_Text_0
# 134 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageComputer::
# 138 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 139 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageComputer_Text_0
# 140 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageTV::
# 144 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 145 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageTV_Text_0
# 146 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageBarrel::
# 150 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 151 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageBarrel_Text_0
# 152 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStoragePokeHealing::
# 156 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 157 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStoragePokeHealing_Text_0
# 158 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStoragePress::
# 162 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 163 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStoragePress_Text_0
# 164 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStoragePokeAssembler::
# 168 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 169 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStoragePokeAssembler_Text_0
# 170 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


# 44 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
OldaleWarehouseApplianceStorageScavenger2Trigger_Movement_0:
# 44 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	face_up
	step_end

# 48 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
OldaleWarehouseApplianceStorageScavenger2Trigger_Movement_1:
# 48 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	emote_exclamation_mark
# 48 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	face_player
	step_end

OldaleWarehouseApplianceStorageScavenger1_Text_0:
# 21 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "I was supposed to stand watch... she's\n"
	.string "going to be pissed.$"

OldaleWarehouseApplianceStorageScavenger1_Text_1:
# 25 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Just heard you talking with Cat. She\n"
	.string "must have seen something in you to\l"
	.string "share our haul.\p"
	.string "If you're ever in need of some more tech\n"
	.string "or supplies, you should come to our\l"
	.string "Hardware Store in Petalburg City.$"

OldaleWarehouseApplianceStorageScavenger2Trigger_Text_0:
# 49 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "W-what the!? What's with you, sneaking\n"
	.string "around like a Keckleon!?\p"
	.string "Well, this is our loot - and I'll fight you\n"
	.string "over for it!$"

OldaleWarehouseApplianceStorageScavenger2Trigger_Text_1:
# 53 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "You know what? You beat us fair and\n"
	.string "square... so you can have this.$"

OldaleWarehouseApplianceStorageScavenger2Trigger_Text_2:
# 55 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "That's an Object Spotter - a pair of\n"
	.string "smart goggles that help you detect\l"
	.string "valuable items laying around.\p"
	.string "Just be warned - after Devon found out\n"
	.string "bad agents use these to steal, they\l"
	.string "implemented an 'anti-theft' feature.\p"
	.string "Meaning, these won't do anything in\n"
	.string "indoor spaces.\p"
	.string "... Aside from making you look like a\n"
	.string "dork, that is.$"

OldaleWarehouseApplianceStorageScavenger2NoTrigger_Text_0:
# 72 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Small bit of trivia: the Object Spooter\n"
	.string "is actually an an enhanced version of\l"
	.string "the 'Dowsing Machine'.\p"
	.string "Though I guess you're a bit too young\n"
	.string "to know about those, eh?$"

OldaleWarehouseApplianceStorageGenerator_Text_0:
# 86 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "A complex machine. The label on the side\n"
	.string "reads...\p"
	.string "“Pokémon Electricity Extractor. Made in\n"
	.string "Mahogany Town: Silph & Co.”.$"

OldaleWarehouseApplianceStorageGrayBox_Text_0:
# 93 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "The box is empty.$"

WarehouseExposedWiring_Text_0:
# 98 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "There's something below the exposed\n"
	.string "wiring...$"

WarehouseExposedWiring_Text_1:
# 99 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Grab it$"

WarehouseExposedWiring_Text_2:
# 99 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Leave it alone$"

WarehouseExposedWiring_Text_3:
# 108 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Got a nasty shock...! But something else\n"
	.string "too!$"

WarehouseExposedWiring_Text_4:
# 113 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Better not to touch this...$"

OldaleWarehouseApplianceStorageWeirdMachine_Text_0:
# 121 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "An industrial-looking machine of\n"
	.string "unknown use.$"

OldaleWarehouseApplianceStorageGasTerminal_Text_0:
# 127 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "It's a terminal like the ones used in gas\n"
	.string "stations.$"

OldaleWarehouseApplianceStorageOpenBox_Text_0:
# 133 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "The box is full of electronics.$"

OldaleWarehouseApplianceStorageComputer_Text_0:
# 139 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "A desktop computer. Seems like it's\n"
	.string "been scrapped for parts.$"

OldaleWarehouseApplianceStorageTV_Text_0:
# 145 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "An old TV.$"

OldaleWarehouseApplianceStorageBarrel_Text_0:
# 151 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "The barrel smells of fuel.$"

OldaleWarehouseApplianceStoragePokeHealing_Text_0:
# 157 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "A busted Pokéhealing machine.$"

OldaleWarehouseApplianceStoragePress_Text_0:
# 163 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "It's just a mechanical press.$"

OldaleWarehouseApplianceStoragePokeAssembler_Text_0:
# 169 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "It's an old Pokéball assembler.$"

ApplianceStorageScavenger1_Intro::
# 33 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Not so fast, kid. If you've come to\npillage, we're first!$"

ApplianceStorageScavenger1_Outro::
# 36 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "No honour among thieves, huh...?$"

ApplianceStorageScavenger2_Outro::
# 80 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Don't you know about “finders\nkeepers”?$"
