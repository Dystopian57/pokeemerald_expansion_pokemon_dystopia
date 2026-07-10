# 1 "data/maps/WaterfallCave/scripts.pory"

# 2 "data/maps/WaterfallCave/scripts.pory"
WaterfallCave_MapScripts::
# 3 "data/maps/WaterfallCave/scripts.pory"
	.byte 0

WaterfallMonk::
# 7 "data/maps/WaterfallCave/scripts.pory"
	lock
# 8 "data/maps/WaterfallCave/scripts.pory"
	goto_if_unset waterfallmonkgivestm, WaterfallMonk_2
# 18 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMonk_Text_3
WaterfallMonk_1:
# 20 "data/maps/WaterfallCave/scripts.pory"
	release
	end

WaterfallMonk_2:
# 10 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMonk_Text_0
# 11 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMonk_Text_1
# 12 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMonk_Text_2
# 13 "data/maps/WaterfallCave/scripts.pory"
	giveitem ITEM_TM31
# 14 "data/maps/WaterfallCave/scripts.pory"
	setflag waterfallmonkgivestm
# 15 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMonk_Text_3
	goto WaterfallMonk_1


WaterfallActivist::
# 25 "data/maps/WaterfallCave/scripts.pory"
	lock
# 26 "data/maps/WaterfallCave/scripts.pory"
	applymovement 5, WaterfallActivist_Movement_0
# 27 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 5
# 28 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallActivist_Text_0
# 32 "data/maps/WaterfallCave/scripts.pory"
	applymovement 5, WaterfallActivist_Movement_1
# 33 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 5
# 34 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallActivist_Text_1
# 35 "data/maps/WaterfallCave/scripts.pory"
	release
	end


WaterfallHazardDiverBattle::
# 41 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_single TRAINER_ANDRES_1, WaterfallHazardDiver_Intro, WaterfallHazardDiver_Outro, WaterfallHazardDiverRegister
# 42 "data/maps/WaterfallCave/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 43 "data/maps/WaterfallCave/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, WaterfallHazardDiverRematch
# 44 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, WaterfallActivist_Movement_1
# 45 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverBattle_Text_0
# 46 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, WaterfallActivist_Movement_0
# 47 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverBattle_Text_1
# 49 "data/maps/WaterfallCave/scripts.pory"
	release
	end


WaterfallHazardDiverRegister::
# 54 "data/maps/WaterfallCave/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 55 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 0
# 56 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverRegister_Text_0
# 58 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, WaterfallHazardDiverRegister_Movement_0
# 59 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 1
# 60 "data/maps/WaterfallCave/scripts.pory"
	playse SE_BALL_OPEN
# 61 "data/maps/WaterfallCave/scripts.pory"
	showobjectat 4, MAP_WATERFALL_CAVE
# 62 "data/maps/WaterfallCave/scripts.pory"
	waitse
# 63 "data/maps/WaterfallCave/scripts.pory"
	playmoncry SPECIES_SHELLDER, CRY_MODE_WEAK
# 64 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverRegister_Text_1
# 65 "data/maps/WaterfallCave/scripts.pory"
	applymovement 4, WaterfallHazardDiverRegister_Movement_1
# 66 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverRegister_Text_2
# 68 "data/maps/WaterfallCave/scripts.pory"
	playse SE_PUDDLE
# 69 "data/maps/WaterfallCave/scripts.pory"
	waitse
# 70 "data/maps/WaterfallCave/scripts.pory"
	playse SE_PUDDLE
# 71 "data/maps/WaterfallCave/scripts.pory"
	waitse
# 72 "data/maps/WaterfallCave/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 73 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverRegister_Text_3
# 74 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, WaterfallActivist_Movement_0
# 75 "data/maps/WaterfallCave/scripts.pory"
	register_matchcall TRAINER_ANDRES_1
# 76 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, WaterfallHazardDiverRegister_Movement_0
# 77 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 1
# 78 "data/maps/WaterfallCave/scripts.pory"
	playse SE_BALL_OPEN
# 79 "data/maps/WaterfallCave/scripts.pory"
	release
	end


WaterfallHazardDiverShellder::
# 84 "data/maps/WaterfallCave/scripts.pory"
	lock
# 85 "data/maps/WaterfallCave/scripts.pory"
	applymovement 4, WaterfallActivist_Movement_0
# 86 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverRegister_Text_1
# 87 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverShellder_Text_0
# 89 "data/maps/WaterfallCave/scripts.pory"
	release
	return


WaterfallHazardDiverRematch::
# 94 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_rematch TRAINER_ANDRES_1, Veteran103_Intro2, Veteran103_Outro2
# 95 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallHazardDiverRematch_Text_0
	end


