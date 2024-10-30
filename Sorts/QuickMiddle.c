void swap(int *left, int *right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}

int partition(int array[], int low, int high) {

    int mid = low + (high - low) / 2;
    int pivot = array[mid];
    swap(&array[mid], &array[low]);
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

    swap(&array[low], &array[j]);
    return j;
}

void quickSort(int array[], int low, int high) {
    if (low < high)
    {
        int pivot = partition(array, low, high);

        quickSort(array, low, (pivot - 1));
        quickSort(array, (pivot + 1), high);
    }
}