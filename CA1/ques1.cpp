// Develop a program to apply recursive implementation of Linear Search to search an element “x” in the following array and display total no of comparisons, total iterations, and result of search.

// 10:16 AM


// 9 8 7 6 4 3 2 1
// solution 
#include <iostream>
using namespace std;

int recursiveLinearSearch(int arr[], int x, int index, int size) {
    if (index >= size) 
        return -1; 
    if (arr[index] == x) 
        return index;
    return recursiveLinearSearch(arr, x, index + 1, size); 
}

int main() {
    int arr[] = {9, 8, 7, 6, 4, 3, 2, 1};
    int x = 15;
    int size = sizeof(arr) / sizeof(arr[0]);

    // Perform search
    int result = recursiveLinearSearch(arr, x, 0, size);

    // Display result
    if (result != -1)
        cout << "Element " << x << " found at index " << result << endl;
    else
        cout << "Element " << x << " not found in the array" << endl;

    return 0;
}
