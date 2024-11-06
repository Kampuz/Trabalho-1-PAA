void swap(int *left, int *right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}

int partitionLow(int array[], int low, int high) {

    int pivot = array[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while ((array[i] <= pivot) && (i <= (high - 1)))
            i++;
        while ((array[j] > pivot) && (j >= (low + 1)))
            j--;
        if (i < j)
            swap(&array[i], &array[j]);
    }

    swap(&array[i], &array[j]);
    return j;
}

void quickSortLo(int array[], int low, int high) {
    if (low < high)
    {
        int pivot = partitionLow(array, low, high);

        quickSort(array, low, (pivot - 1));
        quickSort(array, (pivot + 1), high);
    }
}