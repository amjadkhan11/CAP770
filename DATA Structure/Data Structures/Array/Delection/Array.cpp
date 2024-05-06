#include <iostream>

// Function to delete an element from the beginning of the array
void deleteFromBeginning(int arr[], int& size) {
    // Shift all elements to the left
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

// Function to delete an element from the end of the array
void deleteFromEnd(int arr[], int& size) {
    size--;
}

// Function to delete an element from any specified location in the array
void deleteFromLocation(int arr[], int& size, int location) {
    // Shift elements to the left from the specified location
    for (int i = location; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
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

    std::cout << "Array before deletion: ";
    displayArray(arr, size);

    // Deleting an element from the beginning
    deleteFromBeginning(arr, size);
    std::cout << "Array after deleting from the beginning: ";
    displayArray(arr, size);

    // Deleting an element from the end
    deleteFromEnd(arr, size);
    std::cout << "Array after deleting from the end: ";
    displayArray(arr, size);

    // Deleting an element from a specified location
    deleteFromLocation(arr, size, 2);
    std::cout << "Array after deleting from location 2: ";
    displayArray(arr, size);

    return 0;
}
