# 1 "data/maps/Route104/scripts.pory"

# 2 "data/maps/Route104/scripts.pory"

# 3 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 4 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 5 "data/maps/Route104/scripts.pory"
	.2byte 0
# 6 "data/maps/Route104/scripts.pory"

# 7 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 8 "data/maps/Route104/scripts.pory"
	lockall
# 9 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 10 "data/maps/Route104/scripts.pory"
	end
# 11 "data/maps/Route104/scripts.pory"

# 12 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 13 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 15 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 16 "data/maps/Route104/scripts.pory"
	end
# 17 "data/maps/Route104/scripts.pory"

# 18 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 19 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 20 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 21 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 22 "data/maps/Route104/scripts.pory"
	return
# 23 "data/maps/Route104/scripts.pory"

# 24 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 25 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 26 "data/maps/Route104/scripts.pory"
	return
# 27 "data/maps/Route104/scripts.pory"

# 28 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 29 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 30 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 31 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 32 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_ROUTE104_RIVAL, 17, 52
# 33 "data/maps/Route104/scripts.pory"
	return
# 34 "data/maps/Route104/scripts.pory"

# 35 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 36 "data/maps/Route104/scripts.pory"
	return
# 37 "data/maps/Route104/scripts.pory"

# 38 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 39 "data/maps/Route104/scripts.pory"
	lockall
# 40 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 41 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_FacePlayer
# 42 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 44 "data/maps/Route104/scripts.pory"

# 45 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 46 "data/maps/Route104/scripts.pory"
	lockall
# 47 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 48 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 49 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 50 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 51 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route104/scripts.pory"
	delay 10
# 53 "data/maps/Route104/scripts.pory"
	addobject LOCALID_ROUTE104_RIVAL
# 54 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 55 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerBackUp
# 56 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 58 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route104/scripts.pory"
	delay 20
# 60 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 61 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 62 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 63 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_ExclamationMark
# 64 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_Delay48
# 66 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 68 "data/maps/Route104/scripts.pory"

# 69 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 70 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 71 "data/maps/Route104/scripts.pory"
	checkplayergender
# 72 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 73 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 74 "data/maps/Route104/scripts.pory"
	return
# 75 "data/maps/Route104/scripts.pory"

# 76 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 77 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 78 "data/maps/Route104/scripts.pory"
	return
# 79 "data/maps/Route104/scripts.pory"

# 80 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 81 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 82 "data/maps/Route104/scripts.pory"
	return
# 83 "data/maps/Route104/scripts.pory"

# 84 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 85 "data/maps/Route104/scripts.pory"
	checkplayergender
# 86 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 87 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 88 "data/maps/Route104/scripts.pory"
	end
# 89 "data/maps/Route104/scripts.pory"

# 90 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 91 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 92 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 93 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 94 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 95 "data/maps/Route104/scripts.pory"
	closemessage
# 96 "data/maps/Route104/scripts.pory"
	delay 30
# 97 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 98 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 99 "data/maps/Route104/scripts.pory"
	waitfanfare
# 100 "data/maps/Route104/scripts.pory"
	closemessage
# 101 "data/maps/Route104/scripts.pory"
	delay 30
# 102 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 103 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerFaceRival
# 104 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 105 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 106 "data/maps/Route104/scripts.pory"
	closemessage
# 107 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalApproachPlayer
# 109 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 111 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 112 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 113 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 114 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 115 "data/maps/Route104/scripts.pory"
	releaseall
# 116 "data/maps/Route104/scripts.pory"
	end
# 117 "data/maps/Route104/scripts.pory"

# 118 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 119 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 120 "data/maps/Route104/scripts.pory"
	step_end
# 121 "data/maps/Route104/scripts.pory"

# 122 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 123 "data/maps/Route104/scripts.pory"
	walk_down
# 124 "data/maps/Route104/scripts.pory"
	face_right
# 125 "data/maps/Route104/scripts.pory"
	step_end
# 126 "data/maps/Route104/scripts.pory"

# 127 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 128 "data/maps/Route104/scripts.pory"
	delay_4
# 129 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 130 "data/maps/Route104/scripts.pory"
	step_end
