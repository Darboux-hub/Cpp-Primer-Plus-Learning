#include <iostream>
//Create named constants for 0 - 6
enum{red, orange, yellow, green, blue, violet, indigo};

int main()
{
    using namespace std;
    int code;
    cout << "Enter color code (0-6): ";
    cin >> code;
    while (code >= red && code <= indigo)
    {
        switch(code)
        {
            case red : cout << "Red" << endl; break;
            case orange : cout << "Orange" << endl; break;
            case yellow : cout << "Yellow" << endl; break;
            case green : cout << "Green" << endl; break;
            case blue : cout << "Blue" << endl; break;
            case violet : cout << "Violent" << endl; break;
            case indigo : cout << "Indigo" << endl; break;
            default : cout << "Your enter is not range!" << endl; //不需要这个，因为都包含进去了
        }
        cout << "Enter color code (0-6): ";
        cin >> code;
    }

    cout << "Bye\n";
    return 0;

}