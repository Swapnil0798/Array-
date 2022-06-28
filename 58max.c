#include<stdio.h>
#include<stdlib.h>
//for negative and positive
int Max(int Arr[],int ilength)
{
    int imax=Arr[0];
    int icnt=0;
    for(icnt=0;icnt<ilength;icnt++)
    {
      if(imax < Arr[icnt])
      {
          imax=Arr[icnt];
      }

    }
    return imax;
}
///////////////////////////////////////////////
//DATE :04//05/2022
//////////////////////////////////////////////
int main()
{
    int isize=0;
    int*ptr=NULL;
    int icnt=0;
    int iret=0;
    
    printf("enter the no of element\n");
    scanf("%d",&isize);
    
    ptr=(int*)malloc(isize*sizeof(int));
    printf("enter no of array element\n");

    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d",&ptr[icnt]);

    }
    iret=Max(ptr,isize);
    printf("maximum no is : \n%d",iret);


     free(ptr);
    return 0;
}