#include <stdio.h>
#include <stdlib.h> //for system();

void menu();
void loadHighScores();
void startGame();
void instructions();
void displayResult();



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
		
		if(choice !=  4 ){
			printf("\nPress Enter to continue...");
			getchar();
		}
		
		
	}while(choice != 4);
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
	//TODO
	//Game starting..
	printf("Game starting..");
}

void displayResult(){
	//TODO
	//result reading...
	printf("result reading...");
}