#include <stdio.h>
 
int main() 
{ 
    int arr[10]; 
    int product,i;
    printf("\nEnter elements : \n"); 
    for(i=0; i<10; i++) 
    { 
        printf("Enter arr[%d] : ",i); 
        scanf("%d",&arr[i]); 
    } 
    product=1;
    for(i=0; i<10; i++)
    {
        
        product=product*arr[i];
    }
    
    printf("\nProduct of array is : %d\n",product); 
 
    return 0; 
} 
