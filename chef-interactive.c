/*
 * Name: Chef and interactive Contests
 * Date: 07-12-2018 */
#include<stdio.h>

int main() {
	int n,r,i;
	scanf("%d %d", &n, &r);
	while(n--) {
		int R;
		scanf("%d", &R);
		if(R < r) {
			printf("Bad boi\n");
		} else {
			printf("Good boi\n");
		}
	}
	return 0;
}
