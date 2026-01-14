
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char* bird = "wren";
    char* ps; //这里是野指针，很危险
    // char* ps = nullptr;  这样写赋予空指针

    cout << animal << " and ";
    cout << bird << endl;

    cout << "Enter a kind of animal: ";
    cin >> animal; //这里填写一个单词，可以用cin，如果是两个单词，中间有空格，会读取不了。可使用getline
    //cin.getline(animal, 20);

    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy(): \n";
    cout << animal << " at " << (int*) animal << endl;
    cout << ps << " at " << (int*) ps << endl;
   
    ps = new char [strlen(animal) + 1];
    strcpy(ps, animal);  //strcpy函数是把 animal的内容搬到（复制到）ps中
    //这里存在的风险是 如果animal存的字符串过大，会破坏其他内存区域
    //但是这里给出了最好的解决方案，new的时候算好animal占多大的内存
    //另外可以使用strnpy（），这里最后添加一个参数，指出要复制的最大值
    //当然，这里如果都是string类型，完全不同考虑这种问题
    //string自动识别大小，自动分配内存
    cout << "After using strcpy : \n";
    cout << animal << " at " << (int*) animal << endl;
    cout << ps << " at " << (int*) ps << endl;

    delete [] ps;
    ps = nullptr;


    return 0;
}

// int main()
// {
//     using namespace std;
//     char flower[10] = "rose";

//     cout << flower << "s are red\n";


//     //数组名是第一个元素的地址，cout语句中的flower是包含字符r的char元素地址。
//     //cout认为解释： 这是 C++ cout 的一个“特权规则”。
//     //如果你给 cout 一个 int 的地址（int*），它会老实地打印出十六进制的地址（如 0x7ffee...）。
//     //但如果你给 cout 一个 char 的地址（char*），它会认为：“哦，你要我打印字符串啊！”
//     //于是它从这个地址开始，一个字一个字地往外吐，直到遇到结束符 \0 才停下。

//     return 0;
// }