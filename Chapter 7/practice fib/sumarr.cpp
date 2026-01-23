#include <iostream>
#include <limits>
using namespace std;
const int Size = 10;
size_t fill_arr(double ar[], size_t size);   //这里数组退化为指针，他不知道有多少个数据
double Arsum(const double ar[], size_t size);  //这里定义本来就是指针，加了[]说明他是个数组
                                        //如果不加[],就得加*，那这里可以写*ar
int main()
{
    double star[Size];
    size_t actual_size = fill_arr(star, Size);
    cout << "The result is " << Arsum(star,actual_size) << endl;

    return 0;
}

size_t fill_arr(double ar[], size_t size)
{
    double temp;
    size_t i = 0;
    while(i < size)
    {
         cout << "Enter the #" << (i+1) << ": ";
        if( !(cin >> temp))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "输入无效或提前结束，停止输入。\n";
            break;              // 提前结束填充
        }
        ar[i] = temp;
        i++;
    }
        return i;
}

double Arsum(const double ar[], size_t size)
{
    if(size == 0)
    {
        return 0;
    }
    return Arsum(ar,(size-1)) + ar[size-1];
}
//递归的第二种写法：
/* double Arsum(const double ar[], size_t size)
{
    if(size == 0)
    {
        return 0;
    }
    return ar[0] + Arsum(ar+1,size-1);
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
