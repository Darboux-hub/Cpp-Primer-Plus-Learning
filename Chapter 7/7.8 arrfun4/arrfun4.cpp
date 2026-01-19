#include <iostream>
using namespace std;
const int Arsize = 8;
//function
int sum_arr(const int* begin, const int* end);

int sum_arr(const int* begin, const int* end)
{
    const int* pt;
    int total = 0;

    for(pt = begin; pt != end; pt++)
    {
        total = total + *pt;
    }
    return total;
}
int main()
{
    int cookies[Arsize] = {1, 2, 4, 8, 16, 32, 64, 128};
    int sum = sum_arr(cookies, cookies + Arsize);
    cout << "Total cookies = " << sum << endl;
    sum = sum_arr(cookies, cookies + 3);
    cout << "First three total cookies = " << sum << endl;
    return 0;
}