# include <stdio.h>

int main()
{
	/*
	int a = 99;

	if (a < 100) //조건식(a<100)이 참일때 아래 문장 실행
		printf("100보다 작군요.\n");
	*/
	/*
	조건문(선택 제어문)
		조건에 따라 다른 내용이 실행되도록 실행의 흐름을 제어하는 명령문으로 if문과 switch문이 있다. 
		선택의 기준을 제시하고 상황에 따라 다른 값이나 내용을 적용한다.
		기준이 부합할 때까지 특정 작업을 반복한다.

	기본 if문
		조건식이 참일 때 실행, 거짓일 때는 아무 것도 하지 않음

		if(조건식)
			실행할 문장;
	*/
	/*
	int a = 200;
	if (a < 100)
		printf("100보다 작군요.\n"); //참일 경우에 수행할 것으로 예상된다.
		printf("거짓이으로 이 문장은 안보이겠죠?\n");

	printf("프로그램 끝!");
	*/
	////위 조건식행이 거짓이면 들여쓰기한 그 바로 아래행만 수행하지 않고 이후 행들을 수행.
	//행 바꿈의 함정
		//조건식이 참이면 바로 아래에 있는 한 문장만 실행
	   //if문에서 두 문장 이상을 실행하고 싶다면 여러 개의 구문을 하나로 만드는 블록({ })을 사용한다.
	/*
	int a = 200;
	if (a < 100)
	{
		printf("100보다 작군요.\n");
		printf("거짓이으로 이 문장은 안보이겠죠?\n");
	}
	printf("프로그램 끝!");
	*/
	/*
	int a = 200;
	if (a < 100)
		printf("100보다 작군요.\n"); //조건식이 참이면(a가 100보다 작으면) 실행한다. 
	else
		printf("100보다 크군요.\n"); //조건식이 거짓이면(a가 100보다 크거나 같으면) 실행한다. 
	*/
	/* 
	if~else문
		참일 때 실행하는 문장과 거짓일 때 실행하는 문장이 다를 때 사용함.
		조건식이 참이면 if문을 실행하고, 그렇지 않으면 else문을 실행.
	*/
	/*
	int a = 200;
	if (a < 100)
	{
		printf("100보다 작군요.\n"); // 조건식이 참이면(a가 100보다 작으면) 중괄호에 있는 아래 두 문장이 실행한다.
		printf("참이면 이 문자도 보이겠죠?\n");
	}
		 
	else
	{
		printf("100보다 크군요.\n");//조건식이 거짓이면(a가 100보다 작으면) 중괄호에 있는 아래 두 문장이 실행한다.
		printf("거짓이면 이 문자도 보이겠죠?\n");
	}
	
	printf("프로그램 끝!\n"); //참 거짓 상관없이 무조건 실행
	*/
		//만약 참일 때 수행할 문장도 여러 개이고 거짓일 때 수행할 문장도 여러 개라면 블록({ })으로 묶는다.
	/*
	int a;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a);//정수를 입력받는다. 

	if (a % 2 == 0) //입력된 값을 2로 나눈 나머지값이 0일 경우 
	{
		printf("짝수를 입력했군요.\n");//짝수이면(2로 나눈 나머지값이 0이면) 실행한다. 
	}
	else
	{
		printf("홀수를 입력했군요.\n");//홀수이면(2로 나눈 나머지값이 0이 아니면) 실행한다. 
	}
	*/
	/*
	int a = 75;

	if (a > 50)//참이면(a가 50보다 크면) 실행한다. 
	{
		if (a < 100)//참이고(a가 50보다 크고 a가 100보다 작으면) 실행한다.
		{
			printf("50보다 크고 100보다 작군요.\n");
		}
		else
		{
			printf("100보다 크군요.\n");///참이고(a가 50보다 크고 100보다 크거나 같으면) 실행한다.
		}
	}
	else
	{
		printf("50보다 작군요.\n");//거짓이면(a가 50보다 작거나 같으면) 실행한다. 
	}
	*/
/*
int a;

printf("점수를 입력하세요 : ");
scanf_s("%d", &a);

if (a >= 90)
	printf("A");
else
	if(a>=80)
		printf("B");
	else
		if (a >= 70)
			printf("C");
		else
			if (a >= 60)
				printf("D");
			else
				printf("F");
printf("학점입니다.");
*/
/*
int a;

printf("점수를 입력하세요 : ");
scanf_s("%d", &a);

if (a >= 90) //a가 90점 이상일 때와 미만일 때를 먼저 구분
	printf("A"); //90점 미만이면 또 다시 조건식 사용  
else if (a >= 80)
	printf("B");
else if (a >= 70)
	printf("C");
else if (a >= 60)
	printf("D");
else
	printf("F");
printf("학점입니다.");
*/
/*
중첩 if문
	if문을 한 번 실행하고 그 결과에 다시 다른 if문을 실행하는 것
	가능하면 블록을 사용하여 조건식을 명확히 하는 것이 좋음*/
/*
int a;

printf("1~4중에 선택 : ");
scanf_s("%d", &a);

switch (a) // 입력한 a 값에 따라서 분기한다.
{
case 1:
	printf("1을 선택했다.\n"); //a가 1이면 아래행을 수행하고 그다음행에서 switch 블록을 빠져나간다
	break;
case 2:
	printf("2를 선택했다.\n");
	break;
case 3:
	printf("3을 선택했다.\n");
	break;
case 4:
	printf("4를 선택했다.\n");
	break;
default:
	printf("이상한 걸 선택했다.\n");//a가 1, 2, 3, 4 중 아무것도 해당되지 않을 때 수행한다. 
}
*/
/*
switch~case문
	참과 거짓 이외의 다른 선택이 가능한 경우에 사용
	여러 개 중 하나를 선택한다는 의미로 다중 분기
	조건값(정숫값)에 따라 case문 실행
break문의 역할
	switch~case문을 빠져나가는 역할
	실행문의 마지막에 반드시 써줘야 함
*/

int year;

printf("출생 연도 입력 : ");
scanf_s("%d", &year);

switch (year % 12)
{
case 0: printf("원숭이띠\n"); break;
case 1: printf("닭띠\n"); break;
case 2: printf("개띠\n"); break;
case 3: printf("돼지띠\n"); break;
case 4: printf("쥐띠\n"); break;
case 5: printf("소띠\n"); break;
case 6: printf("호랑이띠\n"); break;
case 7: printf("토끼띠\n"); break;
case 8: printf("용띠\n"); break;
case 9: printf("뱀띠\n"); break;
case 10: printf("말띠\n"); break;
case 11: printf("양띠\n"); break;
}
}