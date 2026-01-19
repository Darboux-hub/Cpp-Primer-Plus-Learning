#include <iostream>
using namespace std;
long long fib(int n);

int main()
{
    cout << "阶乘为： " << fib(5) << endl;
    return 0;
}

long long fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n * fib(n-1);
}