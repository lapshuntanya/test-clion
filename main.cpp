#include "ArrayTemplate.h"

int main() {
    int size = 0;
    int* A = nullptr;

     cout << "Input size: ";
     cin >> size; //size = 3

     A = new int[size] {0};  //0... 0... 0...
    cout << "Create an array: " << A << endl;
    printArray(A, size);
    cout << endl;

    randArray(A, size, -10, 10);
    printArray(A, size);
    cout << "----------------------------\n\n";

    addItemBack(A, size, 777);
    cout << "New address: " << A << endl;
    printArray(A, size);
    cout << "----------------------------\n\n";

    addItemFront(A, size, -55);
    cout << "New address: " << A << endl;
    printArray(A, size);


    delItemPos2(A, size, 1);
    cout << "New address: " << A << endl;
    printArray(A, size);

    delete[] A;
 }