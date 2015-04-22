/*
 * Name : Broken Telephone
 * Date : 03-04-2014
 *
 */
 #include<stdio.h>
 int main()
 {
 	int T;
	int N;
	long int msg;
	long int msg1;
	int i;
	int count;
	int flag;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		scanf("%ld",&msg);
		count=0;
		flag=0;
		for(i=1;i<N;i++)
		{
			scanf("%ld",&msg1);
			if(msg!=msg1){
			   if(flag==0){
			     count=count+2;
			     flag=1;
			     }
			   else{
			     count++;
			     }
			 }
			else
			 flag=0;
			 msg = msg+msg1;
			 msg1 = msg-msg1;
			 msg = msg-msg1;
		}
		printf("%d\n",count);
	}
 	return 0;
 }
