#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int n;
    cout<<"Enter value of n:";
    cin >> n;

    int arr[n];

    cout<<"Enter the elements in array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    unordered_map<int, int> frequency;
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }

    for (int i = 0; i < n; ++i) {
        if (frequency[arr[i]] == 1) {
            cout << "First non-repeating element: " << arr[i] << endl;
            break;
        }
    }

}
