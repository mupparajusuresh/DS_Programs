/*program to implement insertion sort*/ 
 
#include <stdio.h> 
void insertion_sort(int[],int);  
int main() 
{ 
int a[10],i,n; 
printf ("enter the size of array:\n");  
scanf("%d",&n); 
printf("enter the elements of array:\n");  
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
printf("\the unsorted elements are:\n"); 
 for(i=0;i<n;i++) 
printf("%3d",a[i]); 
insertion_sort(a,n); 
printf ("\nThe sorted elements are:\n");  
for(i=0;i<n;i++) 
printf("%3d",a[i]); 
return 0;
} 

void insertion_sort(int a[],int n) 
{ 
int i,j,index;  
for(i=1;i<n;i++) 
{ 
index=a[i];  
j=i; 
while ((j>0)&&(a[j-1]>index)) 
{ 
a[j]=a[j-1];  
j--; 
} 
a[j]=index; 
} 
} 