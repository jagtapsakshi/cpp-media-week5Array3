#include <iostream>
using namespace std;

int main() {
   
    int n;
    cout<<"Enter value of n: ";
    cin >> n;

    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    cout << "Factorial of " << n << ": " << factorial << endl;


}
