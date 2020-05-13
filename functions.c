#include "functions.h"

void problem_1() {

	char string[30];

	fgets(string, 30, stdin);
	printf("\nThe string you entered is: %s", string);

}

void problem_2() {

	char str[25];
	int size = 0;

	fgets(str, 25, stdin);

	while (str[size] != '\n') {
		size++;
	}
	printf("\n%d\n", size);
}