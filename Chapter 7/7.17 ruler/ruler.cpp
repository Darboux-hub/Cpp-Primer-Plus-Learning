#include <iostream>
const int Len = 66;    // 尺子总长度（字符数）
const int Divs = 6;    // 细分级别（递归深度）

void subdivide(char ar[], int low, int high, int level);  // 递归函数声明

int main()
{
    using namespace std;
    char ruler[Len];   // 字符数组模拟尺子
    int i;
    // 初始化：中间空格，两端 '|', 末尾 '\0'
    for(i = 1; i < Len - 2; i++) ruler[i] = ' ';
    ruler[Len - 1] = '\0';
    ruler[0] = ruler[Len-2] = '|';  // min=0, max=Len-2
    
    cout << ruler << endl;  // 打印初始（level 0）
    
    for(i = 1; i <= Divs; i++)
    {
        subdivide(ruler, 0, Len-2, i);  // 细分到第i级
        cout << ruler << endl;         // 打印当前级别
        // 清空中间，准备下一级从粗开始
        for(int j = 1; j < Len - 2; j++) ruler[j] = ' ';
    }
}

void subdivide(char ar[], int low, int high, int level)
{
    if(level == 0) return;  // 基例：停止递归
    
    int mid = (low + high) / 2;  // 中点
    ar[mid] = '|';               // 在中点加刻度
    
    subdivide(ar, low, mid, level - 1);   // 左半递归
    subdivide(ar, mid, high, level - 1);  // 右半递归
}