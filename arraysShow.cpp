#include<stdio.h>

int input(int arr[], int limit);
int show(int arr[],int limit);
int main() {

     int limit;
     
	 
	 printf("Enter a limit\n");
	 scanf("%d",&limit);
	 int arr[limit];
	 
	input(arr,limit);
	show(arr,limit);      

}

int input(int arr[], int limit) {
	
	static int i = 0 ;
	
	if(limit  > 1) {
		
		input(arr,limit - 1);
     }
	scanf("%d",&arr[i]);
	i++;
	
	
}

int show(int arr[],int limit) {
	
	for(int i = 0;i < limit; i++){
	
		
		printf("%d\n",arr[i]);
	}
}
