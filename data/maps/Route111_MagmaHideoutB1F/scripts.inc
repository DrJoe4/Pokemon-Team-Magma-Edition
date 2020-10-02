Route111_MagmaHideoutB1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Route111_MagmaHideoutB1F_OnTransition
	.byte 0

Route111_MagmaHideoutB1F_OnTransition::
	compare VAR_UNUSED_0x404E, 1
	call_if_eq Route111_MagmaHideoutB1F_EventScript_MoveGirlToPost
	end

Route111_MagmaHideoutB1F_EventScript_MoveGirlToPost::
	setobjectxyperm 3, 10, 3
	return

Route111_MagmaHideoutB1F_EventScript_TabithaSpeech::
	goto_if_set FLAG_UNUSED_0x054 Route111_MagmaHideoutB1F_EventScript_Nothing
	lock
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Movement_AdjustFace
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraShiftUp
	waitmovement 0
	msgbox Route111_MagmaHideoutB1F_Text_TabithaSpeech, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Movement_TabithaSpeech
	waitmovement 0
	removeobject 1
	setflag FLAG_UNUSED_0x054
	clearflag FLAG_UNUSED_0x055
	clearflag FLAG_UNUSED_0x068
	applymovement 3, Movement_GivePoochGirl
	waitmovement 0
	msgbox Route111_MagmaHideoutB1F_Text_ReceivePokemon, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraShiftDown
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_UNUSED_0x404E, 1
	release
	end

Route111_MagmaHideoutB1F_EventScript_Trigger1::
	goto_if_set FLAG_UNUSED_0x054 Route111_MagmaHideoutB1F_EventScript_Nothing
	lock
	applymovement 3, Movement_GruntTurnRight
	waitmovement 0
	msgbox Route111_MagmaHideoutB1F_Text_Trigger1, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Away
	waitmovement 0
	applymovement 3, Movement_GruntFaceFront
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_Trigger2::
	goto_if_set FLAG_UNUSED_0x055 Route111_MagmaHideoutB1F_EventScript_Nothing
	lock
	applymovement 13, Movement_GruntTurnRight
	waitmovement 0
	msgbox Route111_MagmaHideoutB1F_Text_NotAllowed, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Away
	waitmovement 0
	applymovement 13, Movement_GruntFaceFront
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_Trigger3::
	goto_if_set FLAG_UNUSED_0x068 Route111_MagmaHideoutB1F_EventScript_Nothing
	lock
	applymovement 11, Movement_GruntTurnLeft
	waitmovement 0
	msgbox Route111_MagmaHideoutB1F_Text_NotAllowed, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Away
	waitmovement 0
	applymovement 11, Movement_GruntFaceFront
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_Nothing::
	release
	end

Route111_MagmaHideoutB1F_EventScript_GivePoochGirl::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x054 Route111_MagmaHideoutB1F_EventScript_GivePoochAction
	msgbox Route111_MagmaHideoutB1F_Text_GivePoochGirl, MSGBOX_DEFAULT
	applymovement 3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_GivePoochAction::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x055 Route111_MagmaHideoutB1F_EventScript_AlreadyReceived
	msgbox Route111_MagmaHideoutB1F_Text_GivePoochyena
	givemon SPECIES_POOCHYENA, 5, ITEM_NONE
	playfanfare MUS_FANFA4
	msgbox Route111_MagmaHideoutB1F_Text_GivePoochAction, MSGBOX_DEFAULT
	waitfanfare
	applymovement 3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_UNUSED_0x055
	release
	end

