#include<stdio.h>
#include<string.h>
#include<assert.h>
int wrong(char s[],char r[]);
int actual(char s[],char r[]);
void quicksort(char a[],int l,int r);
int main()
{
	int T;
	char s[1111],r[1111];
	int i=0;
	assert( scanf("%d",&T) ==1 );
	assert( 1<=T && T<=100 );
		while(T>0)
		{
			assert(scanf("%s%s",s,r)==2);
			if(strlen(s)<=1000 && strlen(r)<=1000 && strlen(r)>=1 && strlen(s)>=1)
			{
			    for(i=0;i<strlen(r);i++)
			    assert('a'<=r[i]&&r[i]<='z');
			    for(i=0;i<strlen(s);i++)
    			    assert('a'<=s[i]&&s[i]<='z');
			if(actual(s,r)==wrong(s,r))
			printf("YES\n");
			else
			printf("NO\n");
			}
			T--;
		}
		return 0;
}
int wrong(char s[],char r[])
{
	int i,res;
	char usedR[26],usedS[26];
	for(i=0;i<26;i++)
	usedR[i]=usedS[i]='N';
    for (i = 0; i < strlen(r); i++)
        usedR[r[i] - 'a'] = 'Y';
    for (i = 0; i < strlen(s); i++)
        usedS[s[i] - 'a'] = 'Y';
    res = 1;
    for( i = 0; i < 26; i++)
        if (usedR[i] !=usedS[i])
            res = 0;
	
    return res;
}
int actual(char s[],char r[])
{
	
	int res,i;
	/*int freqR[26],freqS[26];
	for(i=0;i<26;i++)
	freqR[i]=freqS[i]=0;
	
    for (i = 0; i < strlen(r); i++)
        freqR[r[i] - 'a']++;
    for (i = 0; i < strlen(s); i++)
        freqS[s[i] - 'a']++;
    res = 1;
    for (i = 0; i < 26; i++)
        if (freqR[i] != freqS[i])
            res = 0;
	*/
	quicksort(s,0,strlen(s)-1);
	quicksort(r,0,strlen(r)-1);
	if(strcmp(s,r)==0)
	res=1;
	else
	res=0;
    return res;
}
void quicksort(char a[],int l,int r)
{
	int i=l+1;
	int j=r;
	int p=l;
	int temp;
	for(;;)
	{
		while(a[i]<=a[p] && (i<r))
		{
			i++;
		}
		while(a[p]<a[j] && (j>l))
		{
			j--;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}else
			break;
	}
	temp=a[j];
	a[j]=a[p];
	a[p]=temp;
	if((i-1)>l)
	quicksort(a,l,i-1);
	if(i<r)
	quicksort(a,i,r);
}

