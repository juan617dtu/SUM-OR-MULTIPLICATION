#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	char number[100], optionS = 's', optionM = 'm', option[2];
	int var_number, j = 0, i = 1, k = 0, w = 1, l = 0;
	bool flag;

	do {
		printf("Enter a number (not 0): ");
		fgets(number, 100, stdin);
		var_number = atoi(number);
	} while (var_number == 0);

	do {
		printf("\nEnter 'm' for multiplication OR 's' for sum: ");
		fgets(option, 2, stdin);
		option[0] = tolower(option[0]);
		if (option[0] == optionM) 
		{
			flag = true;
			while (i < var_number)
			{
				printf("%d x ", i);
				w *= i;
				i++;
			}
			printf("%d = ", i);
			w *= i;
			printf("%d\n", w);
		}
		else if (option[0] == optionS) {
			flag = true;
			while (k < var_number) {
				printf("%d + ", k);
				l += k;
				k++;
			}
			printf("%d = ", k);
			l += k;
			printf("%d\n", l);
		}
		else {
			printf("Invalid character");
			flag = false;
		}
	} while (flag == false);

	return 0;
}
