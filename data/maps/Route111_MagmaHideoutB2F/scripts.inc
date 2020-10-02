Route111_MagmaHideoutB2F_MapScripts::
	.byte 0

Route111_MagmaHideoutB2F_EventScript_TriggerID1Move::
	goto_if_set FLAG_UNUSED_0x068 Route111_MagmaHideoutB2F_EventScript_Nothing
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Trigger1
	waitmovement 0
	goto Route111_MagmaHideoutB2F_EventScript_Mission1
	end

Route111_MagmaHideoutB2F_EventScript_TriggerID2Move::
	goto_if_set FLAG_UNUSED_0x068 Route111_MagmaHideoutB2F_EventScript_Nothing
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Trigger2
	waitmovement 0
	goto Route111_MagmaHideoutB2F_EventScript_Mission1
	end

Route111_MagmaHideoutB2F_EventScript_TriggerID3Move::
	goto_if_set FLAG_UNUSED_0x068 Route111_MagmaHideoutB2F_EventScript_Nothing
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Trigger3
	waitmovement 0
	goto Route111_MagmaHideoutB2F_EventScript_Mission1
	end

Route111_MagmaHideoutB2F_EventScript_Nothing::
	release
	end

Route111_MagmaHideoutB2F_EventScript_Mission1::
	lock
	goto_if_set FLAG_UNUSED_0x068 Route111_MagmaHideoutB2F_EventScript_GetGoing
	msgbox Route111_MagmaHideoutB2F_Text_Mission1, MSGBOX_DEFAULT
	setflag FLAG_UNUSED_0x068
	setvar VAR_UNUSED_0x404E, 2
	release
	end

Route111_MagmaHideoutB2F_EventScript_GetGoing::
	faceplayer
	msgbox Route111_MagmaHideoutB2F_Text_GetGoing, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB2F_EventScript_StairGuard::
	lock	
	faceplayer
	msgbox Route111_MagmaHideoutB2F_Text_StairGuard, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB2F_Text_Mission1:
	.string "You're...\pShit.\nI forgot. What was it again?\p"
	.string "...\p{PLAYER}. Right. Well, today is your lucky\nday.\p"
	.string "Not only did you join the greatest team\n"
	.string "in the world, you get to go on a very\l"
	.string "important mission. Your mision will be to\l"
	.string "kidnap some professor named...Cucko?\pSomething like that.\p"
	.string "He lives in some shithole town called\n"
	.string "Fallarbor. You'll be assisting Blaise,\l"
	.string "one of our admins. I'm sure you can find\l"
	.string "your own way there.$"

Route111_MagmaHideoutB2F_Text_GetGoing:
	.string "Get going.$"

Route111_MagmaHideoutB2F_Text_StairGuard:
	.string "Tabitha will soon promote me.\nI know it.$"

Movement_Trigger1:
	walk_up
	walk_up
	walk_up
	step_end

Movement_Trigger2:
	walk_up
	walk_up
	walk_up
	walk_left
	face_up
	step_end

Movement_Trigger3:
	walk_up
	walk_up
	walk_up
	walk_right
	face_up
	step_end
