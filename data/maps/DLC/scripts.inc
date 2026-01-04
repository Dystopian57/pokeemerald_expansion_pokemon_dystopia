# 1 "data/maps/DLC/scripts.pory"

# 2 "data/maps/DLC/scripts.pory"
DLC_MapScripts::
# 3 "data/maps/DLC/scripts.pory"
	.byte 0

OldaleDLC_GoToSeatForTherapyLeft::
# 8 "data/maps/DLC/scripts.pory"
	lockall
# 9 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 10 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleDLC_GoToSeatForTherapyLeft_Movement_0
# 11 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 12 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 13 "data/maps/DLC/scripts.pory"
	msgbox OldaleDLC_GoToSeatForTherapyLeft_Text_0
# 15 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleDLC_GoToSeatForTherapyLeft_Movement_1
# 16 "data/maps/DLC/scripts.pory"
	goto starttherapycutscene
	return


OldaleDLC_GoToSeatForTherapyRight::
# 20 "data/maps/DLC/scripts.pory"
	lockall
# 21 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 22 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleDLC_GoToSeatForTherapyLeft_Movement_0
# 23 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 24 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 25 "data/maps/DLC/scripts.pory"
	msgbox OldaleDLC_GoToSeatForTherapyLeft_Text_0
# 27 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleDLC_GoToSeatForTherapyRight_Movement_0
# 28 "data/maps/DLC/scripts.pory"
	goto starttherapycutscene
	return


OldaleTown_DLC_TherapyCutscene::
# 32 "data/maps/DLC/scripts.pory"
starttherapycutscene:
# 33 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_0
# 35 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_VENUSAUR, 10, 3
# 36 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_NORMAL
# 37 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_1
# 38 "data/maps/DLC/scripts.pory"
	hidemonpic
# 39 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_2
# 40 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_DLC_TherapyCutscene_Text_3, OldaleTown_DLC_TherapyCutscene_Text_4, OldaleTown_DLC_TherapyCutscene_Text_5
# 41 "data/maps/DLC/scripts.pory"
	hidemonpic
# 42 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 43 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_0
# 44 "data/maps/DLC/scripts.pory"
	waitmovement
# 46 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_DLC_TherapyCutscene_2
OldaleTown_DLC_TherapyCutscene_1:
# 50 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_DLC_TherapyCutscene_5
OldaleTown_DLC_TherapyCutscene_4:
# 54 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleTown_DLC_TherapyCutscene_8
OldaleTown_DLC_TherapyCutscene_7:
# 58 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_1
# 59 "data/maps/DLC/scripts.pory"
	waitmovement
# 60 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_9
# 62 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_2
# 63 "data/maps/DLC/scripts.pory"
	waitmovement
# 64 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_10
# 66 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 67 "data/maps/DLC/scripts.pory"
	waitmovement
# 68 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_CHARIZARD, 10, 3
# 69 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_NORMAL
# 70 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_11
# 71 "data/maps/DLC/scripts.pory"
	hidemonpic
# 72 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 73 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_0
# 74 "data/maps/DLC/scripts.pory"
	waitmovement
# 75 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_12
# 77 "data/maps/DLC/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 78 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_4
# 79 "data/maps/DLC/scripts.pory"
	waitmovement
# 80 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_13
# 82 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 83 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_5
# 84 "data/maps/DLC/scripts.pory"
	waitmovement
# 85 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_14
# 87 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 88 "data/maps/DLC/scripts.pory"
	waitmovement
# 89 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_15
# 90 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BLASTOISE, 10, 3
# 91 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_ROAR_1
# 92 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_16
# 93 "data/maps/DLC/scripts.pory"
	hidemonpic
# 95 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 96 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_6
# 97 "data/maps/DLC/scripts.pory"
	waitmovement
# 98 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_17
# 100 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_1
# 101 "data/maps/DLC/scripts.pory"
	waitmovement
# 102 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_18
# 106 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 107 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_0
# 108 "data/maps/DLC/scripts.pory"
	waitmovement
# 109 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_19
# 111 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 112 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_7
# 113 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_20
# 115 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_8
# 116 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_21
# 118 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_22
# 119 "data/maps/DLC/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 120 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_2
# 121 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_23
# 122 "data/maps/DLC/scripts.pory"
	playse SE_FLEE
# 123 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_9
# 124 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_24
# 125 "data/maps/DLC/scripts.pory"
	waitmovement
# 126 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 127 "data/maps/DLC/scripts.pory"
	waitse
# 128 "data/maps/DLC/scripts.pory"
	removeobject 1
# 130 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_10
# 131 "data/maps/DLC/scripts.pory"
	playse SE_M_METRONOME
# 132 "data/maps/DLC/scripts.pory"
	waitmovement
# 134 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 135 "data/maps/DLC/scripts.pory"
	waitmovement
# 136 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_25
# 140 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_11
# 141 "data/maps/DLC/scripts.pory"
	waitmovement