# 131 "data/maps/Route104/scripts.pory"

# 132 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 133 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 134 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 135 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 136 "data/maps/Route104/scripts.pory"
	releaseall
# 137 "data/maps/Route104/scripts.pory"
	end
# 138 "data/maps/Route104/scripts.pory"

# 139 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 140 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 141 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 142 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 143 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 144 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 145 "data/maps/Route104/scripts.pory"
	end
# 146 "data/maps/Route104/scripts.pory"

# 147 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 148 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 149 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 150 "data/maps/Route104/scripts.pory"
	releaseall
# 151 "data/maps/Route104/scripts.pory"
	end
# 152 "data/maps/Route104/scripts.pory"

# 153 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 154 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 155 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 156 "data/maps/Route104/scripts.pory"
	return
# 157 "data/maps/Route104/scripts.pory"

# 158 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 159 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 160 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 161 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 162 "data/maps/Route104/scripts.pory"
	end
# 163 "data/maps/Route104/scripts.pory"

# 164 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 165 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 166 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 167 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 168 "data/maps/Route104/scripts.pory"
	end
# 169 "data/maps/Route104/scripts.pory"

# 170 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 171 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 172 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 173 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 174 "data/maps/Route104/scripts.pory"
	end
# 175 "data/maps/Route104/scripts.pory"

# 176 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 177 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 178 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 179 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 180 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 181 "data/maps/Route104/scripts.pory"
	closemessage
# 182 "data/maps/Route104/scripts.pory"
	delay 30
# 183 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 184 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 185 "data/maps/Route104/scripts.pory"
	waitfanfare
# 186 "data/maps/Route104/scripts.pory"
	closemessage
# 187 "data/maps/Route104/scripts.pory"
	delay 30
# 188 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 189 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerFaceRival
# 190 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 191 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 192 "data/maps/Route104/scripts.pory"
	closemessage
# 193 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalApproachPlayer
# 195 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 197 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 198 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 199 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 200 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 201 "data/maps/Route104/scripts.pory"
	releaseall
# 202 "data/maps/Route104/scripts.pory"
	end
# 203 "data/maps/Route104/scripts.pory"

# 204 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 205 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 206 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 207 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 208 "data/maps/Route104/scripts.pory"
	releaseall
# 209 "data/maps/Route104/scripts.pory"
	end
# 210 "data/maps/Route104/scripts.pory"

# 211 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 212 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 213 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 214 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 215 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 216 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 217 "data/maps/Route104/scripts.pory"
	end
# 218 "data/maps/Route104/scripts.pory"

# 219 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 220 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 221 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 222 "data/maps/Route104/scripts.pory"
	releaseall
# 223 "data/maps/Route104/scripts.pory"
	end
# 224 "data/maps/Route104/scripts.pory"

# 225 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 226 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 227 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 228 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 229 "data/maps/Route104/scripts.pory"
	end
# 230 "data/maps/Route104/scripts.pory"

# 231 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 232 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 233 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 234 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 235 "data/maps/Route104/scripts.pory"
	end
# 236 "data/maps/Route104/scripts.pory"

# 237 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 238 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 239 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 240 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 241 "data/maps/Route104/scripts.pory"
	end
# 242 "data/maps/Route104/scripts.pory"

# 243 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 244 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 245 "data/maps/Route104/scripts.pory"
	walk_down
# 246 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 247 "data/maps/Route104/scripts.pory"
	step_end
# 248 "data/maps/Route104/scripts.pory"

# 249 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 250 "data/maps/Route104/scripts.pory"
	walk_down
# 251 "data/maps/Route104/scripts.pory"
	step_end
# 252 "data/maps/Route104/scripts.pory"

# 253 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 254 "data/maps/Route104/scripts.pory"
	lock
# 255 "data/maps/Route104/scripts.pory"
	faceplayer
# 256 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 257 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 258 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 259 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 260 "data/maps/Route104/scripts.pory"
	release
# 261 "data/maps/Route104/scripts.pory"
	end
# 262 "data/maps/Route104/scripts.pory"

# 263 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 264 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 265 "data/maps/Route104/scripts.pory"
	release
# 266 "data/maps/Route104/scripts.pory"
	end
