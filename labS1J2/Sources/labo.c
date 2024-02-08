




void insertionSort(int elements[], int n) {



	for (int i = 1; i < sizeof(elements); i++) {
		n = i;
		while (n > 0 && elements[n] < elements[n - 1]) {
			int temp = elements[n]; 
			elements[n] = elements[n - 1]; 
			elements[n - 1] = temp;
			--n;
		}
	}

}

void quickSort(int* elements, int left, int right) {

	if (left>=right) { return; }
	int L = left;
	int R = right;
	int pivot = [(left + right) / 2];

	while (left <= right) {
		while(element[left]<pivot){left++}
		while (element[right] < pivot) { right++ }
		if (left <= right) {
			int temp = element[left];
			element[left] = element[right];
			element[right] = temp;
			left++;
			right++;
		}
	}
	int index = left;
	quicksort(elements, L, index - 1);
	quicksort(element, index, R);
}