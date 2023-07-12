#include<stdio.h>

int input(int arr[],int limit);
int checkPalindrom(int arr[],int limit);
int main() {
	
	int limit;
	
	printf("Enter a limit\n");
	scanf("%d",&limit);//5
 
       int arr[limit];
       
    input(arr,limit);//1,2,5,2,1
	
	if(checkPalindrom(arr,limit) == limit) {
		printf("The array is palindrome\n");
	}
	else{
		printf("The array is not palindrome\n");
	}
}

int input(int arr[],int limit) {
	
	for(int i = 0 ;i < limit;i++) {
		scanf("%d",&arr[i]);
	}
}

int checkPalindrom(int arr[],int limit) {
	
	static int j = limit - 1,c = 0;
	for(int i = 0; i < limit ; i++ ) {
		
		if(arr[j] == arr[i]) {
			c++;//1
		}
		j = j - 1;
	}
	return c;
}

