#include <stdio.h>

int main()
{
	int n = 37; //check if n is prime
	int i;
	int factors = 0;
	for(i = 1; i <= n; i++)
		factors = (n % i == 0) ? factors + 1 : factors;
	int isprime = (factors == 2) ? 1 : 0;
	// if n is prime, isprime == 1, else isprime == 0
}


