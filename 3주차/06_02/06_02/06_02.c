# include <stdio.h>

int main()
{
	/*
	int i;
	int dan; //계산한 단을 입력받을 변수를 선언한다. 

	printf("몇 단?"); //계산할 단을 입력받는다. 
	scanf_s("%d", &dan);

	for (i = 1; i <= 9; i++)//1부터 9까지 반복하며 입력한 단을 출력한다. 
	{
		printf("%d X %d = %2d\n", dan, i, dan * i);
	}
	*/
	/*
	int i, k; //반복할 변수 i, k를 선언한다. 

	for (i = 0; i < 3; i++)//바깥 for문을 세 번 반복한다. 
	{
		for (k = 0; k < 2; k++) //안쪽 for문을 두 번 반복한다. 
		{
			printf("중첩 for문 (i값:%d, k값:%d\n", i, k); //i와 k 값을 총 여섯(3x2) 번 출력한다. 
		}
	}
	*/
	/*
	int i, k;

	for (i = 2; i < 10; i++)//2~9단까지 반복한다. (바같for문)		
	{
		for (k = 1; k < 10; k++)//각 단의 뒷자리는 1~9를 반복한다. (안쪽for문)
		{
			printf("%d X %d = %2d\n", i, k, i * k);//구구단을 출력한다. 
		}
		printf("\n");//각 단이 끝나면 한 줄을 띄운다. 
	}
	*/
	int i, k;

	for (i = 1; i < 10; i++)	//각 단의 뒷자리는 1~9를 반복한다. 	
	{
		for (k = 2; k < 10; k++) //2~9단까지 반복한다. 
		{
			printf("%3d X %2d = %2d", k, i, i * k); //각 단별로 한 줄씩 출력한다. 서식에서 공간 처리를 한다. 
		}
		printf("\n"); //각 단의 한 줄을 출력한 후 다음 줄로 넘긴다. 
	}
	// 구구단 가로 출력(발상의 전환이 필요)
    // 뒷 자리수(안쪽for문)에 대해 단이 돌아감(안쪽for문)

}
