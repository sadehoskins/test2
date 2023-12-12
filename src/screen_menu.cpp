#pragma once
#include <cstdlib>

#include "raylib.h"

#include "config.h"

#include "screen_menu.h"

#include "globalgamestate.h"

extern enum states globalgamestate;
void screen_menu(){
    DrawText("Das ist der Menü Screen State", 10, 10, 30, LIGHTGRAY);
    if (IsKeyReleased(KEY_ENTER))
    {
        globalgamestate = game;
    }
}
