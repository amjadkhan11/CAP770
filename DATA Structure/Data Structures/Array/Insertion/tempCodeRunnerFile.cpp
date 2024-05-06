#include <iostream>

// Function to insert an element at the beginning of the array
void insertAtBeginning(int arr[], int& size, int element) {
    // Shift all elements to the right
    for (int i = size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    // Insert the new element at the beginning
    arr[0] = element;
    size++;
}

// Function to insert an element at the end of the array
void insertAtEnd(int arr[], int& size, int element) {
    // Insert the new element at the end
    arr[size] = element;
    size++;
}

// Function to insert an element at any specified location in the array
void insertAtLocation(int arr[], int& size, int element, int location) {
    // Shift elements to the right from the specified location
    for (int i = size - 1; i >= location; i--) {
        arr[i + 1] = arr[i];
    }
    // Insert the new element at the specified location
    arr[location] = element;
    size++;
}

// Function to display the array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5; // Current size of the array

    std::cout << "Array before insertion: ";
    displayArray(arr, size);

    // Inserting an element at the beginning
    insertAtBeginning(arr, size, 0);
    std::cout << "Array after inserting at the beginning: ";
    displayArray(arr, size);

    // Inserting an element at the end
    insertAtEnd(arr, size, 6);
    std::cout << "Array after inserting at the end: ";
    displayArray(arr, size);

    // Inserting an element at a specified location
    insertAtLocation(arr, size, 100, 3);
    std::cout << "Array after inserting at location 3: ";
    displayArray(arr, size);

    return 0;
}
