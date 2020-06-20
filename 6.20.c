#include <stdio.h>
#include <stdbool.h>

//void sum(int begin,int end);         //转到75行     函数的声明 
//void cheer(int i);                     //转到116行 
void swap(int a,int b);                    //转到127行
int main()
//{
//	bool b = 6>5;
//	bool t = true;
//	t = 2;
//	printf("%d\n",b);
//	
//	return 0;
//}

//{
//	int i,j,k,a,cnt;
//	scanf("%d",&a);
//	for( i = a;i<=a+3; i++ ) {
//		for( j = a;j<=a+3; j++) {
//			for( k = a;k<=a+3;k++) {
//				if ( i!=j && i!=k && j!=k ) {
//					cnt++;
//					printf("%d%d%d",i,j,k);
//					if( cnt == 6 ) {
//						printf("\n");
//						cnt = 0;
//					} else {
//						printf(" ");
//					}
//				}
//			}
//		}
//	}
// } 

//{
//	int a = -1;
//	if ( a>0 && a++>1 ) {    //短路 
//		printf("OK");
//	} 
//	printf("%d\n",a);
//}

//{
//	int m,n;
//	int sum = 0;
//	int cnt = 0;
//	int i;
//	
//	scanf("%d %d",&m,&n);
////	m=10,n=31;
//	if( m==1 ) m=2;
//	for( i=m; i<=n; i++ ) {
//		if ( isPrime(i) ) {
//			sum +=i;
//			cnt++;
//		}
//	}
//	printf("%d %d\n",cnt,sum); 
//} 
//int isPrime(int i)
//{
//	int ret = 1;
//	int k;
//	for( k=2;k<i-1;k++) {
//		if( i%k ==0 ) {
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}


//{
//	sum(1,10);
//	sum(20,30);
//	sum(35,45);
//	
//	return 0;
//}
//void sum(int begin,int end) 
//{
//	int i;
//	int sum = 0;
//	for ( i=begin; i<=end; i++) {
//		sum += i;
//	}
//	printf("%d到%d的和是%d\n",begin,end,sum);
//}

//{
//	int a,b,c;
//	a = 5;
//	b = 6;
//	c = max(10,12);
//	c = max(a,b);
//	c = max(c,23);
//	max(23,45);
//	printf("%d\n",max(a,b));
//	
//	return 0;
//}
//int max(int a,int b)
//{
//	int ret;
//	if ( a>b ) {
//		ret = a;
//	} else {
//		ret = b;
//	}
//	return ret;     //单一出口原则 
//}

//{
//	double f = 2.4;               //C语言做不到类型不匹配 
//	cheer(f);
//	
//	return 0;
// } 
// void cheer(int i)
// {
// 	printf("cheer %d\n",i);
// }

{
	int a = 5; 
	int b = 6; 
	
	swap(a,b);         //值传递 
	
	printf("a=%d b=%d",a,b);
	
	return 0;
} 
void swap(int a,int b)
{
	int t = a;
	a = b;
	b = t;
}
