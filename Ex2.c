#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float cm, ft, inch;
	
	printf("Input centimeter: ");
	scanf("%f", &cm);
	
	inch = cm / 2.54;
	ft = inch / 12;
	
	printf("\n%.1f centimeter is %.1f feet", cm, ft);
	printf("\n%.2f centimeter is %.1f inches", cm, inch);
	
	return 0;
}
