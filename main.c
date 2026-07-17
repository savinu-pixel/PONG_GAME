#include <stdio.h>



int main(){
	loadHighScores();
	menu();	
	return 0;
}

void menu(){
	int choice;
	do{
		system("cls"): //clears the screen
		
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
		
		
	}while(choice != 4)
}