//#include <iostream>
#include "raylib.h"

using namespace std;

typedef struct EnvItem {
    Rectangle rect;
    int blocking;
    Color color;
} EnvItem;

int main () {

    const int screenWidth = 1000;
    const int screenHeight = 600;
    //int ball_x = 100;
    //int ball_y = 100;
    //int ball_speed_x = 5;
    //int ball_speed_y = 5;
    int ball_radius = 15;
    
    EnvItem envItems[] = {
        {{ 20, 20, screenWidth - 40, 10 }, 1, GRAY },
        {{ 20, 20, 10, screenHeight - 40 }, 1, GRAY },
        {{ 20, screenHeight - 20, screenWidth - 40, 10 }, 1, GRAY },
        {{ screenWidth - 20, 20, 10, (screenHeight/2) - 80}, 1, GRAY },
        {{ screenWidth - 20, screenHeight, 10, - (screenHeight/2) + 80}, 1, RED }
    };
    
    int envItemsLength = sizeof(envItems)/sizeof(envItems[0]);

    //cout << "Hello World" << endl;

    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);
    Vector2 ballPosition = { (float)screenWidth/2, (float)screenHeight/2 };

    while (WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(BLACK);
        //ball_x += ball_speed_x;
        //ball_y += ball_speed_y;
        
        for (int i = 0; i < envItemsLength; i++) {
            DrawRectangleRec(envItems[i].rect, envItems[i].color);
            }

        if (IsKeyDown(KEY_RIGHT)) ballPosition.x += 5.0f;
        if (IsKeyDown(KEY_LEFT)) ballPosition.x -= 5.0f;
        if (IsKeyDown(KEY_UP)) ballPosition.y -= 5.0f;
        if (IsKeyDown(KEY_DOWN)) ballPosition.y += 5.0f;

        // AN -- just testing
        if (ballPosition.x - ball_radius <= 20 ) {
            ballPosition.x += 10.0f;
        }
        if (ballPosition.x + ball_radius >= screenWidth - 10){
            ballPosition.x -= 10.0f;
        }
        if (ballPosition.y + ball_radius >= screenHeight - 10) {
            ballPosition.y -= 10.0f; // any value greater than 2.0f
        }
        if (ballPosition.y - ball_radius <= 20){
            ballPosition.y += 10.0f;
        }

        DrawCircleV(ballPosition , ball_radius, VIOLET);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}