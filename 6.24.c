#include<stdio.h> 

//void f ();

int main()
//{
//	int x;
//	double sum = 0;
//	int cnt = 0;
//	int number[100];
//	scanf("%d",&x);
//	while ( x!=-1 ) {
//		number[cnt] = x;
//		{
//			int i;
//			printf("%d\t",cnt);
//			for ( i = 0; i <= cnt; i++)
//			{
//				printf("%d\t",number[i]);
//			}
//			printf("\n");
//		}
//		sum += x;
//		cnt ++;
//		scanf("%d",&x);
//	}
//	if ( cnt >0 ) {
//		//printf("%f\n",sum/cnt);
//		int i;
//		double average =sum / cnt;
//		for ( i=0; i<cnt; i++ ) {
//			if( number[i] > average ) {
//			printf("%d\n ",number[i]);
//		}
//	 }				
//	}
//	
//	return 0;
//	getchar();
//	getchar();
//	getchar();
//} 

//{
//	f();
//	printf("here\n");
//
//	getchar();
//	return 0;
//		
//}
//
//void f()
//{
//	int a[10];
//	a[10] = 0;        //��ʵ���л�������warning��
//}

//{
//	const int number = 10;
//	int x;
//	int count[number];                  //������������ʧ�ܣ������������У�
//	int i;
//
//	for( i=0; i<10; i++) {
//		count[i] = 0;
//	}
//	scanf("%d",&x);
//	while( x!=-1)  {
//		if(x>=0 && x<=9) {
//			count[x] ++;
//		}
//		scanf("%d",&x);
//	}
//	for( i=0; i<10; i++ ) {
//		printf("%d:%d\n",i,count[i]);
//	}
//	getchar();
//	getchar();
//	return 0;
//}
{
	int a[13] ={ [1]=2,4,[5]=6};         //��C99�汾��������
	{
		int i;
		for (i=0; i<13; i++ ) {
			printf("%d\t",a[i]);
		}
		printf("\n");
	}
	//getchar();
	return 0;
}