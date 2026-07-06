# 1 "data/maps/WaterfallCave/scripts.pory"

# 2 "data/maps/WaterfallCave/scripts.pory"
WaterfallCave_MapScripts::
# 3 "data/maps/WaterfallCave/scripts.pory"
	.byte 0

WaterfallHazardDiverBattle::
# 10 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_single TRAINER_VETERAN_103, WaterfallHazardDiver_Intro, WaterfallHazardDiver_Outro, WaterfallHazardDiverRegister
# 11 "data/maps/WaterfallCave/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 12 "data/maps/WaterfallCave/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, WaterfallHazardDiverRematch
# 13 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, WaterfallHazardDiverBattle_Movement_0
# 14 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverBattle_Text_0
# 15 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, WaterfallHazardDiverBattle_Movement_1
# 16 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverBattle_Text_1
# 17 "data/maps/WaterfallCave/scripts.pory"
	release
	end


WaterfallHazardDiverRegister::
# 22 "data/maps/WaterfallCave/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 23 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 0
# 24 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverRegister_Text_0
# 26 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, WaterfallHazardDiverRegister_Movement_0
# 27 "data/maps/WaterfallCave/scripts.pory"
	playse SE_BALL_OPEN
# 28 "data/maps/WaterfallCave/scripts.pory"
	showobjectat 4, MAP_WATERFALL_CAVE
# 29 "data/maps/WaterfallCave/scripts.pory"
	waitse
# 30 "data/maps/WaterfallCave/scripts.pory"
	playmoncry SPECIES_SHELLDER, CRY_MODE_WEAK
# 31 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverRegister_Text_1
# 32 "data/maps/WaterfallCave/scripts.pory"
	applymovement 4, WaterfallHazardDiverRegister_Movement_1
# 33 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverRegister_Text_2
# 35 "data/maps/WaterfallCave/scripts.pory"
	playse SE_PUDDLE
# 36 "data/maps/WaterfallCave/scripts.pory"
	waitse
# 37 "data/maps/WaterfallCave/scripts.pory"
	playse SE_PUDDLE
# 38 "data/maps/WaterfallCave/scripts.pory"
	waitse
# 39 "data/maps/WaterfallCave/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 40 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverRegister_Text_3
# 41 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, WaterfallHazardDiverBattle_Movement_1
# 42 "data/maps/WaterfallCave/scripts.pory"
	register_matchcall TRAINER_VETERAN_103
# 43 "data/maps/WaterfallCave/scripts.pory"
	release
	end


WaterfallHazardDiverShellder::
# 48 "data/maps/WaterfallCave/scripts.pory"
	lock
# 49 "data/maps/WaterfallCave/scripts.pory"
	applymovement 4, WaterfallHazardDiverBattle_Movement_1
# 50 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverRegister_Text_1
# 51 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverShellder_Text_0
# 53 "data/maps/WaterfallCave/scripts.pory"
	release
	return


WaterfallHazardDiverRematch::
# 58 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_rematch TRAINER_VETERAN_103, Veteran103_Intro2, Veteran103_Outro2
# 59 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverRematch_Text_0
	end


WaterfallMercenaryFBattle::
# 84 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_single TRAINER_VETERAN_103, WaterfallMercenaryF_Intro, WaterfallMercenaryF_Outro, WaterfallMercenaryFRegister
# 85 "data/maps/WaterfallCave/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 86 "data/maps/WaterfallCave/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, WaterfallMercenaryFRematch
# 87 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFBattle_Text_0
# 89 "data/maps/WaterfallCave/scripts.pory"
	release
	end


WaterfallMercenaryFRegister::
# 94 "data/maps/WaterfallCave/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 95 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 0
# 96 "data/maps/WaterfallCave/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 97 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFRegister_Text_0
# 98 "data/maps/WaterfallCave/scripts.pory"
	applymovement 3, WaterfallHazardDiverRegister_Movement_1
