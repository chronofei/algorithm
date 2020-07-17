#include<iostream>

unsigned int gcd(unsigned int a, unsigned int b)
{
	if(b == 0)
		return a;
	gcd(b, a%b);
}

int main(void)
{
	std::cout << gcd(10, 4) << std::endl;
	return 0;
}
