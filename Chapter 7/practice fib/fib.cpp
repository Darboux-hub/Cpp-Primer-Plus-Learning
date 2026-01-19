#include <iostream>
using namespace std;
void fib(int n, char from, char to, char aux);
int main()
{
    fib(2,'A','B','C');
    return 0;
}

void fib(int n, char from, char to, char aux)
{
    if(n == 1)
    {
        cout << "Move disk from " << from << " to " << to << endl;
        return;
    }
    fib(n-1, from, aux, to);
    cout << "Move disk from " << from << " to " << to << endl;
    fib(n-1, aux, to, from);
}