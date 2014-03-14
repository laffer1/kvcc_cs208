/*
	Reorder numbers
	written by lucas holt

	program reorders a one dimensional array
*/

#include <stdio.h>
#include <stdlib.h>

void reorder( int n, int *x );

int main( void )
{
	int i, n, *x;

	/* read in a value for n */
	printf( "\nHow many numbers will be entered? " );
	scanf( "%d", &n );
	printf( "\n" );

	/* allocate memory */
	x = ( int * ) malloc( n * sizeof( int ) );

	/* read in the list of number */
	for ( i = 0; i < n; i++ )
	{
		printf( "i = %d	x = ", i + 1 );
		scanf( "%d", x + i );
	}

	/* reorder all array elements */
	reorder( n, x );

	/* dispaly the reordered list of numbers */
	printf( "\n\nReordered List of Numbers:\n\n" );
	for ( i = 0; i < n; i++ )
	{
		printf( "i = %d	x = %d\n", i + 1, *( x + i ) );
	}

	return 0;
}

void reorder( int n, int *x )
{
	int i, item, temp;

	for ( item = 0; item < n - 1; ++item )
	{

		/* find the smallest of all remaining elements */
		for ( i = item + 1; i < n; i++ )
		{
			if ( *(x + i) < *(x + item) )
			{
				/* interchange two elements */
				temp = *(x + item);
				*(x + item) = *(x + i);
				*(x + i) = temp;
			}
		}
	}
}

