//Description: WAP for swapping between any data type using swap(void *a,void *b) api

#include <stdio.h>
void swap(void *a, void *b)
{
    int temp;
    temp = *(int*)a;
    *(int*)a = *(int*)b;
    *(int*)b = temp;
}
int main()
{
    float f1=11.2,f2=99.5;
    //Swapping floating point data type
    printf("Swapping floating point data type:\n");
    printf("Before swapping float f1 = %f f2 = %f\n", f1, f2);
    swap(&f1,&f2);
    printf("After  swapping float f1 = %f f2 = %f\n", f1, f2);
    
    int a=5,b=10;
    //swapping integer data type
    printf("Swapping integer data type:\n");
    printf("Before swapping integer a = %d b = %d\n", a, b);
    swap(&a, &b); 
    printf("After  swapping integer a = %d b = %d\n", a, b);
    return 0;
}
