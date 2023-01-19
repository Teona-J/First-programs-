// Program prints sum and running values of given n numbers

#include <stdio.h>

int main ()

{ 
	int n, i ;
	unsigned long int value, sum;		// ensures proper calc & format upto n=36

	printf ("Enter an integer:\n");		// print user prompt
	scanf  ("%i", &n);		

	printf( "%9s%12s\n", "Value", "sum");	// print table header titles 	
	i = 1;					// inital condition
	sum = 0;				// inital condition
	value = 1;				// inital condition

	
	while ( i <= n) 			// start loop
	{
		sum = sum + value;		// calc. sum
		printf ("%9li%12li\n", value, sum);	// format column positon up to n=36
		value = value * 2;		// calc. value 
		i++;
	} 

	return 0;

} 	

	

