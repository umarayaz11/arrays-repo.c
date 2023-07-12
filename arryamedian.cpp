#include<stdio.h>
#include"input.h"
float MedianArray(int arr[], int limit); 

int main() {
	
	int limit;
	
	printf("Enter a limit\n");
	scanf("%d",&limit);
	
	int arr[limit];
	
	input(arr,limit);
	
	printf("The median is = %f\n",MedianArray(arr,limit));
}

float MedianArray(int arr[], int limit) {
	
	float median = 0;
	
	if(limit % 2 == 0 ) {
		
		 median = (arr[limit / 2] + arr[limit / 2 - 1]) / 2;
		return median;
	}
	else {
		
	return	median = arr[limit / 2];
	}
}