# 267 "data/maps/Route104/scripts.pory"

# 268 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 269 "data/maps/Route104/scripts.pory"
	lock
# 270 "data/maps/Route104/scripts.pory"
	faceplayer
# 271 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 272 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 273 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 274 "data/maps/Route104/scripts.pory"
	release
# 275 "data/maps/Route104/scripts.pory"
	end
# 276 "data/maps/Route104/scripts.pory"

# 277 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 278 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 279 "data/maps/Route104/scripts.pory"
	release
# 280 "data/maps/Route104/scripts.pory"
	end
# 281 "data/maps/Route104/scripts.pory"

# 282 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 283 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 284 "data/maps/Route104/scripts.pory"
	end
# 285 "data/maps/Route104/scripts.pory"

# 286 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 287 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 288 "data/maps/Route104/scripts.pory"
	end
# 289 "data/maps/Route104/scripts.pory"

# 290 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 291 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 292 "data/maps/Route104/scripts.pory"
	end
# 293 "data/maps/Route104/scripts.pory"

# 294 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 295 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 296 "data/maps/Route104/scripts.pory"
	end
# 297 "data/maps/Route104/scripts.pory"

# 298 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 299 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 300 "data/maps/Route104/scripts.pory"
	end
# 301 "data/maps/Route104/scripts.pory"

# 302 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 303 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 304 "data/maps/Route104/scripts.pory"
	end
# 305 "data/maps/Route104/scripts.pory"

# 306 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 307 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 308 "data/maps/Route104/scripts.pory"
	end
# 309 "data/maps/Route104/scripts.pory"

# 310 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 311 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 312 "data/maps/Route104/scripts.pory"
	end
# 313 "data/maps/Route104/scripts.pory"

# 314 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 315 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 316 "data/maps/Route104/scripts.pory"
	end
# 317 "data/maps/Route104/scripts.pory"

# 318 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 319 "data/maps/Route104/scripts.pory"
	lock
# 320 "data/maps/Route104/scripts.pory"
	faceplayer
# 321 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 322 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 323 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 324 "data/maps/Route104/scripts.pory"
	release
# 325 "data/maps/Route104/scripts.pory"
	end
# 326 "data/maps/Route104/scripts.pory"

# 327 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 328 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 329 "data/maps/Route104/scripts.pory"
	release
# 330 "data/maps/Route104/scripts.pory"
	end
# 331 "data/maps/Route104/scripts.pory"

# 332 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 333 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 334 "data/maps/Route104/scripts.pory"
	end
# 335 "data/maps/Route104/scripts.pory"

# 336 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 337 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE104_BRINEY, MAP_ROUTE104, 0
# 338 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104, 0
# 339 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BRINEY, Route104_Movement_BrineyBoardBoat
# 340 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 341 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_ROUTE104_BRINEY
# 342 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerBoardBoat
# 343 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 344 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE104
# 345 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 346 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 347 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 348 "data/maps/Route104/scripts.pory"
	end
# 349 "data/maps/Route104/scripts.pory"

# 350 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 351 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewford
# 352 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewford
# 353 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 354 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 355 "data/maps/Route104/scripts.pory"

# 356 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 357 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordBeforeDadCalls
# 358 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 359 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 360 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 361 "data/maps/Route104/scripts.pory"
	waitmessage
# 362 "data/maps/Route104/scripts.pory"
	delay 30
# 363 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 364 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 365 "data/maps/Route104/scripts.pory"
	waitfanfare
# 366 "data/maps/Route104/scripts.pory"
	closemessage
# 367 "data/maps/Route104/scripts.pory"
	delay 30
# 368 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 369 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 370 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 371 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 372 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 373 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 374 "data/maps/Route104/scripts.pory"

# 375 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 376 "data/maps/Route104/scripts.pory"
	delay 50
# 377 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerExitBoat
# 378 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 379 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 380 "data/maps/Route104/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 381 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 382 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 383 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 384 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 385 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 386 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 387 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route104_Movement_BrineyExitBoat
# 388 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 389 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 390 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 391 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 392 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 393 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 394 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 395 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104
# 396 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 397 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 398 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 399 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 400 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 401 "data/maps/Route104/scripts.pory"
	end
