// bondini.cpp -- using escape sequences
#include <iostream>

// ��main_*() ��Ϊmain()������
int main_bon()
{
    using namespace std;
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    // cin.get();
    // cin.get();
    return 0; 
}
