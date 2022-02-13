/*
Баштовий.І.В
1. Вивести таблицю множення від 1 до числа n
*/
#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int n;
    cout << "enter_n:\n";
    cin >> n;
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            cout << i * j << "\t";
        }
    }
}

