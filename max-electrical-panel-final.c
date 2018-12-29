/*
 * Name: Max and Electerical Panel
 * Date: 10-12-208 */
#include<stdio.h>

int main() {
	int n,c;
	scanf("%d %d", &n, &c);
	int start = 1, end = n;
	int temp = n, quo=0, index = 0;
	int status;
	int mid;
	int cost = 0, count=1, i, circ=0;
	if (n > 1000) {
		start = 0;
		do { 
			while(temp%4!=0) {
				temp += count;
				count++;
			}
			count--;
			quo = temp / 4;
			index = start + quo;
			while(index <= (n+count)) {
				printf("1 %d\n", index);
				fflush(stdout);
				cost++;
				scanf("%d", &status);
				if (status == 1) {
					printf("2\n");
					fflush(stdout);
					cost += c;
					end = index;
					start = index - quo;
					temp = end - start;
					circ = index;
					break;
				} else if (status == 0){
					start = index + 1;
					index = index + quo;
				}
				if (index == circ) {
					end = index;
					start = index - quo;
					temp = end - start;
					break;
				}
			}
			count = 1;
		}while((end - start) >= 900);

	}

	for(i=start;i<=end;i++){
		printf("1 %d\n", i);
		fflush(stdout);
		scanf("%d", &status);
		if (status == 1) {
			break;
		}
		cost++;
	}
	//printf("cost %d\n", cost);
	printf("3 %d\n",i);
	fflush(stdout);
	return 0;
}
