#include<stdio.h>
#include"inputarr.h"

int input(int arr[],int arr2[],int limit);
int arrMatch(int arr[],int arr2[],int limit); 

int main() {
	
	int limit;
	
	printf("Enter a limit\n");
	scanf("%d",&limit);//5
 
       int arr[limit];
        int arr2[limit];
        
        input(arr,arr2,limit);
        arrMatch(arr,arr2,limit);
    //
}

int input(int arr[],int arr2[],int limit) {
	
	for(int i = 0 ;i < limit;i++) {
		scanf("%d",&arr[i]);
	}
	for(int i = 0 ;i < limit;i++) {
		scanf("%d",&arr2[i]);
	}
}

int arrMatch(int arr[],int arr2[],int limit) {
	
	   for(int i = 0 ; i < limit ; i++) {
	   	
	   	int diff = arr[i];
	   	for( int j = 0 ; j < limit ; j++) {
	   		 
	   		if(diff == arr2[j]) {
	   			
	   			    break;
			   }
			   else{
			   	diff = arr[i];
			   }
			   if(j == limit - 1)
			   printf("%d\n",diff);
		   }
		   
	   }
	}
