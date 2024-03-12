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
	int a, b; //a,b 정수형변수
	int result;

	printf("첫번째 계산할 값을 입력하세요 ==> "); //printf() ==> 출력함수
	scanf_s("%d", &a); //scanf_s==>(입력함수)("%d : (정수형서식)", &(엠퍼센드) ==메모리 주소를 의미 a(변수) );
	//&a ==> a번지의 의미
	printf("두번째 계산할 값을 입력하세요 ==> ");
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
	%d는 정수를 출력하기 위해 필요하다.
	\n은 실제로 출력되지 않는 기호로 다음 줄로 넘어가라는 의미이다.

	scanf는 입력함수로 비주얼스튜디오 외에 모든 개발툴에서 사용한다
		(단 다른개발툴에서는 scanf만 사용)
	비주얼스튜디오에서는 scanf 대신에 scanf_s를 권장한다.
	만약에 scanf를 사용한다면 (솔루션탐색기/소스파일명(마우스오른쪽)
	속성 / 구성속성 / c / c++ / SDL검사(예->아니오)
	*/
}
