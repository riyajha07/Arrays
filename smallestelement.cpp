#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSmallest(const vector<int>& arr, int n) {
    int smallest = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
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

    int smallest = findSmallest(num, n);

    cout << "smallest element: " << smallest << endl;

    return 0;
}
