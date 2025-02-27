#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib> 
#include <algorithm> 

int f(int n) {
    if (n <= 1) return 1;
    return n * f(n - 1);
}

int main() {

    srand(time(0));

    int A[8];

        for ( int i = 0; i < 8; i++){
        A[i] = rand() % 10 + 1;
}
    cout << "Enter 8 full numbers:\n";

    for (int i = 0; i < 8; i++){
        cout << A[i] << " ";}
        cout << endl;

        int last = A[7];
        int result = f(last);

        cout << "Factorial " << last << " = " << result << endl;
        return 0;
}