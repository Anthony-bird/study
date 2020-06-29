#include<stdio.h>
int main(void)
// {
//     int i = 0;
//     int p;

//     // p = (int)&i;
//     // printf("0x%x\n",p);
//     // printf("%p\n",&i);
//     // printf("%lu\n",sizeof(int));  //这个地址和字节全部一样，本身是64位的系统却和32位的一样
//     // printf("%lu\n",sizeof(&i));
//     printf("%p\n",&i);  //64
//     printf("%p\n",&p);   //32


//     return 0;
// }

{
    int a[10];

    printf("%p\n",&a);
    printf("%p\n",a);
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);

    return 0;
}