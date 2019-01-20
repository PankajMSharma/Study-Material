/*
* Merge Sort
*/
#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

//to merge 2 sorted array into 1 array
void merge(int arr[], int low, int m, int high) {
    int sizeL = m - low + 1;
    int sizeR = high - m;
    
    //temp array to store 2 arrays to be merged
    int tempL[sizeL];
    int tempR[sizeR];
    
    //copy to temp Arrays
    for (int i=0; i<sizeL; i++) {
        tempL[i] = arr[low + i];
    }
    for (int i=0; i<sizeR; i++) {
        tempR[i] = arr[m + 1 + i];
    }

    //merge temp Arrays into 1 as sorted Array
    int i=0;
    int j=0;
    int k=low; //initial index of sorted array
    while (i<sizeL && j<sizeR) {
        if(tempL[i] < tempR[j]) {
            arr[k] = tempL[i];
            i++;
        } else {
            arr[k] = tempR[j];
            j++;
        }
        k++;
    }
    
    //add remaining elements from temp Arrays
    while (i<sizeL) {
        arr[k] = tempL[i];
        i++;
        k++;
    }
    while (j<sizeR) {
        arr[k] = tempR[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int m = low+(high-low)/2;

        mergeSort(arr, low, m); 
        mergeSort(arr, m + 1, high);
        
        merge(arr, low, m, high);
    }
}

int main() {
    int arr[] = {23, 43, 56, 4, 0, 1};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Given array is: \n"); 
	printArray(arr, size); 
    mergeSort(arr, 0, size-1);
    
    printf("\nSorted array is: \n"); 
    printArray(arr, size);
    return 0;
}