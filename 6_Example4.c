#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main4(int argc, char *argv[]) {
	
	printf("A string in various form:\n");
	printf("Without any format command:\n");
	printf("Good day Mr.Dung. \n");
	printf("With format command but without any modifier:\n");
	printf("[%s]\n","Good day Mr.Dung.");
	printf("With digit string 4 as modifier:\n");
	printf("[%4s]\n","Good day Mr.Dung.");
	printf("With digit string 19 as modifier:\n");
	printf("%[19s]\n","Good day Mr.Dung.");
	printf("With digit string 23 as modifier:\n");
	printf("[%23s]\n","Good day Mr.Dung.");
	printf("With digit string 25.4 as modifier:\n");
	printf("[%25.4s]\n","Good day Mr.Dung.");
	printf("With - and digit string 25.4 as modifier:\n");
	printf("[%-25.4s]\n","Good day Mr.Dung.");
	
	return 0;
}
