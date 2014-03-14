
// bubbleSort
// takes an integer array and sorts it
// returns nothing

void bubbleSort( int a[] )
{
    int pass, j, hold;

    for ( pass = 1; pass < = SIZE - 1; pass++ )
    {
        if ( a[j] > a[j+1] )
        {
            hold = a[j];
            a[j] = a [j+1];
            a[j+1] = hold;
        }
    }
}

// binarySearch
// to use this function, array must be sorted.
// takes integer array, query item, low and high values for array
// returns position in array or -1 if not found

int binarySearch( int b[], int searchKey, int low, int high )
{
    int middle;

    while ( low <= high )
    {
        middle = (low + high) / 2;

        if ( searchKey == b[middle] )
        {
            return middle;
        } else if ( searchKey < b[middle] ) {
            high = middle - 1;
        } else {
            low = middle + 1;
        }
    }

    return -1;	// Search item not found
}
            