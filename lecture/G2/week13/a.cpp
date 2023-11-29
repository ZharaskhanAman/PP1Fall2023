#include <iostream>

using namespace std;

void squareByValue(int num) {
    num = num * num;
}

void squareByReferencePtr(int *ptr) {
    int val = *ptr;
    *ptr = val * val;
}

void squareByReference(int &ref) {
    ref = ref * ref;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void fillArray(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        arr[i] = value;
    }
}

void printArrayPtr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << (arr + i) << "=" << *(arr + i) << ' ';
    }
    cout << endl;
}


void fillArrayPtr(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = value;
    }
}
int main() {
    int a = 42;
    int b = a;

    cout << a << ' ' << &a << endl;
    cout << b << ' ' << &b << endl;
    int *ptr_a = &a;

    cout << ptr_a << ' ' << &ptr_a << ' ' << *ptr_a << endl;

    cout << a << endl;

    *ptr_a = 100;

    cout << a << endl;
  
    int num = 17;
    squareByValue(num);
    cout << "squareByValue:" << num << endl;


    squareByReferencePtr(&num);
    cout << "squareByReferencePtr:" << num << endl;

    num = 17;
    squareByReference(num);
    cout << "squareByReference:" << num << endl;


    int arr[] = {1, 2, 3, 4, 5};

    printArray(arr, 5);
    fillArray(arr, 5, -5);
    printArray(arr, 5);


    
    printArrayPtr(arr, 5);
    fillArrayPtr(arr, 5, 42);
    printArrayPtr(arr, 5);
    return 0;
}