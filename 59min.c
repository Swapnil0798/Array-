#include<stdio.h>
#include<stdlib.h>
int Min(int Arr[],int ilength)
{
    int imin=Arr[0];
    int icnt=0;
    for(icnt=0;icnt<ilength;icnt++)
    {
      if(imin > Arr[icnt])
      {
          imin=Arr[icnt];
      }

    }
    return imin;
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
    iret=Min(ptr,isize);
    printf("minimum no is : \n%d",iret);


    free(ptr);
    return 0;
}