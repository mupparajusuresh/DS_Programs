//Linear search
//non_recursive program
//Searching the element in sequentionly
#include <stdio.h>
void lsearch(int list[],int n,int element)
{   
   int i, flag = 0;
   for(i=0;i<n;i++)
   if( list[i] == element)
	   {	printf("found at position:%d",i+1);
	     	flag =1;
     	break;   }
   if( flag == 0)
       printf("not found");
}

int main()
{
	int a[10],n,i,key;
	
	printf("Enter the no.of elements:");
	scanf("%d",&n);
	
	//reading the elements
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	//enter the key element
	printf("Enter the key element to be searched:");
	scanf("%d",&key);

	lsearch(a,n,key);
	return 0;
}