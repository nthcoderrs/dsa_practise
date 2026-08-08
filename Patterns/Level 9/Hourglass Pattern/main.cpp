#include <iostream>
using namespace std;

void pattern(int n) {

    // Upper half
    for(int i = 0; i < n; i++) {

        for(int j = 0; j < i; j++) {
            cout << "  ";
        }

        for(int j = i; j < n; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    // Lower half
    for(int i = n - 2; i >= 0; i--) {

        for(int j = 0; j < i; j++) {
            cout << "  ";
        }

        for(int j = i; j < n; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}

int main() {

    int testCase;
    cin >> testCase;

    while(testCase--) {
        int n;
        cin >> n;
        pattern(n);
        cout << endl << endl;
    }

    return 0;
}

/*
Sample Input
1
5

Sample Output

* * * * *
  * * * *
    * * *
      * *
        *
      * *
    * * *
  * * * *
* * * * *

Time Complexity : O(n²)
Space Complexity: O(1)
*/