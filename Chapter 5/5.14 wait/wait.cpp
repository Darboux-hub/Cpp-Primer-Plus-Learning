#include <iostream>
#include<ctime>
using namespace std;
int main()
{
    cout << "Enter the delay time, in second: ";
    float secs;
    cin >> secs;
    cout << "CLOCKS_PER_SEC = " << CLOCKS_PER_SEC;

    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";

    clock_t start = clock();
    while(clock() - start < delay)
        ;

    cout << "done\a\n";

    clock_t real_start = clock();
// 原延迟代码...
    clock_t real_end = clock();
   double actual_secs = static_cast<double>(real_end - real_start) / CLOCKS_PER_SEC;  //cast:辗转或者转投  静态数据转换

   
    cout << "实际延迟: " << actual_secs << " 秒" << endl;

 
    return 0;

}


//typedef char byte;