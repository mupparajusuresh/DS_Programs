#include <stdio.h>

// Recursive binary search function
int binarySearch(int arr[], int left, int right, int target) {
    int mid;
	if (left > right) {
        return -1;  // Base case: Element not found
    }

    mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;  // Target found
    }
    else if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);  // Search left half
    }
    else {
        return binarySearch(arr, mid + 1, right, target);  // Search right half
    }
}

int main() {
    int a[20],i,n,pos,size,key;
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    
    //reading the elements
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("\n enter the key element:");
    scanf("%d",&key);


    pos = binarySearch(a, 0, n - 1, key);

    if (pos != -1) {
        printf("Element found at index %d\n", pos);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
