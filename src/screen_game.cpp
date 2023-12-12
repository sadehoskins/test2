#pragma once
#include <cstdlib>
#include "raylib.h"
#include "config.h"
#include "screen_menu.h"
#include "screen_gameover.h"
#include "globalgamestate.h"
#include "screen_game.h"

extern enum states globalgamestate;

void screen_game() {
    DrawText("Das ist der Game Screen State", 10, 10, 30, LIGHTGRAY);
    if (IsKeyReleased(KEY_H))
    {
        globalgamestate = gameover;
    }
}