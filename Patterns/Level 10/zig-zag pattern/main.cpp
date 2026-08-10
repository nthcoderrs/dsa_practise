#include <iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < n; j++) {

            if((i == 0 && j % 4 == 1) ||
               (i == 1 && j % 2 == 0) ||
               (i == 2 && j % 4 == 3)) {
                cout << "*";
            }
            else {
                cout << " ";
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
9

Sample Output

 *   *   *
* * * * * *
  *   *   *

Time Complexity : O(n)
Space Complexity: O(1)
*/