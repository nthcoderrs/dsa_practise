#include <iostream>
using namespace std;

void pattern(int n) {

    // Upper part
    for(int i = n / 2; i <= n; i += 2) {

        for(int j = 1; j < n - i; j += 2)
            cout << " ";

        for(int j = 1; j <= i; j++)
            cout << "*";

        for(int j = 1; j <= n - i; j++)
            cout << " ";

        for(int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower part
    for(int i = n; i >= 1; i--) {

        for(int j = i; j < n; j++)
            cout << " ";

        for(int j = 1; j <= (2 * i) - 1; j++)
            cout << "*";

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
6

Sample Output

  **   **
 **** ****
***********
 *********
  *******
   *****
    ***
     *

Time Complexity : O(n²)
Space Complexity: O(1)
*/