# 402 "data/maps/Route104/scripts.pory"

# 403 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 404 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 405 "data/maps/Route104/scripts.pory"
	releaseall
# 406 "data/maps/Route104/scripts.pory"
	end
# 407 "data/maps/Route104/scripts.pory"

# 408 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 409 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 410 "data/maps/Route104/scripts.pory"
	releaseall
# 411 "data/maps/Route104/scripts.pory"
	end
# 412 "data/maps/Route104/scripts.pory"

# 413 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 414 "data/maps/Route104/scripts.pory"
	walk_down
# 415 "data/maps/Route104/scripts.pory"
	walk_down
# 416 "data/maps/Route104/scripts.pory"
	walk_down
# 417 "data/maps/Route104/scripts.pory"
	walk_down
# 418 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 419 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 420 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 421 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 422 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 424 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 425 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 426 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 428 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 429 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 431 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 432 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 433 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 435 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 436 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 437 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 438 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 439 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 440 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 442 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 443 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 445 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 446 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 447 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 448 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 449 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 450 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 451 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 452 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 453 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 454 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 455 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 456 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 457 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 458 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 459 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 460 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 461 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 462 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 463 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 464 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 465 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 466 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 467 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 468 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 469 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 470 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 471 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 472 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 473 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 474 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 475 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 476 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 477 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 478 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 479 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 480 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 481 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 482 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 483 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 484 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 485 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 486 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 487 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 488 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 489 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 490 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 491 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 492 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 493 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 494 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 495 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 496 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 497 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 498 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 499 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 500 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 501 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 502 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 503 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 504 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 505 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 506 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 507 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 508 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 509 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 510 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 511 "data/maps/Route104/scripts.pory"
	step_end
# 512 "data/maps/Route104/scripts.pory"

# 513 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 514 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 515 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 516 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 517 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 518 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 519 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 520 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 521 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 522 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 523 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 524 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 525 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 526 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 527 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 528 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 529 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 530 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 531 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 532 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 533 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 534 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 538 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 539 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 540 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 541 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 542 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 543 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 544 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 545 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 546 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 547 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 548 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 549 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 550 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 551 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 552 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 553 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 554 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 555 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 556 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 557 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 558 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 559 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 566 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 567 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 568 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 569 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 570 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 571 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 572 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 573 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 574 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 575 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 576 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 577 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 578 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 579 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 580 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 582 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 583 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 584 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 585 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 586 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 587 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 588 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 589 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 590 "data/maps/Route104/scripts.pory"
	walk_right
# 591 "data/maps/Route104/scripts.pory"
	walk_right
# 592 "data/maps/Route104/scripts.pory"
	walk_down
# 593 "data/maps/Route104/scripts.pory"
	walk_down
# 594 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 595 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 596 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 597 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 598 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 599 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 600 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 601 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 602 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 603 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 604 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 605 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 606 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 607 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 608 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 609 "data/maps/Route104/scripts.pory"
	walk_down
# 610 "data/maps/Route104/scripts.pory"
	walk_down
# 611 "data/maps/Route104/scripts.pory"
	step_end
# 612 "data/maps/Route104/scripts.pory"

# 613 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 614 "data/maps/Route104/scripts.pory"
	walk_down
# 615 "data/maps/Route104/scripts.pory"
	walk_down
# 616 "data/maps/Route104/scripts.pory"
	walk_down
# 617 "data/maps/Route104/scripts.pory"
	walk_down
