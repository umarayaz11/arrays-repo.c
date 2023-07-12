#include<stdio.h>


int main() {
		int row = 2,col = 2;
	
	
	int arr[row][col] = { {1,2},{1,2} };
	int arr2[row][col] = {{1,2},{1,2}};
	int arr3[row][col];
	for(int i = 0 ; i < row ; i++) {
		
		for(int j = 0 ; j < row ; j++) {
			
			if(arr[i][j] == arr2[i][j]) {
				
				arr3[i][j] = arr[i][j] + arr2[i][j];
				printf("%d ",arr3[i][j]);
			}
		}
		printf("\n");
	}

}
