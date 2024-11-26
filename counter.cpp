#include<iostream>
#include <thread>
#include <chrono>
int main()
{
	for (int i = 0; i < 40; i++)
	{
		std::cout << "Count is (v15.9987): " << i << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
	return 0;
}