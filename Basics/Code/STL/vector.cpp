#include<iostream>
#include<vector>


// ��main_*() ��Ϊmain()������
int main() {
	using namespace std;
	//����һ���洢 int���͵�vector����
	vector<int> vec;
	int i;
	//��ʾvec�ĳ�ʼ��С
	cout << "vector ��С = " << vec.size() << endl;

	//���5��ֵ
	for ( i = 0; i < 5; i++)
	{
		vec.push_back(i);
	}

	//��ʾvec�Ĵ�С
	cout << "����� vector ��С = " << vec.size() << endl;

	// ��������ֵ
	for (i = 0; i < 5; i++) {
		cout << "value of vec [" << i << "] = " << vec[i] << endl;
	}

	// ʹ�õ���������vec��ֵ
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
	return 0;
}