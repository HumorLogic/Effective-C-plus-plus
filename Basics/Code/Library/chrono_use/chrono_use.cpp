#include<iostream>
#include<chrono>
#include<thread>



// ��main_*() ��Ϊmain()������
int main_chrono() {

	using namespace std;
	auto start = chrono::system_clock::now();
	{
		this_thread::sleep_for(chrono::seconds(2));
	}
	auto end = chrono::system_clock::now();
	chrono::duration<double> elapsed = end - start;

	cout << "Elapsed time: " << elapsed.count() << "s";


    return 0;


	
}