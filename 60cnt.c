#include<stdio.h>
#include<stdlib.h>

int calculate(int Arr[],int ilength,int ino)
{
    int icnt=0;
    int ical=0;
    for(icnt=0;icnt<ilength;icnt++)
    {
        if(Arr[icnt]==ino)
        {
            ical++;
        }
    }
return ical;
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
    printf("enter the element to search\n");
    scanf("%d",&ivalue);

    iret=calculate(ptr,isize,ivalue);
    printf(" calculate frequency is : \n%d",iret);


    free(ptr);
    return 0;
}