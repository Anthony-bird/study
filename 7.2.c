#include<stdio.h>
#include<stdlib.h>
// void fun(int *a,int *b)
// {
//     int *c;
//     c=a;a=b;b=c;
// }
// void minmax(int *a,int len,int *max,int *min);
// void f(int *p);
// void g(int k);

int main(void)
// {
//     int x=3,y =5,*p=&x,*q=&y;           //形参不影响实参的传递
//     fun(p,q);
//     printf("%d,%d ",*p,*q);
//     fun(&x,&y);
//     printf("%d,%d\n",*p,*q);

//     return 0;
// }

// {
//     int i = 6;
//     int *p ;
//     int k;
//     k = 12;
//     *p = 12;

//     printf("&i=%p\n",&i);
//     f(&i);
//     g(i);

//     return 0;
// }

// void f(int *p)
// {
//     printf(" p=%p\n",p);
//     printf("*p=%d\n",*p);
//     *p = 26;

// }
// void g(int k)
// {
//     printf("k=%d\n",k);
// }
// 数组参数  以下四种函数原型是等价的：  int sum(int *ar,int n);  int sum(int *,int);
                                //    int sum(int ar[],int n);  int sum(int [],int);

// {
//     int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
//     int min,max;
//     printf("main sizeof(a)=%lu\n",sizeof(a));
//     printf("main a=%p\n",a);
//     minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
//     printf("a[0]=%d\n",a[0]);
//     printf("min=%d,max=%d\n",min,max);
//     int *p= &min;
//     printf("*p=%d\n",*p);
//     printf("p[0]=%d\n",p[0]);
//     printf("*a=%d\n",*a);

//     return 0;
// }

//  void minmax(int a[],int len,int *min,int *max)
// {
//     int i;
//     printf("minmax sizeof(a)=%lu\n",sizeof(a));
//     printf("minmax a=%p\n",a);
//     a[0]=1000;
//     *min =*max=a[0];
//     for (i = 0; i < len; i++)
//     {
//        if (a[i] < *min )
//        {
//            *min =a[i];
//        }
//        if (a[i] > *max)
//        {
//            *max = a[i];
//        }
            
//     }  
// }

/* int *const不能改变地址，可以改变值
    const int*可以改变地址，不能改变值  */

// {
//     char ac[] ={0,1,2,3,4,5,6,7,8,9,-1};
//     char *p = &ac[0];
//     int i;
//     for ( i = 0; i < sizeof(ac)/sizeof(ac[0]); i++)
//     {
//         printf("%d\n",ac[i]);
//     }
//     // for ( p = ac; *p!=-1; )   {
//     while (*p !=-1 )
//     {
//         printf("%d\n",*p++);
//     }
         
//     // char *p1 =&ac[5];
//     // printf("p =%p\n",p);
//     // printf("p+1=%p\n",p+1);
    
//     // printf("p1-p=%d\n",p1-p);
//     int ai[] ={0,1,2,3,4,5,6,7,8,9,};
//     int *q = ai; 
//     // q = p;   //错误赋值
//     // int *q1 = &ai[6];
//     // printf("q =%p\n",q);
//     // printf("q1=%p\n",q1);
//     // printf("*(q+1)=%d\n",*(q+1));
//     // printf("q1-q=%d\n",q1-q);

//     return 0;
// }

// {
//     int number;
//     int* a;
//     int i;
//     printf("输入数量:");
//     scanf("%d",&number);

//     a = (int*)malloc(number*sizeof(int));
//     for ( i = 0; i < number; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for( i = number-1; i >=0;  i--)
//     {
//         printf("%d",a[i]);
//     }
//     free(a);
//     return 0;   
// }

{
    int i;
    void *p =0;
    int cnt = 0;
    // p=malloc(100*1024*1024);
    // p++;
    // p = &i;错误写法
    free(p);
    // while ((p=malloc(100*1024*1024)))
    // {
    //     cnt++;
    // }
    // printf("分配了%d00MB的空间\n",cnt);

    return 0;
    
}