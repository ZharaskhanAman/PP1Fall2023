#include <iostream>

using namespace std;

void squareByValue(int num) {
    num = num * num;
}

void suareByReferencePtr(int *ptr) {
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
    int val = 5;
    squareByValue(val);
    cout << val << endl;

    suareByReferencePtr(&val);
    cout << val << endl;

    val = 5;
    squareByReference(val);

    cout << val << endl;

    int arr[] = {2, 3, 5, 7, 11};
    printArray(arr, 5);
    fillArray(arr, 5, -5);
    printArray(arr, 5);

    printArrayPtr(arr, 5);
    fillArrayPtr(arr, 5, 42);
    printArrayPtr(arr, 5);
    return 0;
}