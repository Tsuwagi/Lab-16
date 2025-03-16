#include <iostream>
using namespace std;

int main() {
    
    int array[12]; 
    
    cout << "Enter " << 12 << " elements (only 0, 1 or 2): ";
    
    for (int i = 0; i < 12; i++) {
        cin >> array[i];
    }
    
    cout << "Original array: ";
    for (int i = 0; i < 12; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    int count0 = 0;  
    int count1 = 0;  
    int count2 = 0;  

    for (int i = 0; i < 12; i++) {
        if (array[i] == 0) {
            count0++;  
        } 
        else if (array[i] == 1) {
            count1++;  
        } 
        else if (array[i] == 2) {
            count2++;  
        }
    }
    
    int index = 0; 

    for (int i = 0; i < count1; i++) {
        array[index] = 1;
        index++;
    }

    for (int i = 0; i < count0; i++) {
        array[index] = 0;
        index++;
    }

    for (int i = 0; i < count2; i++) {
        array[index] = 2;
        index++;
    }

    cout << "Rearranged array: ";
    for (int i = 0; i < 12; i++) {
        cout << array[i] << " ";
    }
    
    return 0;
}
