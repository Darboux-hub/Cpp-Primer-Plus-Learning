#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void Char_see();

int main()
{
    cout << "Enter a word: ";
    string word;
    //cin >> word;
    //cin.ignore();
    getline(cin, word);
    
    
    for(int i = word.size() - 1; i >= 0; i--)    //word.size() 或 word.length()（成员函数）
    {
       cout << word[i]; 
    }

    cout << "\nBye String.\n";

    Char_see();
    return 0;
}

void Char_see()
{
    cout << "Enter a word: ";
    char cword[100];
    cin.getline(cword, 100);
    
    for(int i = strlen(cword) - 1; i >= 0; i--)    //word.size() 或 word.length()（成员函数）
    {
       cout << cword[i]; 
    }

    cout << "\nBye Char.\n";
}
