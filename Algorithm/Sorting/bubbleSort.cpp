// C program for implementation of Bubble sort 
#include <stdio.h> 
  
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//sorting function
void bubbleSort(int arr[], int size) {

    for(int i=0; i<size; i++) {
        bool swapped = false;
        
        //limit 'j' because last i elemets are sorted
        for(int j=0; j<size-1-i; j++) {
            
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        
        //optimization: if array is sorted, no more iteration needed 
        if(swapped == false) {
            printf("Got Out \n");
            break;
        }
    }
}

//Driver function
int main() {
    int arr[] = {34, 23, 45, 12};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, size);
        for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}