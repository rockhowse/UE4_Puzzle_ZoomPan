// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "UE4_Puzzle_ZoomPan.h"
#include "UE4_Puzzle_ZoomPanPlayerController.h"

AUE4_Puzzle_ZoomPanPlayerController::AUE4_Puzzle_ZoomPanPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
