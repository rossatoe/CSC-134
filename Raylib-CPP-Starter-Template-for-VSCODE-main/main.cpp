#include <iostream>
#include <raylib.h>

using namespace std;

int main () {

    const int screenWidth = 1000;
    const int screenHeight = 600;
    //int ball_x = 100;
    //int ball_y = 100;
    //int ball_speed_x = 5;
    //int ball_speed_y = 5;
    int ball_radius = 15;

    cout << "Hello World" << endl;

    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);
    Vector2 ballPosition = { (float)screenWidth/2, (float)screenHeight/2 };

    while (WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(BLACK);
        //ball_x += ball_speed_x;
        //ball_y += ball_speed_y;

        if (IsKeyDown(KEY_RIGHT)) ballPosition.x += 5.0f;
        if (IsKeyDown(KEY_LEFT)) ballPosition.x -= 5.0f;
        if (IsKeyDown(KEY_UP)) ballPosition.y -= 5.0f;
        if (IsKeyDown(KEY_DOWN)) ballPosition.y += 5.0f;

        // AN -- just testing
        if (ballPosition.x - ball_radius <= 0 ) {
            ballPosition.x += 10.0f;
        }
        if (ballPosition.x + ball_radius >= screenWidth){
            ballPosition.x -= 10.0f;
        }
        if (ballPosition.y + ball_radius >= screenHeight) {
            ballPosition.y -= 10.0f; // any value greater than 2.0f
        }
        if (ballPosition.y - ball_radius <= 0){
            ballPosition.y += 10.0f;
        }

        DrawCircleV(ballPosition , ball_radius, VIOLET);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}