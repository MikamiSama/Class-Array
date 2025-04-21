#include <iostream>
#include "Array.h"

using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    Array arr(size);

    cout << "\nFilling array...\n";
    arr.fill();

    cout << "\nArray contents:\n";
    arr.print();

    cout << "\nMin value: " << arr.findMin() << endl;
    cout << "Max value: " << arr.findMax() << endl;

    cout << "\nSorting array...\n";
    arr.sort();
    arr.print();

    int newSize;
    cout << "\nEnter new size for array: ";
    cin >> newSize;

    arr.resize(newSize);
    cout << "\nArray after resizing:\n";
    arr.print();

    return 0;
}
