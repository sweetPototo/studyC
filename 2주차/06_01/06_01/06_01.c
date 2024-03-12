# include <stdio.h>

int main()
{
	/*
	printf("안녕!!\n");
	printf("안녕!!\n");
	printf("안녕!!\n");
	printf("안녕!!\n");
	printf("안녕!!\n");
	*/
	/*
	int i;
	for (i = 0; i < 5; i++) //for문을 사용해서 다섯 번 반복한다. 
	{
		printf("안녕!!\n");
	}
	*/
	/*
	반복문
		여러 번 수행해야 할 작업을 한 번에 해결해주는 반복문
		대표적인 반복문은 for문과 while문

	for문의 이해
		반복문이란 말 그대로 문장을 반복하게 만들어주는 것

	int i;
	for (초깃값; 조건식; 증감식)
		반복될 문장
		*/
	/*
	int i;
	for (i = 0; i < 3; i++) //불록을 사용한 for문이다.
	{
		printf("안녕!!\n"); 
		printf("안녕 안녕\n");
	}
	printf("\n\n");

	for (i = 0; i < 3; i++) //블록을 사용하지 않은 for문이다. 
		printf("안녕!!\n");
		printf("안녕 안녕\n");
	*/

	//반복 실행할 문장이 두 개 이상이면 반드시 블록 사용
	/*
	int i;
	for (i = 5; i >= 1; i--) //초깃값, 조건식, 증감식을 감소로 수정한다.
		{
			printf("%d : 안녕!!\n", i);
		}
	*/
	/*
	int i;
	for (i = 1; i <= 5; i++)
	{
		printf("%d \n", i);
	}
	*/
	/*
	int hap;

	hap = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;

	printf("1에서 10까지의 합 : %d \n", hap);
	*/
	/*
	int i;
	int hap = 0; //hap를 초기화를 하지 않으면 에러 발생. 누적합을 구할때는 0으로 초기화를 해야된다.

	for (i = 1; i <= 10; i++)
	{
		hap = hap + i; //누적합을 구하는 공식. hap += i와 동일
	}

	printf("1에서 10까지의 합 : %d \n", hap);
	*/
	/*
	실행 결과 오류 발생함.
		변수 hap이 초기화되지 않았기 때문

		쓰레기값의 이해
		변수 안에 이미 다른 값이 있는 상태로 연산을 수행함으로써 비정상적인 결과 값 출력
		프로그램 내에서 변수가 초기화되지 않은 것이 원인
		누적값을 표현하는 변수의 초기화를 수행함으로써 문제 해결
			int hap = 0;
	*/
	/*

	int hap = 0;
	int i;

	for (i = 501; i <= 1000; i+=2) //i를 501부터 2씩 증가시킨다. 
		hap = hap + i;
	printf("500에서 1000까지의 홀수의 합 : %d\n", hap);
	*/
	/*
	int hap = 0;
	int i;

	int num;

	printf("값 입력 : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		hap = hap + i;
	}

	printf("1에서 %d까지의 합 :%d\n ", num, hap);
	*/
int hap = 0;
int i;

int num1, num2, num3;

printf("시작값, 끝값, 증가값 입력 : ");
scanf_s("%d %d %d", &num1, &num2, &num3);

for (i = num1; i <= num2; i = i+num3)
{
	hap = hap + i;
}

printf("%d에서 %d까지 %d씩 증가한 값의 합 :%d\n ", num1, num2, num3, hap);
}