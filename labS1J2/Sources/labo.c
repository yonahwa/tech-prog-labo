




void insertionSort(int elements[], int n) {



	for (int i = 1; i < sizeof(elements) - 2; i++) {
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
	int pivot = elements[(left + right) / 2];

	while (left <= right) {
		while (elements[left] < pivot) { left++; }
		while (elements[right] > pivot) { right--; }
		if (left <= right) {
			int temp = elements[left];
			elements[left] = elements[right];
			elements[right] = temp;
			left++;
			right--;
		}
	}
	int index = left;
	quickSort(elements, L, index - 1);
	quickSort(elements, index, R);
}