#include<iostream>
#include<cstring>


// ��main_*() ��Ϊmain()������
int main_ptrstr() {

	using namespace std;


	char animal[20] = "duck";		
	const char* bird = "dove";	
	char* ps;								//δ��ʼ��
	cout << animal << "\n";		//�����duck
	cout << bird << "\n";			//�����dove

	cout << "������һ�ֶ��";
	cin >> animal;

	ps = animal;		//����psָ���ַ�������

	cout << ps << "!\n";
	cout <<"ʹ��strcpy()֮ǰ��" << "\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;

	ps = new char[strlen(animal) + 1];	//�����¿ռ�
	strcpy(ps, animal);							// �����ַ������¿ռ�
	
	cout << "ʹ��strcpy()֮��" << "\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;
	
	cout << "-----------animal-------------" << "\n";
	cout << &animal << endl;
	cout << (int*)animal<< endl;

	cout << "-------------ps---------------" << "\n";
	cout << &ps << endl;
	cout << (int*)ps<< endl;
	
	cout << "----------int array------------" << "\n";

	int arr[] = { 0,8,8,9,9 };
	cout << arr << endl;
	cout << &arr << endl;
	cout << (int*)arr << endl;
	cout << &(arr[0]) << endl;
	cout << &(arr[1]) << endl;


	return 0;
}