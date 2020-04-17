// external.cpp -- external variable
// compile with support.cpp
#include <iostream>
// external variable
double warming = 0.3;       // warming defined

// function prototypes
void update(double dt);
void local();

// 把main_*() 改为main()再运行
int main_external()                  // uses global variable
{
    using namespace std;
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);            // call function to change warming
    cout << "Global warming is " << warming << " degrees.\n";
    local();                // call function with local warming
    cout << "Global warming is " << warming << " degrees.\n";
    // cin.get();
    return 0;
}
