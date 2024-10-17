#include <iostream>
using namespace std;

int main() {
    int numElements, choice;
    
    // Prompt the user for the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> numElements;

    // Declare an array to store the elements
    int arr[numElements];

    // Input the array elements
    cout << "Enter " << numElements << " elements: ";
    for (int i = 0; i < numElements; i++) {
        cin >> arr[i];
    }

    // Prompt the user for sorting order
    cout << "Choose sorting order (1 for Ascending, 2 for Descending): ";
    cin >> choice;

    // Bubble sort algorithm
    for (int i = 0; i < numElements - 1; i++) {
        for (int j = 0; j < numElements - i - 1; j++) {
            // Ascending order
            if (choice == 1 && arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
            // Descending order
            if (choice == 2 && arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Display the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < numElements; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
