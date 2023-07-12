#include<stdio.h>
#include"input.h"

int Occurance(int arr[], int limit);
int main() {
	
	int limit;
	
	printf("Enter a limit\n");
	scanf("%d",&limit);//5
	int arr[limit];
	
	input(arr,limit);
	Occurance(arr,limit);
	
}

int Occurance(int arr[], int limit) {
	static int occ = 0,j = 0;
           int arr2[limit];	
           
           for(int i = 0; i< limit; i++) {
           	
           	for(; j < limit; j++) {
           		if(arr2[i] != arr[j]){
				   
           		if( arr[i] == arr[j]) {
           			
           			occ++;
				   }
			}
				   if(occ > 1) {
				   	arr2[i] = arr[i];
				   }
			   }
			   printf("%d\n",occ);
		   }
}
