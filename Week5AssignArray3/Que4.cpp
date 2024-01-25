#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter value of n: "; 
    cin >> n; 

    int m;
    cout<<"Enter value of m: ";
    cin >> m;

    int arr1[n], arr2[m];

    cout<<"Enter elements in 1st array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    cout<<"Enter elements in 2nd array: ";
    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }

    bool isSubset = true;

    for (int i = 0; i < m; ++i) {
        bool found = false;

        for (int j = 0; j < n; ++j) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            isSubset = false;
            break;
        }
    }

    cout << (isSubset ? "Array 2 is a subset of Array 1." : "Array 2 is not a subset of Array 1.") << endl;

}
