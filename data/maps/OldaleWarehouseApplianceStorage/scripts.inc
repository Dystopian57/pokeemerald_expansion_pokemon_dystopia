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


ScavengerSandshrew::
# 18 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 19 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	applymovement 41, ScavengerSandshrew_Movement_0
# 20 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	playmoncry SPECIES_SANDSHREW, CRY_MODE_NORMAL
# 21 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox ScavengerSandshrew_Text_0
# 22 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageScavenger1::
# 26 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	trainerbattle_single TRAINER_SCAVENGER_OLDALEWAREHOUSE_1, ApplianceStorageScavenger1_Intro, ApplianceStorageScavenger1_Outro
# 28 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, OldaleWarehouseApplianceStorageScavenger1_2
# 33 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger1_Text_1
OldaleWarehouseApplianceStorageScavenger1_1:
# 36 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
endofwarehousescavenger1:
# 37 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	end

OldaleWarehouseApplianceStorageScavenger1_2:
# 29 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger1_Text_0
# 30 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto endofwarehousescavenger1
	goto OldaleWarehouseApplianceStorageScavenger1_1


OldaleWarehouseApplianceStorageScavenger2Trigger::
# 49 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 50 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, OldaleWarehouseApplianceStorageScavenger2Trigger_2
# 77 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
OldaleWarehouseApplianceStorageScavenger2Trigger_1:
# 78 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	end

OldaleWarehouseApplianceStorageScavenger2Trigger_2:
# 53 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseApplianceStorageScavenger2Trigger_Movement_0
# 54 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 55 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 56 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	playse SE_PIN
# 57 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	applymovement 2, OldaleWarehouseApplianceStorageScavenger2Trigger_Movement_1
# 58 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto_if_unset foughtwarehousescavenger2, OldaleWarehouseApplianceStorageScavenger2Trigger_6
# 64 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger2Trigger_Text_1
OldaleWarehouseApplianceStorageScavenger2Trigger_5:
# 67 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	trainerbattle_no_intro TRAINER_SCAVENGER_OLDALEWAREHOUSE_2, ApplianceStorageScavenger2_Outro
# 68 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	playbgm MUS_UNDERPIZZA, TRUE
# 69 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger2Trigger_Text_2
# 70 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 71 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger2Trigger_Text_3
# 75 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setflag scavengergivesobjectspotter
	goto OldaleWarehouseApplianceStorageScavenger2Trigger_1

OldaleWarehouseApplianceStorageScavenger2Trigger_6:
# 60 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger2Trigger_Text_0
# 62 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setflag foughtwarehousescavenger2
	goto OldaleWarehouseApplianceStorageScavenger2Trigger_5


OldaleWarehouseApplianceStorageScavenger2NoTrigger::
# 83 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 84 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, OldaleWarehouseApplianceStorageScavenger2NoTrigger_2
# 88 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageScavenger2NoTrigger_Text_0
OldaleWarehouseApplianceStorageScavenger2NoTrigger_1:
# 92 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return

OldaleWarehouseApplianceStorageScavenger2NoTrigger_2:
# 85 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	call OldaleWarehouseApplianceStorageScavenger2Trigger
	goto OldaleWarehouseApplianceStorageScavenger2NoTrigger_1


OldaleWarehouseApplianceStorageGenerator::
# 101 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 102 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageGenerator_Text_0
# 104 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageGrayBox::
# 108 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 109 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageGrayBox_Text_0
# 110 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageWallWire::
# 114 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 115 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageWallWire_Text_0
# 116 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStoragePC::
# 120 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 121 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStoragePC_Text_0
# 122 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


WarehouseExposedWiring::
# 125 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSEWIRING, WarehouseExposedWiring_2
# 145 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox WarehouseExposedWiring_Text_5
WarehouseExposedWiring_1:
# 147 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return

WarehouseExposedWiring_2:
# 126 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox WarehouseExposedWiring_Text_0
# 127 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, WarehouseExposedWiring_Text_1, WarehouseExposedWiring_Text_2
# 129 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WarehouseExposedWiring_5
# 142 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox WarehouseExposedWiring_Text_4
	goto WarehouseExposedWiring_1

WarehouseExposedWiring_5:
# 130 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setvar VAR_0x8004, 2
# 131 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setvar VAR_0x8005, 2
# 132 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setvar VAR_0x8006, 2
# 133 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setvar VAR_0x8007, 4
# 134 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	special ShakeCamera
# 135 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 136 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox WarehouseExposedWiring_Text_3
# 137 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	giveitem ITEM_MAGNET
# 138 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEWIRING
	goto WarehouseExposedWiring_1


