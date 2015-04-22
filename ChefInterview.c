/*
 * Name : Chef and Interview
 * Date : 03-04-2015
 */
    #include <stdio.h>
    #include <math.h>
    int main(void) {
    int T;
    long long int N;
    long long int i,j;
    long long int sqr;
    long long int sum;
    scanf("%d",&T);
    while(T--){
    sum=0;
    scanf("%lld",&N);
    sqr = sqrt(N);
    for(i=2;i<=sqr;i++)
    {
    if(N%i == 0)
    {
    j = N/i;
    if(j == i)
    sum = sum + i;
    else
    sum = sum + i + j;
    }
    }
    if(N==1)
    sum = 1;
    else
    sum = sum + N + 1;
    printf("%lld\n",sum);
    }
    return 0;
    } 
