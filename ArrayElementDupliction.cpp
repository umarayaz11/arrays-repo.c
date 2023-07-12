#include<stdio.h>
#include"input.h"

void DuplicatArray(int arr[],int limit);
int main() {
	
	int limit;
	
	printf("Entera limit\n");
	scanf("%d",&limit);
	
	int arr[limit];
	
	input(arr,limit);
	DuplicatArray(arr,limit);
}

void DuplicatArray(int arr[],int limit) {
	
	int count = 0;
	//1,3,1,2,3
	for(int i = 0 ; i < limit ; i++) {
		
		for(int j = i + 1 ; j < limit ; j++) {
			
			if(arr[i] == arr[j]) {
				
				count++;//1
			} 
		}
		if(count >= 1) {
			
			printf("%d is a duplicate element\n",arr[i]);
		}
		count = 0;
	}
}
