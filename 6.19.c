#include<stdio.h>

//int main()
//{
//	char c;
//	char d;
//	c = 1;
//	d = 'A';
//	if( c == d ) {
//		printf("相等\n");
//	} else {
//		printf("不相等\n");
//	}
//	printf("c=%d\n",c);
//	printf("d=%d\n",d);
//	
//	return 0;
//}

//int main()
//{
//	char c;    //1
//	scanf("%c",&c);
//	printf("c=%d\n",c);
//	printf("c='%c'\n",c);
//	
//	return 0;
//}

//int main()
//{
//	int i;
//	char c;
//	scanf("%d",&i);
//	c = i;
//	printf("c=%d\n",c);
//	printf("c='%c'\n",c);
//	
//	return 0;
//}

//int main()
//{
//	int i;
//	char c;
//	scanf("%d %c",&i,&c);
//	printf("i=%d,c=%d,c=%c\n",i,c,c);
//	
//	return 0;
//}

//int main()
//{
//	printf("123\bA\n456\n");    //\b退格符 
//	
//	return 0;
//}

//int main()
//{
//	printf("123\t456\n");
//	printf("12\t456\n");
//	
//	return 0;
//} 

//int main()
//{
//	
////	printf("%d\n",(int)10.2);
////	printf("%d\n",(short)32);
////	printf("%d\n",(short)32768); //-32768
////	printf("%d\n",(char)32768);  //0
//	
//	int i = 32768;
//	short s = (short)i;
//	printf("%d\n",i);
//	
//	return 0;
//}

int main()
{
	double a = 1.0;
	double b = 2.0;
	int i = (int)(a/b);
	
	int c = 5;
	int d = 6;
	double e = (double)c/d;
	printf("%d %f",i,e);
	
	return 0;
}
