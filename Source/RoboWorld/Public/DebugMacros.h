#pragma once

#include "DrawDebugHelpers.h"

#define DB_DRAW_SPHERE(location) if (GetWorld()) DrawDebugSphere(GetWorld(), location, 25.f, 32, FColor::Red, true)
#define DB_DRAW_LINE(startLocation, endLocation) if (GetWorld()) DrawDebugLine(GetWorld(), startLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f)


