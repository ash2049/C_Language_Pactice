#include <stdio.h>
#define TAX_RATE 0.2

int main() {
	const int MONTHS = 12;
	int m_salary, y_salary;

	printf("월급을 입력하시오: ");
	scanf("%d", &m_salary);

	y_salary = MONTHS * m_salary;

	printf("연봉 %d\n", y_salary);
	printf("세금 %f", y_salary*TAX_RATE);

	return 0;
}