/*********************************************************************************************
* Programmer: Cole Harrington                                                                *
* Class: CptS 121; Lab Section 10                                                            *
* Programming Assignment: PA5                                                                *
* Date: 10/11/2019                                                                           *
*                                                                                            *
* Description: Devlope and Implement an intereactive two-player Yahtzee Game                 *
*                                                                                            *
*********************************************************************************************/
#include "functions.h"

/*
* Function: display_menu()
* Date Created: 10/4/2019
* Date Last Modified: 10/4/2019
* Description:  Displays the main menu
* Input parameters: Void
* Returns: Void
* Preconditions: None, first thing that is called
* Postconditions: Will have printed menu to the console
*/
void display_menu() {
	printf("---------Welcome to Yahtzee----------- \n	1.Print Game Rules"
		"\n	2.Start a game of Yahtzee"
		"\n	3.Exit\n");
}

/*
* Function: get_menu_choice()
* Date Created: 10/4/2019
* Date Last Modified: 10/11/2019
* Description: Asks for a number corisponding to the option they want from the menu, makes sure it works.
* Input parameters: Void
* Returns: Integer
* Preconditions: Already called display menu now asking user what choice they want
* Postconditions: returns a number based on what choice they pick
*/
int get_menu_choice(void) {
	int num = 0;

	bool num_okay = true;

	do {
		num_okay = true;
		scanf("%d", &num);

		if (num > 4 || num < 1) {

			num_okay = false;
			printf("Please enter a valid number:");
		}
	} while (!num_okay);

	return num;
}

/*
* Function: print_game_rules()
* Date Created: 10/4/2019
* Date Last Modified: 10/11/2019
* Description:  prints out the game rules
* Input parameters: Void
* Returns: Void
* Preconditions: Called menu and user inputed 4
* Postconditions: prints out game rules;
*/
void print_game_rules(void) {
	clear();
	printf("\"*The scorecard used for Yahtzee is composed of two sections. A upper section and a lower section. \n"
		" *A total of thirteen boxes or thirteen scoring combinations are divided amongst the sections. \n"
		" *The upper section consists of boxes that are scored by summing the value of the dice matching the faces of the box.\n"
		" *If a player rolls four 3's, then the score placed in the 3's box is the sum of the dice which is 12. \n"
		" *Once a player has chosen to score a box, it may not be changed and the combination is no longer in play for\n future rounds.\n"
		" *If the sum of the scores in the upper section is greater than or equal to 63, \n then 35 more points are added to the players overall score as a bonus.\n"
		" *The lower section contains a number of poker like combinations.\" (O\'fallon)");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

/*
* Function: pause()
* Date Created : 9 / 11 / 2019
* Date Last Modified : 10/4 / 2019
* Description : pauses the code and asks the user to press a key
* to proceed
* Input parameters : None
* Returns : Nothing
* Preconditions : Has to be a windows computer
* Postconditions : Prompts user to press key to continue and returns clearing menu space
*/
void pause() {

	printf("\n");



	system("pause");
	clear();
}

/*
* Function: get_initial_balance()
* Date Created: 10/4/2019
* Date Last Modified: 10/4/2019
* Description:  clears the console
* Input parameters: Void
* Returns: void
* Preconditions: none
* Postconditions: clears screen
*/
void clear(void) {

	system("cls");
}

/*
* Function: roll_die()
* Date Created: 10/4/2019
* Date Last Modified: 10/11/2019
* Description:  Rolls one die
* Input parameters: void
* Returns: integer
* Preconditions:
* Postconditions: returns a value between 1 and 6 simulating the roll of the dice
*/
int roll_die(void) {
	int value = 0;

	value = rand() % 6 + 1;

	return value;
}

/*
* Function: roll_again()
* Date Created: 10/11/2019
* Date Last Modified: 10/11/2019
* Description:  Asks if user wants to roll dice again
* Input parameters: array
* Returns: void
* Preconditions:
* Postconditions: returns array of 0 if doesnt want to be rolled again 1 if wants to be rolled agin 
*/

void roll_again(int dice_array[]) {
	int num = 0;
	printf("How many dice would you like to re-roll?");
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		int dice_num = 0;
		printf("Which dice would you like to re-roll? (1-5)");
		scanf("%d", &dice_num);
		
		dice_array[dice_num - 1] = roll_die();


	}

}

/*
* Function: scorecard()
* Date Created: 10/11/2019
* Date Last Modified: 10/11/2019
* Description:  Prints out choices user can pick to get scored, then scores them with that. 
* Input parameters: array, array, int
* Returns: void
* Preconditions: Have completely rolled out your 3 turns
* Postconditions: updates points earned at end of roll.
*/

