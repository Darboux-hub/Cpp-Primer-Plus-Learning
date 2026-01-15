# C++ Primer Plus 笔记

~~~Cpp
int main()
{
    using namespace std;
    
}
~~~

测试：是否能够正常上传

## 冒泡排序 (Bubble Sort)

**说明**: 冒泡排序是最基础的比较排序之一，反复比较并交换相邻逆序元素，使得最大/最小元素逐步移动到序列一端。平均和最坏时间复杂度为 $O(n^2)$，对几乎有序的数组可使用交换检查提前退出以优化性能。

 **实现文件**: [bubble_sort.cpp](bubble_sort.cpp)

 **示例运行**:

~~~bash
g++ -std=c++17 -O2 bubble_sort.cpp -o bubble_sort
./bubble_sort
~~~

 **核心代码**:

~~~cpp
template<typename T>
void bubbleSort(vector<T>& a) {
    size_t n = a.size();
    if (n < 2) return;
    for (size_t i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (size_t j = 0; j < n - 1 - i; ++j) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
~~~

测试：是否能够正常上传
