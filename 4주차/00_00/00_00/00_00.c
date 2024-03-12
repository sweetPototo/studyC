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
/*
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
*/
//예제모음 14
//예제모음 15
/*
#include <stdio.h>

int main()
{
	int i;

	for (i = 0; i < 128; i++)
	{
		if (i % 16 == 0)
		{
			printf("---------------------\n");
			printf("10진수  16진수  문자 \n");
			printf("---------------------\n");
		}
		printf("%5d  %5x  %5c\n", i, i, i);
	}
}
*/
//예제모음 16
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int str_cnt;
	int i;

	printf("영문자 및 숫자를 입력 (100자 이하) : ");
	scanf_s("%s", str, 100);

	printf("\n");
	printf("입력한 문자열 ==> %s\n", str);
	printf("변환된 문자열 ==>");

	str_cnt = strlen(str);

	for (i = str_cnt; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
*/
//예제모음 17
/*
#include <stdio.h>

int main()
{
	int start, end;
	int basu, i;
	int hap = 0;

	printf("합계의 시작값 ==> ");
	scanf_s("%d", &start);
	printf("합계의 끝값 ==> ");
	scanf_s("%d", &end);
	printf("배수 ==> ");
	scanf_s("%d", &basu);

	i = start;
	while (i <= end)
	{
		if (i % basu == 0)
			hap = hap + i;

		i++;
	}

	printf("%d부터 %d까지의 %d배수의 합계 ==> %d\n", start, end, basu, hap);
}
*/
//예제모음 18
/*
#include <stdio.h>

int main()
{
	char str[100];
	char ch;

	int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
	int i;

	printf("문자열을 입력(100자 이내) : ");
	scanf_s("%s", str, 100);

	i = 0;
	do {
		ch = str[i];

		if (ch >= 'A' && ch <= 'Z')
			upper_cnt++;
		if (ch >= 'a' && ch <= 'z')
			lower_cnt++;
		if (ch >= '0' && ch <= '9')
			digit_cnt++;

		i++;
	} while (ch != '\0');

	printf("대문자 %d개, 소문자 %d개, 숫자 %d개\n", upper_cnt, lower_cnt, digit_cnt);
}
*/
//예제모음 19
//예제모음 20
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char ss[100];
	char tt[100];
	int count, i;

	printf("문자열을 입력하세요 : ");
	scanf_s("%s", ss, 100);

	count = strlen(ss);

	for (i = 0; i < count; i++)
	{
		tt[i] = ss[count - (i + 1)];
	}
	tt[count] = '\0';

	printf("내용을 거꾸로 출력 ==> %s \n", tt);
}
*/
//예제모음 21
//예제모음 22
//예제모음 23
//예제모음 24
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char ss[100];
	int count, i;
	char* p;

	printf("문자열을 입력하세요 : ");
	scanf_s("%s", ss, 100);

	count = strlen(ss);

	p = ss;

	printf("내용을 거꾸로 출력 ==> ");
	for (i = 0; i < count; i++)
	{
		printf("%c", *(p + count - (i + 1)));
	}
	printf("\n");
}
*/
//예제모음 25
/*
#include <stdio.h>

int main()
{
	int a, b, tmp;
	int* p1, * p2;

	printf("a 값 입력 : ");
	scanf_s("%d", &a);
	printf("b 값 입력 : ");
	scanf_s("%d", &b);

	p1 = &a;
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("바뀐 값 a는 %d, b는 %d \n", a, b);
}
*/
//예제모음 26
//예제모음 27
//예제모음 28
/*
#include <stdio.h>

char upper(char ch)
{
	return ch - ('a' - 'A');
}

char lower(char ch)
{
	return ch + ('a' - 'A');
}

int main()
{
	char in[100], out[100];
	char ch;
	int i = 0;

	printf("문자열을 입력(100자 이내) : ");
	scanf_s("%s", in, 100);

	do {
		ch = in[i];
		if (ch >= 'A' && ch <= 'Z')
			out[i] = lower(ch);
		else if (ch >= 'a' && ch <= 'z')
			out[i] = upper(ch);
		else
			out[i] = ch;
		i++;
	} while (ch != '\0');

	out[i] = '\0';
	printf("변환된 결과 ==> %s\n", out);
}
*/
//예제모음 29
//예제모음 30
//예제모음 31
//예제모음 32
/*
#include <stdio.h>
#include <malloc.h>

int main()
{
	int* p;
	int i, hap = 0;
	int cnt;

	printf(" 입력할 개수는 ? ");
	scanf_s("%d", &cnt);
	p = (int*)malloc(sizeof(int) * cnt);

	for (i = 0; i < cnt; i++)
	{
		printf(" %d 번째 숫자 : ", i + 1);
		scanf_s("%d", p + i);
	}

	for (i = 0; i < cnt; i++)
	{
		if (p[i] % 2 == 0)
			hap = hap + p[i];
	}

	printf("입력한 짝수합 ==> %d\n", hap);

	free(p);
}
*/
//예제모음 33
//예제모음 34
//예제모음 35
/*
#include <stdio.h>

int main()
{
	typedef struct _person {
		char name[10];
		union _id {
			char phone[15];
			char jumin[15];
		} id;
	} person;

	person p1;

	printf("이름 --> ");
	scanf_s("%s", p1.name, 15);
	printf("전화번호 또는 주민번호 --> ");
	scanf_s("%s", p1.id.jumin, 15);

	printf("\n--- 구조체/공용체 혼합 활용 ---\n");
	printf("이름 ==> %s\n", p1.name);
	printf("전화번호/주민번호 ==> %s\n", p1.id.phone);
}
*/
//예제모음 36
#include <stdio.h>

int main()
{
	enum  month {
		January = 1, February, March, April,
		May, June, July, August,
		September, October, November, December
	};

	enum month mm;

	printf("월 입력 : ");
	scanf_s("%d", &mm);

	switch (mm)
	{
	case January: printf("%d월은 January 입니다.", mm); break;
	case February: printf("%d월은 February 입니다.", mm); break;
	case March: printf("%d월은 March 입니다.", mm); break;
	case April: printf("%d월은 April 입니다.", mm); break;
	case May: printf("%d월은 May 입니다.", mm); break;
	case June: printf("%d월은 June 입니다.", mm); break;
	case July: printf("%d월은 July 입니다.", mm); break;
	case August: printf("%d월은 August 입니다.", mm); break;
	case September: printf("%d월은 September 입니다.", mm); break;
	case October: printf("%d월은 October 입니다.", mm); break;
	case November: printf("%d월은 November 입니다.", mm); break;
	case December: printf("%d월은 December 입니다.", mm); break;
	default:printf("잘못 입력했군요.");
	}
	printf("\n\n");
}

//예제모음 37
//예제모음 38
//예제모음 39
//예제모음 40
