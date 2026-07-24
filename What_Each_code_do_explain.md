-- First building Stage --
* ball bouncing inside the wall

1 . Includes

#include <conio.h>
* gives kbhit() and getch() for keyboard input that doesnt pause the programme.
#include <windows.h>
* Sleep() for timing and SetConsoleCursorPosition() and gotoxy() for moving the cursor without clearing the whole screen.

2. Play Area Constants
#define WIDTH 40
#define HEIGHT 20
* boundaries of the game area.

3. Ball State Variables
dx/dy - direction of travel
ballX/ballY - current position

4. The Animation Loop
while(!kbhit()) - *keep looping untill any key is pressed. (kbhit() - checks for keypress without pausing the execution).
gotoxy(ballX, ballY); printf(" ");  - *moves the cursor to the balls old position and prints a blank space to erase it.

ballX += dx; / ballY += dy; - *moves the ball one step in its current direction each frame.

if(ballX <= 0 || ballX >= WIDTH) dx = -dx; - *check if the ball hit the left or right wall if so reverse the direction.
if(ballY <= 0 || ballY >= HEIGHT) dy = -dy; - *check for top and bottom walls.

gotoxy(ballX, ballY); printf("O"); - *draw a ball at its new position.

Sleep( ); - *pauses between frames
getch(); - *once a key is pressed the loop ends 