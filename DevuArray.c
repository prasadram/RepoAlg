/*
 * Name : Devu and an Array
 * Date : 03-06-2016
 * */
#include <stdio.h>
 
int main(void) {
	int N,Q,i;
	scanf("%d %d",&N,&Q);
	long int arr[N],query,max=0,min=1000000001;
	for(i=0;i<N;i++){
	    scanf("%ld",&arr[i]);
	    if(arr[i]>max)
	        max = arr[i];
	   if(arr[i]<min)
	      min = arr[i];
	}
	while(Q--){
	    scanf("%ld",&query);
	    if(query<=max && query>=min){
	        printf("Yes\n");
	    }else{
	        printf("No\n");
	    }
	}
	return 0;
}
