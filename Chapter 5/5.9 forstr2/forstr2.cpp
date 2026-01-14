#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main()
{
    cout << "Enter a word: ";
    string word;
    //cin >> word;
    //cin.ignore();
    getline(cin, word);
    
   /* for(int i = word.size() - 1; i >= 0; i--)    //word.size() 或 word.length()（成员函数）
    {
       cout << word[i]; 
    }

    cout << "\nBye String.\n";  */

    for(int j = 0, i = word.length() - 1; j < i; --i, ++j)
    {
        char temp;
        temp = word[i];
        word[i] = word[j];    
        word[j] = temp;
         
        //更高级的写法：swap(word[j], word[i]); 仅C++11以后的版本
    }
    cout << word << endl;
    return 0;
}
