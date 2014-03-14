/*
	Sum two numbers
	Programmer: Lucas Holt
	date: 8/28/2002
	purpose: This program will take two numbers from input and
       add them together.  It will then display the result.
*/

#include <stdio.h>

main()
{
	/* Declare Variables */
	float num1;
	float num2;
	float result;

	printf( "This program will allow you to sum two numbers.\n" );
	/* Get first number */
	printf( "Please input your first number.\n" );
	scanf( "%f", &num1 );
	/* Get second number */
	printf( "Please input your second number.\n" );
	scanf( "%f", &num2 );

	/* Calculate Result */
	result = num1 + num2;
	/* Display Result */
	printf( "The result of addition is %f", result );

}