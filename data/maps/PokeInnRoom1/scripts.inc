# 1 "data/maps/PokeInnRoom1/scripts.pory"


PokeInnRoom1_MapScripts::
# 7 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightNPC
# 8 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightNPC
	.byte 0


OldaleUsedInnBin::
# 17 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 18 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset FLAG_ITEM_OLDALEUSEDINNBIN, OldaleUsedInnBin_2
# 23 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleUsedInnBin_Text_1
OldaleUsedInnBin_1:
# 24 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

OldaleUsedInnBin_2:
# 19 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleUsedInnBin_Text_0
# 20 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_X_SP_DEF
# 21 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_ITEM_OLDALEUSEDINNBIN
	goto OldaleUsedInnBin_1


OldaleInnRoomOldLady::
# 29 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 30 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 31 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, OldaleInnRoomOldLady_Movement_0
# 32 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldLady_Text_0
# 34 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


OldaleInnRoomOldMan::
# 38 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 39 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 40 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, OldaleInnRoomOldLady_Movement_0
# 41 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_0
# 44 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_1
# 45 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


PokeInnRoom1Girl::
# 49 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 50 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, OldaleInnRoomOldLady_Movement_0
# 51 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 53 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset showedoldaleinngirldoll, PokeInnRoom1Girl_2
PokeInnRoom1Girl_1:
# 123 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set showedoldaleinngirldoll, PokeInnRoom1Girl_6
PokeInnRoom1Girl_4:
# 126 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set showedoldaleinngirldoll, PokeInnRoom1Girl_13
PokeInnRoom1Girl_11:
# 132 "data/maps/PokeInnRoom1/scripts.pory"
endoldalepokeinnroom1girl:
# 133 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

PokeInnRoom1Girl_2:
# 55 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_0
# 58 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER3, PokeInnRoom1Girl_9
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_5:
# 124 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_11
	goto PokeInnRoom1Girl_4

PokeInnRoom1Girl_6:
# 123 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset anneandfamilygone, PokeInnRoom1Girl_5
	goto PokeInnRoom1Girl_4

PokeInnRoom1Girl_9:
# 59 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 60 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_1
# 62 "data/maps/PokeInnRoom1/scripts.pory"
	checkspecies SPECIES_PIKACHU_SAFE, NO_PARTY_SCREEN
# 63 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1Girl_16
# 117 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_12:
# 127 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_12
	goto PokeInnRoom1Girl_11

PokeInnRoom1Girl_13:
# 126 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set anneandfamilygone, PokeInnRoom1Girl_12
	goto PokeInnRoom1Girl_11

PokeInnRoom1Girl_16:
# 65 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_1
# 66 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_PIN
# 67 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_2
# 68 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1Girl_Text_3, PokeInnRoom1Girl_Text_4
# 69 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1Girl_20
PokeInnRoom1Girl_19:
# 111 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1Girl_22
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_20:
# 70 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 71 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 72 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 74 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_2
# 76 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 2, 9
# 77 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_3
# 82 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 5, 1, 10
# 83 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 85 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_5
# 86 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_PIKACHU_SAFE, CRY_MODE_NORMAL
# 87 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_6
# 89 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_7
# 90 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 91 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 93 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 96 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 5, 0, 0
# 97 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_4
# 98 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 102 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_8
# 103 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 104 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_9
# 106 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 107 "data/maps/PokeInnRoom1/scripts.pory"
	setflag showedoldaleinngirldoll
# 108 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_19

PokeInnRoom1Girl_22:
# 112 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_10
# 113 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_1


PokeInnRoom1WheelchairBoy::
# 137 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 138 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, OldaleInnRoomOldLady_Movement_0
# 139 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 140 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_0
# 142 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1Girl_Text_3, PokeInnRoom1Girl_Text_4
# 144 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_2
PokeInnRoom1WheelchairBoy_1:
# 148 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_5
PokeInnRoom1WheelchairBoy_4:
# 151 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_3
# 163 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_POOCHAIN
# 167 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_8
PokeInnRoom1WheelchairBoy_7:
# 171 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_11
PokeInnRoom1WheelchairBoy_10:
# 174 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MAKUHITA
# 176 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_14
PokeInnRoom1WheelchairBoy_13:
# 180 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_17
PokeInnRoom1WheelchairBoy_16:
# 184 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_4
# 185 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_5, PokeInnRoom1WheelchairBoy_Text_6
# 196 "data/maps/PokeInnRoom1/scripts.pory"
endofwheelchairinnkidscript:
# 197 "data/maps/PokeInnRoom1/scripts.pory"
	release
	return

PokeInnRoom1WheelchairBoy_2:
# 145 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_1
	goto PokeInnRoom1WheelchairBoy_1

PokeInnRoom1WheelchairBoy_5:
# 149 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_2
	goto PokeInnRoom1WheelchairBoy_4

PokeInnRoom1WheelchairBoy_8:
# 169 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POOCHAIN
	goto PokeInnRoom1WheelchairBoy_7

PokeInnRoom1WheelchairBoy_11:
# 172 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_10

PokeInnRoom1WheelchairBoy_14:
# 178 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MAKUHITA
	goto PokeInnRoom1WheelchairBoy_13

PokeInnRoom1WheelchairBoy_17:
# 181 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_16


