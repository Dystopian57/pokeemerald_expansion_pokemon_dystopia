# 1 "data/maps/PokeInnRoom2/scripts.pory"


PokeInnRoom2_MapScripts::
# 9 "data/maps/PokeInnRoom2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DisableInnFollowers
	.byte 0


DisableInnFollowers::
# 12 "data/maps/PokeInnRoom2/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	return


DevonInnSignAboutFreezer::
# 19 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 20 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSignAboutFreezer_Text_0
# 21 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


OldalePokeCenterInnPrograms::
# 27 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 28 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldalePokeCenterInnPrograms_Text_0, OldalePokeCenterInnPrograms_Text_1, OldalePokeCenterInnPrograms_Text_2
# 30 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldalePokeCenterInnPrograms_2
OldalePokeCenterInnPrograms_1:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldalePokeCenterInnPrograms_5
OldalePokeCenterInnPrograms_4:
# 68 "data/maps/PokeInnRoom2/scripts.pory"
	releaseall
	return

OldalePokeCenterInnPrograms_2:
# 31 "data/maps/PokeInnRoom2/scripts.pory"
	random 0
# 32 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 34 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 35 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, OldalePokeCenterInnPrograms_8
# 36 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, OldalePokeCenterInnPrograms_9
# 37 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, OldalePokeCenterInnPrograms_10
# 38 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, OldalePokeCenterInnPrograms_11
# 39 "data/maps/PokeInnRoom2/scripts.pory"
	case 4, OldalePokeCenterInnPrograms_12
# 40 "data/maps/PokeInnRoom2/scripts.pory"
	case 5, OldalePokeCenterInnPrograms_13
# 41 "data/maps/PokeInnRoom2/scripts.pory"
	case 6, OldalePokeCenterInnPrograms_14
# 42 "data/maps/PokeInnRoom2/scripts.pory"
	case 7, OldalePokeCenterInnPrograms_15
# 43 "data/maps/PokeInnRoom2/scripts.pory"
	case 8, OldalePokeCenterInnPrograms_16
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_5:
# 48 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset seenweatheratinnvisit, OldalePokeCenterInnPrograms_17
# 62 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldalePokeCenterInnPrograms_Text_3
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_8:
# 35 "data/maps/PokeInnRoom2/scripts.pory"
	goto OldaleWarehouseNews
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_9:
# 36 "data/maps/PokeInnRoom2/scripts.pory"
	goto JimmyNews
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_10:
# 37 "data/maps/PokeInnRoom2/scripts.pory"
	goto LittlerootLabNews
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_11:
# 38 "data/maps/PokeInnRoom2/scripts.pory"
	goto PetalburgRiotNews
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_12:
# 39 "data/maps/PokeInnRoom2/scripts.pory"
	goto LittlerootLabNews
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_13:
# 40 "data/maps/PokeInnRoom2/scripts.pory"
	goto DevonSpaceNews
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_14:
# 41 "data/maps/PokeInnRoom2/scripts.pory"
	goto MauvillePlantNews
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_15:
# 42 "data/maps/PokeInnRoom2/scripts.pory"
	goto RebelHarbourNews
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_16:
# 43 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route104LabNews
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_17:
# 49 "data/maps/PokeInnRoom2/scripts.pory"
	random 2
# 50 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 51 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 52 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, OldalePokeCenterInnPrograms_21
# 53 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, OldalePokeCenterInnPrograms_22
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_21:
# 52 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route103WeatherNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_22:
# 53 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route102WeatherNews
	goto OldalePokeCenterInnPrograms_4


JimmyNews::
# 75 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 77 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyNews_2
JimmyNews_1:
# 87 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq JimmyNews_5
JimmyNews_4:
# 109 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

JimmyNews_2:
# 79 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_0
	goto JimmyNews_1

JimmyNews_5:
# 89 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, JimmyNews_7
# 99 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_2
	goto JimmyNews_4

JimmyNews_7:
# 90 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_1
	goto JimmyNews_4


