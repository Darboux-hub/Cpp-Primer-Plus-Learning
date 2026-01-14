#include <iostream>
#include <climits>
bool is_int(double);   //布尔函数使用climits头文件中定义的两个常量INT_MAX和INT_MIN，如果在这范围内，返回ture
int main()
{
    using namespace std;
    double num;

    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while(!is_int(num))
    {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    int val = int(num);
    cout << "You've entered the integer " << val << "\nBye\n";
    return 0;
}

bool is_int(double x)
{
    if(x <= INT_MAX && x >= INT_MIN)
        return true;
    else
        return false;
}

//AND运算符的优先级高于OR运算符