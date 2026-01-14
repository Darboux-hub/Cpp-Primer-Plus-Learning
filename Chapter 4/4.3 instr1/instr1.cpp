#include <iostream>
 int main()
 {
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
// cin >> name;
// cin.getline(name, ArSize);
   cin.get(name, ArSize);  // QUESTION用get如何知道可以知道停止读取的原因是由于已经读取了整行
                           //而不是由于数组已填满呢？
                           //查看下一个输入字符，如果是换行符，就说明读取了整行；
   cin.get();
    cout << "Enter your favorite dessert:\n";
//  cin >> dessert;
//  cin.getline(dessert, ArSize);
   cin.get(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";



    return 0;
 }