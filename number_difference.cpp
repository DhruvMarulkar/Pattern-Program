#include <iostream>
using namespace std;

void number_difference(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << num << " ";
            num += 2;
        }
        cout << endl;
    }
}

int main() {
    int n = 6;
    number_difference(n);
    return 0;
}