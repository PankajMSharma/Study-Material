/*
* Selection Sort
*/

#include <iostream>

using namespace std;

//gets index of local minimum from unsorted part(right) of array
int findLocalMin(int arr[], int startIndex, int size) {
    int minIndex = startIndex;
    for(int i=startIndex; i<size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
}

void selectionSort(int arr[], int size) {
    for(int i=0; i<size; i++) {
        int minIndex = findLocalMin(arr, i, size);

        if(i != minIndex) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main()
{
    int arr[] = {24, 54, 3, 21};

    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);
    printArray(arr, size);
    return 0;
}
