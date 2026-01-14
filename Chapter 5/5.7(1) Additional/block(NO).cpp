#include <iostream>
using namespace std;
int main()
{
    double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};

    size_t n =sizeof(arr)/sizeof(arr[0]);

    double* pd = new double[n];

    for(size_t i = 0; i < n; i++)
    {
        pd[i] = arr[i];
    }

    cout << "*++pd = " << *++pd << endl;

    double x = *++pd;

    cout << "x = " << x << endl;

    delete [] pd;   //这里虽然有delete，但还是会报错，因为++pd移动了pd，释放的时候移动前的指针未被释放


    return 0;
}

/*
double* temp = pd;              // ← 新增：用 temp 来递增操作

    cout << "*++temp = " << *++temp << endl;    // 32.8
    double x = *++temp;                         // 23.4

    cout << "x = " << x << endl;
    可避免出现delete释放出现问题
   */  
