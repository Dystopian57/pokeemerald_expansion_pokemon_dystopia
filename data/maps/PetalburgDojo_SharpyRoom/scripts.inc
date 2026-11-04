# 1 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"

# 2 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
PetalburgDojo_SharpyRoom_MapScripts::
# 3 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	.byte 0

SharpyRoomBox::
# 8 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	lock
# 9 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	goto_if_unset FLAG_ITEM_SHARPYROOM, SharpyRoomBox_2
# 16 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	msgbox SharpyRoomBox_Text_1
SharpyRoomBox_1:
# 19 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	release
	return

SharpyRoomBox_2:
# 11 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	msgbox SharpyRoomBox_Text_0
# 12 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	giveitem ITEM_MYSTIC_WATER
# 13 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	setflag FLAG_ITEM_SHARPYROOM
	goto SharpyRoomBox_1


SharpyRoomSharpy::
# 23 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	lock
# 24 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	applymovement 1, SharpyRoomSharpy_Movement_0
# 26 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	goto_if_set FLAG_ITEM_SHARPYROOM, SharpyRoomSharpy_2
# 60 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 61 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 62 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	msgbox SharpyRoomSharpy_Text_4
# 64 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 65 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 66 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	msgbox SharpyRoomSharpy_Text_5
# 68 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 69 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 70 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	msgbox SharpyRoomSharpy_Text_6
# 71 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	goto endofsharpyroomsharpyidle
SharpyRoomSharpy_1:
# 75 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
endofsharpyroomsharpyidle:
# 76 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	applymovement 1, SharpyRoomSharpy_Movement_1
# 77 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	waitmovement 1
# 78 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	removefieldmugshot
# 79 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	release
	return

SharpyRoomSharpy_2:
# 29 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	goto_if_unset gavesharpyflaskindojo, SharpyRoomSharpy_7
SharpyRoomSharpy_5:
# 45 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	goto_if_set gavesharpyflaskindojo, SharpyRoomSharpy_10
	goto SharpyRoomSharpy_1

SharpyRoomSharpy_6:
# 32 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 33 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 34 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	msgbox SharpyRoomSharpy_Text_0
# 36 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	removeitem ITEM_MYSTIC_WATER, 1
# 38 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 39 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 40 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	msgbox SharpyRoomSharpy_Text_1
# 41 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	setflag gavesharpyflaskindojo
# 42 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	goto endofsharpyroomsharpyidle
	goto SharpyRoomSharpy_5

SharpyRoomSharpy_7:
	checkitem ITEM_MYSTIC_WATER
# 0 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SharpyRoomSharpy_6
	goto SharpyRoomSharpy_5

SharpyRoomSharpy_10:
# 46 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 47 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 48 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	msgbox SharpyRoomSharpy_Text_2
# 50 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 51 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 52 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	msgbox SharpyRoomSharpy_Text_3
# 53 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	goto endofsharpyroomsharpyidle
	goto SharpyRoomSharpy_1


# 24 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
SharpyRoomSharpy_Movement_0:
# 24 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	face_player
	step_end

# 76 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
SharpyRoomSharpy_Movement_1:
# 76 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	face_down
	step_end

SharpyRoomBox_Text_0:
# 11 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	.string "There's something buried in the box...$"

SharpyRoomBox_Text_1:
# 16 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	.string "The box contains nothing of use.$"

SharpyRoomSharpy_Text_0:
# 34 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	.string "Hey, is that my Old Flask!? You found it!$"

SharpyRoomSharpy_Text_1:
# 40 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	.string "You're a real one, {PLAYER}. Now I'm\n"
	.string "totes ready for the mission!$"

SharpyRoomSharpy_Text_2:
# 48 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	.string "I'm kind of nervous, are you not?$"

SharpyRoomSharpy_Text_3:
# 52 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	.string "This must be how my dad felt before one\n"
	.string "of his old missions...$"

SharpyRoomSharpy_Text_4:
# 62 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	.string "Oh dang it… where did I put my water\n"
	.string "flask!?$"

SharpyRoomSharpy_Text_5:
# 66 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	.string "My Carvanha needs it to be hydrated at\n"
	.string "all times!$"

SharpyRoomSharpy_Text_6:
# 70 "data/maps/PetalburgDojo_SharpyRoom/scripts.pory"
	.string "I should have listened to Camelia, and\n"
	.string "pack everything in advance.$"
