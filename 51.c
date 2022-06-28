#include<stdio.h>
void Display(int*ptr)
{
   register int icnt=0;
   printf("Elements of array are:\n");

   for(icnt=0;icnt<=4;icnt++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
   
}

int main()
{
   auto int Arr[5];
   register int icnt=0;

   printf("Enter elements:\n");
   
    
    for(icnt=0;icnt<=4;icnt++)
    {
        scanf("%d",&Arr[icnt]);
    }

    Display(Arr);
    
    return 0;
}