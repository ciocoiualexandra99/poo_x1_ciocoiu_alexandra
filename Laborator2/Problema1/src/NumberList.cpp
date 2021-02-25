#include "NumberList.h"
#include<iostream>
using namespace std;

void NumberList::Init() {
    count = 0;
    for(int i = 0; i < 9; i++)
        numbers[i] = 0;
}

bool NumberList::Add(float x) {
    if(count == 10)
        return false;

    numbers[count++] = x;
    return true;
}

void NumberList::Sort() {
    for(int i = 0; i < count; i++)
        for(int j = i + 1; j < count; j++)
            if(numbers[i] > numbers[j])
                swap(numbers[i], numbers[j]);
}

void NumberList::Print() {
    for(int i = 0; i < count; i++)
        cout << numbers[i] << ' ';

    cout << '\n';
}
