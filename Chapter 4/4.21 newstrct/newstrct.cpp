#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable* ps = new inflatable;
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);
    //这里使用cin.get 会保留一个换行符在缓冲区中，所以下次再使用get或这getline不会给你输入信息的机会
    //get 和 getline见到换行符就以为读取完成了
    //但幸运的是下次读取是cin，cin读取会跳过所有前导空白字符（空格、Tab、换行符）。认为他们是无效的，会扔掉
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;
    cout << "Enter price: $ ";
    cin >> ps->price;
    cout << "Name :" << (*ps).name << endl;
    cout << "Volume: " << ps->price << endl;
    cout << "Price: " << (*ps).price << endl;

    delete ps;
    ps = nullptr;

    return 0;
}