# 142 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_12
# 143 "data/maps/DLC/scripts.pory"
	waitmovement
# 144 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_26
# 145 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_13
# 146 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_14
# 147 "data/maps/DLC/scripts.pory"
	waitmovement
# 148 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 149 "data/maps/DLC/scripts.pory"
	waitse
# 150 "data/maps/DLC/scripts.pory"
	removeobject 2
# 151 "data/maps/DLC/scripts.pory"
	removeobject 3
# 153 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 154 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_DLC_TherapyCutscene_Movement_15
# 155 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 156 "data/maps/DLC/scripts.pory"
	clearflag sharpynotoutsideDLC
# 157 "data/maps/DLC/scripts.pory"
	clearflag camelianotoutsideDLC
# 158 "data/maps/DLC/scripts.pory"
	setflag sharpynotinsideDLC
# 159 "data/maps/DLC/scripts.pory"
	setflag camelianotinsideDLC
# 160 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 161 "data/maps/DLC/scripts.pory"
	waitmovement
# 163 "data/maps/DLC/scripts.pory"
	setvar VAR_OLDALE_PHASE, 1
# 164 "data/maps/DLC/scripts.pory"
	releaseall
	return

OldaleTown_DLC_TherapyCutscene_2:
# 47 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_6
	goto OldaleTown_DLC_TherapyCutscene_1

OldaleTown_DLC_TherapyCutscene_5:
# 51 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_7
	goto OldaleTown_DLC_TherapyCutscene_4

OldaleTown_DLC_TherapyCutscene_8:
# 55 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_8
	goto OldaleTown_DLC_TherapyCutscene_7


# 10 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyLeft_Movement_0:
# 10 "data/maps/DLC/scripts.pory"
	walk_up
# 10 "data/maps/DLC/scripts.pory"
	walk_up
	step_end

# 15 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyLeft_Movement_1:
# 15 "data/maps/DLC/scripts.pory"
	walk_up
# 15 "data/maps/DLC/scripts.pory"
	walk_right
# 15 "data/maps/DLC/scripts.pory"
	walk_right
# 15 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 27 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyRight_Movement_0:
# 27 "data/maps/DLC/scripts.pory"
	walk_up
# 27 "data/maps/DLC/scripts.pory"
	walk_right
# 27 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 43 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_0:
# 43 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 43 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 43 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 58 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_1:
# 58 "data/maps/DLC/scripts.pory"
	walk_in_place_down
# 58 "data/maps/DLC/scripts.pory"
	walk_in_place_down
	step_end

# 62 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_2:
# 62 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 62 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 66 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_3:
# 66 "data/maps/DLC/scripts.pory"
	walk_in_place_down
	step_end

# 78 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_4:
# 78 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 78 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 78 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 83 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_5:
# 83 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 83 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 96 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_6:
# 96 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 96 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 112 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_7:
# 112 "data/maps/DLC/scripts.pory"
	face_left
# 112 "data/maps/DLC/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 115 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_8:
# 115 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 115 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 115 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 115 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 115 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 115 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 115 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 115 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 115 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 115 "data/maps/DLC/scripts.pory"
	walk_in_place_left
	step_end

# 123 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_9:
# 123 "data/maps/DLC/scripts.pory"
	walk_fast_left
# 123 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 123 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 123 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 123 "data/maps/DLC/scripts.pory"
	walk_fast_down
	step_end

# 130 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_10:
# 130 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 130 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 140 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_11:
# 140 "data/maps/DLC/scripts.pory"
	face_right
	step_end

# 142 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_12:
# 142 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 145 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_13:
# 145 "data/maps/DLC/scripts.pory"
	walk_right
# 145 "data/maps/DLC/scripts.pory"
	walk_down
# 145 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 146 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_14:
# 146 "data/maps/DLC/scripts.pory"
	walk_right
# 146 "data/maps/DLC/scripts.pory"
	walk_right
# 146 "data/maps/DLC/scripts.pory"
	walk_down
# 146 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 154 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_15:
# 154 "data/maps/DLC/scripts.pory"
	walk_down
# 154 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

OldaleDLC_GoToSeatForTherapyLeft_Text_0:
# 13 "data/maps/DLC/scripts.pory"
	.string "Ah, there you are... {PLAYER}, is it?\p"
	.string "Please sit down - the session is about\n"
	.string "to start.$"

OldaleTown_DLC_TherapyCutscene_Text_0:
# 33 "data/maps/DLC/scripts.pory"
	.string "As I was saying, we are going to start\n"
	.string "by watching some pictures of Kantonian\l"
	.string "Pokémon, and sharing what feelings\l"
	.string "they evoke in us.$"

OldaleTown_DLC_TherapyCutscene_Text_1:
# 37 "data/maps/DLC/scripts.pory"
	.string "Let's begin with you, {PLAYER}. Take a\n"
	.string "look at this picture.$"

OldaleTown_DLC_TherapyCutscene_Text_2:
# 39 "data/maps/DLC/scripts.pory"
	.string "What do you think about it?$"

