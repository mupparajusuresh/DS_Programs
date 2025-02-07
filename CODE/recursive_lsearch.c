#include <stdio.h>

// Function to perform recursive linear search
int linearSearch(int arr[], int size, int key, int index) {
    if (index >= size) {
        return -1; // Element not found
    }
    if (arr[index] == key) {
        return index; // Element found
    }
    return linearSearch(arr, size, key, index + 1);
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

    
	size = sizeof(a) / sizeof(a[0]);
	
    
    
    pos= linearSearch(a, size, key, 0);
    if (pos != -1) {
        printf("Element found at index: %d\n", pos);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}
