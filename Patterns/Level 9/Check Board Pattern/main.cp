#include <iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            if((i + j) % 2 == 0) {
                cout << "* ";
            } else {
                cout << "  ";
            }
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

*   *   *
  *   *   *
*   *   *
  *   *   *
*   *   *

Time Complexity : O(n²)
Space Complexity: O(1)
*/