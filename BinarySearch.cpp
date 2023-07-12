#include<stdio.h>
#include"input.h"
#include"sorte.h"

int binarySearch(int arr[],int limit,int num) {
	
	int start = 0;
	int mid;
	limit = limit - 1;
	
	while(start <= limit) {
		
		mid = (start + limit) / 2;
		
		if(num == arr[mid]) {
			
			return mid;
		}
		else if(num > arr[mid]) {
			
			start = mid + 1;
		}
		else {
			
			limit = mid - 1;
		}
	}
      
	  return - 1;	 	
}

int main() {

   	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
		
	int limit;
	
	printf("Enter array limit\n");
	scanf("%d",&limit);
	

	int arr[limit];
	
	input(arr,limit);
	sorte(arr,limit);
    limit = binarySearch(arr,limit,num);
    
    printf("%d\n",limit);
    if(limit == -1 ) {
    	printf("Number not found\n");
	}
	else {
		printf("%d is found at index %d",num,limit);
	}
    }
