#include <iostream>


int main() {

	char num[100], option[2], option_m = 'm', option_s = 's';
	int var_num, i = 1, w = 1, k = 0, l = 0;
	bool flag;

	do {
		std::cout << "Enter a number (not 0): ";
		std::cin >> num;
		var_num = atoi(num);
	} while (var_num == 0);

	do {
		std::cout << std::endl
			<< "Enter 'm' for multiplication OR 's' for sum: ";
		std::cin >> option;
		option[0] = tolower(option[0]);
		if (option[0] == option_m) {
			flag = true;
			while (i < var_num) {
				std::cout << i << " x ";
				w *= i;
				i++;
			}
			std::cout << i << " = ";
			w *= i;
			std::cout << w << std::endl;
		}
		else if (option[0] == option_s) {
			flag = true;
			while (k < var_num) {
				std::cout << k << " + ";
				l += k;
				k++;
			}
			std::cout << k << " = ";
			l += k;
			std::cout << l << std::endl;
		}
		else {
			std::cout << "Invalid character";
			flag = false;
		}
	} while (flag == false);

	return 0;
}
