#include <bits/stdc++.h>
using namespace std;

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

void printVec(const vector<int>& a) {
    for (size_t i = 0; i < a.size(); ++i) {
        if (i) cout << ' ';
        cout << a[i];
    }
    cout << '\n';
}

int main() {
    vector<int> a = {5, 2, 9, 1, 5, 6};
    cout << "Before: "; printVec(a);
    bubbleSort(a);
    cout << "After:  "; printVec(a);
    return 0;
}
