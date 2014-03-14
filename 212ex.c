/*
	Programmer: Lucas Holt
	Poll program
*/

#include <stdio.h>

#define RESP_SIZE 40
#define FREQ_SIZE 11

int main( void )
{
	int myAnswer, userRating;
	int userResponse[RESP_SIZE] = { 3, 2, 10, 2, 4, 5, 7, 6, 9, 10, 5, 3, 2, 6,
		3, 5, 3, 7, 8, 9, 6, 7, 8, 9, 4, 5, 6, 7, 3, 5, 6, 3, 4, 5, 8, 9, 4, 1, 2 };
	int myFreq[FREQ_SIZE] = {0};

	for ( myAnswer = 0; myAnswer <= RESP_SIZE - 1; myAnswer++ )
	{
		++myFreq[userResponse[myAnswer]];
	}

	printf( "%s%17s\n", "Rating", "Frequency" );

	for( userRating = 0; userRating <= FREQ_SIZE -1; userRating++ )
	{
		printf( "%6d%17d\n", userRating, myFreq[userRating] );
	}

	return 0;
}