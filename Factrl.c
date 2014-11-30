/*
 * Problem : Factorial
 */
#include<stdio.h>
int main(){
int T;
int N;
int d;
int temp;
int result;
scanf("%d",&T);
while(T--){
scanf("%d",&N);
result=0;
d=5;
temp=N/d;
/* while(temp>0){
result=result+temp;
d=d*5;
temp=N/d;
}*/
while(N>=5){
N=(N<<1)/10;
result=result+N;
}
 
printf("%d\n",result);
}
return 0;
}
