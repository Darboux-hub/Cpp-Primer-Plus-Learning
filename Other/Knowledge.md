# C++ Primer Plus 笔记

## 函数 指针和const

### const用于关键字，一共有两种方法

- **第一种**：让指针指向一个常量对象名可以防止使用指针来修改所指向的值。(const在类型前面)

```cpp
int sloth = 3;
const int* ps = &sloth;

int* const finger = @sloth;
```

- **第二种**：将指针本身声明为常量，可以防止改变指针指向的位置。（const在类型后面）
  
### const变量与const指针之间的关系

#### 一级指针

1. 将const变量的地址赋给指向const的指针，是可行的

```cpp
const float g_earth = 9.8;
const float* pe = &g_earth;
```

1. 将const的地址赋给常规指针，是不可行的

```cpp
const float g_moon = 1.63;
float* pm = &g_moon;
```

这里如果将moon的地址赋给pm，则可以通过pm修改moon的值，使得const状态很荒谬

#### 二级指针

```cpp
int age = 39;
int* pd = &age;
const int *pt = pd;
```

以上是合法输入，允许将非const指针赋给const指针

```cpp
const int* *pp2;
int* p1;
const int n = 13;
pp2 = &p1;
*pp2 = &n;
*p1 = 10; //不合法
```

这里pp2的类型是 const int**，p1的类型是int*，那&p1的类型就是 int**，与pp2类型相同，并且之前我们提到，允许将非const指针赋给const指针，即这里暗含，不可以通过pp2（二级指针）修改p1的值（一级指针）。
**换一种说法是：从“能改内容的指针”降级到“不能改内容的指针”。
增加了const限制，更安全，编译器允许**
pp2指向p1的地址，所以\*pp2就等于p1，p1的类型为int\*，所以\*pp2的类型为int*，并且这里降级到不能修改，所以\*pp2的类型为const int*;这里n的类型为const int,那&n的类型为 const int*，所以是合法的
以上两个赋值操作，保证了即不能通过一级指针去修改，也保证了不能通过二级指针去修改一级指针；*p1的类型为const int，不能有赋值操作