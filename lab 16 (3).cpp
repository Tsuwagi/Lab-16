#include <iostream>
using namespace std;

int main() {
    // Создаю массив из 12 чисел
    const int size = 12;
    int array[size]; 
    
    // Прошу пользователя ввести числа
    cout << "Enter " << size << " elements (only 0, 1 or 2): ";
    
    // Считываю числа в массив
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    
    // Вывожу исходный массив
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    // Подсчитываю, сколько у нас 0, 1 и 2
    int count0 = 0;  // Счетчик для нулей
    int count1 = 0;  // Счетчик для единиц
    int count2 = 0;  // Счетчик для двоек

    // Прохожу по массиву и считаю элементы
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            count0++;  // Нашел 0
        } 
        else if (array[i] == 1) {
            count1++;  // Нашел 1
        } 
        else if (array[i] == 2) {
            count2++;  // Нашел 2
        }
    }
    
    // Теперь заполняю массив в порядке: сначала 1, потом 0, потом 2
    int index = 0;  // С какой позиции начинаем заполнять

    // Сначала ставлю все единицы
    for (int i = 0; i < count1; i++) {
        array[index] = 1;
        index = index + 1;
    }

    // Потом ставлю все нули
    for (int i = 0; i < count0; i++) {
        array[index] = 0;
        index = index + 1;
    }

    // В конце ставлю все двойки
    for (int i = 0; i < count2; i++) {
        array[index] = 2;
        index = index + 1;
    }

    // Вывожу получившийся массив
    cout << "Rearranged array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    
    return 0;
}
