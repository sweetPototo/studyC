# include <stdio.h>

int main()
{
	/*
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("�ȳ��ϼ���\n");
	}
	*/
	/*
	int i;

	i = 0;
	while (i < 5 )
	{
		printf("�ȳ��ϼ���\n");
		i++;
	}
	*/
	/*
	for���� while���� ��
		for���� ����
			for (�ʱ갪; ���ǽ�; ������)
	while ���� ���� ����
		���ǽ��� ���� ���̸� �ݺ��� ���� ����
		�߰�ȣ({ })�� ������ ������ ���ǽ����� ���ƿ� ���� ���� �ݺ�
			�ʱ갪
			while (���ǽ�)
			{
				���๮��;
				������;
			}
	*/

	//1���� 10������ ���� while������. 
	/*
	int i;
	int hap = 0;

	i = 1; //�ʱ갪�� �����Ѵ�. 
	while (i < 11)//���ǽ��̴�. 
	{
		hap = hap + i;
		i++; //�������̴�. 
	}

	printf("1���� 10���� �� : %d\n", hap);
	*/
	/*
	int a, b;

	while (1)
	{
		printf("���� �μ� �Է�(���߷��� ctrl+C) : ");
		scanf_s("%d %d", &a, &b);

		printf("%d + %d = %d\n", a, b, a + b);
	}
	*/
	int a, b;
	char ch;

	while (1)//���� ������ ����� �ڵ��̴�.
	{
		printf("���� �μ� �Է�(���߷��� ctrl+C) : "); 
		scanf_s("%d %d", &a, &b); //������ 2���� ���� �Է¹޴´�.

		printf("����� ������ �Է� : ");
		scanf_s(" %c", &ch, 1);
		//

		switch (ch)
		{
		case '+': printf("%d + %d = %d�Դϴ�\n", a, b, a + b); break;
		case '-': printf("%d - %d = %d�Դϴ�\n", a, b, a - b); break;
		case '*': printf("%d * %d = %d�Դϴ�\n", a, b, a * b); break;
		case '/': printf("%d / %d = %f �Դϴ�. \n", a, b, a / (float)b); break;
		case '%': printf("%d  %% %d = %d�Դϴ�\n", a, b, a % b); break;
		default: printf("�����ڸ� �� �� �Է��߽��ϴ�.\n"); 
		}
	}
}
