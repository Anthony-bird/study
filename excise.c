//#include<stdio.h>  // ��a�������� 
//                     
//int main(void)      
//{
//	int a,n;
//	scanf("%d %d",&a,&n);  //2 4
//	
//	int sum = 0;
//	int i;
//	int t = 0;
//	
//	for ( i=0; i<n; i++) {
//		t = t*10+a;
//		sum += t;
//	}
//	
//	
//	printf("%d\n",sum);
//	
//	return 0;		
//}

//#include<stdio.h> //��������
//int main()
//{
//	int a;
//	a = 6;
//	printf("sizeof(double)=%ld\n",sizeof(long double));
//	printf("sizeof(a)=%ld\n",sizeof(a++));
//	printf("a=%d\n",a);
//	
//	printf("sizeof(char)=%ld\n",sizeof(char));
//	printf("sizeof(short)=%ld\n",sizeof(short));
//	printf("sizeof(int)=%ld\n",sizeof(int));
//	printf("sizeof(long)=%ld\n",sizeof(long));   //64λ8 32λ��4 
//	printf("sizeof(long long)=%ld\n",sizeof(long long));
////-------------------------------------------------------------------------	
//	char c = 127;        //127+1=-128      -128-1=127  ����һ���ֽڵķ���λ 
//	int i = 255;
//	c = c+1;
//	printf("c=%d,i=%d",c,i); 
//	
//	return 0;
//} 

//#include<stdio.h>
//int main()   //����int������� 
//{
//	unsigned int a=0,b=0;     //unsigned int ��� 4294967295 10  int���  2147483647  10
//	while (++a!=0)   //int�ĳ� > 0 
//	;
//	printf("int���������������:%u\n",a-1);
//	
//	b++;
//	while ((a=a/10)!=0)
//	{
//		b++;
//	}
//	printf("int������������������λ��:%u",b);
//	return 0;
//}

//#include<stdio.h>
//int main()             //Ұ��  ���23 
//{
//	int x=23;
//	do{
//		printf("%2d\n",x--);
//	}while(!x);
//	
//	return 0;
//} 

//#include<stdio.h>
//int main()
//{
//// char c = -1; 
//// int i = -1;
//// printf("c=%u,i=%u\n",c,i);   //����int
//	char c = 012; 
//	int i = 0x1A;
//	printf("c=0%o,i=0x%X\n",c,i);   
//	return 0;
//}

//float 7ΪС�� double 15λ
 
// #include<stdio.h>
// int main()
// {
//// 	double ff =1234.56789;
//// 	printf("%e,%f\n",ff,ff);
//
////	double ff =1E-10;
////	printf("%E,%f\n",ff,ff);
//
//	
//	printf("%.3f\n",-0.0049);
//	printf("%.30f\n",-0.0049);
//	printf("%.3f\n",-0.00049);
//	
// 	return 0;
// }

#include<stdio.h>
int main()
{
	float a, b, c;
	
	a = 1.345f;
	b = 1.123f;
	c = a + b;
	if (c == 2.468)
		printf("���\n");
	else
		printf("�����! c=%.10f,��%f\n",c,c);
	return 0;
}
