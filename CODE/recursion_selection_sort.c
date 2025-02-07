#include <stdio.h>

// Function to perform recursive selection sort
void selectionSort(int arr[], int n, int index) {
    // Base case: If the whole array is sorted, return
    if (index >= n - 1) {
        return;
    }

    // Find the index of the minimum element from index to n-1
    int minIndex = index;
    for (int j = index + 1; j < n; j++) {
        if (arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    }

    // Swap arr[minIndex] and arr[index] using array notation
    int temp = arr[minIndex];
    arr[minIndex] = arr[index];
    arr[index] = temp;

    // Recursive call to sort the remaining array
    selectionSort(arr, n, index + 1);
}

// Main function
int main() {
    int a[10],i,n; 
printf("enter the size of array:\n"); 
 scanf("%d",&n); 
printf("enter the elements of array:\n");  
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
printf("\nThe unsorted elements are:\n");  
for(i=0;i<n;i++) 
printf("%3d",a[i]);  
    // Call recursive selection sort
    selectionSort(a, n, 0);

    printf("\nSorted array: ");
for(i=0;i<n;i++) 
printf("%3d",a[i]);  


    return 0;
}
