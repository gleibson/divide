#include <iostream>


int main()
{
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout << "Integer Division: 9/5 = " << 9 / 5 << std::endl;
	std::cout << "Floating-point division : 9.0/ 5.0 = " << 9.0 / 5.0 << std::endl;
	std::cout << "Mixed Division: 9.0/5 = " << 9.0 / 5 << std::endl;
    std::cout << "Double Cconstants: 1e7/9.0 = " << 1.e7 / 9.0 << std::endl;
	std::cout << "Float Constants: 1e7f/9.0f = " << 1.e7f / 9.0f << std::endl;

	return 0;

}