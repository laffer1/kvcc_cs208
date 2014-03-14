/*
	Sort program
	quiz
	written by: Lucas Holt

	Sorts items into ascending order

*/

#include <stdio.h>

void bubbleSort( int a[] );
void displayArr( int a[] );

#define SIZE 10

int main( void )
{
	int a[10] = { 34, 89, 76, 56, 9, 67, 56, 12, 98, 45 }

	printf( "Array Unsorted\n\n" );
	displayArr( a[] );

	bubbleSort( a[] );
	printf( "\n\nArray Sorted\n\n" );
	displayArr( a[] );

	return 0;
}

void bubbleSort( int a[] )
{
	 int pass, hold;
	 int i = 0;

	 for ( pass = 1; pass < = SIZE - 1; pass++ )
	 {
		  if ( a[i] > a[i+1] )
		  {
				hold = a[i];
				a[i] = a [i+1];
				a[i+1] = hold;
		  }
	 }
}

void displayArr( int a[] )
{
	int i;

	for ( i = 0; i < SIZE; i++ )
	{
		printf( "%d\n", a[i] );
	}
}
