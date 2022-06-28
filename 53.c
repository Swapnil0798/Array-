#include<stdio.h>
void Display(int Arr[])
{
   register int icnt=0;
   printf("Elements of array are:\n");

   for(icnt=0;icnt<=4;icnt++)
    {
        printf("%d\n",Arr[icnt]);
        
    }
   
}

int main()
{
   auto int Brr[5];
   register int icnt=0;

   printf("Enter elements:\n");
   
    
    for(icnt=0;icnt<=4;icnt++)
    {
        scanf("%d",&Brr[icnt]);
    }

    Display(Brr);
    
    return 0;
}