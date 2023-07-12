#include<stdio.h>
#include"input.h"

int ArrayRotation(int arr[],int limit);
int main() {
	
	int limit;
	
	printf("Entera limit\n");
	scanf("%d",&limit);
	
	int arr[limit];
	
	input(arr,limit);
    ArrayRotation(arr,limit);
}

int ArrayRotation(int arr[],int limit) {
	
	int rot,rotation;
	
	printf("Enter the rotations\n");
	scanf("%d",&rotation);
	
	rot = limit - rotation;//4
	
	for(int i = 0; i < limit ; i++) {
		
		printf("%d ",arr[rot]);//5,6,7,1
		
		
		if(rot == limit - 1) {
			
			rot = -1;
		}
		rot++;//2
	}
	
	
}
