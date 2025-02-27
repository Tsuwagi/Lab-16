#include <iostream>
using namespace std;

int main() {
    const int size = 12;
    int array[size]; 
    
    cout << "Enter " << size << " elements (only 0, 1 or 2): ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    // считалочка 0,1,2 в массиве
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] == 0) count0++;
            else if (array[i] == 1) count1++;
                else if (array[i] == 2) count2++;
}
    // заполнение массива 1,0,2 в нужном порядке
    int index = 0;


    for (int i = 0; i < count1; i++) {
        array[index++] = 1;
}

    for (int i = 0; i < count0; i++) {
        array[index++] = 0;
}

    for (int i = 0; i < count2; i++) {
        array[index++] = 2;
}

    cout << "Rearranged array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    
    return 0;
}
