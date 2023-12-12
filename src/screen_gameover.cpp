#pragma once
#include <cstdlib>
#include "raylib.h"
#include "config.h"
#include "screen_menu.h"
#include "screen_gameover.h"
#include "globalgamestate.h"

extern enum states globalgamestate;

void screen_gameover() {
    DrawText("Das ist der Game Over Screen State", 10, 10, 30, LIGHTGRAY);
    if (IsKeyReleased(KEY_SPACE))
    {
        globalgamestate = menu;
    }
}