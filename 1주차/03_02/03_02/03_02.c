# include <stdio.h>
# include <string.h>
//strcpy( ) 함수로 문자열 대입(문자 관련 함수 사용시 # include <string.h> (헤더 파일) 삽입
//strlen(), strcmp(), strcat() ==> 문자열 관련 함수

int main()
{
	/*
	int a = 100, b = 200; //정수형 변수 a와 b에 값을 지정한다.
	float result; //실수형 변수 result를 선언한다.

	result = a / b;//실수형 변수 result를 선언한다. reslut값은 정수/정수이므로 결과값은 0임
	printf("%f\n", result); //a를 b로 나눈 결과에서 정수 0이 %f에 의해서 실수값 0.00000출력

	result = a / (float)b;//나누는 값을 강제실수형변환을 해서 결과값이 0.500000이 출력
	printf("%f\n", result);
	*/
	/*
	    정수 / 정수의 결과는 정수
		정수 0의값을 서식 %f의 실수값을 0.00000출력
		실수값 0.50000을 출력하려면  a / (float)b 처럼 b를 강제형변환하면 됨
		실수값을 원할때는 나누는 값을 실수로 해야함
	*/
	/*
	float a = 0.12345678910123456789012345f; //float 형 변수 a에 정밀도 스물다섯 자리 실수를 입력한다
	//(맨 뒤의 f는 빼도 된다). //소수점이하 일곱자리까지는 제대로 출력  
	double b = 0.12345678910123456789012345; //double 형 변수 b에 소수점 아래 스물다섯 자리 실수를 입력한다.
		//소수점이하 열 일곱자리까지는 제대로 출력

	printf("%30.25f\n", a);//a와 b를 소수점 아래 스물다섯 자리까지 출력하는데 float는 %f로, double은 %lf로 출력한다.
	printf("%30.25lf\n", b);
	*/

	// 문자형 변수 사용 예
	/*
	char a, b, c; //문자형 변수 3개를 선언한다.

	a = 'A'; //문자형 변수 a에 'A'를 대입한다.

	printf("%c\n", a);//문자형 변수 a를 문자형과 정수형으로 출력한다.
	printf("%d\n", a);//‘A’와 65는 동일한 값이지만 어떤 출력 서식을 사용하느냐에 따라 다른 값 출력

	b = 'a';//문자형 변수 b에 'a'를 대입한다.
	c = b + 5;//문자형 변수 b에 5를 더해서 문자형 변수 c에 대입한다. 
	printf("%c\n", b);
	printf("%c\n", c);

	c = 90;//문자형 변수 c에 숫자 90을 대입한다. 
	printf("%c\n", c);
	*/
	/*
	문자형 데이터 형식
		아스키 코드
		0~9 : 48~57
		A~Z : 65~90
		a~z : 97~122

		숫자 0은 48, 대문자 A는 65, 소문자 a는 97 등은 알아두면 편함.
		C 언어에서는 숫자를 문자로도 표현함. 
		(char ch = 'a') == (char ch = 97)

	한 글자를 뜻하는 문자형
		char (문자형 또는 정수형) 1바이트크기 
		unsinged char (문자형 또는 부호없는 양의정수형) 1바이트크기*/
	/*
	int a, b;
	char c, d;

	a = 0x41; //정수형 변수 a에 16진수 0x41을, b에 0x50을 대입한다.
	b = 0x50;

	printf("%c\n", b);//정수형 변수 b를 문자형으로 출력한다. 

	c = a; //문자형 변수 c에 정수형 변수 a 값을 대입한다.
	printf("%c\n", c); //문자형 변수 c를 문자형으로 출력한다.

	d = '#';//문자형 변수 d에 '#'을 대입한다.
	printf("%c의 ASCII값은 %d입니다\n", d, d);//문자형 변수 d를 두 가지 형태로 출력한다.
	*/
	/*
	char str1[10];//문자형 배열 str1과 str2를 선언한다. 
	char str2[10];
	char str3[10] = "CookBook"; //문자형 배열 str3을 선언함과 동시에 문자열을 대입한다.

	strcpy_s(str1, 10, "Basic-C");
	////strcpy(str1, "Basic-C");사용시 솔루션탐색기/ 파일/속성/ 마우스 오른쪽 속성에서SDL검사 예를 아니요로
    //또는 strcpy_s(str1, 10, "Basic-C"); str1의 데이터크기 10을 넣는다
	strcpy_s(str2, 10, str3);//str3의 값을 str2에 복사한다.

	printf("str1==>%s\n", str1);//문자형 배열 str1, str2, str3을 출력한다.
	printf("str2==>%s\n", str2);
	printf("str3==>%s\n", str3);
	*/
	char str[10] = "0123456789"; //열 자리의 str 배열에 글자 10개를 대입한다. 

	printf("str==>%s\n", str);
	//str의 내용을 출력한다.  
	//(비정상출력:쓰레기값(원래 데이터값, 의미없는값)포함 출력 ==>널 문자가 없기 때문에 출력시 문제 발생)
	str[0] = 'I';//str 배열에 글자 6개와 널 문자를 입력한다.
	str[1] = 'T';
	str[2] = 'c';
	str[3] = 'o';
	str[4] = 'o';
	str[5] = 'k';
	str[6] = '\0';

	printf("str==>%s\n", str);//str의 내용을 출력한다. (정상출력) 
	printf("str[7]==>%c\n", str[7]);//str[7]의 한 글자(쓰레기값)를 출력한다. 
	printf("str[50]==>%c\n", str[50]);//tr[50]의 한 글자(이상한 값)를 출력한다. 


}
