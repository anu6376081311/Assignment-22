#include<stdio.h>
int main()
{
    int *ptr,c;
    int i=0,size = 0,sum=0;

    printf("Enter size of array :");
    scanf("%d",&size);

    ptr =(int*)calloc(size,sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed \n");
        return 0;
    }
    printf("\n The entered %d value \n",size);
    for(i=0;i<size;i++)
    {
      scanf("%d",ptr+i);
    }

    for(i=0;i<size;i++)
    {
      sum = sum + *(ptr+i);
    }

    printf("sum is %d \n",sum);
    free(ptr);

    return 0;

}