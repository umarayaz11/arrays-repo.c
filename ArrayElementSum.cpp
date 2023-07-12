#include<stdio.h>

int Sumarr(int arr[],int limit);
int input(int arr[],int limit);

int main() {
	
	int limit;
	
	printf("Enter the limit\n");
	scanf("%d",&limit);
	
	int arr[limit];
	
	input(arr,limit);
	 limit = Sumarr(arr,limit);

    printf("%d",limit);
}

int input(int arr[],int limit) {
	
	for(int i = 0 ;i < limit;i++) {
		scanf("%d",&arr[i]);
	}
}

int Sumarr(int arr[],int limit) {
	
	 int sum = 0;
	 
	 for(int i = 0; i < limit; i++) {
	 	
	 	sum += arr[i];
	 }
	 return sum;
	 
}
