#include <iostream>

using namespace std;

int main() {
    int arr[10] = { 5, 8, 1, 3, 9, 7, 2, 4, 6, 0 };
    int i, j, temp;

    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++)
        cout << arr[i] << " ";

    return 0;
}
