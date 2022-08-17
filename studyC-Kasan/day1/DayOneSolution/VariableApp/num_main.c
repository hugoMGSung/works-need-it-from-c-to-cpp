// 변수 학습 main.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	int b, c;
	float fa;
	double da;
	char ch;
	
	a = 10;
	b = a; c = a + 20;
	fa = 3.5f; // float에 실수값 할당
	da = 3.5;
	ch = 'A';

	printf("변수 a 값 : %d\n", a);
	printf("변수 b 값 : %d\n", b);
	printf("변수 c 값 : %d\n", c);
	printf("변수 fa 값 : %f\n", fa);
	printf("변수 da 값 : %lf\n", da);
	printf("변수 ch 값 : %c\n", ch);

	char kch;
	kch = '한';
	printf("변수 kch 값 : %c\n", kch);

	short sh = -32768;  // 32767 + 1; // overflow  -32768 ~ 32767 
	int in = 2147483647 + 1;
	long ln = 2147483647 + 1;
	long long lln = (2 ^ 63) - 1; // 9223372036854775807 + 1; // 922경...

	printf("변수 sh 값 : %d\n", sh);
	printf("변수 in 값 : %d\n", in);
	printf("변수 ln 값 : %ld\n", ln);
	printf("변수 lln 값 : %lld\n", lln);

	// 양수만 표현
	unsigned short ush = 65535 + 1; // 양수만 

	printf("변수 ush 값 : %u\n", ush);

	float fv = 1.234567890123456789f;
	double dv = 1.234567890123456789;

	printf("변수 fv 값 : %.20lf\n", fv);
	printf("변수 dv 값 : %.20lf\n", dv);


	return 0;
}