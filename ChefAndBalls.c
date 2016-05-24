/*
* Name : Chef and Balls
* Date : 09-05-2016
*/

#include <stdio.h>
 
int main(void) {
    int wt;
	printf("1\n");
	printf("4 1 1 3 5\n");
	printf("4 2 2 3 4\n");
	fflush(stdout);
	scanf("%d",&wt);
	switch(wt){
		case -2:
			printf("2\n2\n");
			break;
		case -1:
			printf("2\n4\n");
			break;
		case 0:
			printf("2\n3\n");
			break;
		case 1:
			printf("2\n5\n");
			break;
		case 2:
			printf("2\n1\n");
			break;
	}
	fflush(stdout);
	return 0;
}
 