# 31 "data/maps/PokeInnRoom1/scripts.pory"
OldaleInnRoomOldLady_Movement_0:
# 31 "data/maps/PokeInnRoom1/scripts.pory"
	face_player
	step_end

# 59 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_0:
# 59 "data/maps/PokeInnRoom1/scripts.pory"
	face_up
	step_end

# 65 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_1:
# 65 "data/maps/PokeInnRoom1/scripts.pory"
	emote_exclamation_mark
# 65 "data/maps/PokeInnRoom1/scripts.pory"
	face_player
	step_end

# 74 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_2:
# 74 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
	step_end

# 77 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_3:
# 77 "data/maps/PokeInnRoom1/scripts.pory"
	face_left
	step_end

# 97 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_4:
# 97 "data/maps/PokeInnRoom1/scripts.pory"
	face_right
	step_end

OldaleUsedInnBin_Text_0:
# 19 "data/maps/PokeInnRoom1/scripts.pory"
	.string "There's something on the trash can...$"

OldaleUsedInnBin_Text_1:
# 23 "data/maps/PokeInnRoom1/scripts.pory"
	.string "The trash can is empty.$"

OldaleInnRoomOldLady_Text_0:
# 32 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Our grandson pushes himself too hard.\n"
	.string "You look like you do as well.\p"
	.string "It's okay to accept help, you know?$"

OldaleInnRoomOldMan_Text_0:
# 41 "data/maps/PokeInnRoom1/scripts.pory"
	.string "My grandson was injured during the war,\n"
	.string "but if it wasn't for one of the\l"
	.string "Littleroot's Heroes, he wouldn't be here\l"
	.string "at all...$"

OldaleInnRoomOldMan_Text_1:
# 44 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... you have an odd resemblance to\n"
	.string "him.$"

PokeInnRoom1Girl_Text_0:
# 55 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, you're the one who arrived late at\n"
	.string "therapy.\p"
	.string "I'm sorry for yelling in class. I hope\n"
	.string "the teacher did't get mad.\p"
	.string "I saw my brother get hurt by a\n"
	.string "Blastoise during the war, and I'm a bit\l"
	.string "scared of them.$"

PokeInnRoom1Girl_Text_1:
# 60 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I prefer dolls over Pokémon now. Like\n"
	.string "this Purachu doll! Isn't it cute?\p"
	.string "I want to see a real Purachu one day.\n"
	.string "But only from afar...$"

PokeInnRoom1Girl_Text_2:
# 67 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... is that a Purachu you have\n"
	.string "there? Ca-... can I see it?$"

PokeInnRoom1Girl_Text_3:
# 68 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Yes$"

PokeInnRoom1Girl_Text_4:
# 68 "data/maps/PokeInnRoom1/scripts.pory"
	.string "No$"

PokeInnRoom1Girl_Text_5:
# 85 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wow... it's so plumpy! I'll try petting it!$"

PokeInnRoom1Girl_Text_6:
# 87 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Puuu...$"

PokeInnRoom1Girl_Text_7:
# 89 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hehe... it liked it. I guess Pokémon\n"
	.string "aren't so scary after all.$"

PokeInnRoom1Girl_Text_8:
# 102 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Thank you for showing me. Here, I want\n"
	.string "you to have this as thanks.$"

PokeInnRoom1Girl_Text_9:
# 104 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I use my doll as pillow, so I don't need\n"
	.string "this. But someday, perhaps I'll get a\l"
	.string "real Pokémon!$"

PokeInnRoom1Girl_Text_10:
# 112 "data/maps/PokeInnRoom1/scripts.pory"
	.string "O-oh, okay... I guess it must be\n"
	.string "dangerous to take it out. Sorry for\l"
	.string "asking.$"

PokeInnRoom1Girl_Text_11:
# 124 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I can't wait to tell Anne about me\n"
	.string "petting a real Pokémon!$"

PokeInnRoom1Girl_Text_12:
# 127 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I went to tell Anne about me petting a\n"
	.string "real Pokémon, but she and her family are\l"
	.string "gone.\p"
	.string "She was the only girl my age in town...\p"
	.string "I'm sad, but Joel must be sadder. They\n"
	.string "were so close!.$"

PokeInnRoom1WheelchairBoy_Text_0:
# 140 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hey… does it hurt?$"

PokeInnRoom1WheelchairBoy_Text_1:
# 145 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I see… I envy you.$"

PokeInnRoom1WheelchairBoy_Text_2:
# 149 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I see… mine don't hurt either.$"

PokeInnRoom1WheelchairBoy_Text_3:
# 151 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Say, can you do me a favour? My\n"
	.string "grandparents are caring for me, but\l"
	.string "they struggle to push my chair.\p"
	.string "So I do it myself, but my arms get tired\n"
	.string "after a while...\p"
	.string "Do you think you can find a Fighting\n"
	.string "Pokémon for me?\p"
	.string "One that is not evolved, since I'm a\n"
	.string "novice trainer.\p"
	.string "Please, I'll give you something in\n"
	.string "return.$"

PokeInnRoom1WheelchairBoy_Text_4:
# 184 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Show me a Pokémon.$"

PokeInnRoom1WheelchairBoy_Text_5:
# 185 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_1}$"

PokeInnRoom1WheelchairBoy_Text_6:
# 185 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_2}$"
