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

//�������� 14
//�������� 15
//�������� 16
//�������� 17
//�������� 18
//�������� 19
//�������� 20
//�������� 21
//�������� 22
//�������� 23
//�������� 24
//�������� 25
//�������� 26
//�������� 27
//�������� 28
//�������� 29
//�������� 30
//�������� 31
//�������� 32
//�������� 33
//�������� 34
//�������� 35
//�������� 36
//�������� 37
//�������� 38
//�������� 39
//�������� 40
