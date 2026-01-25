#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   // input traversal
    }

    cout << "Array elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // output traversal
    }

    return 0;
}
