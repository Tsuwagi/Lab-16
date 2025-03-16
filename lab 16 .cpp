#include <iostream>
using namespace std;
#include <ctime>

int f(int n) {
    double r = 1;
    for (int i = 2; i <= n; i++) r *= i;
    return r;
}


int main() {

    srand(time(0));

    int A[8];

        for ( int i = 0; i < 8; i++){
        A[i] = rand() % 10 + 1;
}
        for (int i = 0; i < 8; i++){
        cout << A[i] << " ";}
        cout << endl;

        cout << "Factorial " << A[7] << " = " << f(A[7]) << endl;
        return 0;
}