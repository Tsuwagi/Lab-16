#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; // Якщо знайдено порушення порядку, повертаємо false
        }
    }
    return true; // Якщо всі елементи у правильному порядку, повертаємо true
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5}; // Впорядкований масив
    int arr2[] = {1, 3, 2, 4, 5}; // Не впорядкований масив

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << (isSorted(arr1, size1) ? "Sorted" : "Not sorted") << endl;
    cout << (isSorted(arr2, size2) ? "Sorted" : "Not sorted") << endl;

    return 0;
}