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

int main(void) {
	int choice = 0;
	bool quit = false;

	do {
		clear();
		display_menu();
		choice = get_menu_choice();

		if (choice == 1) {
			print_game_rules();
			pause();
		}
		else if (choice == 2) {

		}
		else {
			quit = true;
		}
	} while (!quit);

	printf("Thanks for playing Yahtzee! See you next time!");
	return 0;
}