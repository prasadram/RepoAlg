/*
 * Binary Serach Implementation
 * */
#include<stdio.h>

int search(int* numbers, int start, int end, int key);
int main() {
	int n,i;
	printf("Enter no of elements : ");
	scanf("%d", &n);
	int numbers[n], key;
	for (i=0; i<n;i++) {
		scanf("%d", &numbers[i]);
	}
	// In binay search before serach we need to sort the elements, so here we assume the array 
	// is sorted or we will take the input as sorted
	printf("enter the number which you want to search : ");
	scanf("%d", &key);
	printf("element found at location : %d\n", search(numbers, 0, n-1, key));
	return 0;
}

int search(int* numbers, int start, int end, int key) {
	int mid;
	while(start <= end) {
		mid = (start + end) / 2;
		if (numbers[mid] > key) {
			end = mid - 1;
		}else if (numbers[mid] < key) {
			start = mid + 1;
		} else {
			return mid;
		}
		//printf("start: %d end: %d\n", start,end);
	}
	return -1;
}