OldaleWarehouseNews::
# 113 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 115 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWarehouseNews_2
OldaleWarehouseNews_1:
# 123 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_gt OldaleWarehouseNews_5
OldaleWarehouseNews_4:
# 149 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

OldaleWarehouseNews_2:
# 117 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_0
	goto OldaleWarehouseNews_1

OldaleWarehouseNews_5:
# 126 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_1
# 130 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 132 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseNews_8
OldaleWarehouseNews_7:
# 140 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseNews_10
	goto OldaleWarehouseNews_4

OldaleWarehouseNews_8:
# 134 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_2
	goto OldaleWarehouseNews_7

OldaleWarehouseNews_10:
# 142 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_3
	goto OldaleWarehouseNews_4


PetalburgRiotNews::
# 156 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 157 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, PetalburgRiotNews_2
# 167 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox PetalburgRiotNews_Text_1
PetalburgRiotNews_1:
# 175 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

PetalburgRiotNews_2:
# 160 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox PetalburgRiotNews_Text_0
	goto PetalburgRiotNews_1


LittlerootLabNews::
# 181 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 182 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, LittlerootLabNews_2
# 196 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LittlerootLabNews_Text_1
LittlerootLabNews_1:
# 197 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

LittlerootLabNews_2:
# 185 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LittlerootLabNews_Text_0
	goto LittlerootLabNews_1


DevonSpaceNews::
# 202 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 203 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonSpaceNews_Text_0
# 210 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


MauvillePlantNews::
# 216 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 217 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox MauvillePlantNews_Text_0
# 225 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


RebelHarbourNews::
# 231 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 232 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq RebelHarbourNews_2
RebelHarbourNews_1:
# 244 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq RebelHarbourNews_5
RebelHarbourNews_4:
# 249 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

RebelHarbourNews_2:
# 235 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox RebelHarbourNews_Text_0
	goto RebelHarbourNews_1

RebelHarbourNews_5:
# 247 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox RebelHarbourNews_Text_1
	goto RebelHarbourNews_4


Route104LabNews::
# 256 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 257 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq Route104LabNews_2
Route104LabNews_1:
# 269 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq Route104LabNews_5
Route104LabNews_4:
# 282 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

Route104LabNews_2:
# 260 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route104LabNews_Text_0
	goto Route104LabNews_1

Route104LabNews_5:
# 272 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route104LabNews_Text_1
	goto Route104LabNews_4


Route103WeatherNews::
# 289 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_RAIN_DANCE
# 290 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route103WeatherNews_Text_0
# 291 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 1
# 292 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 293 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


Route102WeatherNews::
# 297 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_SANDSTORM
# 298 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route102WeatherNews_Text_0
# 299 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 1
# 300 "data/maps/PokeInnRoom2/scripts.pory"
	clearflag route102weathermon
# 301 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 302 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DevonInnSignAboutFreezer_Text_0:
# 20 "data/maps/PokeInnRoom2/scripts.pory"
	.string "With each visit, remember to check the\n"
	.string "freezer for a free drink!$"

OldalePokeCenterInnPrograms_Text_0:
# 28 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Devon News$"

OldalePokeCenterInnPrograms_Text_1:
# 28 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Channel$"

OldalePokeCenterInnPrograms_Text_2:
# 28 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Don't watch TV$"

OldalePokeCenterInnPrograms_Text_3:
# 62 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The weather broadcast has ended...$"

JimmyNews_Text_0:
# 79 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking news on the chase for Jimmy\n"
	.string "McGligar, the infamous Pokémon egg\l"
	.string "smuggler - he has been seen in Route\l"
	.string "110.\p"
	.string "We urge our viewers to extreme caution,\n"
	.string "and inform authorities if they see him.\l"
	.string "An image of him is now onscreen.\p"
	.string "We take this chance to remind our\n"
	.string "viewers that only official Devon\l"
	.string "Breeders are authorized to match\l"
	.string "Pokémon and handle their offspring.\p"
	.string "This is part of the efforts to prevent\n"
	.string "dangerous practices such as genetic\l"
	.string "enhancing, also referred to as 'IV\l"
	.string "breeding'.$"

