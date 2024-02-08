




void insertionSort(int elements[], int n) {

	int temp = 0;

	for (int i = 1; i < sizeof(elements); i++) {
		n = i;
		while (n > 0 && elements[n] < elements[n - 1]) {
			temp = elements[n]; 
			elements[n] = elements[n - 1]; 
			elements[n - 1] = temp;
			--n;
		}
	}

}

void quickSort(int* elements, int left, int right) {

	if (left>=right) { return; }


}