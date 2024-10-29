

void shellSort(int *array, int n) {
    for (int gap = (n / 2); gap > 0; gap /= 2)
        for (int i = gap; i < n; i += 1)
        {
            int temp = array[i];
            int j;

            for (j = i; ((j >= gap) && (array[j - gap] > temp)); j -= gap)
                array[j] = array[j - gap];
            
            array[j] = temp;
        }
}