#include <iostream>

using namespace std;

void Basics() {
    int var = 5;
    int* ptr = &var;

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value of ptr (address of var): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
}

void Arthimetic() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr; //Pointer to the fist element of the array
    cout << "Pointer Arthimetic:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "*(ptr + " << i << ") = " << *(ptr + i ) << endl;
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

void Array() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size); 
}

void PointerToPointer() {
    int var = 10;
    int* ptr  = &var;
    int** ptr2 = &ptr;

    cout << "Value of var: " << var << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    cout << "Value pointed to by ptr2: " << **ptr2 << endl;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void PointerFunctions() {
    int x = 10, y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
}

void DynamicMemoryAllocation() {
    int size; 
    cout << "Enter the size of the array: ";
    cin >> size;

    int * arr = new int[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
}

class Rectangle {
    public:
        int width, height;

        Rectangle(int w, int h) : width(w), height(h) {}

        int area() {
            return width * height;
        }
};

void PointerClass() {
    Rectangle* rect = new Rectangle(5, 10);

    cout << "Area of rectangle: " << rect->area() << endl;

    delete rect; 
}

int main() {
    Basics();
    Arthimetic();
    Array();
    PointerToPointer();
    PointerFunctions();
    DynamicMemoryAllocation();
    PointerClass();
    return 0;
}