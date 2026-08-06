#include<iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < 2 * n - 1; i++) {

        int row;

        if(i < n)
            row = i;
        else
            row = 2 * n - i - 2;

        // Spaces
        for(int j = 0; j < n - row - 1; j++)
            cout << " ";

        // Stars
        for(int j = 0; j < 2 * row + 1; j++) {

            if(j == 0 || j == 2 * row)
                cout << "*";
            else
                cout << " ";
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
2
3
5

Sample Output

  *
 * *
*   *
 * *
  *

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

Time Complexity : O(n²)
Space Complexity: O(1)
*/