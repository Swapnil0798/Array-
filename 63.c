#include<stdio.h>
#include<stdlib.h>


int chksearch(int Arr[],int ilength,int ino)
{
 int icnt=0;

 for(icnt=0;icnt<ilength;icnt++)
 {
     if(Arr[icnt]==ino)
     {
         break;
     }
 }
 if(icnt==ilength)
 {
     return -1;
 }
 else
 {
     return icnt;
 }
  
}
int main()
{
    int isize=0;
    int*ptr=NULL;

    int icnt=0;
    int iret=0;
    int ivalue=0;
    
    printf("enter the no of element\n");
    scanf("%d",&isize);
    
    ptr=(int*)malloc(isize*sizeof(int));
    printf("enter no of array element\n");

    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d",&ptr[icnt]);

    }
    printf("enter the value");
    scanf("%d",&ivalue);

    iret=chksearch(ptr,isize,ivalue);
    if(iret==-1)
    {
        printf("there is no such element in array\n");
    }
    else
    {
        printf("element first ocure at:%d\n",iret);
    }


    free(ptr);
    return 0;
}