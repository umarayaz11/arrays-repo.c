#include<stdio.h>
#include"input.h"

int main() {
	
	int limit;
	
	printf("Entera limit\n");
	scanf("%d",&limit);
	
	int arr[limit];
	
	input(arr,limit);
	
	int larg = arr[0],seclarg = arr[0];
	
	for(int i = 0; i < limit ; i++ ) {
		
		if(arr[i] > larg) {
			
			seclarg = larg;
			larg = arr[i];
		}
		else if(arr[i] < larg && arr[i] > seclarg) {
			
			seclarg = arr[i];
		}
	}
	
	printf("2nd large is %d",seclarg);
	
}
