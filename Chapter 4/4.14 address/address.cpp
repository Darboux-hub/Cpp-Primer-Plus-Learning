#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6;
    double cup = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;

    cout << "cups value = "  << cup;
    cout << " and cup address = " << &cup <<endl;

    cout << "Address difference = "  << (char*)&cup - (char*)&donuts << endl;
    
    return 0;
}