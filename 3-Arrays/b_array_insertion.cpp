#include <bits/stdc++.h>
using namespace std;

void insertElement(int arr[], int& n, int capacity, int element, int pos) {
    // Check if the array has enough capacity for insertion
    if (n >= capacity) {
        cout << "Array is full, cannot insert element." << endl;
        return;
    }
    
    // Adjust position to 0-based index
    pos--; 

    // Shift elements to the right from the position
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the given position
    arr[pos] = element;

    // Increment the size of the array
    n++;
}

int main() {
    int capacity = 10;         // Maximum capacity of the array
    int arr[capacity] = {1, 2, 3, 4, 5}; // Initial array with 5 elements
    int n = 5;                 // Current number of elements in the array

    int element = 99;          // Element to be inserted
    int pos = 3;               // Position where the element will be inserted (1-based index)

    cout << "Array before insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the function to insert the element
    insertElement(arr, n, capacity, element, pos);

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
