#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *ptr;
ptr = (int*)malloc(5*sizeof(int));
ptr[0]=28;
ptr[1]=14;
ptr[2]=10;
ptr[3]=40;
ptr[4]=50;
printf("%d\n",ptr[1]);
  free(ptr);
return 0;
}
