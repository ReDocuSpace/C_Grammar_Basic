#include "study.h"

// ��� C���� ó������ ����
void Variable001()
{
	char firstInitial;
	char middleInitial;

	int number_of_pencils;
	int number_of_notebooks;

	float pencils = 0.23;
	float notebooks = 2.89;
	float lunchbox = 4.99;

	firstInitial = 'J';
	middleInitial = 'R';

	number_of_pencils = 7;
	number_of_notebooks = 4;

	printf("%c%c���Դ� %d���� ���ʰ�, %d���� ��å, 1���� ���ö�. \n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
	printf("�� �ݾ��� $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);

	//�ι�° ������ ����
	firstInitial = 'A';
	middleInitial = 'J';

	number_of_pencils = 10;
	number_of_notebooks = 3;

	printf("%c%c���Դ� %d���� ���ʰ�, %d���� ��å, 1���� ���ö�. \n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
	printf("�� �ݾ��� $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);

	//����° ������ ����
	firstInitial = 'M';
	middleInitial = 'T';

	number_of_pencils = 9;
	number_of_notebooks = 2;

	printf("%c%c���Դ� %d���� ���ʰ�, %d���� ��å, 1���� ���ö�. \n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
	printf("�� �ݾ��� $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);
}

void Variable002()
{
	int number_of_tvs;
	int number_of_tablets;
	int number_of_shavers;

	float tv = 1320.00;
	float tablet = 299.00;
	float shaver = 129.00;

	number_of_tvs = 3;
	number_of_tablets = 2;
	number_of_shavers = 5;

	printf("%d���� TV��, %d���� �º�, %d���� �鵵��. \n", number_of_tvs, number_of_tablets, number_of_shavers);
	printf("�� �ݾ��� $%.2f\n\n", number_of_tvs * tv + number_of_tablets * tablet + number_of_shavers * shaver);
}