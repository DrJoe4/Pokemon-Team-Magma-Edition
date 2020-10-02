Route111_MagmaHideoutF1_MapScripts::
	.byte 0

Route111_MagmaHideoutF1_EventScript_Grunt1::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutF1_Text_Grunt1, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutF1_EventScript_Scientist1::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutF1_Text_Scientist1, MSGBOX_DEFAULT
	applymovement 4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutF1_EventScript_Grunt2::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutF1_Text_Grunt2, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutF1_EventScript_Grunt3::
	lock
	faceplayer
	compare VAR_UNUSED_0x4083, 1
	goto_if_eq Route111_MagmaHideoutF1_EventScript_Grunt3P2
	msgbox Route111_MagmaHideoutF1_Text_Grunt3, MSGBOX_DEFAULT
	giveitem ITEM_POTION, 1
	setvar VAR_UNUSED_0x4083, 1
	applymovement 3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutF1_EventScript_Grunt3P2::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutF1_Text_Grunt3P2, MSGBOX_DEFAULT
	applymovement 3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutF1_EventScript_Grunt4::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutF1_Text_Grunt4, MSGBOX_DEFAULT
	applymovement 7, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutF1_EventScript_Scientist2::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutF1_Text_Scientist2, MSGBOX_DEFAULT
	applymovement 5, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutF1_EventScript_Scientist3::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutF1_Text_Scientist3, MSGBOX_DEFAULT
	applymovement 6, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutF1_Text_Grunt1:
	.string "I shall guard this entrance with my life\nor until sombody shows up.\lEither or.$"

Route111_MagmaHideoutF1_Text_Grunt2:
	.string "Why couldn't Courtney be the Admin in\n"
	.string "charge of this hideout? She wouldn't be\l"
	.string "barking orders every damn hour.$"

Route111_MagmaHideoutF1_Text_Grunt3:
	.string "Man, I need a break.\nHere's a potion.\lDon't tell Tabitha I'm here.$"

Route111_MagmaHideoutF1_Text_Grunt4:
	.string "Tabitha treats us like dirt. I want to\n"
	.string "work at the other hideout.$"

Route111_MagmaHideoutF1_Text_Scientist1:
	.string "We all have our own parts to play.\pYours is not important.$"

Route111_MagmaHideoutF1_Text_Scientist2:
	.string "I stare at this computer screen for days\n"
	.string "on end. Maybe I should go out for a\l"
	.string "little walk at some point...\l"
	.string "If only that was possible. It's not like\l"
	.string "we can go out whenever we want.\l"
	.string "That's how secret bases become known\l"
	.string "bases.$"

Route111_MagmaHideoutF1_Text_Scientist3:
	.string "I'm busy over here. Get lost.$"

Route111_MagmaHideoutF1_Text_Grunt3P2:
	.string "Don't tell Tabitha I'm here.$"
