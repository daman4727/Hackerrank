#include <stdio.h>
#include <stdlib.h>
 
int comp(const void* a, const void* b)
{  return *(int*)a > *(int*)b ; }
 
int polygon(int arr[], int n)
{//int sum;
    qsort(arr, n, sizeof( arr[0] ), comp);
 
    int count = 0,c1=n,i=0;
 
    while( i<n)
    {
         int k = i+2,d=0,sum=0;
       d=0,sum=0;
         while(d<n)
        sum=sum+arr[d++];
 
       i++;
        if((arr[n-1]*10)>=((sum*10)/2))
        {n--;i=0;//goto a11;
            
        }
        else //break; 
        return n;
        //printf("%d",n);
 
    }

 if(n>2)
    return n;
    else 
    return 0;
}
 

int main()
{
    int size=0,i=0;
    scanf("%d",&size);
    int arr[size];
    
     for( i=0;i<size;i++)
{ 
    arr[i]=0;
}
 for(i=0;i<size;i++)
{ scanf("%d",&arr[i]);
  
 } 
       int c1=polygon( arr, size ) ;
       c1=c1*0.5;
       if(c1==0)
       printf("0");
       else if(c1>0)
       printf("polygon: %d",c1);
 
    return 0;
}
