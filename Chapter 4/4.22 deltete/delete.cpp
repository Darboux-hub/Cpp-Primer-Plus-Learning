#include <iostream>
#include <cstring>
using namespace std;
char* getname(void);
int main()
{
    char* name;

    name = getname();
    cout << name << " at " << (int*) name << "\n";
    delete [] name;
    name = nullptr;

    name = getname();
    cout << name << " at " << (int*) name <<"\n";
    delete [] name;
    name = nullptr;

    return 0;

}

char* getname()
{
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char* pn = new char[strlen(temp) + 1];
    strcpy(pn , temp);

    return pn;
}

// getname()分配内存，main()释放内存，这并不好，容易忘