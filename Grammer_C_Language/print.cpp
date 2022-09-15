#include "study.h"


// 어서와 C언어는 처음이지 예제
void Print001()
{
	printf("코더에게 작은 한걸음이지만 프로그래머에게는 \n");
	printf("거대한 도약이다");
}

void Print002()
{
	printf("나는 현재 %c 프로그래밍 언어를 학습하고 있다. \n", 'C');
	printf("나는 지금 막 %d 장을 끝냈다. \n", 2);
	printf("나는 현재 %.1f 퍼센트 준비되어 있다. ", 99.9);
	printf("다음 챕터 학습을 위하여!\n");
}

void Print003()
{
	printf("빛의 속도는 %f km/s 입니다. \n", 300000.0);
	printf("나의 이름은 %s입니다. \n", "김철수");
	printf("나는 현재 %d장까지 학습을 끝냈습니다. \n", 4);
}

void Print004()
{
	/*
		 이것은 2개의 줄에 걸치는 주석이다
	*/

	/* 이것은 한 줄 주석이다*/
	for (int i = 0;i < 25;i++)
	{
		// 0에서 25까지 카운트 한다.
	}
}

void Print005()
{
	int gift1;
	int gift2;
	int gift3;
	int gift4;
	int gift5;

	int total;

	printf("엄마를 위하여 얼마나 돈을 쓸 것인가요?");
	scanf_s("%d", &gift1);
	printf("아빠를 위하여 얼마나 돈을 쓸 것인가요?");
	scanf_s("%d", &gift2);
	printf("동생을 위하여 얼마나 돈을 쓸 것인가요?");
	scanf_s("%d", &gift3);
	printf("형을 위하여 얼마나 돈을 쓸 것인가요?");
	scanf_s("%d", &gift4);
	printf("가장 좋아하는 C프로그래밍 저자를 위하여 얼마나 돈을 쓸 것인가요");
	scanf_s("%d", &gift5);
	
	total = gift1 + gift2 + gift3 + gift4 + gift5;

	printf("\n 선물 비용의 합계는 $%d 입니다.", total);
}

void Print006()
{
	float a;
	float b;

	printf("보너스를 얼마나 받았습니까?");
	scanf_s("%f", &a);

	b = .85 * a;

	printf("만약 15%를 자선단체에 기부하더라도 당신은 ");
	printf("아직 %.2f을 가지고 있습니다.", b);

	printf("\n 나는 이 새로운 주석을 좋합니다.");
}

// 주석으로 코드를 명확히 하기
void Print007()
{
	// 실수는 %f를 사용하여 출력한다. 소수점 6자리까지 출력된다.
	printf("빛의 속도는 %fkm/s 입니다. \n", 300000.0);
	printf("중력 가속도는 %fm/s 제곱입니다. \n", 9.8);
	printf("나는 %d살이고 키는 %f입니다", 20, 175.5);
	printf("나의 이름은 %s 입니다. \n", "김철수");
	printf("나는 현재 %d장까지 학습을 끝냈습니다. \n", 4);
}

void Print008() 
{
	printf("내가 가장 좋아하는 숫자는 %d 입니다.", 7);
	printf("C를 마스터하는 중입니다. \n");

	printf("코드를 작성한다. \n");
	printf("C를 학습한다. \n");
}

void Print009()
{
	printf("컬럼 A\t컬럼 B\t컬럼 C \n");
	printf("\n 내 컴퓨터의 경고음은 다음과 같다 : \a! \n");
	printf("\"잘못 쓴 문자 \b자를 고치기 위하여 백스페이스를 사용하고\n");
	printf("화면에 백슬래시를 보여주자. \\\"고 그녀는 말했다\n");
	printf("%s %d %f %c \n", "철수", 14, -8.76, 'X');
	printf("%f %.3f %.2f %.1f", 4.5678, 4.5678, 4.5678, 4.5678);
}

void Print010()
{
	printf("수량 \t 단가 \t 총액 \n");
	printf("%d\t $%.2f\t $%.2f\n",3,9.99,29.97);
	printf("너무 많은 스페이스는 \b\b\b\b 와 같이");
	printf("\\%c 이스케이프 문자로 수정이 가능하다.\n", 'b');

	printf("\n\a\n\a\n\a\n\a 몇줄을 건너뛰고 경고 사운드를 ");
	printf("출력한다. \n\n\n");
	printf("%c%s.", 'C', "를 정복하는 중이다");
	printf("여러분은 %d장을 끝냈다. 여러분은 이미 이 책의 ", 4);
	printf("%.1f%c를 학습하였다. \n", 12.500, '%');

	printf("\n\n 삼분의 일은 %.2f와 같거나 ", 0.333333);
	printf("%.3f와 같거나 %.4f와 같거나 ", 0.333333, 0.333333);
	printf("%.5f와 같거나 %.6f와 같다. \n\n\n", 0.333333, 0.333333);
}

void Print010()
{
	printf("빛의 속도는 \"%fkm/s\" 입니다. \n",300000.0);
	printf("중력 가속도는 \ '%fm/s 제곱\' 입니다. \n", 9.8);

	printf("정수는 %%d로 표시하고 실수는 %%f로 표시한다. \n");
	printf("컴퓨터가 삑소리를 내게 하려면 \\a\a를 출력한다. \n");
}