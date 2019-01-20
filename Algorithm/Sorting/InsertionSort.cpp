/*
* Insertion Sort
*/

#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
    for (int i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void insertionSort(int arr[], int size) {
    for(int i=0; i<size; i++) {
        int key = arr[i];
        int position = i;
        for(int j=i; j>=0; j--) {
            
            if(key < arr[j-1]) {
                arr[j] = arr[j-1];
                position = j-1;
            }
        }
        arr[position] = key;
    }
}

int main()
{
    int arr[] = {34, 23, 78, 4,4, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    insertionSort(arr, size);
    printArray(arr, size);
    return 0;
}