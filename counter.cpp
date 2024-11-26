#include<iostream>
#include <thread>
#include <chrono>
int main()
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Count is (v1.4): " << i << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
	return 0;
}