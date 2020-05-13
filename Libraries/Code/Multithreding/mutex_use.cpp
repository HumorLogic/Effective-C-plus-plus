// mutex ʾ��
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void print_block(int n, char c) {
	mtx.lock();
	for (int i = 0; i < n; ++i) { cout << c; }
	cout << '\n';
	mtx.unlock();
}

int main() {
	thread th1(print_block, 50, '*');
	thread th2(print_block, 50, '$');

	th1.join();
	th2.join();
	cout << "hello world" << endl;

	return 0;

}