# 618 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 619 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 620 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 621 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 622 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 623 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 624 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 625 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 626 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 627 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 628 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 629 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 630 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 631 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 632 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 633 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 634 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 635 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 636 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 637 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 638 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 639 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 640 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 641 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 642 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 643 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 644 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 645 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 646 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 647 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 648 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 649 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 650 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 651 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 652 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 653 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 654 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 655 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 656 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 657 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 658 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 659 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 660 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 661 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 662 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 663 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 664 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 665 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 666 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 667 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 668 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 669 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 670 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 671 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 672 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 673 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 674 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 675 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 676 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 677 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 678 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 679 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 680 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 681 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 682 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 683 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 684 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 685 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 686 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 687 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 688 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 689 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 690 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 691 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 692 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 693 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 694 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 695 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 696 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 697 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 698 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 699 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 700 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 701 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 702 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 703 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 704 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 705 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 706 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 707 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 708 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 709 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 710 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 711 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 712 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 713 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 714 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 715 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 716 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 717 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 718 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 719 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 720 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 721 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 722 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 723 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 724 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 725 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 726 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 727 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 728 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 729 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 730 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 731 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 732 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 733 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 734 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 735 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 736 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 737 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 738 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 739 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 740 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 741 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 742 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 743 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 744 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 745 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 746 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 747 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 748 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 749 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 750 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 751 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 752 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 753 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 754 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 755 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 756 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 757 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 758 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 759 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 760 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 761 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 762 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 763 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 764 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 765 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 766 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 767 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 768 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 769 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 770 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 771 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 772 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 773 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 774 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 775 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 776 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 777 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 778 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 779 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 780 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 781 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 782 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 783 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 784 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 785 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 786 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 787 "data/maps/Route104/scripts.pory"
	walk_right
# 788 "data/maps/Route104/scripts.pory"
	walk_right
# 789 "data/maps/Route104/scripts.pory"
	walk_down
# 790 "data/maps/Route104/scripts.pory"
	walk_down
# 791 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 792 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 793 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 794 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 795 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 796 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 797 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 798 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 799 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 800 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 801 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 802 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 803 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 804 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 805 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 806 "data/maps/Route104/scripts.pory"
	walk_down
# 807 "data/maps/Route104/scripts.pory"
	walk_down
# 808 "data/maps/Route104/scripts.pory"
	step_end
# 809 "data/maps/Route104/scripts.pory"

# 810 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 811 "data/maps/Route104/scripts.pory"
	walk_left
# 812 "data/maps/Route104/scripts.pory"
	walk_down
# 813 "data/maps/Route104/scripts.pory"
	walk_down
# 814 "data/maps/Route104/scripts.pory"
	step_end
# 815 "data/maps/Route104/scripts.pory"

# 816 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 817 "data/maps/Route104/scripts.pory"
	walk_down
# 818 "data/maps/Route104/scripts.pory"
	step_end
# 819 "data/maps/Route104/scripts.pory"

# 820 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 821 "data/maps/Route104/scripts.pory"
	walk_down
# 822 "data/maps/Route104/scripts.pory"
	walk_left
# 823 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 824 "data/maps/Route104/scripts.pory"
	step_end
# 825 "data/maps/Route104/scripts.pory"

# 826 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 827 "data/maps/Route104/scripts.pory"
	walk_down
# 828 "data/maps/Route104/scripts.pory"
	walk_down
# 829 "data/maps/Route104/scripts.pory"
	step_end
# 830 "data/maps/Route104/scripts.pory"

# 831 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 832 "data/maps/Route104/scripts.pory"
	walk_down
# 833 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 834 "data/maps/Route104/scripts.pory"
	step_end
# 835 "data/maps/Route104/scripts.pory"

# 836 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 837 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 838 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 839 "data/maps/Route104/scripts.pory"
	end
# 840 "data/maps/Route104/scripts.pory"

# 841 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 842 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 843 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 844 "data/maps/Route104/scripts.pory"
	end
# 845 "data/maps/Route104/scripts.pory"

# 846 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 847 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 848 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 849 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 850 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 851 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 852 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 853 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 854 "data/maps/Route104/scripts.pory"
	release
# 855 "data/maps/Route104/scripts.pory"
	end
# 856 "data/maps/Route104/scripts.pory"

# 857 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 858 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 859 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 860 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 861 "data/maps/Route104/scripts.pory"
	release
# 862 "data/maps/Route104/scripts.pory"
	end
# 863 "data/maps/Route104/scripts.pory"

# 864 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 865 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 866 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 867 "data/maps/Route104/scripts.pory"
	release
# 868 "data/maps/Route104/scripts.pory"
	end
# 869 "data/maps/Route104/scripts.pory"

# 870 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 871 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 872 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 873 "data/maps/Route104/scripts.pory"
	release
# 874 "data/maps/Route104/scripts.pory"
	end
