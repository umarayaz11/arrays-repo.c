#include<stdio.h>
int Input(int arr[],int limit)  {
 	
 	for(int i = 0 ; i < limit; i++) {
 		scanf("%d",&arr[i]);
	 }
 }

int Max(int arr[], int limit) {
	
	int max = arr[0];  
	
	for(int i = 1; i < limit; i++) {
		
		if(arr[i] > max) {
		max = arr[i];
		}
	}
	 return max;
}
int main() {
	
	int limit,max;
	
	printf("Enter the limit\n");
	scanf("%d",&limit);
	
	int arr[limit];
	 
	Input(arr,limit);
	max = Max(arr,limit);
	printf("%d",max);
	
}
