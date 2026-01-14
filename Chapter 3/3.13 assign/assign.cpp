#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    int debt = 7.2E12;
    cout << "debt = " << debt;
    
    //这里还提及一个知识点：
    //  在类型转换或者初始化变量的时候，尽量采用大括号来处理，
    //  它可以避免数据的丢失
    //  例如：
   // const int code = 66;
   // int x =66;
   // char c1 {code};
   //  char c2 {x}; 
                     //这里会报错不通过，因为int 到char 需要收缩变化，code是const常量，
                     //而x是变量，编译器想：“虽然你现在告诉我 x 是 66，但代码跑到这一行之前，
                     //万一有人把 x 改成了 10 亿怎么办？我又不能预知未来。”
    return 0; 
}