#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int iResult, a = 10, b = 8, c = 6, d = 5, e = 2;
	
	iResult = a - b - c - d;
	printf("\na - b - c - d = %d" , iResult);
	
	iResult = a - b + c - d;
	printf("\na - b + c - d = %d" , iResult);
	
	iResult = a + b / c / d;
	printf("\na + b / c / d = %d" , iResult);
	
	iResult = a + b / c * d;
	printf("\na + b / c * d = %d" , iResult);
	
	iResult = a / b * c * d;
	printf("\na / b * c * d = %d" , iResult);
	
	iResult = a % b / c * d;
	printf("\na % b / c * d = %d" , iResult);
	
	iResult = a % b % c % d;
	printf("\na % b % c % d = %f" , iResult);
	
	iResult = a - (b - c) - d;
	printf("\na - (b - c) - d = %d" , iResult);
	
	iResult = (a - (b - c )) - d;
	printf("\n(a - (b - c)) - d = %d" , iResult);
	
	iResult = a - (b - (c - d));
	printf("\na - (b - (c - d)) = %d" , iResult);
	
	iResult = a - ((b - c) - d);
	printf("\na - ((b - (c - d) = %d" , iResult);
	
	iResult = a % (b % c) * d * e;
	printf("\na % (b % c) * d * e = %d" , iResult);
	
	iResult = a + (b - c) * d - e;
	printf("\na + (b - c) * d - e = %d" , iResult);
	
	iResult = (a + b) * c + d * e;
	printf("\n(a + b) * c + d * e = %d" , iResult);
	
	iResult = (a + b) * (c / d) % e;
	printf("\n(a + b) * (c / d) % e = %d" , iResult);
	
	return 0;
}
