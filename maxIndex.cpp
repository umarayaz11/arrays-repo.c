#include<stdio.h>

int input(int arr[],int limit);
int maxIndex(int arr[],int limit);
int main() {
	
	int limit;
	
	printf("Enter a number");
	scanf("%d",&limit);
	
	int arr[limit];
	
	input(arr,limit);
	printf("%d",maxIndex(arr,limit));
}

 int input(int arr[],int limit) {
	
	for(int i = 0 ;i < limit;i++) {
		scanf("%d",&arr[i]);
	}
}

int maxIndex(int arr[],int limit) {
	
	int max = arr[0];
	static int j = 0;
	for(int i = 0; i < limit ; i++) {
		
		if(arr[i] > max) {
			max = arr[i];
			j++;
		}
	}
	return j;
}
