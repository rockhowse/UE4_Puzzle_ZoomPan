// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "UE4_Puzzle_ZoomPan.h"
#include "UE4_Puzzle_ZoomPanGameMode.h"
#include "UE4_Puzzle_ZoomPanPlayerController.h"
#include "UE4_Puzzle_ZoomPanPawn.h"

AUE4_Puzzle_ZoomPanGameMode::AUE4_Puzzle_ZoomPanGameMode()
{
	// no pawn by default
	DefaultPawnClass = AUE4_Puzzle_ZoomPanPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AUE4_Puzzle_ZoomPanPlayerController::StaticClass();
}
