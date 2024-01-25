#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter value of n: ";
    cin >> n; 
    int x;
    cout<<"Enter value of x: ";
    cin >> x;

    int arr[n];

    cout<<"Enter the elements in array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (arr[i] + arr[j] + arr[k] == x) {
                    count++;
                }
            }
        }
    }

    cout << "Number of triplets with sum " << x << ": " << count << endl;


}
