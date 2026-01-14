#include <iostream>
int main()
{
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    double *pw = wages;
    short *ps = &stacks[0];

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "Now pw = " << pw << ", *pw = " << *pw <<endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "Now ps = " << ps << ", *ps = " << *ps <<endl;

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0] << endl;
    cout << "stacks[1] = " << stacks[1] << endl;

    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks << endl;
    cout << "*(stacks+1) = " << *(stacks+1) << endl;

    cout << sizeof(wages) << " = size of wage array" << endl;
    cout << sizeof(pw) << " = size of pw pointer" <<endl;

    //这里 wages 是一个数组，他所占用的字节数是 3个元素 * 每个元素占用8个字节（double类型） = 24
    //而 pw是一个指针变量，指针不管指向哪里，指针变量本身是只存储一个内存地址




    return 0;
}