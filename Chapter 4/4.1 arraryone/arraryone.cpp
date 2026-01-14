#include <iostream>
int main()
{
    using namespace std;
    int yams[3];  //yams = 山药
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5};

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] <<  " cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts [1];
    total = total + yams[2] * yamcosts [2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout <<"\nSize of yams array = " << sizeof yams;
    cout <<"bytes.\n";
    cout <<"SIze of one element = " << sizeof yams[0];
    cout << "bytes.\n";

    cout << "size of yams(数组) = " << sizeof(yams) << endl;  //int类型 占4个字节
    cout << "size of yams[*](数组元素) = " << sizeof(yams[0]) <<endl; //数组中有3个int类型，合起来就是12字节
    cout << "size of yamcosts(数组) = " << sizeof(yamcosts) << endl;
    cout << "size of yamcosts[*](数组元素) = " << sizeof(yamcosts[0]) <<endl;
 
    return 0;
}

// TODO long plifs[] = {25, 92, 3.0};  //不可以编译通过，浮点数转换为整型，会丢失精度，也就是缩窄操作
// TODO slifs[4] = {'h', 'i', 1122011, '\0'}; //不可以编译通过，1122011超出char类型
// TODO tlifs[4] = {'h', 'i', 112, '\0'}; // 可以编译通过