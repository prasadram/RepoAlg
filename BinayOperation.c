#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char s1[1000005],s2[1000005];
		scanf("%s",s1);
		scanf("%s",s2);
		int i=0,ones=0,zeros=0,diff=0,os=0,zs=0;
		long int opp=0,k;
		while(s1[i]!='\0'){
			if(s1[i]!=s2[i]){
				diff++;
			}
			if(s1[i]=='0')
				zeros++;
			else
				ones++;
			if(s2[i]=='0')
				zs++;
			else
				os++;
			i++;
		}
		if(ones>0 && zeros>0){
			printf("Lucky Chef\n");
			k = ones - os;
			if(k<0)
				k = k * -1;
			opp = k;
			diff = diff - k;
			if(diff%2==1)
				opp = opp + (diff/2)+1;
			else
				opp = opp + (diff/2);
			printf("%ld\n",opp);
		}else{
			printf("Unlucky Chef\n");
		}
		//printf("ones:%d zeros:%d diff:%d\n",ones,zeros,diff);
	}
	return 0;
}