WarehouseExposedWiringSide::
# 152 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto_if_unset FLAG_ITEM_WAREHOUSEWIRING, WarehouseExposedWiringSide_2
# 157 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox WarehouseExposedWiring_Text_4
WarehouseExposedWiringSide_1:
# 158 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return

WarehouseExposedWiringSide_2:
# 153 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox WarehouseExposedWiringSide_Text_0
	goto WarehouseExposedWiringSide_1


OldaleWarehouseApplianceStorageWeirdMachine::
# 162 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 163 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageWeirdMachine_Text_0
# 164 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageGasTerminal::
# 168 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 169 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageGasTerminal_Text_0
# 170 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceLightPanel::
# 174 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 175 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceLightPanel_Text_0
# 176 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageOpenBox::
# 180 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 181 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageOpenBox_Text_0
# 182 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageComputer::
# 186 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 187 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageComputer_Text_0
# 188 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageTV::
# 192 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 193 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageTV_Text_0
# 194 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStorageBarrel::
# 198 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 199 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	goto_if_unset appliancestoragebarrelitem, OldaleWarehouseApplianceStorageBarrel_2
# 205 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageBarrel_Text_1
OldaleWarehouseApplianceStorageBarrel_1:
# 206 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return

OldaleWarehouseApplianceStorageBarrel_2:
# 201 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStorageBarrel_Text_0
# 202 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	giveitem ITEM_CHARCOAL
# 203 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setflag appliancestoragebarrelitem
	goto OldaleWarehouseApplianceStorageBarrel_1


OldaleWarehouseApplianceStoragePokeHealing::
# 210 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 211 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStoragePokeHealing_Text_0
# 212 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStoragePress::
# 216 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 217 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStoragePress_Text_0
# 218 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


OldaleWarehouseApplianceStoragePokeAssembler::
# 222 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 223 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox OldaleWarehouseApplianceStoragePokeAssembler_Text_0
# 224 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


DevonWarehouseWorkerPanelTechnician::
# 228 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 229 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 230 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setvar VAR_0x8004, 2
# 231 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setvar VAR_0x8005, 2
# 232 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setvar VAR_0x8006, 2
# 233 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setvar VAR_0x8007, 4
# 234 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	special ShakeCamera
# 235 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 236 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox DevonWarehouseWorkerPanelTechnician_Text_0
# 237 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	applymovement 8, ScavengerSandshrew_Movement_0
# 238 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	waitmovement 8
# 239 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox DevonWarehouseWorkerPanelTechnician_Text_1
# 240 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	applymovement 8, DevonWarehouseWorkerPanelTechnician_Movement_0
# 241 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	waitmovement 8
# 242 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


DevonWarehouseWorkerApplianceInventory::
# 247 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	lock
# 248 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 249 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	applymovement 9, ScavengerSandshrew_Movement_0
# 250 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	waitmovement 9
# 251 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	msgbox DevonWarehouseWorkerApplianceInventory_Text_0
# 253 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	applymovement 9, DevonWarehouseWorkerApplianceInventory_Movement_0
# 254 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	waitmovement 9
# 255 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	release
	return


# 19 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
ScavengerSandshrew_Movement_0:
# 19 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	face_player
	step_end

# 53 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
OldaleWarehouseApplianceStorageScavenger2Trigger_Movement_0:
# 53 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	walk_in_place_up
	step_end

# 57 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
OldaleWarehouseApplianceStorageScavenger2Trigger_Movement_1:
# 57 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	emote_exclamation_mark
# 57 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	face_player
	step_end

# 240 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
DevonWarehouseWorkerPanelTechnician_Movement_0:
# 240 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	face_down
	step_end

# 253 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
DevonWarehouseWorkerApplianceInventory_Movement_0:
# 253 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	face_up
	step_end

ScavengerSandshrew_Text_0:
# 21 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "San-saaan!$"

OldaleWarehouseApplianceStorageScavenger1_Text_0:
# 29 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "I was supposed to stand watch... she's\n"
	.string "going to be pissed.$"

OldaleWarehouseApplianceStorageScavenger1_Text_1:
# 33 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Just heard you talking with Cat. She\n"
	.string "must have seen something in you to\l"
	.string "share our haul.\p"
	.string "If you're ever in need of some more tech\n"
	.string "or supplies, you should come to our\l"
	.string "Hardware Store in {COLOR GREEN}Petalburg City{COLOR DARK_GRAY}.$"

OldaleWarehouseApplianceStorageScavenger2Trigger_Text_0:
# 60 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "W-what the!? What's with you, sneaking\n"
	.string "around like a Keckleon!?\p"
	.string "Well, this is our loot - and I'll fight you\n"
	.string "for it!$"

OldaleWarehouseApplianceStorageScavenger2Trigger_Text_1:
# 64 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "What? You're persistent... let me\n"
	.string "scavenge in peace!$"

