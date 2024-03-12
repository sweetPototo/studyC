# include <stdio.h>

int main()
{
	/*
	int a = 100;

	while (a == 200)//조건식을 먼저 판단하므로 while문 내부가 실행되지 않는다.
	{
		printf("while문입니다.\n");
	}

	do //먼저 내용을 실행한 후 조건식을 판단하므로 do~while문 do문이 무조건 한번은 내부가 실행된다. 
	{
		printf("do~while문입니다.\n");
	} while (a == 200);
	*/
	//do~while문과 while문의 차이
		//do~while문은 조건식을 확인하기 전에 ‘반복할 문장’을 수행하므로 무조건 한 번은 실행됨
		//형식은 while문과 동일하지만 do~while문은 조건식이 아래에 위치
	/*
	int menu;

	do //do~while문이므로 한 번은 꼭 실행된다 .
	{
		printf("\n손님 주문하시겠습니까?\n");  
		printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4>그만시킬래요 ==> ");
		scanf_s("%d", &menu);//커피를 선택한다.
		switch (menu) // 선택한 커피에 따라서 주문을 접수한다.
		{
		case 1:printf("카페라떼를 주문하셨습니다.\n"); break;
		case 2:printf("카푸치노를 주문하셨습니다.\n"); break;
		case 3:printf("아메리카노를 주문하셨습니다.\n"); break;
		case 4:printf("주문하신 커피를 준비하겠습니다.\n"); break;
		default:printf("잘 못 주문하셨습니다.\n"); 
		}
	} while (menu != 4);//선택한 메뉴가 4번이 아니면 계속 반복해서 주문을 받는다. (4번이면 중단)
	*/
	/*
	int i;

	for (i = 1; i <= 100; i++)
	{
		printf("for문을 %d회 실행\n", i);
		break; //무조건 for문을 빠져나간다. 
	}
	printf("for문 종료");
	*/
	/*
	int a, b;
	while (1) //무한 루프를 만드는 코드이다. 
	{
		printf("더할 두수 입력(멈추려면 0을 입력):");
		scanf_s("%d %d", &a, &b);

		if (a == 0)//두 수 입력값이 0이면 무조건 while문을 빠져 나간다. 
			break;
		printf("%d + %d = %d\n", a, b, a + b);
	}
	printf("0을 입력해서 for문을 탈출\n");
	*/
	/*
	int hap = 0;
	int i;

	for (i = 1; i <= 100; i++)
	{
		hap = hap + i; // 값이 hap에 누적된다. 

		if (hap > 1000) //hap이 1000보다 크거나 같으면 for문을 빠져나간다. 
			break;

	}
	printf("1에서 100까지 합에서 최초로 1000이 넘는 위치는? : %d\n", i);
	*/
	int hap = 0;
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)// 값을 3으로 나눈 나머지값이 0이면(3의 배수이면) 블록의 끝으로 건너뛰고 다시 위로 돌아간다. 
			continue;
		
		hap = hap + i; //3의 배수가 아닌 i 값이 누적된다. 

	}
	printf("1에서 100까지 합(3의 배수 제외)? : %d\n", hap);
}
