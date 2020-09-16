#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int iResult, a = 10, b = 8, c = 6, d = 5, e = 2;
	
	iResult = a - b - c - d;
	printf("\n1.a - b - c - d = %d" , iResult);
	
	iResult = a - b + c - d;
	printf("\n2.a - b + c - d = %d" , iResult);
	
	iResult = a + b / c / d;
	printf("\n3.a + b / c / d = %d" , iResult);
	
	iResult = a + b / c * d;
	printf("\n4.a + b / c * d = %d" , iResult);
	
	iResult = a / b * c * d;
	printf("\n5.a / b * c * d = %d" , iResult);
	
	iResult = a % b / c * d;
	printf("\n6.a % b / c * d = %d" , iResult);
	
	iResult = a % b % c % d;
	printf("\n7.a %% b %% c %% d = %f" , iResult);
	
	iResult = a - (b - c) - d;
	printf("\n8.a - (b - c) - d = %d" , iResult);
	
	iResult = (a - (b - c )) - d;
	printf("\n9.(a - (b - c)) - d = %d" , iResult);
	
	iResult = a - (b - (c - d));
	printf("\n10.a - (b - (c - d)) = %d" , iResult);
	
	iResult = a - ((b - c) - d);
	printf("\n11.a - ((b - (c - d) = %d" , iResult);
	
	iResult = a % (b % c) * d * e;
	printf("\n12.a %% (b %% c) * d * e = %d" , iResult);
	
	iResult = a + (b - c) * d - e;
	printf("\n13.a + (b - c) * d - e = %d" , iResult);
	
	iResult = (a + b) * c + d * e;
	printf("\n14.(a + b) * c + d * e = %d" , iResult);
	
	iResult = (a + b) * (c / d) % e;
	printf("\n15.(a + b) * (c / d) %% e = %d" , iResult);
	
	return 0;
}
