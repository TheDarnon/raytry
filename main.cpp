#include "raylib.h"
#include<iostream>
using namespace std;
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
	LoadImage("static.webp");
    // Initialization
    //--------------------------------------------------------------------------------------
    int screenWidth = 800;
    int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - 3d picking");
	
	SetTargetFPS(1);
	int number=0;
	int fontsize=48;
	
	while(!WindowShouldClose()){
		number++;
		BeginDrawing();
			ClearBackground(BLUE);
			DrawText(to_string(number).c_str(), screenWidth/2 - fontsize/2, screenHeight/2 - fontsize/2, fontsize, GREEN);
			
		EndDrawing();
	}
    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}