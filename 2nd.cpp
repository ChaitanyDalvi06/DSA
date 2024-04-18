#include <iostream>

int main() {
    const int MAX_SIZE = 100; // Maximum size of the sequence
    int arr[MAX_SIZE]; // Array to store the sequence
    int n; // Size of the sequence

    // Getting input from the user
    std::cout << "Enter the size of the sequence: ";
    std::cin >> n;

    std::cout << "Enter the sequence:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Finding leaders
    int maxRight = arr[n - 1]; // Rightmost element is always a leader
    std::cout << "Leaders in the sequence: ";
    std::cout << maxRight << " "; // Printing rightmost element

    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] > maxRight) {
            std::cout << arr[i] << " ";
            maxRight = arr[i];
        }
    }

    std::cout << std::endl;

    return 0;
}