Route111_MagmaHideoutB1F_EventScript_AlreadyReceived::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutB1F_Text_AlreadyReceived, MSGBOX_DEFAULT
	applymovement 3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_Poochyena::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutB1F_Text_Poochyena, MSGBOX_DEFAULT
	applymovement 3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_Grunt1::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutB1F_Text_Grunt1, MSGBOX_DEFAULT
	applymovement 4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_Grunt2::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutB1F_Text_Grunt2, MSGBOX_DEFAULT
	applymovement 5, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_Grunt3::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutB1F_Text_Grunt3, MSGBOX_DEFAULT
	applymovement 6, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_Grunt4::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutB1F_Text_Grunt4, MSGBOX_DEFAULT
	applymovement 7, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_Grunt5::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutB1F_Text_Grunt5, MSGBOX_DEFAULT
	applymovement 8, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_Grunt6::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutB1F_Text_Grunt6, MSGBOX_DEFAULT
	applymovement 9, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_Grunt7::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutB1F_Text_Grunt7, MSGBOX_DEFAULT
	applymovement 10, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_StairGrunt1::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutB1F_Text_StairGrunt1, MSGBOX_DEFAULT
	applymovement 11, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_StairGrunt2::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutB1F_Text_StairGrunt2, MSGBOX_DEFAULT
	applymovement 13, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_EventScript_BedGrunt::
	lock
	faceplayer
	msgbox Route111_MagmaHideoutB1F_Text_BedGrunt, MSGBOX_DEFAULT
	applymovement 12, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_MagmaHideoutB1F_Text_TabithaSpeech::
	.string "Now listen here Grunts!\nI'm only going to say this once.\pI don't give two shits about you.\p"
	.string "To me, you're just expendable cannon\n"
	.string "fodder that can easily be replaced.\l"
	.string "However, if you put in the effort you\l"
	.string "will be recognized for your achievements.\p"
	.string "After you receive your Pokemon, head\n"
	.string "down to my office. I'll be handing out\l"
	.string "missions to you piss ants.$"

Route111_MagmaHideoutB1F_Text_ReceivePokemon:
	.string "Come up here when I call your name.\p{PLAYER}!$"

Route111_MagmaHideoutB1F_Text_GivePoochyena:
	.string "Here's your Pokemon.$"

Route111_MagmaHideoutB1F_Text_GivePoochAction:
	.string "{PLAYER} received Poochyena!$"

Route111_MagmaHideoutB1F_Text_AlreadyReceived:
	.string "You already got yours.$"

Route111_MagmaHideoutB1F_Text_GivePoochGirl:
	.string "Get in line Grunt.$"

Route111_MagmaHideoutB1F_Text_Trigger1:
	.string "Grunt! Get. In. Line.$"

Route111_MagmaHideoutB1F_Text_NotAllowed:
	.string "You aren't allowed to leave yet, Grunt.$"

Route111_MagmaHideoutB1F_Text_Poochyena:
	.string "Bork.$"

Route111_MagmaHideoutB1F_Text_Grunt1:
	.string "I can't wait to make my parents proud.$"

Route111_MagmaHideoutB1F_Text_Grunt2:
	.string "Today will mark a new beginning in my\nlife.$"

Route111_MagmaHideoutB1F_Text_Grunt3:
	.string "I can't wait to beat up some Aqua Grunts.$"

Route111_MagmaHideoutB1F_Text_Grunt4:
	.string "When am I getting my Pokemon?\nI can hardly wait.$"

Route111_MagmaHideoutB1F_Text_Grunt5:
	.string "A Poochyena? Why can't it be a cooler\nPokemon?$"

Route111_MagmaHideoutB1F_Text_Grunt6:
	.string "It's time to make Hoenn a better place.$"

Route111_MagmaHideoutB1F_Text_Grunt7:
	.string "I can't wait to get out there and start\n"
	.string "doing missions. I want to prove to Maxie\l"
	.string "and Tabitha that I have what it takes to\l"
	.string "stop Team Aqua and Steven.$"

Route111_MagmaHideoutB1F_Text_StairGrunt1:
	.string "I've been here for months after I\n"
	.string "screwed up my first mission.\p"
	.string "I wonder if I'm ever going to get\n"
	.string "sent to Jagged Pass HQ.$"

Route111_MagmaHideoutB1F_Text_StairGrunt2:
	.string "I'm happy staying inside this base.\n"
	.string "Everytime I get sent on a patrol\l"
	.string "outside I come back with sand in every\l"
	.string "nook and cranny.$"

Route111_MagmaHideoutB1F_Text_BedGrunt:
	.string "One of these days we'll be in control\n"
	.string "of Hoenn and all of these sleepless\l"
	.string "nights will have been worth it.$"

Movement_Away:
	walk_down
	step_end

Movement_AdjustFace:
	face_up
	step_end

Movement_CameraShiftUp:
	walk_up
	step_end

Movement_CameraShiftDown:
	walk_down
	step_end

Movement_TabithaSpeech:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_GivePoochGirl:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	face_down
	step_end

Movement_GruntTurnLeft:
	face_left
	step_end

Movement_GruntTurnRight:
	face_right
	step_end

Movement_GruntFaceFront:
	face_down
	step_end
