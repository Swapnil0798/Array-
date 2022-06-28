#include<stdio.h>
#include<stdlib.h>
void Displayeven(int Arr[],int ilength)
{
   int icnt=0;
   printf("even no are\n");

   for(icnt=0;icnt<=ilength;icnt++)
   {
       if(Arr[icnt]%2==0)
       {
           printf("Even no of array is: %d\n",Arr[icnt]);
       }
   }

}
/////////////////////////////////////////////////////
////////////////////////////////////////////////////

int main()
{
   int isize=0;
   int*ptr=NULL;
   int icnt=0;

   printf("enter no of element\n");
   scanf("%d",&isize);

   ptr = (int*)malloc(isize*sizeof(int));

   printf("enter the value of array\n");

  for(icnt=0;icnt<=isize;icnt++)
  {
      scanf("%d",&ptr[icnt]);
  }
  
   Displayeven(ptr,isize);

   free(ptr);
    return 0;
}








