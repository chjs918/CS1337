// Jisoo Choi
// CS 1337
// Lab 40

void swap(int &a, int &b);

// selectionSortUsingPointers:  Using pointers, this function sorts
// in ascending order the n-element integer array using a selection sort.
void selectionSortUsingPointers(int *array, int n) {
	 int *minIndex, minValue;
	 int *index, *start;

	for (start = array; start < array + (n - 1); start++)
	{
		minIndex = start;
		minValue = *start;
		
		for (index = start + 1; index < array + n; index++)
		{
			if (*index < minValue)
			{
				minValue = *index;
				minIndex = index;
			}
		}
		
		swap(*minIndex, *start);
  }
}