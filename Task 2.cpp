#include <iostream>

using namespace std;

int main() {
    int arr[10] = { 5, 8, 1, 3, 9, 7, 2, 4, 6, 0 };  
    int target, found = 0;

    cout << "Enter number to search: ";
    cin >> target;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == target) {
            cout << "Element found at index " << i << endl;
            found = 1;
            break;  
        }
    }

    if (!found)
        cout << "Element not found in the array." << endl;

    return 0;
}
