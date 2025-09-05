#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c, n, i = 3;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << a << '\t' << b << '\t';

    while (i <= n) {
        c = a + b;
        cout << c << '\t';
        a = b;
        b = c;
        i++;
    }

    return 0;
}