WaterfallMercenaryFBattle::
# 120 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, WaterfallMercenaryF_Intro, WaterfallMercenaryF_Outro, WaterfallMercenaryFRegister
# 121 "data/maps/WaterfallCave/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 122 "data/maps/WaterfallCave/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, WaterfallMercenaryFRematch
# 123 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFBattle_Text_0
# 126 "data/maps/WaterfallCave/scripts.pory"
	release
	end


WaterfallMercenaryFRegister::
# 131 "data/maps/WaterfallCave/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 132 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 0
# 133 "data/maps/WaterfallCave/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 134 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFRegister_Text_0
# 135 "data/maps/WaterfallCave/scripts.pory"
	applymovement 3, WaterfallHazardDiverRegister_Movement_1
# 136 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFRegister_Text_1
# 137 "data/maps/WaterfallCave/scripts.pory"
	applymovement 3, WaterfallActivist_Movement_0
# 138 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFRegister_Text_2
# 139 "data/maps/WaterfallCave/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 140 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFRegister_Text_3
# 141 "data/maps/WaterfallCave/scripts.pory"
	release
	end


WaterfallMercenaryFRematch::
# 146 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Veteran103_Intro2, Veteran103_Outro2
# 147 "data/maps/WaterfallCave/scripts.pory"
	lock
# 148 "data/maps/WaterfallCave/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, WaterfallMercenaryFRematch_2
# 155 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFBattle_Text_0
WaterfallMercenaryFRematch_1:
# 157 "data/maps/WaterfallCave/scripts.pory"
	release
	end

WaterfallMercenaryFRematch_2:
# 149 "data/maps/WaterfallCave/scripts.pory"
	applymovement 3, WaterfallActivist_Movement_0
# 150 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryFRematch_Text_0
	goto WaterfallMercenaryFRematch_1


WaterfallMercenaryApproachAfterWaterfall::
# 176 "data/maps/WaterfallCave/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, WaterfallMercenaryApproachAfterWaterfall_1
	return

WaterfallMercenaryApproachAfterWaterfall_1:
# 178 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryApproachAfterWaterfall_Text_0
# 180 "data/maps/WaterfallCave/scripts.pory"
	applymovement 3, WaterfallActivist_Movement_1
# 181 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallMercenaryApproachAfterWaterfall_Text_1
# 182 "data/maps/WaterfallCave/scripts.pory"
	release
	end


# 26 "data/maps/WaterfallCave/scripts.pory"
WaterfallActivist_Movement_0:
# 26 "data/maps/WaterfallCave/scripts.pory"
	face_player
	step_end

# 32 "data/maps/WaterfallCave/scripts.pory"
WaterfallActivist_Movement_1:
# 32 "data/maps/WaterfallCave/scripts.pory"
	face_up
	step_end

# 58 "data/maps/WaterfallCave/scripts.pory"
WaterfallHazardDiverRegister_Movement_0:
# 58 "data/maps/WaterfallCave/scripts.pory"
	face_right
	step_end

# 65 "data/maps/WaterfallCave/scripts.pory"
WaterfallHazardDiverRegister_Movement_1:
# 65 "data/maps/WaterfallCave/scripts.pory"
	face_left
	step_end

WaterfallMonk_Text_0:
# 10 "data/maps/WaterfallCave/scripts.pory"
	.string "They told me meditating under a\n"
	.string "waterfall would make me stronger...$"

WaterfallMonk_Text_1:
# 11 "data/maps/WaterfallCave/scripts.pory"
	.string "But this ROAR OF WATER is making me\n"
	.string "pumped up instead! HYAH HYAH!$"

WaterfallMonk_Text_2:
# 12 "data/maps/WaterfallCave/scripts.pory"
	.string "Here, TAKE THIS!$"

WaterfallMonk_Text_3:
# 15 "data/maps/WaterfallCave/scripts.pory"
	.string "Everyone improves on their own way.\n"
	.string "Find the way that works for you!\p"
	.string "HYAH-HYAH!$"

WaterfallActivist_Text_0:
# 28 "data/maps/WaterfallCave/scripts.pory"
	.string "Did you know? The river outside is being\n"
	.string "contaminated by construction waste.\p"
	.string "Specifically, that of the construction\n"
	.string "of Road 003 - which is being built over\l"
	.string "Route 117.\p"
	.string "The canals here have been spared so\n"
	.string "far, but it's only a matter of time.\p"
	.string "I'm with Neo Rustboro Activist Group,\n"
	.string "recording evidence.$"

WaterfallActivist_Text_1:
# 34 "data/maps/WaterfallCave/scripts.pory"
	.string "It's an uphill battle, but we must stop\n"
	.string "Devon from trampling over the\l"
	.string "environment!$"

WaterfallHazardDiverBattle_Text_0:
# 45 "data/maps/WaterfallCave/scripts.pory"
	.string "I want to swim past that waterfall. Now\n"
	.string "that's hardcore swimming, hey?$"

