#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool chksearch(int Arr[],int ilength,int ino)
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
     return false;
 }
 else
 {
     return true;
 }
  
}
int main()
{
    int isize=0;
    int*ptr=NULL;

    int icnt=0;
    bool bret=0;
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

    bret=chksearch(ptr,isize,ivalue);
    if(bret==true)
    {
        printf("element are in \n");
    }
    else
    {
        printf("element are not in");
    }


    free(ptr);
    return 0;
}