JimmyNews_Text_1:
# 90 "data/maps/PokeInnRoom2/scripts.pory"
	.string "We have news on egg smuggler Jimmy\n"
	.string "McGligar's whereabouts.\p"
	.string "Civilians have reported sighting him in\n"
	.string "Petalburg City, and there's speculation\l"
	.string "he recently crossed the checkpoint at\l"
	.string "Concord Bridge unnoticed.\p"
	.string "Due to the high rebel activity in\n"
	.string "Petalburg, an arrest will prove\l"
	.string "difficult, and efforts are focused on\l"
	.string "preventing him from leaving the Rebel\l"
	.string "Zone once more.\p"
	.string "Security checks are thus being\n"
	.string "reinforced in the checkpoints of\l"
	.string "Petalburg Park, Concord Bridge and\l"
	.string "Rustboro Road.\p"
	.string "Please carry your Devon Visa when\n"
	.string "travelling.$"

JimmyNews_Text_2:
# 99 "data/maps/PokeInnRoom2/scripts.pory"
	.string "We have news on egg smuggler Jimmy\n"
	.string "McGligar's whereabouts.\p"
	.string "After a close encounter with Devon\n"
	.string "Guards and a brave civilian at Concord\l"
	.string "Bridge, he's been reported to have\l"
	.string "moved to Petalburg City.\p"
	.string "Due to the high rebel activity in the\n"
	.string "area, an arrest will prove difficult, and\l"
	.string "efforts are focused on preventing him\l"
	.string "from leaving the Rebel Zone once more.\p"
	.string "Security checks are thus being\n"
	.string "reinforced in the checkpoints of\l"
	.string "Petalburg Park, Concord Bridge and\l"
	.string "Rustboro Road.\p"
	.string "Please carry your Devon Visa when\n"
	.string "travelling.$"

OldaleWarehouseNews_Text_0:
# 117 "data/maps/PokeInnRoom2/scripts.pory"
	.string "In other unfortunate piece of news,\n"
	.string "the Devon Warehouse of Oldale town is\l"
	.string "still under rebel control.\p"
	.string "Devon Inc. has promised to send a\n"
	.string "taskforce to the facility as soon as\l"
	.string "Devon Guards can be freed from the\l"
	.string "evacuation efforts of Mauville City,\l"
	.string "whose Nuclear Plant has suffered a\l"
	.string "great accident.\p"
	.string "We will continue to apprise you of the\n"
	.string "situation.$"

OldaleWarehouseNews_Text_1:
# 126 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking News: our Verdooms have\n"
	.string "recently caught this footage of the\l"
	.string "Devon Warehouse of Oldale Town, where\l"
	.string "rebels can be seen leaving the facility\l"
	.string "in droves.$"

OldaleWarehouseNews_Text_2:
# 134 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Not soon after, a young man in\n"
	.string "soldier-like clothes was seen leaving\l"
	.string "the warehouse. Some early hypothesis\l"
	.string "see him as a prisoner who freed himself\l"
	.string "after the rebels were called out, while\l"
	.string "others point at this person being a\l"
	.string "mercenary sent to defeat said rebels\l"
	.string "for yet unknown reasons.\p"
	.string "We will provide more information as soon\n"
	.string "as we have it.$"

OldaleWarehouseNews_Text_3:
# 142 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Not soon after, a young woman in\n"
	.string "soldier-like clothes was seen leaving\l"
	.string "the warehouse. Some early hypothesis\l"
	.string "see her as a prisoner who freed himself\l"
	.string "after the rebels were called out, while\l"
	.string "others point at this person being a\l"
	.string "mercenary sent to defeat said rebels\l"
	.string "for yet unknown reasons.\p"
	.string "We will provide more information as soon\n"
	.string "as we have it.$"

PetalburgRiotNews_Text_0:
# 160 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking news: a violent, rebel-led riot\n"
	.string "has broken out in the vicinity of\l"
	.string "Petalburg City's Devon Center. Devon\l"
	.string "Guards have already been dispatched to\l"
	.string "put an end to the violence, and we\l"
	.string "advise residents of the city to steer\l"
	.string "clear off the Devon facility until the\l"
	.string "situation is under control.$"

