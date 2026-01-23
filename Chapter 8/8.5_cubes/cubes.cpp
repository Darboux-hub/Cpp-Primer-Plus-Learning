#include <iostream>
using namespace std;

// 1. 按值传递：完全独立的副本
double cube(double a);

// 2. const 引用传递：可以接收不匹配的类型（如 long），会产生临时变量
double refcube(const double& ra);

int main()
{
    double x = 3.0;
    
    cout << "--- 场景 1: 按值传递 ---" << endl;
    cout << "cube(x) = " << cube(x) << endl;
    cout << "调用后 x 的值 = " << x << " (没变)" << endl;

    cout << "\n--- 场景 2: const 引用 (类型完全匹配) ---" << endl;
    cout << "x 的原始地址: " << &x << endl;
    cout << "refcube(x) = " << refcube(x) << endl;

    cout << "\n--- 场景 3: const 引用 (类型不匹配 long -> double) ---" << endl;
    long bbc = 8866;
    cout << "bbc 的原始地址: " << &bbc << endl;
    // 此时会触发“隐藏大招”：产生临时变量
    cout << "refcube(bbc) = " << refcube(bbc) << endl;

    return 0;
}

double cube(double a)
{
    a = a * a * a;
    return a;
}

double refcube(const double &ra)
{
    // 打印函数内部看到的地址，看看它到底在指谁
    cout << "[函数内部] ra 指向的地址: " << &ra << endl;
    return ra * ra * ra;
}