#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s, m = 3, n = 5, r, t;
	float x = 3.0, y;
	
	t = n/m;
	r = n%m;
	y = n/m;
	t = x*y-m/2;
	x = x*2.0;
	s = (m+n)/r;
	y = --n;
	
	printf("\nt = %d", t);
	printf("\nr = %d", r);
	printf("\ny = %f", y);
	printf("\nt = %d", t);
	printf("\nx = %f", x);
	printf("\ns = %d", s);
	printf("\ny = %f", y);
	
	return 0;
}
