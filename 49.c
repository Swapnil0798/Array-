#include<stdio.h>
int main()
{
   auto int Arr[5];
   register int icnt=0;

   printf("Enter elements:\n");
   
    
    for(icnt=0;icnt<=4;icnt++)
    {
        scanf("%d",&Arr[icnt]);
    }

   printf("Elements of array are:\n");

    for(icnt=0;icnt<=4;icnt++)
    {
        printf("%d\n",Arr[icnt]);
    }

    return 0;
}