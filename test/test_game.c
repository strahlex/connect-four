#include <stdio.h>
#include "../game.h"
#include <string.h>

#define TEST_CASE_SIZE 8

GameField test_cases[TEST_CASE_SIZE] =
{
    {  // First case @ wins diagonal down.
	{' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' '},
	{'@',' ',' ',' ',' ','@'},
	{'0','@',' ',' ','0','@'},
	{'0','0','@','0','@','@'},
	{'0','0','0','@','@','0'},
    },
    { // Second case 0 wins diagonal up.
	{' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' '},
	{'0',' ',' ',' ',' ','0'},
	{'0','@',' ',' ','0','@'},
	{'0','0','@','0','@','@'},
	{'0','0','0','@','@','0'},
    },
    { // Third case @ wins horizontal.
	{' ',' ','@','@','@','@'},
	{' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' '},
	{'0',' ',' ',' ',' ','@'},
	{'0','@',' ',' ','0','@'},
	{'0','0','@','0','@','@'},
	{'0','0','0','@','@','0'},
    },
    { // Fourth case 0 wins vertical.
	{' ',' ','0',' ',' ',' '},
	{' ',' ','0',' ',' ',' '},
	{' ',' ','0',' ',' ',' '},
	{'0',' ','0',' ',' ','0'},
	{'0','@','@',' ','0','@'},
	{'0','0','@','0','@','@'},
	{'0','0','0','@','@','0'},
    },
    { // Fived case @ wins vertical.
	{' ',' ',' ',' ',' ','@'},
	{' ',' ',' ',' ',' ','@'},
	{' ',' ',' ',' ',' ','@'},
	{'0',' ',' ',' ',' ','@'},
	{'0','@',' ',' ','0','0'},
	{'0','0','@','0','@','@'},
	{'0','0','0','@','@','0'},
    },
    { // Sixed case 0 wins horizontel.
	{' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' '},
	{'0',' ',' ',' ',' ',' '},
	{'0','@',' ',' ','0','0'},
	{'0','0','@','0','@','@'},
	{'0','0','0','0','0','0'},
    },
    { // Seventh case @ wins vertical.
	{'@',' ',' ',' ',' ',' '},
	{'@',' ',' ',' ',' ',' '},
	{'@',' ',' ',' ',' ',' '},
	{'@',' ',' ',' ',' ','@'},
	{'0','@',' ',' ','0','0'},
	{'0','0','@','0','@','@'},
	{'0','0','0','@','@','0'},
    },
    { // Eight case field full.
	{'@','0','0','@','@','0'},
	{'0','0','@','0','@','@'},
	{'@','@','0','@','0','@'},
	{'@','@','0','@','0','@'},
	{'0','0','@','@','0','0'},
	{'0','0','@','0','@','@'},
	{'0','0','0','@','@','0'},
    },
};

GameField gameField;

extern char checkConnects();

int main()
{
    int i;

    for (i = 0; i < TEST_CASE_SIZE; ++i)
    {
	memcpy(gameField, test_cases[i], sizeof(GameField));
	printf("Return val: %c\n",checkConnects());
    }

    return 0;
}
