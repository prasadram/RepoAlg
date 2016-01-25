/*
 * Name: Who dares to be a millionaire 
 * Date: 09-10-2015
 *
 */
#include<stdio.h>

int main(){
	int T,N,i,len,flag;
	long long int w,temp,max;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		char ans[N];
		char ques[N];
		long long int W[N+1];
		flag=0;
		scanf("%s",ans);
		scanf("%s",ques);
		len=0,max=0;
		for(i=0;i<=N;i++){
			scanf("%lld",&W[i]);
		}
		for(i=0;i<N;i++){
			if(ans[i]==ques[i])
				len++;
		}
		if(len==N){
			w=W[len];
		}else{
			for(i=0;i<=len;i++){
					if(max<W[i]){
						max = W[i];
					}
			}
			w=max;
		}
		printf("%lld\n",w);

	}
	return 0;
}
