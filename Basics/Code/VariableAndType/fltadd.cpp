// fltadd.cpp -- precision problems with float
#include <iostream>

// ��main_*() ��Ϊmain()������
int main_flatadd()
{
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
    // cin.get();
    return 0; 
}
