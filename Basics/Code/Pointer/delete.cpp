#include<iostream>
#include<cstring>

using namespace std;
char* getname(void);

// ��main_*() ��Ϊmain()������
int main_delete() {

	char* name;					//����һ�����ַ�ָ��
	name = getname();		//�����ַ�����ַ��nameָ��
	cout << name << " \t at " << (int*)name << "\n";
	delete [] name;				//�ͷ��ڴ�

	name = getname();
	cout << name << "\t at " << (int*)name << "\n";
	delete[] name;

	return 0;
}

char* getname()
{
	char temp[80];											//��ʱ�洢
	cout << "Enter last name: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);										//�����ַ�������С�Ŀռ�

	return pn;													// �������н���ʱ��ʱ����temp��ʧ
}
