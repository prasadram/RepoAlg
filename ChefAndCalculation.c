/*
 * Name : Chef and calculation
 * Date : 07-09-2016
 */
#include<stdio.h>


int getNonZeroMin(int arr[]);
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i;
		scanf("%d",&n);
		int scores[n];
		for(i=0;i<n;i++){
			int types[6],k=0,score=0,min;
			types[0]=0,types[1]=0,types[2]=0,types[3]=0,types[4]=0,types[5]=0;
			int ccks,j,temp,nonzero=0;
			scanf("%d",&ccks);
			for(j=0;j<ccks;j++){
				scanf("%d",&temp);
				switch(temp){
					case 6:
					   types[5]++;
					   break;
					case 1:
					   types[0]++;
					   break;
					case 2:
					   types[1]++;
					   break;
					case 3:
					   types[2]++;
					   break;
					case 4:
					   types[3]++;
					   break;
					case 5:
					   types[4]++;
					   break;
				}
			}
			int counter = 0;
			score = ccks;
			do
			{
				min = getNonZeroMin(types);
				counter = 0;
				for(k=0;k<6;k++){
					if(types[k]>0){
						counter++;
						types[k]=types[k]-min;
					}
				}
				if(counter==6){
					score = score + 4*min;
				}else
				if(counter==5){
					score = score + 2*min;
				}else
				if(counter>=4){
					score = score + 1*min;
				}
			}while(counter>=4);
			scores[i]=score;
		}
		int tieflag=0;
		int max1=0,max2=0;
		int maxcount,index=-1;
		for(i=0;i<n;i++){
			if(max1<scores[i]){
				max1=scores[i];
				max2=scores[i];
				maxcount=1;
				index=i;
			}else
			if(max1==scores[i]){
				maxcount++;
			}
		}
		if(maxcount>=2){
			printf("tie\n");
		}else
		if((index+1)==1){
			printf("chef\n");
		}else{
			printf("%d\n",(index+1));
		}
	}
	return 0;
}
int getNonZeroMin(int arr[]){
	int min = 7,i=0;
	for(i=0;i<6;i++){
		if(arr[i]>0 && arr[i]<min){
			min = arr[i];
		}
	}
	return min;
}
