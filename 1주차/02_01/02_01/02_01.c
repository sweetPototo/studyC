# include <stdio.h>

int main()
{
	/*
	int a, b;
	int result;

	a = 100;
	b = 50;

	result = a + b;
	printf("%d + %d = %d\n", a, b, result); //100 + 50 = 150
	
	result = a - b;
	printf("%d - %d = %d\n", a, b, result);//100 - 50 = 50

	result = a * b;
	printf("%d * %d = %d\n", a, b, result);//100 * 50 = 5000

	result = a / b;
	printf("%d / %d = %d\n", a, b, result);//100 / 50 = 2
	*/
	int a, b; //a,b ����������
	int result;

	printf("ù��° ����� ���� �Է��ϼ��� ==> "); //printf() ==> ����Լ�
	scanf_s("%d", &a); //scanf_s==>(�Է��Լ�)("%d : (����������)", &(���ۼ���) ==�޸� �ּҸ� �ǹ� a(����) );
	//&a ==> a������ �ǹ�
	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &b);

	result = a + b;
	printf("%d + %d = %d\n", a, b, result); //100 + 50 = 150

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);//100 - 50 = 50

	result = a * b;
	printf("%d * %d = %d\n", a, b, result);//100 * 50 = 5000

	result = a / b;
	printf("%d / %d = %d\n", a, b, result);//100 / 50 = 2
	/*
	%d�� ������ ����ϱ� ���� �ʿ��ϴ�.
	\n�� ������ ��µ��� �ʴ� ��ȣ�� ���� �ٷ� �Ѿ��� �ǹ��̴�.

	scanf�� �Է��Լ��� ���־�Ʃ��� �ܿ� ��� ���������� ����Ѵ�
		(�� �ٸ������������� scanf�� ���)
	���־�Ʃ��������� scanf ��ſ� scanf_s�� �����Ѵ�.
	���࿡ scanf�� ����Ѵٸ� (�ַ��Ž����/�ҽ����ϸ�(���콺������)
	�Ӽ� / �����Ӽ� / c / c++ / SDL�˻�(��->�ƴϿ�)
	*/
}
