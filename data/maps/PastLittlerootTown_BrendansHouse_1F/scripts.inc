# 1 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"


PastLittlerootTown_BrendansHouse_1F_MapScripts::
	.byte 0


PastDinnerShelf::
# 11 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 12 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PastDinnerShelf_Text_0
# 13 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	return


PastSink::
# 19 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 20 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PastSink_Text_0
# 21 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	return


PastFridge::
# 27 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 28 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PastFridge_Text_0
# 29 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	return


PastLivingRoomTV::
# 35 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 36 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PastLivingRoomTV_Text_0
# 37 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	return


PastMay::
# 43 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 44 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, PastMay_Movement_0
# 45 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 1
# 47 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset pastmaytoldtofetchbrendan, PastMay_2
# 53 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	setspeaker [ SP_NAME_MOM ]
# 54 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PastMay_Text_1
PastMay_1:
# 55 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, PastMay_Movement_1
# 56 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 1
# 57 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	return

PastMay_2:
# 48 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	setspeaker [ SP_NAME_MOM ]
# 49 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PastMay_Text_0
# 50 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag pastmaytoldtofetchbrendan
	goto PastMay_1


PastWindow::
# 63 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 64 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PastWindow_Text_0
# 65 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	return


# 44 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
PastMay_Movement_0:
# 44 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	face_player
	step_end

# 55 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
PastMay_Movement_1:
# 55 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
	step_end

PastDinnerShelf_Text_0:
# 12 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Clean dinnerware is neatly arranged\n"
	.string "inside the shelf.$"

PastSink_Text_0:
# 20 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The sink is so sparkly, one can see\n"
	.string "their reflection on it!$"

PastFridge_Text_0:
# 28 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's full of yummy things.$"

PastLivingRoomTV_Text_0:
# 36 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's not time to watch TV.$"

PastMay_Text_0:
# 49 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ah, {PLAYER} - you're up dear!\p"
	.string "Breakfast is almost ready. Why don't\n"
	.string "you call dad in?$"

PastMay_Text_1:
# 54 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad has gone to stroll to {COLOR GREEN}Route 101{COLOR DARK_GRAY}.\n"
	.string "Take Mankey with you!$"

PastWindow_Text_0:
# 64 "data/maps/PastLittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Beyond the glass, the greenery extends\n"
	.string "as far as the eye can see.$"
