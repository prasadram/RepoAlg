#include<stdio.h>
#include<limits.h>

int main(){
	long long int n,i;
	long long int W,L;
	long long int max=1000000000000000000,min=0,last;
	scanf("%lld %lld %lld",&n,&W,&L);
	long long int H[n];
	long long int R[n];
	for(i=0;i<n;i++){
		scanf("%lld %lld",&H[i],&R[i]);
	}
	max++;
	last = max;
	while(max >= min){
		long long int time = (min + max)/2;
		long long int total=0;
			for(i=0;i<n;i++){
				long long height =H[i]+(time*R[i]);
				if(height >= L)
				total = total + height;
				
			if(total>=W)
				break;
		}
		if(total<W){
			min = time + 1;
		}else{
			last = time;
			max = time - 1;
		}
			//printf("total %lld time %lld last %lld\n",total,time,last);

	}
	printf("%lld\n",(last));
	return 0;
}
