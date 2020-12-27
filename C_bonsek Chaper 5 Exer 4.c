#include <stdio.h>

int main() {
	int a, b, c;
	int result, result1, result2;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	result = (a > b) ? a : b;
	result1 = (a > c) ? a : c;
	result2 = (result > result1) ? result : result1;

	printf("%d", result2);

	return 0;
}