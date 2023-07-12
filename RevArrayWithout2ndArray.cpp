#include<stdio.h>
#include"input.h"
int RevArray(int arr[], int limit) {

	//{1,2,3,4}
	 int lim = limit;
	
	for(int i = 0; i <= limit ; i++) {
		
		arr[i] = arr[i] + arr[limit] ;//5
		arr[limit] = arr[i] - arr[limit] ;//
		arr[i] = arr[i] - arr[limit] ;//4
		limit--;//1
	}
	for(int i = 0; i <= lim ; i++) {
		
		printf("%d",arr[i]);
	}
} 
int main() {
	
		int limit;
	
	printf("Enter the limit\n");
	scanf("%d",&limit);
	int arr[limit];
	
	input(arr,limit);
	RevArray(arr,limit - 1);
}
