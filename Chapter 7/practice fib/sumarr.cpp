#include <iostream>
#include <limits>
using namespace std;
const int Size = 10;
size_t fill_arr(double ar[], size_t size);   //这里数组退化为指针，他不知道有多少个数据
double Arsum(double ar[], size_t size);  //这里定义本来就是指针，加了[]说明他是个数组
                                        //如果不加[],就得加*，那这里可以写*ar
int main()
{
    double star[Size];
    size_t size = fill_arr(star, size);
    
    return 0;
}
    /* double star[Size];
    for(int i = 0; i < Size; i++)
    {
        double temp;
        cout << "Please enter the #" << (i+1) << ": ";
        while( !(cin >> temp) )
        {
            cin.clear();
            cout << "Enter Erro, Please again" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        star[i] = temp;
    }   */
