#include<stdio.h>
int input(int arr[],int limit);
int search(int arr[],int num,int limit);
int main() {
	
	int limit,num;
	
	printf("Enter a limit\n");
	scanf("%d",&limit);
	printf("Enter a limit\n");
	scanf("%d",&num);
	
	int arr[limit];
	
	input(arr,limit);
	printf("%d",search(arr,num,limit));
}

int input(int arr[],int limit) {
	
	for(int i = 0 ;i < limit;i++) {
		scanf("%d",&arr[i]);
	}
}

int search(int arr[],int num,int limit) {
	
	for(int i = 0; i < limit; i++) {
		
		if(num == arr[i]) {
			return 1;
		}
		
			
		}
		return - 1;
	}

