#include<iostream>
#include <future>    // std::async, std::future


bool is_prime(int x) {
	std::cout << "Calculating. Please, wait...\n";
	for (int i = 2; i < x; ++i)if (x % i == 0) return false;
	return true;
}


// 把main_*() 改为main()再运行
int main() {

	std::future<bool> fut = std::async(is_prime, 313222313);
	std::cout << "Checking whether 313222313 is prime.\n";

	bool ret = fut.get();		//等待is_prime 返回结果
	if (ret) std::cout << "It is prime! \n";
	else std::cout << "It is not prime. \n";


	return 0;
}