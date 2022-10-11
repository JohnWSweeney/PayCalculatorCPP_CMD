#include <iostream>
#include <iomanip>

float payRate;
float regHours;
float otHours;
float taxRate = 0.3;
float basePay;
float otPay;
float totalPay; 

float functbasePay()
{
	basePay = regHours * payRate * (1-taxRate);
	std::cout << "Base pay: $" << basePay << std::endl;
	return basePay;
}

float functOTPay(float othours)
{
	const float otMultiplier = 1.5;
	otPay = othours * payRate * otMultiplier * (1 - taxRate);
	std::cout << "OT pay: $" << otPay << std::endl;
	return otPay;
}

int main()
{

	while (true)
	{
		std::cout << "Enter pay rate" << std::endl;
		std::cin >> payRate;
		std::cout << "Enter REG hours" << std::endl;
		std::cin >> regHours;
		std::cout << "Enter OT hours" << std::endl;
		std::cin >> otHours;

		std::cout << std::endl;
		std::cout << std::fixed << std::setprecision(2);
		std::cout << "----------------------" << std::endl;
		basePay = functbasePay();
		otPay = functOTPay(otHours);
		totalPay = basePay + otPay;
		std::cout << "Total* pay: $" << totalPay << std::endl;
		std::cout << "----------------------" << std::endl;
		std::cout << "*Assumed 0.3 tax rate." << std::endl;
		std::cout << "----------------------" << std::endl;
		std::cout << std::endl;
	}
}