void scorecard(int *player_points[], int turn, int dice[]) {
	int choice = 0;
	char choices[13][25] = { "1. Sum of 1's", "2. Sum of 2's", "3. Sum of 3's", "4. Sum of 4's", "5. Sum of 5's", "6. Sum of 6's","7. Three-of-a-kind", "8. Four-of-a-kind",
	"9. Full house", "10. Small straight", "11. Large straight", "12. Yahtzee" };

	printf("Which thingy would you like to do?\n");
	
	for (int i = 0; i < 14; i++) {

		if (player_points[i] == -1) {
			printf("%s\n", choices[i]);
		}

		}	
	do {
		scanf("%d", &choice);
		if (player_points[choice] != -1) {
			printf("Please enter an open choice");
		}

	} while (player_points[choice] != -1);
	
	if (choice == 1) {
		player_points[0] == 0;
		for (int i = 0; i < 5; i++) {
			if (dice[i] == 1)
				player_points[0] += 1;
		}
	}
	else if (choice == 2) {
		player_points[1] == 0;
		for (int i = 0; i < 5; i++) {
			if (dice[i] == 2)
				player_points[1] += 1;
		}
	}
	else if (choice == 3) {
		player_points[2] == 0;
		for (int i = 0; i < 5; i++) {
			if (dice[i] == 3)
				player_points[2] += 1;
		}
	}
	else if (choice == 4) {
		player_points[3] == 0;
		for (int i = 0; i < 5; i++) {
			if (dice[i] == 4)
				player_points[3] += 1;
		}
	}
	else if (choice == 5) {
		player_points[4] == 0;
		for (int i = 0; i < 5; i++) {
			if (dice[i] == 5)
				player_points[4] += 1;
		}
	}
	else if (choice == 6) {
		player_points[5] == 0;
		for (int i = 0; i < 5; i++) {
			if (dice[i] == 6)
				player_points[5] += 1;
		}
	}
	else if (choice == 7) {
		player_points[6] == 0;
		bool works = false;
		int dice_amts[6] = { 0 };
		for (int i = 0; i < 5; i++) {
			dice_amts[dice[i]]++;
		}
		for (int i = 0; i < 5; i++) {
			if (dice_amts[i] == 3) {
				works = true;
			}
		}
		if (works) {
			for (int i = 0; i < 5; i++) {
				player_points[6] += dice[i];
			}
		}

	}
	else if (choice == 8) {
		bool works = false;
		player_points[7] == 0;
		int dice_amts[6] = { 0 };
		for (int i = 0; i < 5; i++) {
			dice_amts[dice[i]]++;
		}
		for (int i = 0; i < 5; i++) {
			if (dice_amts[i] == 4) {
				works = true;
			}
		}
		if (works) {
			for (int i = 0; i < 5; i++) {
				player_points[7] += dice[i];
			}
		}
	}
	else if (choice == 9) {
		bool works = false;
		bool works_as_well = false;
		int dice_amts[6] = { 0 };
		for (int i = 0; i < 5; i++) {
			dice_amts[dice[i]]++;
		}
		for (int i = 0; i < 5; i++) {
			if (dice_amts[i] == 3) {
				works = true;
			}
			if (dice_amts[i] == 2) {
				works_as_well = true;
			}
		}
		if (works && works_as_well) {
			for (int i = 0; i < 5; i++) {
				player_points[8] = 25;
			}
		}
	}
	else if (choice == 10) {
		if (dice[0] == 1 && dice[1] == 2 && dice[2] == 3 && dice[3] == 4 && dice[4] == 5 || dice[1] == 2 && dice[2] == 3 && dice[3] == 4 && dice[4] == 5 && dice[5] == 6) {
			player_points[10] == 30;
		}
	}
	else if (choice ==11) {
		if (dice[0] == 1 && dice[1] == 2 && dice[2] == 3 && dice[3] == 4 && dice[4] == 5 && dice[5] == 6) {
			player_points[10] == 40;
		}
	}
	else if (choice == 12) {
	bool works = false;
	int dice_amts[6] = { 0 };
	for (int i = 0; i < 5; i++) {
		dice_amts[dice[i]]++;
	}
	for (int i = 0; i < 5; i++) {
		if (dice_amts[i] == 5) {
			works = true;
		}
	}
	if (works) {
		for (int i = 0; i < 5; i++) {
			player_points[11] = 50;
		}
	}
	}
	




}