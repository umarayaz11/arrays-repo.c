#include<stdio.h>

int main() {
	
	int row,col;
	
	printf("Enter a rows and cols\n");
	scanf("%d%d",&row,&col);
	
	int arr[row][col];
	int arr2[row][col] = {0};
	
	for(int i = 0 ; i < row; i++) {
		
		for( int j = 0 ;j < col;j++) {
			
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i = 0; i < row ; i++) {
		
		for(int j = 0; j < col; j++) {
			
				arr2[i][j] == arr[j][i];//4
				arr2[j][i] = arr[i][j];
			
			}
	}
	
	
	
	for(int i = 0 ; i < row; i++) {
		
		for( int j = 0 ;j < col;j++) {
			
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}

	}
	
	