PetalburgRiotNews_Text_1:
# 167 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking news: rebels have been\n"
	.string "vacated from a violent riot mounted\l"
	.string "around Petalburg City's Devon Center.\l"
	.string "The property damage is great, but no\l"
	.string "human or Pokémon injury has ensued.\p"
	.string "The situation was apparently defused\n"
	.string "by a young person garbed in camouflage\l"
	.string "clothes, who some believe to be the\l"
	.string "same that appears in the footage of\l"
	.string "Rebels leaving Oldale's Devon\l"
	.string "Warehouse.\p"
	.string "Could this be the rise of a bold\n"
	.string "vigilante in the Rebel Zone, or perhaps\l"
	.string "that of an enforcer acting for a\l"
	.string "nefarious faction?\p"
	.string "We will keep you informed of these\n"
	.string "developments.$"

LittlerootLabNews_Text_0:
# 185 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Now, for some more analysis on the\n"
	.string "latest issue of Devon's Inc 'Safemon\l"
	.string "Progress Report'.\p"
	.string "For the third consecutive month,\n"
	.string "Littleroot's Lab has been at the bottom\l"
	.string "of contributions to the Safemon\l"
	.string "project, with only 2 Pokémon species\l"
	.string "successfully turned into Safemon.\p"
	.string "In spite of its decades-long history of\n"
	.string "academic brilliance, the laboratory\l"
	.string "took a turn for the worse when the\l"
	.string "illustrious Professor Birch retired, and\l"
	.string "the torch was passed to the Alolan\l"
	.string "Professor Balsam.\p"
	.string "After continuous downsizing of the\n"
	.string "laboratory, she is now one of the only\l"
	.string "two scientists working in Littleroot,\l"
	.string "and the closure of the institution\l"
	.string "seems imminent.\p"
	.string "It would be a sad farewell to a once\n"
	.string "iconic landmark in Hoenn's history.$"

LittlerootLabNews_Text_1:
# 196 "data/maps/PokeInnRoom2/scripts.pory"
	.string "after raid to the lab, another news!$"

DevonSpaceNews_Text_0:
# 203 "data/maps/PokeInnRoom2/scripts.pory"
	.string "“Space is no longer the limit” was\n"
	.string "claimed in unison by the new\l"
	.string "administrators of Mossdeep's Devon\l"
	.string "Space Center - former gym leaders Tate\l"
	.string "and Liza - during the announcement of\l"
	.string "the new MDSS program.\p"
	.string "Last year, the space agency sent\n"
	.string "several Lunatellites into orbit, which\l"
	.string "made the popular Devon Net possible.\p"
	.string "This year, with the help of business\n"
	.string "partner Silph Co., the 'Gemini Mission'\l"
	.string "has started, with goals to build the\l"
	.string "Devon Space Station - the firt\l"
	.string "man-made, long-term habitat to exist\l"
	.string "outside the planet.\p"
	.string "Everyone in Hoenn looks forward to the\n"
	.string "exciting discoveries that this new era\l"
	.string "of space flight might bring. Stay tuned!$"

MauvillePlantNews_Text_0:
# 217 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Next up, we bring you some unfortunate\n"
	.string "news.\p"
	.string "An accident in Mauville's Nuclear Plant\n"
	.string "has claimed the lifes of 7 dozen Devon\l"
	.string "workers and 5 Safemon. Many others\l"
	.string "have been injured, and some are in\l"
	.string "critical condition.\p"
	.string "In a recent press conference, Plant\n"
	.string "Manager Wattson has sent his\l"
	.string "condolences to the affected families,\l"
	.string "and has assured an investigation into\l"
	.string "the incident is underway.\p"
	.string "Meanwhile, voices are being raised\n"
	.string "advocating for the phasing out of\l"
	.string "nuclear technology, in favour of the\l"
	.string "safer, cleaner energy provided by the\l"
	.string "thermal plant of Lavaridge City.\p"
	.string "Mister Stone has promised to look into\n"
	.string "the matter, and to assess whether\l"
	.string "Lavaridge can keep up with the energy\l"
	.string "demands of our rapidly developing\l"
	.string "region.$"

