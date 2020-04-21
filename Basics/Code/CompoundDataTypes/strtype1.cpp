// strtype1.cpp -- using the C++ string class
#include <iostream>
#include <string>               // make string class available

// 把main_*() 改为main()再运行
int main_strtpye1()
{
    using namespace std;
    char charr1[20];            // create an empty array
    char charr2[20] = "jaguar"; // create an initialized array
    string str1;                // create an empty string object
    string str2 = "panther";    // create an initialized string

    string s1 = "hello";
    string s2 = "world";
    s1 += s2;
    cout << s1 << "\n";
    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;                // use cin for input
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2 // use cout for output
         << endl;
    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;    // use array notation
    // cin.get();
	// cin.get();

    return 0; 
}
