#include"stdio.h"
int* input_array(int size);
int main()
{
    int n;
    printf("enter the size of array>>");
    scanf("%d",&n);
    int* arry_ptr=input_array(n);
    for(int i=0; i<n; i++)
    {
        printf("the %dth element = %d\n",i+1,*(arry_ptr+i));
    }
    return 0;
}
int* input_array(int size)
{
    int* ptr;
    ptr=(int*)calloc(size,sizeof(int));
    for(int i=0; i<size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    return ptr;
}
