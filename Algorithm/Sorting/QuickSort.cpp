#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

//swap without using 3rd variable
void swap(int *a, int *b) {
    if (*a != *b) { //same a and b will result in '0' in both variables after swap
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int startIndex = low + 1;
    
    for (int i=startIndex; i<=high; i++) {
        if (arr[i] < pivot) {
            swap(&arr[i], &arr[startIndex]);
            startIndex++;
        }
    }
    swap(&arr[low], &arr[startIndex - 1]);
    return startIndex - 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        
        int pIndex = partition(arr, low, high);

        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main() {

    int arr[] = {12, 32, 45, 5, 0, 9, 6, 0, 5, 13};

    int size = sizeof(arr) / sizeof(*arr);

    printf("Given array: \n");
    printArray(arr, size);

    quickSort(arr, 0, size - 1);
    
    printf("Sorted array: \n");
    printArray(arr, size);
    return 0;
}
