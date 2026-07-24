#include <stdio.h>
#include <stdlib.h> //for system();
#include <conio.h> //kbhit(),getch()
#include <windows.h> //sleep(),gotoxy()

void menu();
void loadHighScores();
void startGame();
void instructions();
void displayResult();

#define WIDTH 40 
#define HEIGHT 20

int main(){
	loadHighScores();
	menu();	
	return 0;
}

void menu(){
	int choice;
	do{
		system("cls"); //clears the screen
		
		printf("************************\n");
        printf("       PONG GAME\n");
        printf("************************\n");
		printf("========================\n");
        printf("1. Start Game\n");
        printf("2. View Instructions\n");
        printf("3. View High Scores\n");
        printf("4. Exit\n");
		printf("========================\n");
        printf("************************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
		printf("************************\n");
		while (getchar() != '\n'); //clear the input buffer
		
		
		switch(choice){
			
			case 1:
				printf("Loading ...\n");
				printf("Starting the game...\n");
				startGame();
				break;
			case 2:
				instructions();
				break;
			case 3:			
				displayResult();
				break;
			case 4:
				printf("GOOD BYE !\n");
				break;
			default:
				printf("Invaild Choice,Try Again.\n");
		}
		
	}while(choice != 4);
	
}

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	
}
void loadHighScores(){
	//TODO
	//load  scores from a file
	printf("High scores");
}

void instructions(){
	//TODO
	//instructions
	printf("instructions");
}
void startGame(){
	int ballX = WIDTH/2;
	int ballY = HEIGHT/2;
	int dx = 1; //moves right each frame
	int dy = 1; //moves down each frame
	
	system("cls");
	while(!kbhit()){ //runs untill any key is pressed
		gotoxy(ballX,ballY);
		printf(" "); //erase older position
		
		ballX += dx;
		ballY += dy;
		
		//code for bounce off walls
		if(ballX <= 0 || ballX >= WIDTH){
			dx = -dx;
		}
		if(ballY <= 0 || ballY >= HEIGHT){
			dy = -dy;
		}
		
		gotoxy(ballX,ballY);
		printf("0");  //draw new position
		
		Sleep(50); // CONTROLS SPEED 
				   // smaller = faster
				   // larger = slower
	}
	getch();  //swallow the keypress so it doesn't leak into the menu
	 
}

void displayResult(){
	//TODO
	//result reading...
	printf("result reading...");
}