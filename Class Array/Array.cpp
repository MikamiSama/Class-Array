#include "Array.h"
#include <iostream>
#include <cstdlib> // malloc, realloc, free

using namespace std;

Array::Array() {
    size = 0;
    data = nullptr;
}

Array::Array(int s) {
    size = s;
    data = (int*)malloc(size * sizeof(int));
}

Array::Array(const Array& other) {
    size = other.size;
    data = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

Array::~Array() {
    free(data);
}

void Array::fill() {
    for (int i = 0; i < size; i++) {
        cout << "Element [" << i << "]: ";
        cin >> data[i];
    }
}

void Array::print() const {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void Array::sort() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

int Array::findMin() const {
    if (size == 0) return 0;
    int min = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] < min) min = data[i];
    }
    return min;
}

int Array::findMax() const {
    if (size == 0) return 0;
    int max = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > max) max = data[i];
    }
    return max;
}

void Array::resize(int newSize) {
    int* newData = (int*)realloc(data, newSize * sizeof(int));
    if (newData != nullptr) {
        if (newSize > size) {
            for (int i = size; i < newSize; i++) {
                newData[i] = 0;
            }
        }
        data = newData;
        size = newSize;
    }
    else {
        cout << "Memory allocation failed during resize." << endl;
    }
}
