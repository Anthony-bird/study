#include<stdio.h>
int main(void)
// {
//     int i = 0;
//     int p;

//     // p = (int)&i;
//     // printf("0x%x\n",p);
//     // printf("%p\n",&i);
//     // printf("%lu\n",sizeof(int));  //�����ַ���ֽ�ȫ��һ����������64λ��ϵͳȴ��32λ��һ��
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