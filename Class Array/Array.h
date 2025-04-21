#pragma once
#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int* data;
    int size;

public:
    Array();                        // Конструктор за замовчуванням
    Array(int s);                   // Конструктор з параметром
    Array(const Array& other);      // Конструктор копіювання
    ~Array();                       // Деструктор

    void fill();                    // Заповнення вручну
    void print() const;             // Виведення
    void sort();                    // Бульбашкове сортування
    int findMin() const;           // Мінімум
    int findMax() const;           // Максимум
    void resize(int newSize);      // Зміна розміру
};

#endif
