#include<iostream>

struct inflatable	// �ṹ�嶨��
{
	char name[20];
	float volume;
	double price;

};


// ��main_*() ��Ϊmain()������
int main_newstrct() {

	using namespace std;
	inflatable* ps = new inflatable;		//�����ڴ���ṹ��

	cout << "����ɳ�����Ʒ�����ƣ�";
	cin.get(ps->name, 20);					//����1 ��������
	cout << "������Ʒ�������λ����Ӣ�ߣ�";
	cin >> (*ps).volume;						//����2 ��������
	cout << "����۸񣺣�";
	cin >> ps->price;

	cout << "����: " << (*ps).name << endl;			//����2 ��������
	cout << "���: " << ps->volume << endl;		//����1 ��������
	cout << "�۸�: ��" << ps->price << endl;		//����1 ��������


	delete ps;

	return 0;
}