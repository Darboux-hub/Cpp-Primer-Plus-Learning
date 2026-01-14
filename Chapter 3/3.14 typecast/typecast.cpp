#include <iostream>
int main()
{
    using namespace std;
    int auks ,bats, coots;

    auks = 19.99 + 11.99;

    bats = (int) 19.99 + (int) 11.99;
    coots = int(19.99) + int(11.99);
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) <<endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;  // static_cast >> 静态转换

    double x1 = 19.99, x2 = 11.99;
    short x3;
    x3 = x1 + x2;
    cout << "x3 = " << x3;

    //C++ 的原则是：运算过程中尽可能保留高精度，只在最后一步赋值时才进行类型转换。


    return 0;
}