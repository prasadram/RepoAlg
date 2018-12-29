/*
 * Hacker Rank
 * */
#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	int  i, grade, temp;
	for(i=0; i< t; i++) {
		scanf("%d", &grade);
		temp = grade;
		if (temp > 37 && (temp % 5) != 0) {
			temp++;
			if ((temp % 5) != 0) {
				temp++;
				if ((temp % 5) == 0) {
					printf("%d\n",  temp);
				} else {
					printf("%d\n", grade);
				}
			} else {
				printf("%d\n", temp);
			}
		} else {
			printf("%d\n", grade);
		}
	}
	return 0;
}
