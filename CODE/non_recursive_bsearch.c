#include<stdio.h> 
void bsearch(int list[],int n,int element)
{
   int l,u,m,flag = 0;
   l = 0;
   u = n-1;
   
   while(l <= u)
   {  m = (l+u)/2;
      if(list[m]==element)
		{printf("found at %d: ",m+1);
              flag =1;
              break;
		}
      else
            if(list[m] < element)
                   l = m+1;
            else
                   u = m-1;
   }
   if( flag == 0)    
	printf("not found");
}
  

int main() 
{ 
  int a[20],pos,n,k,i; 
  
  printf("\nEnter the n value:"); 
  scanf("%d",&n); 

  printf("\nEnter elements for an array(Sorted order):"); 
  for(i=0;i<n;i++) 
  scanf("%d",&a[i]); 

  printf("\nEnter the key value:"); 
  scanf("%d",&k); 
  
  bsearch(a,n,k); 
  
 return 0;
} 

 