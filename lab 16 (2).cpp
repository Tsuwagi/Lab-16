#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int> A) {
    for (int i = 1; i < 5; i++)
    if (A[i-1] > A[i]) {
        return false;
    }
    return true;
}


int main() {
    
    vector<int> A = {1, 2, 3, 4, 5}; 

    if (isSorted(A)) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;}