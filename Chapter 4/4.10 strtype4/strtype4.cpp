#include <iostream>
#include <string>
#include <cstring>
int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout << "Length Before of charr: " << strlen(charr) << endl;
    cout << "Length Before of str: " << str.size() << endl;
    cout << "Enter charr: ";
    cin.getline(charr, 20);
    cout << "Your Entered : " << charr << endl;
    cout << "Enter str: ";
    getline(cin, str);   //TODO  核心代码，cin作为数据来源，str作为数据输出口
                         //也可以使用 cin >> str;
                         //但是他把空格 回车 TAB键都视为结束符号，他只能读取一个连续的单词，遇到空格就不行了
                         //getline()与C中的getline功能一样，是看到换行符才停止，并且吞这个换行符
    cout << "Length After of charr: " << strlen(charr) << endl;
    cout << "Length After of str: " << str.size() << endl;


}