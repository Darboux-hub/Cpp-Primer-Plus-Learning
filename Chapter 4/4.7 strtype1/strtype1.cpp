#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    const int Number = 20;
    char charr1[Number];
    char charr2[Number] = "jaguar";
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin.getline(charr1, Number);
    cout << "Enter another kind of feline: ";
    cin >> str1;

    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2;
    cout << " " << str1 << " " << str2 << endl;

    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;


// 数组的赋值：不可以直接 charr1 = charr2; 数组本质是指针，也就是地址，只有存在地址里的数据是可以变，地址是不会变的
// 可以采用strcpy()进行赋值，
// strcpy(charr1, charr2); // 意思是：String Copy，把 charr2 的内容拷贝到 charr1 中

    strcpy(charr1, charr2);  // 这里要使用 <cstring> 头文件
    cout << "charr1 = " << charr1 << endl;
    cout << "charr2 = " << charr2 << endl;

//如果要拼接，使用strcat函数；
    strcat(charr1, charr2);
    cout << "charr1 = " << charr1 << endl; //TODO 这里很严重的问题是 strcat 非常笨，它不管 charr1 能不能装下，
                                           //只会硬塞
 
// 字符串String类可以进行赋值拼接和附加
    string str3;
    str3 = str1 + str2;    //字符串的拼接合并
    cout << "str3 = " << str3 << endl;

    str1 += str2;  //将字符串str2 拼接到 str1
    cout << "str1 = " << str1 << endl;

    return 0;
    
}