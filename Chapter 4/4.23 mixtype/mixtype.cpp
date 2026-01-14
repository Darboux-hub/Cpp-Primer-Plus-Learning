#include <iostream>
using namespace std;
struct antarctia_year_end
{
    int year;
};

int main()
{
    antarctia_year_end s01, s02, s03;
    s01.year = 1998;
    antarctia_year_end* pa = &s02;
    pa -> year = 1999;
    antarctia_year_end trio[3];
    trio[0].year = 2003;

    cout << trio -> year << endl;   //trio -> year 等价于 (*trio).year，也就是 trio[0].year。
    
    const antarctia_year_end* arp[3] = {&s01 , &s02, &s03};
    cout << arp[1] -> year << endl;

    const antarctia_year_end** ppa = arp;
    auto ppb = arp;

    cout << (*ppa) -> year << endl;
    cout << (*(ppb+1)) -> year << endl;

    return 0;

}



