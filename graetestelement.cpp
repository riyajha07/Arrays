#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findLargest(const vector<int>& arr, int n) {
    int largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "How many elements u want in array: ";
    cin >> n;

    vector<int> num(n);   // allocate size

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    int largest = findLargest(num, n);

    cout << "Largest element: " << largest << endl;

    return 0;
}
