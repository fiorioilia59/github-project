#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n % 2 == 0) {
        for (int i = 1; i <= n; i += 2)
            cout << i * i << " ";
    } else {
        for (int i = 1; i < n / 2 + 1; i += 2)
            cout << i * i << " ";
    }

    return 0;
}
