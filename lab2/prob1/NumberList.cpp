#include <iostream>
#include "NumberList.h"

// count will be 0
void NumberList::Init() {
    count = 0;
    max_size = 2;
    numbers = new int[max_size];
}

// adds X to the numbers list and increase the data member count.
bool NumberList::Add(int x) {
    if (count >= max_size) {
        max_size *= 2;
        int *tmp = new int[max_size];
        for (int i = 0; i < count; i++)
            tmp[i] = numbers[i];
        delete[] numbers;
        numbers = tmp;
    }
    numbers[count++] = x;
    return true;
}   

// will sort the numbers vector
void NumberList::Sort() {
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count-i-1; j++) {
            if (numbers[j] > numbers[j+1]) 
                std::swap(numbers[j], numbers[j+1]);
        }
    }
}      

// will print the current vector
void NumberList::Print() {
    for (int i = 0; i < count; i++)
        std::cout << numbers[i] << ' ';
    std::cout << '\n';
}      
