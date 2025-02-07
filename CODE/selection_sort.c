/*program to implement selection sort*/ 
 
#include <stdio.h> 
 
void selectionsort(int[],int);  
int main() 
{ 
int a[10],i,n; 
printf("enter the size of array:\n"); 
 scanf("%d",&n); 
printf("enter the elements of array:\n");  
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
printf("\nThe unsorted elements are:\n");  
for(i=0;i<n;i++) 
printf("%3d",a[i]);  
selectionsort(a,n);
printf("\nThe sorted elements are:\n");  
for(i=0;i<n;i++) 
printf("%3d",a[i]); 
} 
void selectionsort(int a[],int n) 
{ 
int min,temp,i,j;  
for(i=0;i<n-1;i++) 
{ 
min=i;  
for(j=i+1;j<n;j++) 
{ 
if(a[min]>a[j]) 
min=j; 
} 
if(min!=i) 
{ 
temp=a[min];  
a[min]=a[i];  
a[i]=temp; 
} 
} 
}