# 99 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFRegister_Text_1
# 100 "data/maps/WaterfallCave/scripts.pory"
	applymovement 3, WaterfallHazardDiverBattle_Movement_1
# 101 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFRegister_Text_2
# 102 "data/maps/WaterfallCave/scripts.pory"
	register_matchcall TRAINER_VETERAN_103
# 103 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFRegister_Text_3
# 104 "data/maps/WaterfallCave/scripts.pory"
	release
	end


WaterfallMercenaryFRematch::
# 109 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_rematch TRAINER_VETERAN_103, Veteran103_Intro2, Veteran103_Outro2
# 110 "data/maps/WaterfallCave/scripts.pory"
	lock
# 111 "data/maps/WaterfallCave/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, WaterfallMercenaryFRematch_2
# 118 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFRematch_Text_1
WaterfallMercenaryFRematch_1:
# 120 "data/maps/WaterfallCave/scripts.pory"
	release
	end

WaterfallMercenaryFRematch_2:
# 112 "data/maps/WaterfallCave/scripts.pory"
	applymovement 3, WaterfallHazardDiverBattle_Movement_1
# 113 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFRematch_Text_0
	goto WaterfallMercenaryFRematch_1


WaterfallMercenaryApproachAfterWaterfall::
# 139 "data/maps/WaterfallCave/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, WaterfallMercenaryApproachAfterWaterfall_1
	return

WaterfallMercenaryApproachAfterWaterfall_1:
# 141 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryApproachAfterWaterfall_Text_0
# 143 "data/maps/WaterfallCave/scripts.pory"
	applymovement 3, WaterfallHazardDiverBattle_Movement_0
# 144 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryApproachAfterWaterfall_Text_1
# 145 "data/maps/WaterfallCave/scripts.pory"
	release
	end


# 13 "data/maps/WaterfallCave/scripts.pory"
WaterfallHazardDiverBattle_Movement_0:
# 13 "data/maps/WaterfallCave/scripts.pory"
	face_up
	step_end

# 15 "data/maps/WaterfallCave/scripts.pory"
WaterfallHazardDiverBattle_Movement_1:
# 15 "data/maps/WaterfallCave/scripts.pory"
	face_player
	step_end

# 26 "data/maps/WaterfallCave/scripts.pory"
WaterfallHazardDiverRegister_Movement_0:
# 26 "data/maps/WaterfallCave/scripts.pory"
	face_right
	step_end

# 32 "data/maps/WaterfallCave/scripts.pory"
WaterfallHazardDiverRegister_Movement_1:
# 32 "data/maps/WaterfallCave/scripts.pory"
	face_left
	step_end

WaterfallHazardDiverBattle_Text_0:
# 14 "data/maps/WaterfallCave/scripts.pory"
	.string "I want to swim past that waterfall. Now\n"
	.string "that's some hardcore swimming, hey?$"

WaterfallHazardDiverBattle_Text_1:
# 16 "data/maps/WaterfallCave/scripts.pory"
	.string "Right now, I can barely get past the\n"
	.string "first part of it though... but I don't\l"
	.string "give up easily.$"

WaterfallHazardDiverRegister_Text_0:
# 24 "data/maps/WaterfallCave/scripts.pory"
	.string "That was a great workout. We should do\n"
	.string "this again sometime!\p"
	.string "Let me fetch my phone so I can add you\n"
	.string "on the Devon Net...$"

WaterfallHazardDiverRegister_Text_1:
# 31 "data/maps/WaterfallCave/scripts.pory"
	.string "S-sheee...$"

WaterfallHazardDiverRegister_Text_2:
# 33 "data/maps/WaterfallCave/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}The diver begins to search for\n"
	.string "something inside the Pokémon's shell...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

WaterfallHazardDiverRegister_Text_3:
# 40 "data/maps/WaterfallCave/scripts.pory"
	.string "Ahaa, found it - here's my Devon Nav!$"

WaterfallHazardDiverShellder_Text_0:
# 51 "data/maps/WaterfallCave/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}You can see some personal belongings\n"
	.string "inside the Shellder's shell...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

