#include <iostream>
#include <limits>
const int Max = 5;
using namespace std;
int fill_array(double ar[], int limits);
void revalue(double r, double ar[], int n);
void show_array(const double ar[], int n);

int main()
{
    double properties[Max];
    int size = fill_array(properties, Max);
    show_array(properties, size);
    if(size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while( !(cin >> factor))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Bad input" << endl;
            continue;
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done." << endl;
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limits)
{
    double temp;
    int i;
    for(i = 0; i < limits; i++)
    {
        cout << "Enter value #" << (i+1) << " :";
        if( !(cin >> temp))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Bad input" << endl;
            continue;
        }
        else if(temp < 0)
        {
            break;
        }
        ar[i] = temp;
    }
    return i;
}
void show_array(const double ar[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << " : $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] *= r;
    }
}