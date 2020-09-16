#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main2(int argc, char *argv[]) {
	int a, b, c, d;
	a = 50;
	b = 24;
	c = 68;
	
	d = a*b+c/2;
	printf("\nThe value after a*b+c/2 is: %d", d);
	
	d = a%b;
	printf("\nThe value after a%b is: %d", d);
	
	d = a*b-c;
	printf("\nThe value after a*b-c is: %d", d);
	
	d = a/b+c;
	printf("\nThe value after a/b+c is: %d", d);
	
	d = a+b*c;
	printf("\nThe value after a+b*c is: %d", d);
	
	d = (a+b)*c;
	printf("\nThe value after (a+b)*c is: %d", d);
	
	d = a*(b+c+(a-c)*b);
	printf("\nThe value after a*(b+c+(a-c)*b) is: %d", d);
	
	return 0;
}
