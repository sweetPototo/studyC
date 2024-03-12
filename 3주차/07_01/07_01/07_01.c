# include <stdio.h>

int main()
{
	/*
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("안녕하세요\n");
	}
	*/
	/*
	int i;

	i = 0;
	while (i < 5 )
	{
		printf("안녕하세요\n");
		i++;
	}
	*/
	/*
	for문과 while문의 비교
		for문의 형식
			for (초깃값; 조건식; 증감식)
	while 문의 실행 순서
		조건식의 값이 참이면 반복할 문장 수행
		중괄호({ })가 끝나는 곳에서 조건식으로 돌아와 같은 동작 반복
			초깃값
			while (조건식)
			{
				실행문장;
				증감식;
			}
	*/

	//1에서 10까지의 합을 while문으로. 
	/*
	int i;
	int hap = 0;

	i = 1; //초깃값을 지정한다. 
	while (i < 11)//조건식이다. 
	{
		hap = hap + i;
		i++; //증감식이다. 
	}

	printf("1에서 10까지 합 : %d\n", hap);
	*/
	/*
	int a, b;

	while (1)
	{
		printf("더할 두수 입력(멈추려면 ctrl+C) : ");
		scanf_s("%d %d", &a, &b);

		printf("%d + %d = %d\n", a, b, a + b);
	}
	*/
	int a, b;
	char ch;

	while (1)//무한 루프를 만드는 코드이다.
	{
		printf("더할 두수 입력(멈추려면 ctrl+C) : "); 
		scanf_s("%d %d", &a, &b); //연산할 2개의 수를 입력받는다.

		printf("계산할 연산자 입력 : ");
		scanf_s(" %c", &ch, 1);
		//

		switch (ch)
		{
		case '+': printf("%d + %d = %d입니다\n", a, b, a + b); break;
		case '-': printf("%d - %d = %d입니다\n", a, b, a - b); break;
		case '*': printf("%d * %d = %d입니다\n", a, b, a * b); break;
		case '/': printf("%d / %d = %f 입니다. \n", a, b, a / (float)b); break;
		case '%': printf("%d  %% %d = %d입니다\n", a, b, a % b); break;
		default: printf("연산자를 잘 못 입력했습니다.\n"); 
		}
	}
}
