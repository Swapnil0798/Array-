#include<stdio.h>
#include<stdlib.h> //for malloc and free
void Display(int Arr[],int ilength)
{
   register int icnt=0;
   printf("Elements of array are:\n");

   for(icnt=0;icnt<=ilength;icnt++)
    {
        printf("%d\n",Arr[icnt]);
        
    }
   
}

int main()
{
  // auto int Brr[5]; is static memory allocation
   int*ptr=NULL;
   register int icnt=0;
   int isize=0;

   printf("enter the no of element\n");
   scanf("%d",&isize);

   ptr=(int*)malloc(isize*sizeof(int)); //dyanamic memory allocation

   printf("Enter elements:\n");
   
    
    for(icnt=0;icnt<=isize;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }
    
    Display(ptr,isize);//(100,4)
    
    free(ptr);
    return 0;
}