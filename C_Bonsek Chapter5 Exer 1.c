#include <stdio.h>

int main() {
	int x, y, z;

	printf("input x : ");
	scanf("%d", &x);

	printf("input y : ");
	scanf("%d", &y);
	
	printf("input z : ");
	scanf("%d", &z);

	int result;

	result = (x + y) * (x + z) / (y % z);

	printf("(x + y) * (x + y) / (y %% z) = %d", result);

	return 0;
}