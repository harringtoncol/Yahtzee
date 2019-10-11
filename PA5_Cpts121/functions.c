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