WaterfallHazardDiverRematch_Text_0:
# 59 "data/maps/WaterfallCave/scripts.pory"
	.string "Since we began battling, I've been able\n"
	.string "to climb much more of the waterfall!\p"
	.string "After all this effort, it'll feel amazing\n"
	.string "when I finally get there.$"

WaterfallMercenaryFBattle_Text_0:
# 87 "data/maps/WaterfallCave/scripts.pory"
	.string "I'm not in the mood to talk. Just move\n"
	.string "along so I can go back to my training.$"

WaterfallMercenaryFRegister_Text_0:
# 97 "data/maps/WaterfallCave/scripts.pory"
	.string "You want to get past the waterfall to\n"
	.string "get out of the Rebel Zone, right?$"

WaterfallMercenaryFRegister_Text_1:
# 99 "data/maps/WaterfallCave/scripts.pory"
	.string "Well, there's a geezer in that cave who\n"
	.string "can teach Pokémon to do that.$"

WaterfallMercenaryFRegister_Text_2:
# 101 "data/maps/WaterfallCave/scripts.pory"
	.string "But only after we beat him. We should\n"
	.string "train together to do it. Here.$"

WaterfallMercenaryFRegister_Text_3:
# 103 "data/maps/WaterfallCave/scripts.pory"
	.string "Come back later. We'll fight some more.$"

WaterfallMercenaryFRematch_Text_0:
# 113 "data/maps/WaterfallCave/scripts.pory"
	.string "Not going to lie, it pisses me off you\n"
	.string "beat me to getting Waterfall.\p"
	.string "... but I'm also kind of happy for you.\n"
	.string "Now you can take your sorry ass to a\l"
	.string "better place.$"

WaterfallMercenaryFRematch_Text_1:
# 118 "data/maps/WaterfallCave/scripts.pory"
	.string "Next time, I'll get you. And that geezer.\p"
	.string "And then I'll get out of this shithole.$"

WaterfallMercenaryApproachAfterWaterfall_Text_0:
# 141 "data/maps/WaterfallCave/scripts.pory"
	.string "I heard you beating the geezer. I\n"
	.string "wasn't eavesdropping, there's just\l"
	.string "ECHO, okay!?\p"
	.string "Now all you need is a Pokémon that\n"
	.string "knows Surf, and you can get to Route\l"
	.string "113.$"

WaterfallMercenaryApproachAfterWaterfall_Text_1:
# 144 "data/maps/WaterfallCave/scripts.pory"
	.string "Don't you worry about me. I'll get myself\n"
	.string "out soon enough.$"

WaterfallHazardDiver_Intro::
# 65 "data/maps/WaterfallCave/scripts.pory"
	.string "Arf, arf... what's better training than\n swimming? Swimming AND battling!$"

WaterfallHazardDiver_Outro::
# 68 "data/maps/WaterfallCave/scripts.pory"
	.string "Glub-glub-glub...!$"

WaterfallHazardDiver_Intro2::
# 71 "data/maps/WaterfallCave/scripts.pory"
	.string "You're back! You have to help me\n train some more! COME ON!$"

WaterfallHazardDiver_Outro2::
# 74 "data/maps/WaterfallCave/scripts.pory"
	.string "Gah...! Hey, at least I am less tired\nthan last time!$"

WaterfallMercenaryF_Intro::
# 125 "data/maps/WaterfallCave/scripts.pory"
	.string "You and me. Battle. NOW!$"

WaterfallMercenaryF_Outro::
# 128 "data/maps/WaterfallCave/scripts.pory"
	.string "I really hate you right now.$"

WaterfallMercenaryF_Intro2::
# 131 "data/maps/WaterfallCave/scripts.pory"
	.string "Took you long enough. Help me get stronger!$"

WaterfallMercenaryF_Outro2::
# 134 "data/maps/WaterfallCave/scripts.pory"
	.string "DAMN IT!$"