RebelHarbourNews_Text_0:
# 235 "data/maps/PokeInnRoom2/scripts.pory"
	.string "We have received news about Rebels\n"
	.string "building an illegal harbour on the coast\l"
	.string "south of Petalburg City.\p"
	.string "Although available information rules\n"
	.string "out any war-equipped vessels being\l"
	.string "built or acquired by anti-Devon\l"
	.string "radicals, the place sees regular traffic\l"
	.string "of small foreign boats.\p"
	.string "If conjectures are to be believed, this\n"
	.string "could point to a collaboration between\l"
	.string "the Rebels and foreign crime\l"
	.string "organizations, and the establishment\l"
	.string "of a supply chain.\p"
	.string "Devon Co. continues to monitor the\n"
	.string "situation, and Mister Stone has\l"
	.string "promised to deal with any threats to\l"
	.string "the region's safety that dare arise\l"
	.string "from southern Hoenn in a 'swift, stern,\l"
	.string "and safe manner'$"

RebelHarbourNews_Text_1:
# 247 "data/maps/PokeInnRoom2/scripts.pory"
	.string "after foreign missions, INFORM ABOUT\n"
	.string "THEM!$"

Route104LabNews_Text_0:
# 260 "data/maps/PokeInnRoom2/scripts.pory"
	.string "We continue with more insight into the\n"
	.string "latest issue of the Safemon Progress\l"
	.string "Report that Devon Co. recently\l"
	.string "published.\p"
	.string "The metrics place the Devon Lab in\n"
	.string "Route 104 as one of the lead\l"
	.string "contributors to Safemon Research this\l"
	.string "past month, with 4 species successfully\l"
	.string "safened only this past week.\p"
	.string "In a recent interview, Lab Director X\n"
	.string "shared that 'Although the Rebel Zone\l"
	.string "can be a hazardous work environment,\l"
	.string "the abundance of regular Pokémon here\l"
	.string "has provided us with a satisfactory\l"
	.string "number of samples, which has\l"
	.string "contributed to our pace of research'.\p"
	.string "We wish our valiant and hard-working\n"
	.string "scientists the best of lucks in their\l"
	.string "noble endeavor of making Hoenn a safer\l"
	.string "place.$"

Route104LabNews_Text_1:
# 272 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking news. We have just received\n"
	.string "reports of an assault on the Devon Lab\l"
	.string "of Route 104, presumably perpetrated\l"
	.string "by a band of rebels led by former gym\l"
	.string "leader of the neighbouring Petalburg\l"
	.string "City - Norman.\p"
	.string "While there is no footage of the\n"
	.string "incident, witnesses claim he was\l"
	.string "accompanied by 4 young trainers, with\l"
	.string "whom he seized control of the facility\l"
	.string "by use of violent, unsafened Pokémon.\p"
	.string "Fortunately, Devon Admin Roxanne was\n"
	.string "swiftly dispatched to the location, and\l"
	.string "ensured the safe retreat of the\l"
	.string "laboratory's personnel. Norman and his\l"
	.string "acolytes' goals are unknown, but\l"
	.string "speculated to be of lucrative nature,\l"
	.string "similar to those of the rebels that\l"
	.string "recently stripped the Devon Warehouse\l"
	.string "of Oldale Town of all its valuable\l"
	.string "assets.\p"
	.string "The lab will remain unmanned until it can\n"
	.string "be safely reclaimed. That is all we have\l"
	.string "for the moment.$"

Route103WeatherNews_Text_0:
# 290 "data/maps/PokeInnRoom2/scripts.pory"
	.string "There is rain in Route 103!$"

Route102WeatherNews_Text_0:
# 298 "data/maps/PokeInnRoom2/scripts.pory"
	.string "There is a sandstorm in Route 102!$"
