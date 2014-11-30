    #include<stdio.h>
    #include<assert.h>
    /*
    * Name: Count Substrings 
    */
    int main()
    {
    int T,N;
    unsigned long long int Count=0;
    assert(scanf("%d",&T)==1);
    int i;
    int result;
    if((1<=T) && (T<=100000))
    {
    while(T--)
    {
    assert(scanf("%d",&N)==1);
    char str[N];
    if((1<=N) && (N<=100000))
    {
    assert(scanf("%s",str)==1);
    Count=0;
    for(i=0;i<N;i++)
    {
    if(str[i]=='1')
    Count++;
    }
    printf("%llu\n",((Count*(Count+1))/2));
    }
    }
    }
    return 0;
    }

