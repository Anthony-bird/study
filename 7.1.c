#include<stdio.h>
void swap(int *pa,int *pb);
// void f(int *p);
// void g(int k);

int main(void)
// {
//     int i = 6;
//     printf("&i=%p\n",&i);
//     f(&i);
//     g(i);

//     return 0;
// }

// void f(int *p)
// {
//     printf(" p=%p\n",p);
//     printf(" *p=%d\n",*p);
//     *p = 26;
// }

// void g(int k)
// {
//     printf("k=%d\n",k);
// }

// {
//     int a = 5;
//     int b = 6;
//     swap(&a,&b);
//     printf("a=%d,b=%d",a,b);

//     return 0;
// }

// void swap(int *pa,int *pb)
// {
//     int t = *pa;
//     *pa = *pb;
//     *pb = t;
// }

{
    int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
    int min,max;
    minmax(a,sizeof(a)/sizeof(a[0],&min,&max));
    printf("min=%d,max=%d\n",min,max);

    return 0;
}
void minmax(int a[],int len,int *min,int *max)
{
    int i;
    *min =*max=a[0];
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
}