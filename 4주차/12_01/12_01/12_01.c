# include <stdio.h>
# include <string.h>

//구조체를 사용하지 않은 예 
int main()
{
	/*
	char name[10];//학생 이름, 국어 점수, 영어 점수, 평균 점수 변수를 선언한다. 
	int kor;
	int eng;
	float avg;

	printf("이름 : ");
	scanf_s("%s", name, 9);//canf_s("%s", name, 9) 크기는 변수뒤에사용한다. 학생 이름을 입력한다. 널문자를 제외한 최대 9자를 입력할 수 있다.

	printf("국어점수 : ");//국어 점수를 입력한다. 
	scanf_s("%d", &kor);

	printf("영어점수 : ");
	scanf_s("%d", &eng);

	avg = (kor + eng) / 2.0f;

	printf("\n");
	printf("학생이름 ==> %s\n", name);//학생 이름, 국어 점수, 영어 점수, 평균 점수를 계산한다 
	printf("국어점수 ==> %d\n", kor);
	printf("영어점수 ==> %d\n", eng);
	printf("평균점수 ==> %5.1f\n", avg);
	*/
	//구조체를 사용하여 변경
	/*
	struct student
	{
		char name[10]; //student 구조체형을 선언한 후 멤버 변수를 선언한다 (학생 이름, 국어 점수, 영어 점수, 수학 점수, 평균 점수).
		int kor;
		int eng;
		float avg;
	};
	struct student s; //구조체 변수 s를 선언한다. 

	printf("이름 : "); //학생 이름을 입력한다. 
	scanf_s("%s", s.name, 9);

	printf("국어점수 : "); 
	scanf_s("%d", &s.kor);

	printf("영어점수 : ");
	scanf_s("%d", &s.eng);

	s.avg = (s.kor + s.eng) / 2.0f;

	printf("\n");
	printf("학생이름 ==> %s\n", s.name);
	printf("국어점수 ==> %d\n", s.kor);
	printf("영어점수 ==> %d\n", s.eng);
	printf("평균점수 ==> %5.1f\n", s.avg);
	*/
	/*
	비빔밥 : 별도의 재료가 하나의 그릇에 담겨 있다.
	구조체 : 서로 다른 여러 가지 변수 형태를 하나의 블록으로 묶는다.
	구조체의 문법
		맴버 변수 : 구조체 안에서 정의된 변수. 일반적인 변수와 동일한 방법으로 선언
		struct 구조체이름
	{
		데이터형식 멤버변수1; 
		데이터형식 멤버변수2; 
		데이터형식 멤버변수3; 
		데이터형식 멤버변수4;
		.
		.
	};
	struct 구조체이름 구조체변수이름; 
		구조체 문법 구조
			구조체형의 마지막은 반드시 ‘ };’로 끝나야 함.
			구조체형을 만들었으면 구조체형의 모양대로 구조체 변수를 선언함.
			구조체 변수는 ‘구조체 변수 이름.멤버 변수 이름’ 형태로 쓰고 일반 변수처럼 사용함
	*/
	//구조체 변수의 다른 선언 방법
	/*
	1.구조체형과 변수를 별도로 선언
			struct student
		{
			char name[10];
			int kor;
			int eng;
			float avg;
		};
		struct student s;
	2.구조체형과 변수를 동시에 선언
			struct student
		{
			char name[10];
			int kor;
			int eng;
			float avg;
		}s;

	3.typedef를 이용하여 선언
			typedef struct student
		{
			char name[10];
			int kor;
			int eng;
			float avg;
		}student;
		student s;
		*/

//구조체 배열을 사용하지 않은 예
/*
char name[3][10]; //학생 이름 배열을 선언한다. 
int kor[3];
int eng[3];
float avg[3];

int i;

strcpy_s(name[0], 9, "Kim"); //첫 번째 학생의 정보를 대입한다 strcpy_s(name[0],9, "Kim") 크기 값은 변수 뒤에 사용한다.
kor[0] = 90;
eng[0] = 80;
avg[0] = (kor[0] + eng[0]) / 2.0f;

strcpy_s(name[1], 9, "Park");
kor[1] = 70;
eng[1] = 60;
avg[1] = (kor[1] + eng[1]) / 2.0f;

strcpy_s(name[2], 9, "Lee");
kor[2] = 50;
eng[2] = 40;
avg[2] = (kor[2] + eng[2]) / 2.0f;

for (i = 0; i < 3; i++)
{
	printf("학생이름 ==> %s\n", name[i]);
	printf("국어점수 ==> %d\n", kor[i]);
	printf("영어점수 ==> %d\n", eng[i]);
	printf("평균점수 ==> %5.1f\n", avg[i]);
	printf("\n");
}
*/
//구조체 배열을 사용하여 변경
/*
struct student //구조체형을 선언한다. 
{
	char name[10];
	int kor;
	int eng;
	float avg;
};
struct student s[3];//구조체 배열 s[3]을 선언한다. 

int i;

strcpy_s(s[0].name, 9, "Kim"); //첫 번째 학생의 정보를 대입한다 strcpy_s(name[0],9, "Kim") 크기 값은 변수 뒤에 사용한다.
s[0].kor = 90;
s[0].eng = 80;
s[0].avg = (s[0].kor + s[0].eng) / 2.0f;

strcpy_s(s[1].name, 9, "Park");
s[1].kor = 70;
s[1].eng = 60;
s[1].avg = (s[1].kor + s[1].eng) / 2.0f;

strcpy_s(s[2].name, 9, "Lee");
s[2].kor = 50;
s[2].eng = 40;
s[2].avg = (s[2].kor + s[2].eng) / 2.0f;

for (i = 0; i < 3; i++)
{
	printf("학생이름 ==> %s\n", s[i].name);
	printf("국어점수 ==> %d\n", s[i].kor);
	printf("영어점수 ==> %d\n", s[i].eng);
	printf("평균점수 ==> %5.1f\n", s[i].avg);
	printf("\n");
}
*/
//구조체 포인터 사용 예
/*
struct student
{
	char name[10]; 
	int kor;
	int eng;
	float avg;
};
struct student s; //구조체 변수 s를 선언한다. 
struct student* p;//구조체 포인터 변수 p를 선언한다. 

p = &s; //포인터 p에 s의 주소를 대입한다.

printf("이름 : "); 
scanf_s("%s", p->name, 9);

printf("국어점수 : ");
scanf_s("%d", &p->kor);

printf("영어점수 : ");
scanf_s("%d", &p->eng);

p->avg = (p->kor + p->eng) / 2.0f;

printf("\n");
printf("학생이름 ==> %s\n", p->name);
printf("국어점수 ==> %d\n", p->kor);
printf("영어점수 ==> %d\n", p->eng);
printf("평균점수 ==> %5.1f\n", p->avg);
//구조체 포인터 : 구조체 포인터 변수도 구조체의 주솟값을 가진다.
*/
/*
union student//공용체 변수 student를 선언한다. 
{
	int tot;
	char grade;
};
union student u; //공용체 변수 u를 선언한다. 

u.tot = 300; //공용체 변수의 멤버 변수에 값을 대입한다.

//u.tot에는 300이라는 값을 넣고, u.grade에 A 를 넣음
// 300이 들어간 4바이트 중 첫 번째 바이트에 엉뚱한 A(아스키 코드 65)가 들어가면서  이상한 값이 출력됨.
u.grade = 'A';
//u.grade에는 나중에 A를 넣었으므로 A(65)로 제대로 출력됨. (나중에 넣은 값만 제대로 출력)
printf("\n--공용체 활용--\n");//공용체 변수의 멤버 변숫값을 출력한다. 
printf("총점 ==> %d \n", u.tot);
printf("등급 ==> %c \n", u.grade);
*/
// 공용체는 한 공간을 2개 이상의 변수가 공유하므로 주의하여 사용.
//공용체 : 하나의 메모리 공간을 다른 종류의 변수가 공용으로 사용하는 것
/*
* 공용체의 문법
	union 공용체이름
	{
		데이터형식 멤버변수1;
		데이터형식 멤버변수2;
		데이터형식 멤버변수3;
		데이터형식 멤버변수4;
	};
	union 공용체이름 공용체변수
	
	*/
enum week
{sun, mon, tue, wed, thu, fri, sat}; //0부터 6까지의 열거형이다. 
enum week ww; //열거형 변수 ww를 선언한다. 

ww = sat; //변수 ww에 값을 대입한다. 

if (ww == sun)//ww가 sun(0)인지 여부에 따라 출력한다. 
	printf("오늘은 일요일입니다.\n", ww);
else
	printf("오늘은 일요일이 아닙니다.\n", ww);
/*
열거형의 이해
	열거형의 형식
	단순히 1, 2, 3, 4, … 와 같은 숫자를 기호로 표현한 것
요일을 열거형으로 표현
	0은 sun, 1은 mon, 2는 tue, … 등과 같이 의미가 좀더 명확해짐
    나열한 데이터의 값은 0에서부터 1씩 차례대로 증가함
enum 열거형 이름
{
	기호1, 기호2, 기호3, , , , ,
};
enum 열거형 이름 열거형변수
*/
}
