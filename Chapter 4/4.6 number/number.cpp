#include <iostream>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(65001);
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    if(cin.peek() == '\n')
    {
        cout << "情况 A：下一个是回车，说明读取完整"
        "此时，不仅名字是对的，我们还需要手动吃掉这个回车\n";
        cin.get();
    }
    else
    {
        cout << "[警告] 名字太长，已被截断！正在清理多余字符...\n";
        while(cin.get() != '\n')
        {
            continue;
        }
    }
    cout << " What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    if(cin.fail())
    {

        cin.clear();
    }
    else
    {
       cout << "[成功] 地址读取完整（且回车已被自动处理）。\n";
    }

    cout << "Year built: " << year << endl;
    cout << "Address: " << address <<endl;
    cout << "Done!\n";

    return 0;
}

// TODO (cin >> year).get();
// 等价于下面这两条:
//       cin >> year;  // 先读数字
//       cin.get();    // 再吃掉回车