WaterfallHazardDiverBattle_Text_1:
# 47 "data/maps/WaterfallCave/scripts.pory"
	.string "It's tough as nails, and progress is\n"
	.string "very slow...\p"
	.string "But that will only make it feel better\n"
	.string "when I get there!$"

WaterfallHazardDiverRegister_Text_0:
# 56 "data/maps/WaterfallCave/scripts.pory"
	.string "That was a great workout. We should do\n"
	.string "this again sometime!\p"
	.string "Let me fetch my Devon Nav so I can add\n"
	.string "you on the Devon Net...$"

WaterfallHazardDiverRegister_Text_1:
# 64 "data/maps/WaterfallCave/scripts.pory"
	.string "S-sheee...$"

WaterfallHazardDiverRegister_Text_2:
# 66 "data/maps/WaterfallCave/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}The diver begins to search for\n"
	.string "something inside the Pokémon's shell...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

WaterfallHazardDiverRegister_Text_3:
# 73 "data/maps/WaterfallCave/scripts.pory"
	.string "Ahaa, found it - here's my Devon Nav!$"

WaterfallHazardDiverShellder_Text_0:
# 87 "data/maps/WaterfallCave/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}You can see some personal belongings\n"
	.string "inside the Shellder's shell...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

WaterfallHazardDiverRematch_Text_0:
# 95 "data/maps/WaterfallCave/scripts.pory"
	.string "Since we began battling, I've been able\n"
	.string "to climb much more of the waterfall!\p"
	.string "After all this effort, it'll feel amazing\n"
	.string "when I finally get there.$"

WaterfallMercenaryFBattle_Text_0:
# 123 "data/maps/WaterfallCave/scripts.pory"
	.string "Next time, I'll get you. And that geezer.\p"
	.string "And then I'll get out of this shithole.$"

WaterfallMercenaryFRegister_Text_0:
# 134 "data/maps/WaterfallCave/scripts.pory"
	.string "You want to get past the waterfall to\n"
	.string "get out of the Rebel Zone, right?$"

WaterfallMercenaryFRegister_Text_1:
# 136 "data/maps/WaterfallCave/scripts.pory"
	.string "Well, there's a geezer in that cave who\n"
	.string "can teach Pokémon to do that.$"

WaterfallMercenaryFRegister_Text_2:
# 138 "data/maps/WaterfallCave/scripts.pory"
	.string "But only after we beat him. We should\n"
	.string "train together to do it. Here.$"

WaterfallMercenaryFRegister_Text_3:
# 140 "data/maps/WaterfallCave/scripts.pory"
	.string "Come back later. We'll fight some more.$"

WaterfallMercenaryFRematch_Text_0:
# 150 "data/maps/WaterfallCave/scripts.pory"
	.string "Not going to lie, it pisses me off you\n"
	.string "beat me to getting Waterfall.\p"
	.string "... but I'm also kind of happy for you.\n"
	.string "Now you can take your sorry ass to a\l"
	.string "better place.$"

WaterfallMercenaryApproachAfterWaterfall_Text_0:
# 178 "data/maps/WaterfallCave/scripts.pory"
	.string "I heard you beating the geezer. I\n"
	.string "wasn't eavesdropping, there's just\l"
	.string "ECHO, okay!?\p"
	.string "Now all you need is a Pokémon that\n"
	.string "knows Surf, and you can get to Route\l"
	.string "113.$"

WaterfallMercenaryApproachAfterWaterfall_Text_1:
# 181 "data/maps/WaterfallCave/scripts.pory"
	.string "Don't you worry about me. I'll get myself\n"
	.string "out soon enough.$"

WaterfallHazardDiver_Intro::
# 101 "data/maps/WaterfallCave/scripts.pory"
	.string "Arf, arf... what's better training than\n swimming? Swimming AND battling!$"

WaterfallHazardDiver_Outro::
# 104 "data/maps/WaterfallCave/scripts.pory"
	.string "Glub-glub-glub...!$"

WaterfallHazardDiver_Intro2::
# 107 "data/maps/WaterfallCave/scripts.pory"
	.string "You're back! You have to help me\n train some more! COME ON!$"

WaterfallHazardDiver_Outro2::
# 110 "data/maps/WaterfallCave/scripts.pory"
	.string "Gah...! Hey, at least I am less tired\nthan last time!$"

WaterfallMercenaryF_Intro::
# 162 "data/maps/WaterfallCave/scripts.pory"
	.string "You and me. Battle. NOW!$"

WaterfallMercenaryF_Outro::
# 165 "data/maps/WaterfallCave/scripts.pory"
	.string "I really hate you right now.$"

WaterfallMercenaryF_Intro2::
# 168 "data/maps/WaterfallCave/scripts.pory"
	.string "Took you long enough. Help me get stronger!$"

WaterfallMercenaryF_Outro2::
# 171 "data/maps/WaterfallCave/scripts.pory"
	.string "DAMN IT!$"
