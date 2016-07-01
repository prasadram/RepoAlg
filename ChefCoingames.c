/*
 * Name : Chef and Coins Game
 * Date : 06-06-2016
 */

#include <stdio.h>
 
int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    long int N;
	    scanf("%ld",&N);
	    if(N%6==0)
	        printf("Misha\n");
	    else
	        printf("Chef\n");
	}
	return 0;
}
