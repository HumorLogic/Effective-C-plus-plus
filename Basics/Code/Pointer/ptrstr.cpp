#include<iostream>
#include<cstring>


// ��main_*() ��Ϊmain()������
int main() {

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
	
	
	cout << &animal << endl;
	cout << (int*)animal<< endl;

	cout << &ps << endl;
	cout << (int*)ps<< endl;
	

	


	


	



	return 0;
}