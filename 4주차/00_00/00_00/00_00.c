//�������� 01
/*
# include <stdio.h>

int main()
{
	int a, b, c, d;
	int result;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &a);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &b);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &c);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &d);

	result = a + b + c + d;
	printf("%d + %d + %d + %d = %d\n", a, b, c, d, result);

}
*/
//�������� 02
//�������� 03
//�������� 04
//�������� 05
//�������� 06
//�������� 07
//�������� 08
/*
#include <stdio.h>

int main()
{
	float a, b;
	float result;

	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%f", &a);
	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
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
//�������� 09
/*
#include <stdio.h>

int main()
{
	int money, c500, c100, c50, c10;

	printf(" ## ��ȯ�� ���� ? ");
	scanf_s("%d", &money);

	c500 = money / 500;
	money = money % 500;

	c100 = money / 100;
	money = money % 100;

	c50 = money / 50;
	money = money % 50;

	c10 = money / 10;
	money = money % 10;

	printf("\n �����¥�� ==> %d �� \n", c500);
	printf(" ���¥��   ==> %d �� \n", c100);
	printf(" ���ʿ�¥�� ==> %d �� \n", c50);
	printf(" �ʿ�¥��   ==> %d �� \n", c10);
	printf(" �ٲ��� ���� �ܵ� ==> %d �� \n", money);
}
*/
//�������� 10
//�������� 11
/*
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("ù��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("����� �����ڸ� �Է��ϼ��� : ");
	scanf_s(" %c", &ch, 1);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d �Դϴ�. \n", a, b, a + b);

	if (ch == '-')
		printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);

	if (ch == '*')
		printf("%d * %d = %d �Դϴ�. \n", a, b, a * b);

	if (ch == '/')
		printf("%d / %d = %f �Դϴ�. \n", a, b, a / (float)b);

	if (ch == '%')
		printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);
}
*/
//�������� 12
/*
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("ù��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("����� �����ڸ� �Է��ϼ��� : ");
	scanf_s(" %c", &ch, 1);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d �Դϴ�. \n", a, b, a + b);
	else if (ch == '-')
		printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);
	else if (ch == '*')
		printf("%d * %d = %d �Դϴ�. \n", a, b, a * b);
	else if (ch == '/')
		printf("%d / %d = %f �Դϴ�. \n", a, b, a / (float)b);
	else if (ch == '%')
		printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);
	else
		printf("�����ڸ� �߸� �Է��߽��ϴ�. \n");
}
*/
//�������� 13
/*
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf_s("%d %c %d", &a, &ch, 1, &b); //scanf_s�������

	switch (ch)
	{
	case '+': printf("%d + %d = %d �Դϴ�. \n", a, b, a + b);break;
	case '-':
		printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d �Դϴ�. \n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %d �Դϴ�. \n", a, b, a / b);
		break;
	case '%':
		printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);
		break;
	default:
		printf("�����ڸ� �߸� �Է��߽��ϴ�. \n");
	}
}
*/
//�������� 14
//�������� 15
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
			printf("10����  16����  ���� \n");
			printf("---------------------\n");
		}
		printf("%5d  %5x  %5c\n", i, i, i);
	}
}
*/
//�������� 16
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int str_cnt;
	int i;

	printf("������ �� ���ڸ� �Է� (100�� ����) : ");
	scanf_s("%s", str, 100);

	printf("\n");
	printf("�Է��� ���ڿ� ==> %s\n", str);
	printf("��ȯ�� ���ڿ� ==>");

	str_cnt = strlen(str);

	for (i = str_cnt; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
*/
//�������� 17
/*
#include <stdio.h>

int main()
{
	int start, end;
	int basu, i;
	int hap = 0;

	printf("�հ��� ���۰� ==> ");
	scanf_s("%d", &start);
	printf("�հ��� ���� ==> ");
	scanf_s("%d", &end);
	printf("��� ==> ");
	scanf_s("%d", &basu);

	i = start;
	while (i <= end)
	{
		if (i % basu == 0)
			hap = hap + i;

		i++;
	}

	printf("%d���� %d������ %d����� �հ� ==> %d\n", start, end, basu, hap);
}
*/
//�������� 18
/*
#include <stdio.h>

int main()
{
	char str[100];
	char ch;

	int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
	int i;

	printf("���ڿ��� �Է�(100�� �̳�) : ");
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

	printf("�빮�� %d��, �ҹ��� %d��, ���� %d��\n", upper_cnt, lower_cnt, digit_cnt);
}
*/
//�������� 19
//�������� 20
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char ss[100];
	char tt[100];
	int count, i;

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", ss, 100);

	count = strlen(ss);

	for (i = 0; i < count; i++)
	{
		tt[i] = ss[count - (i + 1)];
	}
	tt[count] = '\0';

	printf("������ �Ųٷ� ��� ==> %s \n", tt);
}
*/
//�������� 21
//�������� 22
//�������� 23
//�������� 24
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char ss[100];
	int count, i;
	char* p;

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", ss, 100);

	count = strlen(ss);

	p = ss;

	printf("������ �Ųٷ� ��� ==> ");
	for (i = 0; i < count; i++)
	{
		printf("%c", *(p + count - (i + 1)));
	}
	printf("\n");
}
*/
//�������� 25
/*
#include <stdio.h>

int main()
{
	int a, b, tmp;
	int* p1, * p2;

	printf("a �� �Է� : ");
	scanf_s("%d", &a);
	printf("b �� �Է� : ");
	scanf_s("%d", &b);

	p1 = &a;
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("�ٲ� �� a�� %d, b�� %d \n", a, b);
}
*/
//�������� 26
//�������� 27
//�������� 28
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

	printf("���ڿ��� �Է�(100�� �̳�) : ");
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
	printf("��ȯ�� ��� ==> %s\n", out);
}
*/
//�������� 29
//�������� 30
//�������� 31
//�������� 32
/*
#include <stdio.h>
#include <malloc.h>

int main()
{
	int* p;
	int i, hap = 0;
	int cnt;

	printf(" �Է��� ������ ? ");
	scanf_s("%d", &cnt);
	p = (int*)malloc(sizeof(int) * cnt);

	for (i = 0; i < cnt; i++)
	{
		printf(" %d ��° ���� : ", i + 1);
		scanf_s("%d", p + i);
	}

	for (i = 0; i < cnt; i++)
	{
		if (p[i] % 2 == 0)
			hap = hap + p[i];
	}

	printf("�Է��� ¦���� ==> %d\n", hap);

	free(p);
}
*/
//�������� 33
//�������� 34
//�������� 35
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

	printf("�̸� --> ");
	scanf_s("%s", p1.name, 15);
	printf("��ȭ��ȣ �Ǵ� �ֹι�ȣ --> ");
	scanf_s("%s", p1.id.jumin, 15);

	printf("\n--- ����ü/����ü ȥ�� Ȱ�� ---\n");
	printf("�̸� ==> %s\n", p1.name);
	printf("��ȭ��ȣ/�ֹι�ȣ ==> %s\n", p1.id.phone);
}
*/
//�������� 36
#include <stdio.h>

int main()
{
	enum  month {
		January = 1, February, March, April,
		May, June, July, August,
		September, October, November, December
	};

	enum month mm;

	printf("�� �Է� : ");
	scanf_s("%d", &mm);

	switch (mm)
	{
	case January: printf("%d���� January �Դϴ�.", mm); break;
	case February: printf("%d���� February �Դϴ�.", mm); break;
	case March: printf("%d���� March �Դϴ�.", mm); break;
	case April: printf("%d���� April �Դϴ�.", mm); break;
	case May: printf("%d���� May �Դϴ�.", mm); break;
	case June: printf("%d���� June �Դϴ�.", mm); break;
	case July: printf("%d���� July �Դϴ�.", mm); break;
	case August: printf("%d���� August �Դϴ�.", mm); break;
	case September: printf("%d���� September �Դϴ�.", mm); break;
	case October: printf("%d���� October �Դϴ�.", mm); break;
	case November: printf("%d���� November �Դϴ�.", mm); break;
	case December: printf("%d���� December �Դϴ�.", mm); break;
	default:printf("�߸� �Է��߱���.");
	}
	printf("\n\n");
}

//�������� 37
//�������� 38
//�������� 39
//�������� 40
