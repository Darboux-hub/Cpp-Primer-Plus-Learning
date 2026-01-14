#include <iostream>
const int Max = 5;
int main()
{
    using namespace std;
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for(i = 0; i < Max; i++)
    {
        cout << "Round #" << i+1 << ": ";
        while(!(cin >> golf[i]))
        {
             cin.clear();
             while(cin.get() != '\n')       //高级：cin.ignore(numeric_limits<streamsize>::max(), '\n')
                continue;
            cout << "Please enter a number: ";
        }

    }
}