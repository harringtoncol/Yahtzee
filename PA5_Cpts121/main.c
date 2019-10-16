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
	int choice = 0, turn = 0;
	bool quit = false;
	int dice[] = { 0,0,0,0,0 };
	int player_points[13][2] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 }; 
	srand(time(NULL));

	

	do {
		//clear();
		display_menu();
		choice = get_menu_choice();

		if (choice == 1) {
			print_game_rules();
			pause();
		}
		else if (choice == 2) {
			do {
				for (int i = 0; i < 2; i++) {
					clear();
					printf("Player %d it is your turn", (i + 1));
					

					for (int i = 0; i < 5; i++) {
						dice[i] = roll_die();
						printf("%d\n", dice[i]);
					}
					for (int i = 0; i < 2; i++) {
						roll_again(dice);


						for (int i = 0; i < 5; i++) {

							printf("%d\n", dice[i]);
						}

					}

					scorecard(player_points[0], i);
				}

				turn++;
			} while (turn < 14);








		}
		else {
			quit = true;
		}
	} while (!quit);

	printf("Thanks for playing Yahtzee! See you next time!");
	return 0;
}