# 875 "data/maps/Route104/scripts.pory"

# 876 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 877 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 878 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 879 "data/maps/Route104/scripts.pory"
	release
# 880 "data/maps/Route104/scripts.pory"
	end
# 881 "data/maps/Route104/scripts.pory"

# 882 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 883 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 884 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 885 "data/maps/Route104/scripts.pory"
	end
# 886 "data/maps/Route104/scripts.pory"

# 887 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 888 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 889 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 890 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 891 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 892 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 893 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 894 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 895 "data/maps/Route104/scripts.pory"
	release
# 896 "data/maps/Route104/scripts.pory"
	end
# 897 "data/maps/Route104/scripts.pory"

# 898 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 899 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 900 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 901 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 902 "data/maps/Route104/scripts.pory"
	release
# 903 "data/maps/Route104/scripts.pory"
	end
# 904 "data/maps/Route104/scripts.pory"

# 905 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 906 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 907 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 908 "data/maps/Route104/scripts.pory"
	release
# 909 "data/maps/Route104/scripts.pory"
	end
# 910 "data/maps/Route104/scripts.pory"

# 911 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 912 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 913 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 914 "data/maps/Route104/scripts.pory"
	release
# 915 "data/maps/Route104/scripts.pory"
	end
# 916 "data/maps/Route104/scripts.pory"

# 917 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 918 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 919 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 920 "data/maps/Route104/scripts.pory"
	release
# 921 "data/maps/Route104/scripts.pory"
	end
# 922 "data/maps/Route104/scripts.pory"

# 923 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 924 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 925 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 926 "data/maps/Route104/scripts.pory"
	end
# 927 "data/maps/Route104/scripts.pory"

# 928 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 929 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 930 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 931 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 932 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 933 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 934 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 935 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 936 "data/maps/Route104/scripts.pory"
	release
# 937 "data/maps/Route104/scripts.pory"
	end
# 938 "data/maps/Route104/scripts.pory"

# 939 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 940 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 941 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 942 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 943 "data/maps/Route104/scripts.pory"
	release
# 944 "data/maps/Route104/scripts.pory"
	end
# 945 "data/maps/Route104/scripts.pory"

# 946 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 947 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 948 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 949 "data/maps/Route104/scripts.pory"
	release
# 950 "data/maps/Route104/scripts.pory"
	end
# 951 "data/maps/Route104/scripts.pory"

# 952 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 953 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 954 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 955 "data/maps/Route104/scripts.pory"
	release
# 956 "data/maps/Route104/scripts.pory"
	end
# 957 "data/maps/Route104/scripts.pory"

# 958 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 959 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 960 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 961 "data/maps/Route104/scripts.pory"
	release
# 962 "data/maps/Route104/scripts.pory"
	end
# 963 "data/maps/Route104/scripts.pory"

# 964 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 965 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 966 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 967 "data/maps/Route104/scripts.pory"
	end
# 968 "data/maps/Route104/scripts.pory"

# 969 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 970 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 971 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 972 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 973 "data/maps/Route104/scripts.pory"
	release
# 974 "data/maps/Route104/scripts.pory"
	end
# 975 "data/maps/Route104/scripts.pory"

# 976 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 977 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 978 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 979 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 980 "data/maps/Route104/scripts.pory"
	release
# 981 "data/maps/Route104/scripts.pory"
	end
# 982 "data/maps/Route104/scripts.pory"

# 983 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 984 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 985 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 986 "data/maps/Route104/scripts.pory"
	end
# 987 "data/maps/Route104/scripts.pory"

# 988 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 989 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 990 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 991 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 992 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 993 "data/maps/Route104/scripts.pory"

# 994 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 995 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 996 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 997 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 998 "data/maps/Route104/scripts.pory"

# 999 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1000 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 1001 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 1002 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1003 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1004 "data/maps/Route104/scripts.pory"

# 1005 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1006 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1007 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1008 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1009 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 1010 "data/maps/Route104/scripts.pory"

# 1011 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1012 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1013 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1014 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1015 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1016 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1017 "data/maps/Route104/scripts.pory"

# 1018 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1019 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1020 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1021 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1022 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1023 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1024 "data/maps/Route104/scripts.pory"

