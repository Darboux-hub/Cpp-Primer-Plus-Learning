#include <iostream>
unsigned int c_in_str(const char* str,char ch);
char* buildstr(char c,int n);
int main()
{
    using namespace std;
    char mmm[15] = "minimum";

    char* wail = "ululate";
    
    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'm');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail <<endl;
    return 0;
}
unsigned int c_in_str(const char* str,char ch)
{
    unsigned int count = 0;
    while(*str)
    {
        if(*str == ch)
            count++;
        str++;
    }
    return count;
}

char* buildstr(char c,int n)
{
    char* pstr = new char[n+1];
    pstr[n] = '\0';
    while(n-- > 0)
        pstr[n] = c;
    return pstr;
}