#include <stdio.h>

int main(void){
	int factor;
	int user_input_number;

	factor = 1;
	printf("Enter a number: ");
	scanf("%d", &user_input_number);

	for (factor = 1; factor <= 10; factor++) {
		printf("%d x %d = %d\n", user_input_number, factor, user_input_number * factor);
	}

}
