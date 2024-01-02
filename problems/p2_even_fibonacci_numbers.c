/*
PROJECT EULER PROBLEM 2 - Even Fibonacci Numbers
------------------------------------------------
Each new term in the Fibonacci sequence is generated by 
adding the previous two terms. 

By considering the terms in the Fibonacci sequence 
whose values do not exceed four million, find the sum of 
the even-valued terms.

*/

#include <stdio.h>
#include <stdbool.h>

#define UPPER_LIMIT 4000000

int main(){

	int sum = 0;

	int a = 0, b = 1;
	int fib = 0;

	while(true) {
		fib = a+b;

		// is fib greater than upper limit
		if(fib > UPPER_LIMIT){
			break;
		}

		// check if fib value is even
		if (fib % 2 == 0) {
			sum += fib;
		}

		a = b;
		b = fib;
	}

	printf("Sum of all even fibonacci sequences: %d\n", sum);
	return 0;
}