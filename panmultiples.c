#include <stdio.h>
#include <stdlib.h>

int uniqueDigits(int i);
int panmultiple(int i);

int main() {

	int max = 918273645;
	int i, candidate;

	for (i = 9123; i <= 9876; i++) {
		if (uniqueDigits(i) && (candidate = panmultiple(i)) > 0) {
			if (candidate > max) max = candidate;
		}
	}

	printf("Largest 1-9 pandigital 9-digit number that can be formed as the concatenated product of an integer w/ (1,2,...,n) where n > 1 IS %d\n",max);

	return 0;
}

int uniqueDigits(int i) {

	int n = i;
	int digits[9] = {0,0,0,0,0,0,0,0,0};

	while (n > 0) {

		int d = n%10;
		if (d == 0) return 0;		

		if (digits[d-1]) 
			return 0;
		else 
			digits[d-1] = 1;		

		n /= 10;
	}

	return 1;
}

int panmultiple(int i) {

	int n = i*2;
	int newNumber = i*100000 + n;

	if (uniqueDigits(newNumber)) return newNumber;
	return 0;
}
