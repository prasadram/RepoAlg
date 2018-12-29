/*
 * Name : Magic Set
 * Date : 09-07-2018
 * */

#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, m;
		scanf("%d %d", &n, &m);
		int number[n], i, j,t,sum;
		for(i=0;i<n;i++){
			scanf("%d", &number[i]);
		}
		int count = 0, k=0, isvalid;
		for(j=0;j<n;j++){
		  isvalid = 0;
		  for(t=1;t<n+1;t++){
		    sum = 0;
		    for(i=j;i<t;i++){
		    	sum = sum + number[i];
		    }
		    if(sum != 0 && sum % m == 0 && isvalid == 0) {
		    	 isvalid = 0;
		    } else {
		    	isvalid = 1;
			//break;
		    }
		  }
		  if(isvalid == 0){
		  	count++;
		  }
		} 
		printf("%d\n", count);
		

	}

}
