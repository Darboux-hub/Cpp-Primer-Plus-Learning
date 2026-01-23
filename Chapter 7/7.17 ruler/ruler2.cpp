#include <iostream>
using namespace std;
const int Len = 66;
const int Leve = 6;

void Qdiv(char* ar, int min, int max, int leve);

int main()
{
   char ruler[Len];
   int i;
   int j;
   //初始化
   ruler[Len - 1] = '\0';
   ruler[0] = ruler[Len - 2] = '|';
   for(i = 1; i < (Len - 2); i++)
   {
        ruler[i] = ' ';
   }
   //打印第一行
    cout <<  ruler << endl;
   //
   for(j = 1; j < Leve; j++)
   {
        Qdiv(ruler, 0, Len - 2, j);
        cout <<  ruler << endl;
        
        for(i = 1; i < (Len - 2); i++)
        {
            ruler[i] = ' ';
        }
   }

   return 0;
}

void Qdiv(char* ar, int min, int max, int leve)
{
    if(leve == 0)
    return;
    int mid = (max + min) / 2;
    ar[mid] = '|';
    Qdiv(ar, min, mid, leve - 1);
    Qdiv(ar, mid, max, leve - 1);
}