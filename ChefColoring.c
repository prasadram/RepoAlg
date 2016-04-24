/*
 * Name : Chef And Coloring
 * Date : 1-04-2016
 * */
#include<stdio.h>
int main(){
	int T,N,i, result;
	int arr[91];
	char ch;
	char r='R',g='G',b='B';
	int brSum,rgSum,bgSum;
	scanf("%d",&T);
	while(T--){
		scanf("%d\n",&N);
		arr[r]=0;
		arr[g]=0;
		arr[b]=0;
		result=-1;
		for(i=0;i<N;i++){
			scanf("%c",&ch);
			arr[ch]++;
		}
		if(arr[r]==N){
			result = 0;
		}else
		if(arr[b]==N){
			result = 0;
		}else
		if(arr[g]==N){
			result = 0;
		}else{
			brSum = arr[b]+arr[r];
			rgSum = arr[r]+arr[g];
			bgSum = arr[b]+arr[g];
			if(brSum<=rgSum){
				if(brSum<=bgSum){
				  result = brSum;
				}else{
					result = bgSum;
				}
			}else
			if(rgSum<=bgSum){
				result = rgSum;
			}else{
				result = bgSum;
			}
		}
		printf("%d\n",result);


	}
}
