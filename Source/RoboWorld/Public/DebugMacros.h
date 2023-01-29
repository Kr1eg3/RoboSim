/*
*   This is header with debug macros.
*   Essentially taken from a lesson from the udemy website
* 
*/

#pragma once

#include "DrawDebugHelpers.h"

// Basic version
#define DB_DRAW_SPHERE(location) if (GetWorld()) DrawDebugSphere(GetWorld(), location, 25.f, 32, FColor::Red, true)
#define DB_DRAW_LINE(startLocation, endLocation) if (GetWorld()) DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Red, true, -1.f, 0, 1.f)
#define DB_DRAW_POINT(location) if (GetWorld()) DrawDebugPoint(GetWorld(), location, 15.f, FColor::Red, true)
#define DB_DRAW_VECTOR(startLocation, endLocation) if (GetWorld()) \
	{ \
		DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Red, true, -1.f, 0, 1.f); \
		DrawDebugPoint(GetWorld(), endLocation, 15.f, FColor::Red, true); \
    }

// Single Frame version 
#define DB_SF_DRAW_SPHERE(location) if (GetWorld()) DrawDebugSphere(GetWorld(), location, 25.f, 32, FColor::Red, false, -1.f)
#define DB_SF_DRAW_LINE(startLocation, endLocation) if (GetWorld()) DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Red, false, -1.f, 0, 1.f)
#define DB_DRAW_POINT(location) if (GetWorld()) DrawDebugPoint(GetWorld(), location, 15.f, FColor::Red, false, 1.f)
#define DB_SF_DRAW_VECTOR(startLocation, endLocation) if (GetWorld()) \
	{ \
		DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Red, false, -1.f, 0, 1.f); \
		DrawDebugPoint(GetWorld(), endLocation, 15.f, FColor::Red, false, -1.f); \
    }

#define DB_ONSCREEN_LOG(text) if (GEngine) GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Red, text, true)