#include<stdio.h>
#include"input.h"

int main() {
	
	int limit;
	
	printf("Enter a limit\n");
	scanf("%d",&limit);
	
	int arr[limit];
	
	input(arr,limit);
	
	for(int i = 0; i < limit ; i++ ) {
		
		printf("%d ",arr[i]);
	}
	printf("\n\nArray after sorting\n\n");
	
	for(int i = 0 ; i < limit - 1 ; i++) {
		for(int j = 0; j < limit - 1; j++) {
			//{1,2,3,4,6,9}
			if(arr[j] > arr[j + 1]) {
				
				int temp = arr[j];//6
				arr[j] = arr[j + 1];//1
				arr[j + 1] = temp;//6
			}
		}
	}
	
	for(int i = 0; i < limit ; i++ ) {
		
		printf("%d ",arr[i]);
	}
} 
