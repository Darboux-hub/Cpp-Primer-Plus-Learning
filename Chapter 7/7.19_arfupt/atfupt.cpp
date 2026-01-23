#include <iostream>

/**
 * 【1. 基础准备】
 * 定义三个特征标完全相同的函数
 */
const double* f1(const double* ar, int n) { return ar; }
const double* f2(const double ar[], int n) { return ar + 1; }
const double* f3(const double ar[], int n) { return ar + 2; }

int main() 
{
    using namespace std;

    // 模拟数据
    double av[3] = {1111.1, 2222.2, 3333.3};

    // --- 【2. 使用 typedef 和 using 简化怪兽类型】 ---
    // 定义 p_fun 为：指向函数的指针（该函数返回 const double*，接收 const double* 和 int）
    typedef const double* (*p_fun)(const double*, int); 
    // 或者使用现代 C++ 写法（效果等价）：
    // using p_fun = const double* (*)(const double*, int);

    // --- 【3. 角色定义与初始化】 ---
    
    // pa 是一个数组，包含 3 个 p_fun 类型的元素
    p_fun pa[3] = {f1, f2, f3};

    // pb 是指向数组首元素的指针（类型是 p_fun*）
    // pa 在这里发生了“退化”，由数组名变成了首元素地址
    p_fun* pb = pa;

    // pd 是指向整个数组块的指针（类型是 p_fun (*)[3]）
    // 这里不发生退化，&pa 拿到的是整个包装盒的地址
    p_fun (*pd)[3] = &pa;

    // --- 【4. 核心知识点验证：调用方式】 ---
    cout << "=== 1. 函数调用验证 ===" << endl;
    // 通过 pb (指向元素的指针) 调用
    cout << "pb[0] address: " << pb[0](av, 3) << " | value: " << *pb[0](av, 3) << endl;
    
    // 通过 pd (指向数组的指针) 调用
    // 必须先解引用 (*pd) 拿到数组实体，再取下标
    cout << "(*pd)[1] address: " << (*pd)[1](av, 3) << " | value: " << *(*pd)[1](av, 3) << endl;

    // --- 【5. 深度揭秘：为什么 pd 指向的是“块”？】 ---
    cout << "\n=== 2. 内存与步长（Step Size）深度验证 ===" << endl;
    
    // 观察数值：它们物理地址可能相同，但类型意义不同
    cout << "Address in pb (element pointer): " << pb << endl;
    cout << "Address in pd (array pointer)  : " << pd << endl;

    // 观察跨度：+1 操作会暴露它们的本质
    cout << "pb + 1 (Skip 1 element) : " << pb + 1 << " (diff: " << (long long)(pb+1) - (long long)pb << " bytes)" << endl;
    cout << "pd + 1 (Skip 3 elements): " << pd + 1 << " (diff: " << (long long)(pd+1) - (long long)pd << " bytes)" << endl;

    // --- 【6. 尺寸对比：块 vs 元素】 ---
    cout << "\n=== 3. 尺寸对比 ===" << endl;
    cout << "sizeof(pb)  (Pointer size)      : " << sizeof(pb) << " bytes" << endl;
    cout << "sizeof(*pb) (One function ptr)  : " << sizeof(*pb) << " bytes" << endl;
    
    cout << "sizeof(pd)  (Pointer size)      : " << sizeof(pd) << " bytes" << endl;
    cout << "sizeof(*pd) (The ENTIRE array!) : " << sizeof(*pd) << " bytes (Should be 24)" << endl;

    return 0;
}