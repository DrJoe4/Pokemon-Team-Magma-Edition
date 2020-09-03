Route111_MagmaHideoutB1F_MapScripts::
	.byte 0

Route111_MagmaHideoutB1F_EventScript_Grunt1::
	lock
	faceplayer
	setvar VAR_0x8008, 1
	msgbox Route111_MagmaHideoutB1F_Text_Grunt1, MSGBOX_DEFAULT
	goto Route111_MagmaHideoutB1F_EventScript_FaceOriginalDirection
	end

Route111_MagmaHideoutB1F_EventScript_FaceOriginalDirection::
	closemessage
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_Text_Grunt1:
	.string "I'm so exited!\n$"