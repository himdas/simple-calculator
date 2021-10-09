#include <iostream>

int main() {
	
	char userResponse;
	double num1, num2;
	
	std::cout << "Enter a operator (+, -, *, /): ";
	std::cin >> userResponse;
	
	std::cout << "Enter the first number: ";
	std::cin >> num1;
	
	std::cout << "Enter second number: ";
	std::cin >> num2;
	
	if (userResponse == '+') {
		
		std::cout << num1 << " + " << num2 << " = " << (num1 + num2);
		
	}
	else if (userResponse == '-') {
		
		std::cout << num1 << " - " << num2 << " = " << (num1 - num2);
		
	}
	else if (userResponse == '*') {
		
		std::cout << num1 << " * " << num2 << " = " << (num1 * num2);
		
	}
	else if (userResponse == '/' || userResponse != 0.0) {
		
		std::cout << num1 << " / " << num2 << " = " << (num1 / num2);
		
	}
	else {
		
		std::cout << "Invalid operator";
		
	}
	
}