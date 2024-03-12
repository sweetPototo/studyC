//예제모음 01
/*
# include <stdio.h>

int main()
{
	int a, b, c, d;
	int result;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &a);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &b);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &c);
	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &d);

	result = a + b + c + d;
	printf("%d + %d + %d + %d = %d\n", a, b, c, d, result);

}
*/
//예제모음 02
//예제모음 03
//예제모음 04
//예제모음 05
//예제모음 06
//예제모음 07
//예제모음 08
/*
#include <stdio.h>

int main()
{
	float a, b;
	float result;

	printf("첫번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%f", &a);
	printf("두번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%f", &b);

	result = a + b;
	printf(" %5.2f + %5.2f = %5.2f \n", a, b, result);
	result = a - b;
	printf(" %5.2f - %5.2f = %5.2f \n", a, b, result);
	result = a * b;
	printf(" %5.2f * %5.2f = %5.2f \n", a, b, result);
	result = a / b;
	printf(" %5.2f / %5.2f = %5.2f \n", a, b, result);
	result = (int)a % (int)b;
	printf(" %d %% %d = %d \n", (int)a, (int)b, (int)result);
}
*/
//예제모음 09
/*
#include <stdio.h>

int main()
{
	int money, c500, c100, c50, c10;

	printf(" ## 교환할 돈은 ? ");
	scanf_s("%d", &money);

	c500 = money / 500;
	money = money % 500;

	c100 = money / 100;
	money = money % 100;

	c50 = money / 50;
	money = money % 50;

	c10 = money / 10;
	money = money % 10;

	printf("\n 오백원짜리 ==> %d 개 \n", c500);
	printf(" 백원짜리   ==> %d 개 \n", c100);
	printf(" 오십원짜리 ==> %d 개 \n", c50);
	printf(" 십원짜리   ==> %d 개 \n", c10);
	printf(" 바꾸지 못한 잔돈 ==> %d 원 \n", money);
}
*/
//예제모음 10
//예제모음 11
/*
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("첫번째 수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("계산할 연산자를 입력하세요 : ");
	scanf_s(" %c", &ch, 1);
	printf("두번째 수를 입력하세요 : ");
	scanf_s("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d 입니다. \n", a, b, a + b);

	if (ch == '-')
		printf("%d - %d = %d 입니다. \n", a, b, a - b);

	if (ch == '*')
		printf("%d * %d = %d 입니다. \n", a, b, a * b);

	if (ch == '/')
		printf("%d / %d = %f 입니다. \n", a, b, a / (float)b);

	if (ch == '%')
		printf("%d %% %d = %d 입니다. \n", a, b, a % b);
}
*/
//예제모음 12
/*
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("첫번째 수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("계산할 연산자를 입력하세요 : ");
	scanf_s(" %c", &ch, 1);
	printf("두번째 수를 입력하세요 : ");
	scanf_s("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d 입니다. \n", a, b, a + b);
	else if (ch == '-')
		printf("%d - %d = %d 입니다. \n", a, b, a - b);
	else if (ch == '*')
		printf("%d * %d = %d 입니다. \n", a, b, a * b);
	else if (ch == '/')
		printf("%d / %d = %f 입니다. \n", a, b, a / (float)b);
	else if (ch == '%')
		printf("%d %% %d = %d 입니다. \n", a, b, a % b);
	else
		printf("연산자를 잘못 입력했습니다. \n");
}
*/
//예제모음 13
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf_s("%d %c %d", &a, &ch, 1, &b); //scanf_s사용주의

	switch (ch)
	{
	case '+': printf("%d + %d = %d 입니다. \n", a, b, a + b);break;
	case '-':
		printf("%d - %d = %d 입니다. \n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d 입니다. \n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %d 입니다. \n", a, b, a / b);
		break;
	case '%':
		printf("%d %% %d = %d 입니다. \n", a, b, a % b);
		break;
	default:
		printf("연산자를 잘못 입력했습니다. \n");
	}
}

//예제모음 14
//예제모음 15
//예제모음 16
//예제모음 17
//예제모음 18
//예제모음 19
//예제모음 20
//예제모음 21
//예제모음 22
//예제모음 23
//예제모음 24
//예제모음 25
//예제모음 26
//예제모음 27
//예제모음 28
//예제모음 29
//예제모음 30
//예제모음 31
//예제모음 32
//예제모음 33
//예제모음 34
//예제모음 35
//예제모음 36
//예제모음 37
//예제모음 38
//예제모음 39
//예제모음 40
