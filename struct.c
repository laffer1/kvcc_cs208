/* Customer Payment Program

	Typed in by Lucas Holt
	from 11.14
*/

#include <stdio.h>

void readinput( int i );
void writeoutput(int i);

struct data {
	int month;
	int day;
	int year;
};

struct account {
	char name[80];
	char street[80];
	char city[80];
	int acct_no;      	/* positive integer */
	char acct_type;		/* C (current), 0 (overdue) or D (delinquent) */
	float oldbalance;    /* non neg */
	float newbalance;    /* non neg */
	float payment;       /* non neg */
	struct data lastpayment;
} customer[100];

main()
{
	int i, n;
	printf( "CUSTOMER BILLING SYSTEM\n\n" );
	printf( "How many customers are there? ");
	scanf( "%d", &n );

	for( i = 0; i < n; i++ )
	{
		readinput( i );
		/* determine account status */

		if ( customer[i].payment > 0 )
		{
			customer[i].acct_type = (customer[i].payment < 0.1 * customer[i].oldbalance) ? 'O' : 'C';
		} else {
			customer[i].acct_type = (customer[i].oldbalance > 0 ) ? 'D' : 'C';
		}

		/* Adjust account balance */

		customer[i].newbalance = customer[i].oldbalance - customer[i].payment;
	};

	for ( i = 0; i < n; ++i )
		writeoutput(i);

		return 0;

}

void readinput( int i )

/* read input data and update record for each customer */

{
	printf( "\nCustomer no. %d\n", i + 1 );
	printf( "	Name: " );
	scanf( " %[^\n]", customer[i].name );
	printf( "	Street: " );
	scanf( " %[^\n]", customer[i].street );
	printf( "	City: " );
	scanf( " %[^\n]", customer[i].city );
	printf( "	Account Number: " );
	scanf( "%d", &customer[i].acct_no );
	printf( "	Previous balance: " );
	scanf( "%f", &customer[i].oldbalance );
	printf( "	Current payment: " );
	scanf( "%f", &customer[i].payment );
	printf( "	Payment date (mm/dd/yyyy):	");
	scanf( "%d/%d/%d", &customer[i].lastpayment.month,
							 &customer[i].lastpayment.day,
							 &customer[i].lastpayment.year);

	return;
}

void writeoutput( int i )

/* display current information for each customer */

{
	printf( "\nName:	%s", customer[i].name );
	printf( "	Account Number: %d\n", customer[i].acct_no);
	printf( "Street: %s\n", customer[i].street);
	printf( "City: 	%s\n\n", customer[i].city );
	printf( "Old balance: %7.2f", customer[i].oldbalance );
	printf( "	Current payment: %7.2f", customer[i].oldbalance );
	printf( "	New balance: %7.2f\n\n", customer[i].newbalance );
	printf( "Account Status: " );

	switch ( customer[i].acct_type ) {
		case 'C':
			printf(" CURRENT\n\n");
			break;
		case 'O':
			printf( "OVERDUE\n\n");
			break;
		case 'D':
			printf( "DELINQUENT\n\n");
			break;
		default:
			printf( "ERROR\n\n" );
	}
	return;
}
