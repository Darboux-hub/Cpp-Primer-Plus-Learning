#include <iostream>
#include <string>
using namespace std;
string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);
const string & version3(string & s1, const string & s2);

int main()
{
    string input;
    string copy;
    string result;

    cout << "Enter a string: ";
    getline(cin, input);
    copy = input;
    cout << "Your string as entered: " << input << endl;
    result = version1(input, "***");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    result = version2(input, "###");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    result = version3(input, "@@@");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    return 0;

}

string version1(const string & s1, const string & s2)
{
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}

const string & version2(string & s1, const string & s2)
{
    s1 = s2 + s1 + s2;
    return s1;
}

const string & version3(string & s1, const string & s2)
{
    string temp;
    temp = s2 + s1 + s2;
    return temp;  
    /* 
    这里存在的问题是：version1是按值传递，他是通过return temp ，会在内存中拷贝一份temp,然后在main中把拷贝的东西
    赋值给result,然后原数据temp这一临时变量会被销毁。这可以保证数据是安全的
    而version3是引用传递，本质是通过指针，这里通过return temp,他不会拷贝一份，直接传输原数据，把原数据传给main,但是
    原数据temp这一临时变量会销毁，导致数据会丢失
    */
}