#include<stdio.h>

int input(float arr[], int limit);
int show(float arr[],int limit);
int main() {

     int limit;
     
	 
	 printf("Enter a limit\n");
	 scanf("%d",&limit);
	 float arr[limit];
	 
	input(arr,limit);
	show(arr,limit);      

}

int input(float arr[], int limit) {
	
	static int i = 0 ;
	
	if(limit  > 1) {
		
		input(arr,limit - 1);
     }
	scanf("%f",&arr[i]);
	i++;
	
	
}

int show(float arr[],int limit) {
	
	for(int i = 0;i < limit; i++){
	
		
		printf("%.1f\n",arr[i]);
	}
}
