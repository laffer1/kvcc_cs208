/* Area of a circle */

#include <stdio.h>

int main(void)
{
	float area, radius;	/* var declaration */

	printf( "Enter the value of radius\n" );
	scanf( "%f", &radius );      /* get the input */
	area = 3.14 * radius * radius;
	printf( "the area of the circle is=%f", area );

	return 0;

}