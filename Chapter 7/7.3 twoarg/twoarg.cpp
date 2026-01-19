#include <iostream>
#include <limits>
using namespace std;
void n_chars(char, int);
int main()
{
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    while(ch != 'q')
    {
        cout << "Enter an integer: ";
        if( !(cin >> times) ) 
        {
            cout << "Invalid input. Please enter an integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        n_chars(ch, times);
        cout << "Enter another character or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";
    return 0;
}

void n_chars(char c, int n)
{
    while(n-- > 0)
        cout << c;
    cout << endl;
}