#include <stdio.h>

int main() {
	int input1, input2;
	
	printf("input: ");
	scanf("%d", &input1);

	printf("input: ");
	scanf("%d", &input2);

	(input1 == input2) ? printf("°°À½") : (input1 > input2) ? printf("Bigger") : printf("Smaller");

	return 0;
}