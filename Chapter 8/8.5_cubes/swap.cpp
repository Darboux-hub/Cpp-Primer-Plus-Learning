#include <iostream>
using namespace std;

void show(const double &ra) {
    cout << "Value: " << ra << " | Address: " << &ra << endl;
}

int main() {
    double d = 3.0;
    long l = 5;

    cout << "Original d address: " << &d << endl;
    show(d); // 类型完全匹配，ra 直接指向 d，地址一致

    cout << "Original l address: " << &l << endl;
    show(l); // 类型不匹配（long vs double），触发临时变量，地址会变！
    cout << "Again Original l address: " << &l << endl;
    
    return 0;
}