#include<iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

// ��main_*() ��Ϊmain()������
int main_stru() {

	using namespace std;
	inflatable guest = {
		"Glorious Gloria",
		1.88,
		29.99
	};

	struct fruit {
		float weight;
		double price;
	};

	fruit apple;
	apple = { 1.5,5.5 };

	cout << "guest : " << guest.name << "\n";
	cout << "apple total : " << apple.price*apple.weight << endl;



	return 0;
}