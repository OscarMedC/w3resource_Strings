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

void problem_3() {

	char str[LENGTH];
	int i = 0;

	fgets(str, LENGTH, stdin);

	while (str[i] != '\0') {
		printf("%c ", str[i]);
		i++;
	}
}

void problem_4() {

	char str[LENGTH];

	fgets(str, LENGTH, stdin);

	int i = strlen(str);

	for (i; i >= 0; i--) {

			printf("%c ", str[i]);
	}
}

void problem_5() {

	char sent[100];
	int i = 0,
		nrWords = 1;

	fgets(sent, 100, stdin);

	while (sent[i] != '\0') {
		if (sent[i] == ' ') {
			nrWords++;
		}
		i++;
	}
	printf("\nnr of words is %d", nrWords);
}

void problem_6() {

	char str_one[LENGTH];
	char str_two[LENGTH];
	int size_one = 0;
	int size_two = 0;
	int i = 0;
	int equal = 1;

	printf("Enter the first string: ");
	fgets(str_one, sizeof(str_one), stdin);

	printf("Enter the second string: ");
	fgets(str_two, sizeof(str_two), stdin);

	while (str_one[size_one] != '\0') {
		size_one++;
	}

	while (str_two[size_two] != '\0') {
		size_two++;
	}

	if (size_one != size_two) {
		printf("\nThe sentences arent the same!");
	}
	else
		while (str_one[i] != '\0') {

		}
}