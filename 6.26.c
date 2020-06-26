#include<stdio.h> //
int main()
{
	int x;
	double sum = 0;
	int cnt = 0;
	int number[100];
	scanf("%d",&x);
	while ( x!=-1 ) {
		number[cnt] = x;
		sum += x;
		cnt ++;
		scanf("%d",&x);
	}
	if ( cnt >0 ) {
		int i;
		double average =sum / cnt;
		for ( i=0; i<cnt; i++ ) {
			if( number[i] > average ) {
			printf("%d ",number[i]);
		}
	 }				
	}
	
	return 0;
} 

#include<stdio.h>
void swap();

int main(void)
{
	int a = 5; 
	int b = 6; 
	
	swap(a,b);         //值传递 
	{
		int a = 0;
		printf("a=%d\n",a);
	}
	printf("a=%d b=%d",a,b);	
	
	return 0;
} 
void swap(double a,double b)
{
	int swap;
	int t = a;
	printf("int swap,a=%f,b=%f\n",a,b);
	a = b;
	b = t;
} 

