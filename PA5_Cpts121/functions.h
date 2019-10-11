/*********************************************************************************************
* Programmer: Cole Harrington                                                                *
* Class: CptS 121; Lab Section 10                                                            *
* Programming Assignment: PA5                                                                *
* Date: 10/11/2019                                                                           *
*                                                                                            *
* Description: Devlope and Implement an intereactive two-player Yahtzee Game                 *
*                                                                                            *
*********************************************************************************************/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>



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
void display_menu();

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
int get_menu_choice(void);