/*
 * Name :  Andrash and Stipendium
 * Date : 1/07/2016
 **/
#include <stdio.h>
 
int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N;
	    scanf("%d",&N);
	    int i,score;
	    int failFlag=0,highestFlag=0,sum,avg;
	    sum = 0;
	    for(i=0;i<N;i++){
	        scanf("%d",&score);
	        if(score==2){
	            failFlag=1;
	        }
	        if(score==5){
	            highestFlag=1;
	        }
	        sum = sum + score;
	    }
	    if(failFlag==1 || highestFlag==0){
	        printf("No\n");
	    }else{
	        avg = sum /N;
	        if(avg>=4){
	            printf("Yes\n");
	        }else{
	            printf("No\n");
	        }
	    }
	}
	return 0;
}