OldaleTown_DLC_TherapyCutscene_Text_3:
# 40 "data/maps/DLC/scripts.pory"
	.string "It's cool$"

OldaleTown_DLC_TherapyCutscene_Text_4:
# 40 "data/maps/DLC/scripts.pory"
	.string "Looks dangerous$"

OldaleTown_DLC_TherapyCutscene_Text_5:
# 40 "data/maps/DLC/scripts.pory"
	.string "I don't know$"

OldaleTown_DLC_TherapyCutscene_Text_6:
# 47 "data/maps/DLC/scripts.pory"
	.string "Cool!? That Pokémon poisoned my\n"
	.string "daugther during the war! It's horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_7:
# 51 "data/maps/DLC/scripts.pory"
	.string "I agree! That Pokémon poisoned my\n"
	.string "daugther during the war! It's horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_8:
# 55 "data/maps/DLC/scripts.pory"
	.string "Well, I do know! That Pokémon poisoned\n"
	.string "my daugther during the war! It's\l"
	.string "horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_9:
# 60 "data/maps/DLC/scripts.pory"
	.string "You are correct, sir... Venusaurs are\n"
	.string "very dangerous.\p"
	.string "Thankfully, Devon Corp. has safened all\n"
	.string "Bulbasaurs in Hoenn to Bulbasynths, so\l"
	.string "that no more people get hurt again.$"

OldaleTown_DLC_TherapyCutscene_Text_10:
# 64 "data/maps/DLC/scripts.pory"
	.string "Ah, thank goodness...$"

OldaleTown_DLC_TherapyCutscene_Text_11:
# 70 "data/maps/DLC/scripts.pory"
	.string "Let's continue... who wants to share\n"
	.string "their thoughts about this one?$"

OldaleTown_DLC_TherapyCutscene_Text_12:
# 75 "data/maps/DLC/scripts.pory"
	.string "O-oh, that one... t-that one burned my\n"
	.string "house...! Aaah, it's scary...$"

OldaleTown_DLC_TherapyCutscene_Text_13:
# 80 "data/maps/DLC/scripts.pory"
	.string "Huh? Nonsense, that's a splendid Fire\n"
	.string "type.$"

OldaleTown_DLC_TherapyCutscene_Text_14:
# 85 "data/maps/DLC/scripts.pory"
	.string "W-what?$"

OldaleTown_DLC_TherapyCutscene_Text_15:
# 89 "data/maps/DLC/scripts.pory"
	.string "Now now, let us be tolerant with...\n"
	.string "differences of opinion.$"

OldaleTown_DLC_TherapyCutscene_Text_16:
# 92 "data/maps/DLC/scripts.pory"
	.string "Let's see about the last one - the\n"
	.string "water CANNON Pokémon, Blastoise.$"

OldaleTown_DLC_TherapyCutscene_Text_17:
# 98 "data/maps/DLC/scripts.pory"
	.string "U-uwaah, nooo... t-those are the bad\n"
	.string "turtles...!$"

OldaleTown_DLC_TherapyCutscene_Text_18:
# 102 "data/maps/DLC/scripts.pory"
	.string "Precisely. These Pokémon were\n"
	.string "responsible for the Assault on Route\l"
	.string "103, and they almost flooded Oldale.\p"
	.string "Once more, it was thanks to Devon\n"
	.string "Corp's swift action, that a flood gate\l"
	.string "was built and...$"

OldaleTown_DLC_TherapyCutscene_Text_19:
# 109 "data/maps/DLC/scripts.pory"
	.string "Hey, I know that one! That's a cool as\n"
	.string "heck Blastoise!\p"
	.string "I love how their Hydropumps sound...$"

OldaleTown_DLC_TherapyCutscene_Text_20:
# 113 "data/maps/DLC/scripts.pory"
	.string "BANG BANG!$"

OldaleTown_DLC_TherapyCutscene_Text_21:
# 116 "data/maps/DLC/scripts.pory"
	.string "N-nooo...!!$"

OldaleTown_DLC_TherapyCutscene_Text_22:
# 118 "data/maps/DLC/scripts.pory"
	.string "No? Hmm, you're right... it's not a 'bang'\n"
	.string "it's more like a...$"

OldaleTown_DLC_TherapyCutscene_Text_23:
# 121 "data/maps/DLC/scripts.pory"
	.string "BWAHM BWAHM!$"

OldaleTown_DLC_TherapyCutscene_Text_24:
# 124 "data/maps/DLC/scripts.pory"
	.string "AAAAAHH...!!$"

OldaleTown_DLC_TherapyCutscene_Text_25:
# 136 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I think we will finish this\n"
	.string "session early.\p"
	.string "Next time, everyone please be mindful\n"
	.string "of others' feelings.$"

OldaleTown_DLC_TherapyCutscene_Text_26:
# 144 "data/maps/DLC/scripts.pory"
	.string "Let's go, Sharpy... this was a waste of\n"
	.string "time.$"
