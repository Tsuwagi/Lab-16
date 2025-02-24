#include <iostream>
using namespace std;

int f(int n) {
    if (n <= 1) return 1;
    return n * f(n - 1);
}
int main() {
    int A[8];
    int i;
    cout << "Enter 8 full numbers:\n";
    for (i = 0; i < 8; i++)

        cin >> A[i];

        int last = A[7];

        int result = f(last);

        cout << "Factorial " << last << " = " << result << endl;
        return 0;
}