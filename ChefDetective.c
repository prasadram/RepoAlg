/*
 * Name : Chef-Detective
 * Date : 07-02-2016
 * */
#include<stdio.h>

int main(){
	int N;
	int i,temp;
	scanf("%d",&N);
	int R[N+1];
	for(i=0;i<N+1;i++)
		R[i]=0;
	for(i=0;i<N;i++){
		scanf("%d",&temp);
		R[temp]=1;
	}
	for(i=1;i<N+1;i++){
		if(R[i]==0){
			printf("%d ",i);
		}
	}
		printf("\n");
	return 0;
}
