
int Bubblesort(int arr[],int limit) {
	int temp;
	
	for(int i = 0; i < limit - 1; i++) {
		//{1,2,3,5,4,6}
		for(int j = 0 ; j < limit - 1 ; j++ ) {
			
			if( arr[j] > arr[j+1]) {
				
				temp = arr[j] ;//2
				arr[j] = arr[j + 1] ;//1
				arr[j + 1] = temp;//2
			}
		}
	}
	
	
}

