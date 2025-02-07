/*program to implement quick sort*/ 
 
#include<stdio.h> 
void quicksort (int [ ], int, int);  
int main( ) 
{ 
int n,i,a[10]; 
printf("\nHow many elements you want to sort ? ");                                  
scanf("%d",&n); 
printf ("\nEnter elements for an array:"); 
 for (i=0; i<n; i++) 
scanf ("%d",&a[i]); 
quicksort (a,0,n-1); 
printf ("\nAfter Sorting the elements are:");  
for(i=0;i<n;i++) 
printf ("%3d ",a[i]); 
return 0;
} 
void quicksort (int a[ ],int left, int right) 
{ 
int pivot,t,i,j,l,r,temp;  
if(left<right) 
{ 
pivot=a[left];  
l=left;  
r=right;  
while(l<r) 
{ 
while(a[l]<=pivot&&l<=right)  
l++; 
while(a[r]>pivot)  
r--; 
if(l<r) 
{ 
t=a[l];  
a[l]=a[r]; 
 a[r]=t; 
} 
} 
temp=a[left];  
a[left]=a[r];  
a[r]=temp; 
quicksort (a, left, r-1);  
quicksort(a,r+1,right); 
} 
} 