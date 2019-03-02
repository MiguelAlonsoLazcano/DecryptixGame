///////////////////////////////////////////////////////////////////////////////
//// Copyright © 2019 
/////////////////////////////////////////////////////////////////////////////////


#include <iostream>

int exclamation_mark = 173;

// CONST
const int MIN_WORDS  = 2;
const int MAX_WORDS  = 26;
const int MIN_POSITIONS = 3;
const int MAX_POSITIONS = 10;
const char *DECRYPTIX_TITLE = "figlet -c \"Decryptix !\"";
const char *CLEAR = "clear";

// VARS
char option;
int round = 1;
int numberWords = 0;
int numberPositions = 0;
bool allowDuplicates = false;

/*
 * Show game description
 * */
void gameDescription()
{
    // TODO std::cout << (char) exclamation_mark
    std::cout << std::endl << std::endl;
    std::cout << "Decryptix! version 0.1" << std::endl;
    std::cout << "copyright (c) 1999. Malonso Associates, Inc.\n" << std::endl;
}

/*
 * Show game instructions
 * */
void gameInstructions()
{
    std::cout << std::endl << std::endl;
    std::cout << "There are two ways to play Decryptix:" << std::endl;
    std::cout << "Try to guess a pattern creaded by me or, " << std::endl;
    std::cout << "I can try it with a pattern created by you.\n" << std::endl;
    std::cout << "If you are the one who will guess, I " << std::endl;
    std::cout << "will generate a pattern ( ej. abcde ). In each " << std::endl;
    std::cout << "turn you will try to guess the pattern, " << std::endl;
    std::cout << "I will tell you each turn how many letters are" << std::endl;
    std::cout << "correct and how many are in the right position." << std::endl;
    std::cout << "The goal is to discovery the code as fast " << std::endl;
    std::cout << "as possible. You determine ho many letters " << std::endl;
    std::cout << "and how many position we can use.\n" << std::endl;
    std::cout << "If I have to guess, you have to create " << std::endl;
    std::cout << "a patter and rate each one of my " << std::endl;
    std::cout << "attempts. " << std::endl;
}

/*
 * Set up initial values
 * */
void gameInitialValues()
{
    std::cout << std::endl << std::endl;
    std::cout << "Number of words (" << MIN_WORDS << "-" << MAX_WORDS << "): " << std::endl;
    std::cin >> numberWords;
    std::cout << "Number of positions (" << MIN_POSITIONS << "-" << MAX_POSITIONS << "): " << std::endl;
    std::cin >> numberPositions;
    std::cout << "Allow duplicates (y/n): " << std::endl;
    std::cin >> option;
}


/*
 * Show menu opitions
 * */
void showMenu()
{
    system(DECRYPTIX_TITLE);

    int n;
    std::cout << "1) Game Instructions" << std::endl;
    std::cout << "2) Game Initial Setup" << std::endl;
    std::cout << "3) About" << std::endl;
    std::cout << "Select and option: ";
    std::cin >> n;
    switch(n)
    {
        case 1:
		gameInstructions();
		break;
        case 2:
		gameInitialValues();
		break;
	case 3:
		gameDescription();
		break;
        default:
		break;
    }
}



int main()
{
    while(1)
    {
	showMenu();
    }
    return 0;
}
