#include <iostream>
using namespace std;

void pattern(int n) {

    int size = 2 * n - 1;

    for(int i = 0; i < size; i++) {

        int row = min(i, size - i - 1);

        for(int j = 0; j < n - row - 1; j++)
            cout << " ";

        cout << "*";

        for(int j = 0; j < 2 * row - 1; j++)
            cout << " ";

        if(row > 0)
            cout << "*";

        for(int j = 0; j < 2 * (n - row) - 3; j++)
            cout << " ";

        cout << "*";

        for(int j = 0; j < 2 * row - 1; j++)
            cout << " ";

        if(row > 0)
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
3

Sample Output

  *       *
 * *     * *
*   *   *   *
 * *     * *
  *       *

Time Complexity : O(n²)
Space Complexity: O(1)
*/