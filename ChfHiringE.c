#include <stdio.h>
#include <math.h>
 
int main(void) {
	    int T;
    scanf("%d",&T);
    while(T--){
        long long int k;
        long long int dv = 3814697265625;
        long long int factor = 2000000000000000000;
        long long int result=0;
        scanf("%lld",&k);
        if(k<=5){
            if(k==1)
                printf("0\n");
            else{
                k--;
                printf("%lld\n",k*2);
            }
        }else{
            k--;
            while((k/dv)<=0){
                dv = dv /5;
                factor = factor/10;
            }
            do{
                result = result + (k/dv)*factor;
                k = k%dv;
                dv = dv / 5;
                factor = factor /10;
            }while((k%dv)>0);
            if(k>=5){
                result = result + (k/dv)*factor;
                k=k%5;
            }
            result = result + (k*2);
            printf("%lld\n",result);
        }
    }
	return 0;
}
 