# 1025 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1026 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1027 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1028 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1029 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1030 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1031 "data/maps/Route104/scripts.pory"

# 1032 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1033 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1034 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1035 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1036 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1037 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1038 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1039 "data/maps/Route104/scripts.pory"

# 1040 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1041 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1042 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1043 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1044 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1045 "data/maps/Route104/scripts.pory"

# 1046 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1047 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1048 "data/maps/Route104/scripts.pory"

# 1049 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1050 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1051 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1052 "data/maps/Route104/scripts.pory"

# 1053 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1054 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1055 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1056 "data/maps/Route104/scripts.pory"

# 1057 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1058 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1059 "data/maps/Route104/scripts.pory"

# 1060 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1061 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1062 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1063 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1064 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1065 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1066 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1067 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1068 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1069 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 1070 "data/maps/Route104/scripts.pory"

# 1071 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1072 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1073 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 1074 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1075 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1076 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1077 "data/maps/Route104/scripts.pory"

# 1078 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1079 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1080 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1081 "data/maps/Route104/scripts.pory"

# 1082 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1083 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1084 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 1085 "data/maps/Route104/scripts.pory"

# 1086 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1087 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1088 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1089 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1090 "data/maps/Route104/scripts.pory"

# 1091 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1092 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1093 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1094 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 1095 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1096 "data/maps/Route104/scripts.pory"

# 1097 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1098 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1099 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1100 "data/maps/Route104/scripts.pory"

# 1101 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1102 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1103 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1104 "data/maps/Route104/scripts.pory"

# 1105 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1106 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1107 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1108 "data/maps/Route104/scripts.pory"

# 1109 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1110 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1111 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 1112 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1113 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1114 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1115 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 1116 "data/maps/Route104/scripts.pory"

# 1117 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1118 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1119 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1120 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 1121 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1122 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 1123 "data/maps/Route104/scripts.pory"

# 1124 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1125 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1126 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1127 "data/maps/Route104/scripts.pory"

# 1128 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1129 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 1130 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1131 "data/maps/Route104/scripts.pory"

# 1132 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1133 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1134 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1135 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1136 "data/maps/Route104/scripts.pory"

# 1137 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1138 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1139 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1140 "data/maps/Route104/scripts.pory"

# 1141 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1142 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1143 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1144 "data/maps/Route104/scripts.pory"

# 1145 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1146 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1147 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1148 "data/maps/Route104/scripts.pory"

# 1149 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1150 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1151 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1152 "data/maps/Route104/scripts.pory"

# 1153 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1154 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1155 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 1156 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1157 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 1158 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1159 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"

Route104_MapScripts::
# 1165 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 1166 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 1167 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicRoute104
# 1168 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicRoute104
# 1169 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightMusicRoute104
	.byte 0


DayNightMusicRoute104::
# 1173 "data/maps/Route104/scripts.pory"
	gettimeofday
# 1174 "data/maps/Route104/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicRoute104_2
DayNightMusicRoute104_1:
# 1177 "data/maps/Route104/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicRoute104_5
DayNightMusicRoute104_4:
# 1180 "data/maps/Route104/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicRoute104_8
DayNightMusicRoute104_7:
# 1183 "data/maps/Route104/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicRoute104_11
DayNightMusicRoute104_10:
# 1187 "data/maps/Route104/scripts.pory"
enddaynightroute104:
	return

DayNightMusicRoute104_2:
# 1175 "data/maps/Route104/scripts.pory"
	goto enddaynightroute104
	goto DayNightMusicRoute104_1

DayNightMusicRoute104_5:
# 1178 "data/maps/Route104/scripts.pory"
	goto enddaynightroute104
	goto DayNightMusicRoute104_4

DayNightMusicRoute104_8:
# 1181 "data/maps/Route104/scripts.pory"
	goto enddaynightroute104
	goto DayNightMusicRoute104_7

DayNightMusicRoute104_11:
# 1184 "data/maps/Route104/scripts.pory"
	playbgm MUS_ANISTARCITY, TRUE
# 1185 "data/maps/Route104/scripts.pory"
	goto enddaynightroute104
	goto DayNightMusicRoute104_10

