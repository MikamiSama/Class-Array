#pragma once
#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int* data;
    int size;

public:
    Array();                        // ����������� �� �������������
    Array(int s);                   // ����������� � ����������
    Array(const Array& other);      // ����������� ���������
    ~Array();                       // ����������

    void fill();                    // ���������� ������
    void print() const;             // ���������
    void sort();                    // ����������� ����������
    int findMin() const;           // ̳����
    int findMax() const;           // ��������
    void resize(int newSize);      // ���� ������
};

#endif