OldaleWarehouseApplianceStorageScavenger2Trigger_Text_2:
# 69 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "You know what? You beat us fair and\n"
	.string "square... so you can have this.$"

OldaleWarehouseApplianceStorageScavenger2Trigger_Text_3:
# 71 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "That's an Object Spotter - a pair of\n"
	.string "smart goggles that help you detect\l"
	.string "valuable items laying around.\p"
	.string "Just be warned - after Devon found out\n"
	.string "bad agents use these to steal, they\l"
	.string "implemented an “anti-theft” feature.\p"
	.string "Meaning, these won't do anything in\n"
	.string "indoor spaces.\p"
	.string "... aside from making you look like a\n"
	.string "dork, that is.$"

OldaleWarehouseApplianceStorageScavenger2NoTrigger_Text_0:
# 88 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Small bit of trivia: the Object Spooter\n"
	.string "is actually an enhanced version of the\l"
	.string "old “Dowsing Machine”.\p"
	.string "Though I guess you're a bit too young\n"
	.string "to know about those, eh?$"

OldaleWarehouseApplianceStorageGenerator_Text_0:
# 102 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "A complex machine. The label on the side\n"
	.string "reads...\p"
	.string "“Pokémon Electricity Extractor.\n"
	.string "Made in Mahogany Town: Silph Co.”.$"

OldaleWarehouseApplianceStorageGrayBox_Text_0:
# 109 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "The box is empty.$"

OldaleWarehouseApplianceStorageWallWire_Text_0:
# 115 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "It's just a wire.$"

OldaleWarehouseApplianceStoragePC_Text_0:
# 121 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "This dusty PC seems out of commission.$"

WarehouseExposedWiring_Text_0:
# 126 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "There's something below the exposed\n"
	.string "wiring...$"

WarehouseExposedWiring_Text_1:
# 127 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Grab it$"

WarehouseExposedWiring_Text_2:
# 127 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Leave it alone$"

WarehouseExposedWiring_Text_3:
# 136 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Got a nasty shock...! But something else\n"
	.string "too!$"

WarehouseExposedWiring_Text_4:
# 142 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Better not to touch this...$"

WarehouseExposedWiring_Text_5:
# 145 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "The loose wire fizzles.$"

WarehouseExposedWiringSide_Text_0:
# 153 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "There's something to the side of the\n"
	.string "exposed wiring... dangerously close to\l"
	.string "the sparks.$"

OldaleWarehouseApplianceStorageWeirdMachine_Text_0:
# 163 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "An industrial-looking machine of\n"
	.string "unknown use.$"

OldaleWarehouseApplianceStorageGasTerminal_Text_0:
# 169 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "It's a terminal like the ones used in gas\n"
	.string "stations.$"

OldaleWarehouseApplianceLightPanel_Text_0:
# 175 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "An encased light panel. It's under lock.$"

OldaleWarehouseApplianceStorageOpenBox_Text_0:
# 181 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "The box is full of electronics.$"

OldaleWarehouseApplianceStorageComputer_Text_0:
# 187 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "A desktop computer. Seems like it's\n"
	.string "been scrapped for parts.$"

OldaleWarehouseApplianceStorageTV_Text_0:
# 193 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "An old TV.$"

OldaleWarehouseApplianceStorageBarrel_Text_0:
# 201 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "A fuel barrel. There's something behind\n"
	.string "it...$"

OldaleWarehouseApplianceStorageBarrel_Text_1:
# 205 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "A regular fuel barrel.$"

OldaleWarehouseApplianceStoragePokeHealing_Text_0:
# 211 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "A busted Pokéhealing machine.$"

OldaleWarehouseApplianceStoragePress_Text_0:
# 217 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "It's just a mechanical press.$"

OldaleWarehouseApplianceStoragePokeAssembler_Text_0:
# 223 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "It's an old Pokéball assembler.$"

DevonWarehouseWorkerPanelTechnician_Text_0:
# 236 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "O-ouch!$"

DevonWarehouseWorkerPanelTechnician_Text_1:
# 239 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Keep your distance, please. This panel\n"
	.string "is very unsafe.$"

DevonWarehouseWorkerApplianceInventory_Text_0:
# 251 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "We're missing some inventory here... and\n"
	.string "it happens to be the high-end stuff.\p"
	.string "Those Rebels know their tech better\n"
	.string "than I thought.$"

ApplianceStorageScavenger1_Intro::
# 41 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Not so fast, kid. If you've come to\npillage, we're first!$"

ApplianceStorageScavenger1_Outro::
# 44 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "No honour among thieves, huh...?$"

ApplianceStorageScavenger2_Outro::
# 96 "data/maps/OldaleWarehouseApplianceStorage/scripts.pory"
	.string "Don't you know about “finders\nkeepers”?$"
