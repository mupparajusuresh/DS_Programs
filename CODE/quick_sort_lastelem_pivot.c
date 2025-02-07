#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function using last element as pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot is the last element
    int i = (low - 1); // Index for smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to test QuickSort
int main() {
    int n,i,a[10]; 
printf("\nHow many elements you want to sort ? ");                                  
scanf("%d",&n); 
printf ("\nEnter elements for an array:"); 
 for (i=0; i<n; i++) 
scanf ("%d",&a[i]); 
quickSort (a,0,n-1); 

    
//    quickSort(arr, 0, n - 1);
    
    printf("Sorted array: \n");
    printArray(a, n);
    
    return 0;
}
